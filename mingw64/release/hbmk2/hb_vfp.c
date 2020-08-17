/*
 * Harbour 3.2.0dev (r1901151150)
 * MinGW GNU C 8.1 (64-bit)
 * Generated C source from "hb_vfp.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"


HB_FUNC( VFP_GETCOMPATIBILITYPACKVERSION );
HB_FUNC_EXTERN( ALTD );
HB_FUNC( VFP_SCANSTACK );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC( VFP_STRTOFILE );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( HB_FILEEXISTS );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HB_VFP )
{ "VFP_GETCOMPATIBILITYPACKVERSION", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VFP_GETCOMPATIBILITYPACKVERSION )}, NULL },
{ "ALTD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALTD )}, NULL },
{ "VFP_SCANSTACK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VFP_SCANSTACK )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "VFP_STRTOFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VFP_STRTOFILE )}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "HB_FILEEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FILEEXISTS )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HB_VFP, "hb_vfp.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HB_VFP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HB_VFP )
   #include "hbiniseg.h"
#endif

HB_FUNC( VFP_GETCOMPATIBILITYPACKVERSION )
{
   do {
	hb_xvmSetLine( 18 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 19 );
	hb_xvmPushDouble( * ( double * ) "\xCD\xCC\xCC\xCC\xCC\xCC\xF4\?", 10, 1 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( VFP_SCANSTACK )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 1, 1 );
	hb_xvmSFrame( symbols + 17 );
	hb_xvmSetLine( 23 );
	hb_xvmPushNil();
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 27 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushLocalByRef( 1 );
	hb_xvmPushStringConst( "scan", 4 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 29 );
	goto lab00006;
lab00001: ;
	hb_xvmSetLine( 31 );
	hb_xvmPushStaticByRef( 1 );
	if( hb_xvmIncEqPop() ) break;
	hb_xvmSetLine( 32 );
	hb_xvmPushFuncSymbol( symbols + 4 );
	hb_xvmPushStatic( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStatic( 1 );
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 33 );
	hb_xvmPushFuncSymbol( symbols + 5 );
	hb_xvmPushStatic( 2 );
	hb_xvmPushStatic( 1 );
	if( hb_xvmDo( 2 ) ) break;
lab00002: ;
	hb_xvmSetLine( 35 );
	hb_xvmPushFuncSymbol( symbols + 6 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmArrayGen( 2 );
	hb_xvmPushStatic( 2 );
	hb_xvmPushStatic( 1 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 36 );
	hb_xvmPushNil();
	hb_xvmPopLocal( 2 );
	goto lab00007;
lab00003: ;
	hb_xvmSetLine( 39 );
	hb_xvmPushStaticByRef( 1 );
	if( hb_xvmDecEqPop() ) break;
	goto lab00007;
lab00004: ;
	hb_xvmSetLine( 43 );
	hb_xvmPushInteger( 0 );
	hb_xvmPopStatic( 1 );
	hb_xvmSetLine( 44 );
	hb_xvmPushFuncSymbol( symbols + 5 );
	hb_xvmPushStatic( 2 );
	hb_xvmPushInteger( 0 );
	if( hb_xvmDo( 2 ) ) break;
	goto lab00007;
lab00005: ;
	hb_xvmSetLine( 47 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushStatic( 2 );
	hb_xvmPushStatic( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 48 );
	hb_xvmPushStatic( 2 );
	hb_xvmPushStatic( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 49 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushStatic( 2 );
	hb_xvmPushStatic( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPop( 2L ) ) break;
	goto lab00007;
lab00006: ;
	hb_xvmPushLocal( 1 );
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		const char * pszText;
		HB_SIZE nLen;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		pszText = ( type & HB_IT_STRING ) ? hb_itemGetCPtr( pSwitch ) : NULL;
		nLen = pszText ? hb_itemGetCLen( pSwitch ) : 0;
		if( pszText && nLen == 4 && ! memcmp( pszText, "push", 4 ) )
		{
			hb_stackPop();
			goto lab00001;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "pop", 3 ) )
		{
			hb_stackPop();
			goto lab00003;
		}
		if( pszText && nLen == 5 && ! memcmp( pszText, "clear", 5 ) )
		{
			hb_stackPop();
			goto lab00004;
		}
		{
			hb_stackPop();
			goto lab00005;
		}
	}
lab00007: ;
	hb_xvmSetLine( 53 );
	hb_xvmPushLocal( 2 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( VFP_STRTOFILE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 3, 3 );
	hb_xvmSetLine( 58 );
	hb_xvmLocalSetInt( 5, 0L );
	hb_xvmSetLine( 61 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 63 );
	hb_xvmPushFuncSymbol( symbols + 10 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
	hb_xvmSetLine( 64 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 65 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 66 );
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushInteger( 0 );
	hb_xvmPushInteger( 2 );
	if( hb_xvmDo( 3 ) ) break;
	goto lab00005;
lab00001: ;
	hb_xvmSetLine( 68 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00002;
	hb_xvmSetLine( 69 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
	goto lab00003;
lab00002: ;
	hb_xvmSetLine( 71 );
	hb_xvmLocalSetInt( 6, -1L );
lab00003: ;
	goto lab00005;
lab00004: ;
	hb_xvmSetLine( 75 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
lab00005: ;
	hb_xvmSetLine( 78 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmGreaterEqualThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00006;
	hb_xvmSetLine( 79 );
	hb_xvmPushFuncSymbol( symbols + 15 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 80 );
	hb_xvmPushFuncSymbol( symbols + 16 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmDo( 1 ) ) break;
lab00006: ;
	hb_xvmSetLine( 83 );
	hb_xvmPushLocal( 5 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_INITSTATICS()
{
   do {
	hb_xvmStatics( symbols + 17, 2 );
	hb_xvmSFrame( symbols + 17 );
	hb_xvmPushInteger( 0 );
	hb_xvmPopStatic( 1 );
	hb_xvmArrayGen( 0 );
	hb_xvmPopStatic( 2 );
	/* *** END PROC *** */
   } while( 0 );
}

