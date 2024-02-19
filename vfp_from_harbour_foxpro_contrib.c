// The following file comes from the harbour repo, contrib/hbfoxpro/relfunc.c  file.
// Modified the functions name to be prefixed with "VFP_"

/*
 * FoxPro compatible functions BETWEEN(), INLIST()
 *
 * Copyright (c) 2024 Eric Lendvai Modifed __FOX_SEEK to Create VFP_SEEK
 * Copyright 2016 Przemyslaw Czerpak <druzus / at / priv.onet.pl>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file LICENSE.txt.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA (or visit https://www.gnu.org/licenses/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however invalidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */

#include <stdlib.h>
// #include <windows.h>

#include "hbapi.h"
#include "hbapiitm.h"


//Following for VFP_SEEK
#include "hbapirdd.h"
#include "hbapierr.h"
//#include "hbset.h



// static char cDebugStringBuffer[20000];

HB_FUNC( VFP_BETWEEN )
{
   HB_BOOL fResult = HB_FALSE;
   if( hb_pcount() == 3 )
   {
      PHB_ITEM pItem = hb_param( 1, HB_IT_ANY );
      int iResult1, iResult2;

      if( hb_itemCompare( pItem, hb_param( 2, HB_IT_ANY ), HB_FALSE, &iResult1 ) &&
          hb_itemCompare( pItem, hb_param( 3, HB_IT_ANY ), HB_FALSE, &iResult2 ) )
         fResult = iResult1 >= 0 && iResult2 <= 0;
   }
   hb_retl( fResult );
}

HB_FUNC( VFP_INLIST )
{
   HB_BOOL fResult = HB_FALSE;
   int iPCount = hb_pcount();

   if( iPCount > 1 )
   {
      PHB_ITEM pValue = hb_param( 1, HB_IT_ANY );
      int iParam;

      for( iParam = 2; iParam <= iPCount; ++iParam )
      {
         if( hb_itemEqual( pValue, hb_param( iParam, HB_IT_ANY ) ) )
         {
            fResult = HB_TRUE;
            break;
         }
      }
   }
   hb_retl( fResult );
}

static AREAP s_foxAreaPointer( int iParam )
{
   if( HB_ISNIL( iParam ) )
      return ( AREAP ) hb_rddGetCurrentWorkAreaPointer();
   else
   {
      const char * szAlias = hb_parc( iParam );
      int iArea;

      if( szAlias )
         hb_rddGetAliasNumber( szAlias, &iArea );
      else
         iArea = hb_parni( iParam );

      return ( AREAP ) hb_rddGetWorkAreaPointer( iArea );
   }
}

// The VFP_SEEK is a modified version of __FOX_SEEK VFP does not handle SoftSeek and FindLast, and the order of parameter is different.
// From VFP Help File about the  SEEK(eExpression [, nWorkArea | cTableAlias   [, nIndexNumber | cIDXIndexFileName | cTagName]])  function.
//  Currently all 3 parameters are required. But for the last parameter, will only support cTagName

HB_FUNC( VFP_SEEK )
{
   AREAP pArea = s_foxAreaPointer( 2 );

   if( pArea )
   {
      if( ! HB_ISNIL( 1 ) )
      {
         PHB_ITEM pKey = hb_param( 1, HB_IT_ANY );
         HB_BOOL fSoftSeek = 0; //HB_ISLOG( 2 ) ? ( HB_BOOL ) hb_parl( 2 ) : hb_setGetSoftSeek();
         HB_BOOL fFindLast = 0, fFound = HB_FALSE; //hb_parl( 3 );
         PHB_ITEM pTag = hb_param( 3, HB_IT_NUMERIC | HB_IT_STRING );
         HB_ERRCODE errCode = HB_SUCCESS;

         if( pTag )
         {
            DBORDERINFO pInfo;
            memset( &pInfo, 0, sizeof( pInfo ) );
            pInfo.itmOrder = pTag;
            pInfo.itmResult = hb_itemNew( NULL );
            errCode = SELF_ORDLSTFOCUS( pArea, &pInfo );
            hb_itemRelease( pInfo.itmResult );
         }

         if( errCode == HB_SUCCESS )
         {
            if( SELF_SEEK( pArea, fSoftSeek, pKey, fFindLast ) == HB_SUCCESS )
            {
               if( SELF_FOUND( pArea, &fFound ) != HB_SUCCESS )
                  fFound = HB_FALSE;
            }
         }

         hb_retl( fFound );
      }
      else
         hb_errRT_DBCMD( EG_ARG, EDBCMD_SEEK_BADPARAMETER, NULL, HB_ERR_FUNCNAME );
   }
   else
      hb_errRT_DBCMD( EG_NOTABLE, EDBCMD_NOTABLE, NULL, HB_ERR_FUNCNAME );
}
