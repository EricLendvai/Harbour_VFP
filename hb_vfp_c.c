//Copyright (c) 2024 Eric Lendvai, MIT License

// #include <stdlib.h>

#include "hbapi.h"
#include "hbdate.h"    // Needed for Mac support
#include "hbapiitm.h"

#ifdef _WIN32
#include <windows.h>
#endif

HB_FUNC( HB_VFP_OUTPUTDEBUGSTRING )   // For Windows Only
{
#ifdef _WIN32
    OutputDebugString( hb_parc(1) );
#endif
}
//=================================================================================================================

/* return local timestamp */
static void vfp_timeStampGet( long * plJulian, long * plMilliSec )
//similar to hb_timeStampGet, except ignoring the milliseconds
{
   int iYear, iMonth, iDay, iHour, iMinute, iSeconds, iMillisec;

   hb_timeStampGetLocal( &iYear, &iMonth, &iDay,
                         &iHour, &iMinute, &iSeconds, &iMillisec );
   *plJulian   = hb_dateEncode( iYear, iMonth, iDay );
   *plMilliSec = hb_timeEncode( iHour, iMinute, iSeconds, 0 );
}

HB_FUNC( VFP_DATETIME )
//similar to HB_DATETIME but with no milliseconds
{
    if( hb_pcount() == 0 )
    {
        long lDate, lTime;
        vfp_timeStampGet( &lDate, &lTime );
        hb_rettdt( lDate, lTime );
    }
    else
        hb_rettdt( hb_dateEncode( hb_parni( 1 ), hb_parni( 2 ), hb_parni( 3 ) ),
                        hb_timeEncode( hb_parni( 4 ), hb_parni( 5 ), hb_parni( 6 ), 0 ) );
}

//=================================================================================================================
HB_FUNC( VFP_NVL )
{
    PHB_ITEM pParam1 = hb_param( 1, HB_IT_ANY );
    PHB_ITEM pParam2 = hb_param( 2, HB_IT_ANY );
    
    if(!HB_IS_NIL(pParam1)) {
        hb_itemReturn( pParam1 );
    } else {
        hb_itemReturn( pParam2 );
    }
}
//=================================================================================================================
