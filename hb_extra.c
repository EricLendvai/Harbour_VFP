//Copyright 2021 Eric Lendvai, MIT License unless specified otherwise

#include "hbapi.h"
#include "hbapiitm.h"

//Modified version of contrib\hbfoxpro\relfunc.c Copyright 2016 Przemyslaw Czerpak <druzus / at / priv.onet.pl>
//Changes Copyright 2021 Eric Lendvai, MIT license.
HB_FUNC( EL_INLIST )
{
   int iResult = 0;
   int iPCount = hb_pcount();

   if( iPCount > 1 )
   {
      PHB_ITEM pValue = hb_param( 1, HB_IT_ANY );
      int iParam;

      for( iParam = 2; iParam <= iPCount; ++iParam )
      {
         if( hb_itemEqual( pValue, hb_param( iParam, HB_IT_ANY ) ) )
         {
            iResult = iParam -1;
            break;
         }
      }
   }
   hb_retni( iResult );
}

//=================================================================================================================
