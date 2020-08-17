/*
 * Harbour 3.2.0dev (r1901151150)
 * MinGW GNU C 8.1 (64-bit)
 * Generated C source from "vscode_debugger.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"


HB_FUNC_STATIC( CHECKSOCKET );
HB_FUNC_EXTERN( __DEBUGITEM );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_INETINIT );
HB_FUNC_EXTERN( HB_INETCREATE );
HB_FUNC_EXTERN( HB_INETCONNECT );
HB_FUNC_EXTERN( HB_INETERRORCODE );
HB_FUNC_EXTERN( HB_INETSEND );
HB_FUNC_EXTERN( HB_ARGV );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( __PIDNUM );
HB_FUNC_EXTERN( HB_INETDATAREADY );
HB_FUNC_EXTERN( HB_IDLESLEEP );
HB_FUNC_EXTERN( HB_INETRECVLINE );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_STATIC( SENDCOUMPOUNDVAR );
HB_FUNC_STATIC( SENDSTACK );
HB_FUNC_STATIC( SETBREAKPOINT );
HB_FUNC_STATIC( SENDLOCALS );
HB_FUNC_STATIC( SENDSTATICS );
HB_FUNC_STATIC( SENDFROMINFO );
HB_FUNC_STATIC( SENDEXPRESSION );
HB_FUNC_STATIC( FORMAT );
HB_FUNC_STATIC( SETERRORTYPE );
HB_FUNC_STATIC( SENDCOMPLETITION );
HB_FUNC_STATIC( INBREAKPOINT );
HB_FUNC_EXTERN( __DBGINVOKEDEBUG );
HB_FUNC_EXTERN( __DBGPROCLEVEL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( PROCFILE );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( HB_TSTOSTR );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( __OBJGETMSGLIST );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_STATIC( GETSTACKID );
HB_FUNC_STATIC( GETSTACKANDPARAMS );
HB_FUNC_EXTERN( HB_ATOKENS );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( __DBGVMVARLGET );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( __DBGVMVARSGET );
HB_FUNC_STATIC( MYGETSTA );
HB_FUNC_EXTERN( __MVDBGINFO );
HB_FUNC_STATIC( GETVALUE );
HB_FUNC_STATIC( EVALEXPRESSION );
HB_FUNC_EXTERN( HB_HVALUEAT );
HB_FUNC_STATIC( __DBGOBJGETVALUE );
HB_FUNC_EXTERN( BREAK );
HB_FUNC_EXTERN( __DBGSENDMSG );
HB_FUNC_EXTERN( __BREAKBLOCK );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC_EXTERN( HB_HKEYAT );
HB_FUNC_STATIC( ISVALIDFILENAME );
HB_FUNC_STATIC( EXTRACTFILENAME );
HB_FUNC_STATIC( ISVALIDSTOPLINE );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( HB_BITAND );
HB_FUNC_EXTERN( HB_BITSHIFT );
HB_FUNC_EXTERN( HB_HHASKEY );
HB_FUNC_EXTERN( ADEL );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( AADD );
HB_FUNC_STATIC( BREAKLOG );
HB_FUNC_EXTERN( RAT );
HB_FUNC_EXTERN( HB_OSPATHSEPARATOR );
HB_FUNC_STATIC( ADDMODULE );
HB_FUNC_STATIC( ADDSTATICMODULE );
HB_FUNC_STATIC( REPLACEEXPRESSION );
HB_FUNC_EXTERN( HB_REGEXALL );
HB_FUNC_STATIC( CLASSSYMBOLS );
HB_FUNC_STATIC( NORMALSYMBOLS );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( __OBJGETMETHODLIST );
HB_FUNC_STATIC( ADDDYNSYMBOLS );
HB_FUNC_EXTERN( __DYNSCOUNT );
HB_FUNC_EXTERN( __DYNSGETNAME );
HB_FUNC_EXTERN( __DYNSISFUN );
HB_FUNC_STATIC( ERRORBLOCKCODE );
HB_FUNC_EXTERN( ISBEGSEQ );
HB_FUNC( __DBGENTRY );
HB_FUNC_EXTERN( ATAIL );
HB_FUNC_EXTERN( ARRAY );
HB_FUNC_EXTERN( __GETLASTRETURN );
HB_FUNC_EXTERN( ERRORBLOCK );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_VSCODE_DEBUGGER )
{ "CHECKSOCKET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHECKSOCKET )}, NULL },
{ "__DEBUGITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEBUGITEM )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_INETINIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETINIT )}, NULL },
{ "HB_INETCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETCREATE )}, NULL },
{ "HB_INETCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETCONNECT )}, NULL },
{ "HB_INETERRORCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETERRORCODE )}, NULL },
{ "HB_INETSEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETSEND )}, NULL },
{ "HB_ARGV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ARGV )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "__PIDNUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( __PIDNUM )}, NULL },
{ "HB_INETDATAREADY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETDATAREADY )}, NULL },
{ "HB_IDLESLEEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLESLEEP )}, NULL },
{ "HB_INETRECVLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETRECVLINE )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SENDCOUMPOUNDVAR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENDCOUMPOUNDVAR )}, NULL },
{ "SENDSTACK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENDSTACK )}, NULL },
{ "SETBREAKPOINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETBREAKPOINT )}, NULL },
{ "SENDLOCALS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENDLOCALS )}, NULL },
{ "SENDSTATICS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENDSTATICS )}, NULL },
{ "SENDFROMINFO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENDFROMINFO )}, NULL },
{ "SENDEXPRESSION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENDEXPRESSION )}, NULL },
{ "FORMAT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( FORMAT )}, NULL },
{ "SETERRORTYPE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETERRORTYPE )}, NULL },
{ "SENDCOMPLETITION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENDCOMPLETITION )}, NULL },
{ "INBREAKPOINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( INBREAKPOINT )}, NULL },
{ "__DBGINVOKEDEBUG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGINVOKEDEBUG )}, NULL },
{ "__DBGPROCLEVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGPROCLEVEL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "PROCFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCFILE )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "HB_TSTOSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TSTOSTR )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJGETMSGLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJGETMSGLIST )}, NULL },
{ "NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "GETSTACKID", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETSTACKID )}, NULL },
{ "GETSTACKANDPARAMS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETSTACKANDPARAMS )}, NULL },
{ "HB_ATOKENS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ATOKENS )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "__DBGVMVARLGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGVMVARLGET )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "__DBGVMVARSGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGVMVARSGET )}, NULL },
{ "MYGETSTA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MYGETSTA )}, NULL },
{ "__MVDBGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVDBGINFO )}, NULL },
{ "GETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETVALUE )}, NULL },
{ "EVALEXPRESSION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EVALEXPRESSION )}, NULL },
{ "HB_HVALUEAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HVALUEAT )}, NULL },
{ "__DBGOBJGETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( __DBGOBJGETVALUE )}, NULL },
{ "BREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( BREAK )}, NULL },
{ "__DBGSENDMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGSENDMSG )}, NULL },
{ "__BREAKBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __BREAKBLOCK )}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "HB_HKEYAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HKEYAT )}, NULL },
{ "ISVALIDFILENAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISVALIDFILENAME )}, NULL },
{ "EXTRACTFILENAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXTRACTFILENAME )}, NULL },
{ "ISVALIDSTOPLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISVALIDSTOPLINE )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "HB_BITAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITAND )}, NULL },
{ "HB_BITSHIFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITSHIFT )}, NULL },
{ "HB_HHASKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HHASKEY )}, NULL },
{ "ADEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADEL )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "BREAKLOG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( BREAKLOG )}, NULL },
{ "RAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RAT )}, NULL },
{ "HB_OSPATHSEPARATOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSPATHSEPARATOR )}, NULL },
{ "ADDMODULE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDMODULE )}, NULL },
{ "ADDSTATICMODULE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDSTATICMODULE )}, NULL },
{ "REPLACEEXPRESSION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( REPLACEEXPRESSION )}, NULL },
{ "HB_REGEXALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_REGEXALL )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRIPTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLASSSYMBOLS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLASSSYMBOLS )}, NULL },
{ "NORMALSYMBOLS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( NORMALSYMBOLS )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "__OBJGETMETHODLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJGETMETHODLIST )}, NULL },
{ "ADDDYNSYMBOLS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDDYNSYMBOLS )}, NULL },
{ "__DYNSCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DYNSCOUNT )}, NULL },
{ "__DYNSGETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DYNSGETNAME )}, NULL },
{ "__DYNSISFUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DYNSISFUN )}, NULL },
{ "ERRORBLOCKCODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ERRORBLOCKCODE )}, NULL },
{ "ISBEGSEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISBEGSEQ )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
{ "ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ARRAY )}, NULL },
{ "__GETLASTRETURN", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETLASTRETURN )}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_VSCODE_DEBUGGER, "vscode_debugger.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_VSCODE_DEBUGGER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_VSCODE_DEBUGGER )
   #include "hbiniseg.h"
#endif

HB_FUNC_STATIC( CHECKSOCKET )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 3, 1 );
	hb_xvmSetLine( 54 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 55 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 56 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmPushLogical( HB_FALSE );
	goto lab00002;
lab00001: ;
	hb_xvmPushLocal( 1 );
lab00002: ;
	hb_xvmPopLocal( 1 );
lab00003: ;
	hb_xvmSetLine( 59 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00008;
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "timeCheckForDebug", 17 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmLessEqualThenIntIs( 14L, &fValue ) ) break;
	if( !fValue )
		goto lab00008;
	hb_xvmSetLine( 61 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 62 );
	hb_xvmPushFuncSymbol( symbols + 4 );
	hb_xvmPushInteger( 140 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "timeCheckForDebug", 17 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmMultByInt( 10L ) ) break;
	if( hb_xvmMinus() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 63 );
	hb_xvmPushFuncSymbol( symbols + 5 );
	hb_xvmPushStringConst( "127.0.0.1", 9 );
	hb_xvmPushInteger( 6110 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 64 );
	hb_xvmPushFuncSymbol( symbols + 6 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmNotEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00004;
	hb_xvmSetLine( 66 );
	hb_xvmPushStringConst( "NO", 2 );
	hb_xvmPopLocal( 2 );
	goto lab00007;
lab00004: ;
	hb_xvmSetLine( 72 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushFuncSymbol( symbols + 8 );
	hb_xvmPushInteger( 0 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
lab00005: ;
	hb_xvmSetLine( 74 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmNotEqualIntIs( 1L, &fValue ) ) break;
	if( !fValue )
		goto lab00006;
	hb_xvmSetLine( 75 );
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushDouble( * ( double * ) "\x9A\x99\x99\x99\x99\x99\xC9\?", 10, 1 );
	if( hb_xvmDo( 1 ) ) break;
	goto lab00005;
lab00006: ;
	hb_xvmSetLine( 77 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 2 );
lab00007: ;
	hb_xvmSetLine( 81 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "NO", 2 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmSetLine( 82 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 83 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "timeCheckForDebug", 17 );
	if( hb_xvmArrayPushRef() ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmPlusEqPop() ) break;
	goto lab00003;
lab00008: ;
	hb_xvmSetLine( 86 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00009;
	hb_xvmSetLine( 88 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "timeCheckForDebug", 17 );
	if( hb_xvmArrayPushRef() ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmMinusEqPop() ) break;
	hb_xvmSetLine( 89 );
	/* *** END PROC *** */
	break;
lab00009: ;
	hb_xvmSetLine( 92 );
	hb_xvmPushFuncSymbol( symbols + 6 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmNotEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00010;
	hb_xvmSetLine( 95 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 96 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 97 );
	hb_xvmHashGen( 0 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 98 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 99 );
	/* *** END PROC *** */
	break;
lab00010: ;
	hb_xvmSetLine( 102 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmEqualIntIs( 1L, &fValue ) ) break;
	if( !fValue )
		goto lab00035;
	hb_xvmSetLine( 103 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 104 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00010;
	hb_xvmSetLine( 106 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushInteger( 4 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00011;
	hb_xvmSetLine( 107 );
	hb_xvmPushFuncSymbol( symbols + 15 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	goto lab00010;
lab00011: ;
	hb_xvmSetLine( 121 );
	goto lab00034;
lab00012: ;
	hb_xvmSetLine( 123 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 125 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00013;
	hb_xvmSetLine( 126 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "STOP:pause\x0D\x0A", 12 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 127 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 1 );
lab00013: ;
	goto lab00010;
lab00014: ;
	hb_xvmSetLine( 131 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 132 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 133 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 134 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00015: ;
	hb_xvmSetLine( 137 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 138 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 140 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00016: ;
	hb_xvmSetLine( 143 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 144 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 145 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 146 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00017: ;
	hb_xvmSetLine( 149 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 150 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 151 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 152 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00018: ;
	hb_xvmSetLine( 155 );
	hb_xvmPushFuncSymbol( symbols + 16 );
	if( hb_xvmDo( 0 ) ) break;
	goto lab00010;
lab00019: ;
	hb_xvmSetLine( 158 );
	hb_xvmPushFuncSymbol( symbols + 17 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	goto lab00010;
lab00020: ;
	hb_xvmSetLine( 161 );
	hb_xvmPushFuncSymbol( symbols + 18 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmDo( 2 ) ) break;
	goto lab00010;
lab00021: ;
	hb_xvmSetLine( 164 );
	hb_xvmPushFuncSymbol( symbols + 19 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmDo( 2 ) ) break;
	goto lab00010;
lab00022: ;
	hb_xvmSetLine( 167 );
	hb_xvmPushFuncSymbol( symbols + 20 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushInteger( 6 );
	hb_xvmPushLogical( HB_TRUE );
	if( hb_xvmDo( 4 ) ) break;
	goto lab00010;
lab00023: ;
	hb_xvmSetLine( 170 );
	hb_xvmPushFuncSymbol( symbols + 20 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushInteger( 6 );
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmDo( 4 ) ) break;
	goto lab00010;
lab00024: ;
	hb_xvmSetLine( 173 );
	hb_xvmPushFuncSymbol( symbols + 20 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmDo( 3 ) ) break;
	goto lab00010;
lab00025: ;
	hb_xvmSetLine( 182 );
	hb_xvmPushFuncSymbol( symbols + 21 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	goto lab00010;
lab00026: ;
	hb_xvmSetLine( 186 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00027;
	hb_xvmSetLine( 187 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "INERROR:True\x0D\x0A", 14 );
	if( hb_xvmDo( 2 ) ) break;
	goto lab00028;
lab00027: ;
	hb_xvmSetLine( 189 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "INERROR:False\x0D\x0A", 15 );
	if( hb_xvmDo( 2 ) ) break;
lab00028: ;
	goto lab00010;
lab00029: ;
	hb_xvmSetLine( 193 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 194 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "ERROR_VAR 0\x0D\x0A", 13 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 195 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00030;
	hb_xvmSetLine( 196 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "ERR:0:0::Error:O:", 17 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "error", 5 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
lab00030: ;
	hb_xvmSetLine( 198 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "END\x0D\x0A", 5 );
	if( hb_xvmDo( 2 ) ) break;
	goto lab00010;
lab00031: ;
	hb_xvmSetLine( 201 );
	hb_xvmPushFuncSymbol( symbols + 23 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	goto lab00010;
lab00032: ;
	hb_xvmSetLine( 204 );
	hb_xvmPushFuncSymbol( symbols + 24 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	goto lab00010;
lab00033: ;
	hb_xvmSetLine( 207 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 208 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 209 );
	hb_xvmHashGen( 0 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 210 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 211 );
	/* *** END PROC *** */
	break;
lab00034: ;
	hb_xvmPushLocal( 2 );
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		const char * pszText;
		HB_SIZE nLen;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		pszText = ( type & HB_IT_STRING ) ? hb_itemGetCPtr( pSwitch ) : NULL;
		nLen = pszText ? hb_itemGetCLen( pSwitch ) : 0;
		if( pszText && nLen == 5 && ! memcmp( pszText, "PAUSE", 5 ) )
		{
			hb_stackPop();
			goto lab00012;
		}
		if( pszText && nLen == 2 && ! memcmp( pszText, "GO", 2 ) )
		{
			hb_stackPop();
			goto lab00014;
		}
		if( pszText && nLen == 4 && ! memcmp( pszText, "STEP", 4 ) )
		{
			hb_stackPop();
			goto lab00015;
		}
		if( pszText && nLen == 4 && ! memcmp( pszText, "NEXT", 4 ) )
		{
			hb_stackPop();
			goto lab00016;
		}
		if( pszText && nLen == 4 && ! memcmp( pszText, "EXIT", 4 ) )
		{
			hb_stackPop();
			goto lab00017;
		}
		if( pszText && nLen == 5 && ! memcmp( pszText, "STACK", 5 ) )
		{
			hb_stackPop();
			goto lab00018;
		}
		if( pszText && nLen == 10 && ! memcmp( pszText, "BREAKPOINT", 10 ) )
		{
			hb_stackPop();
			goto lab00019;
		}
		if( pszText && nLen == 6 && ! memcmp( pszText, "LOCALS", 6 ) )
		{
			hb_stackPop();
			goto lab00020;
		}
		if( pszText && nLen == 7 && ! memcmp( pszText, "STATICS", 7 ) )
		{
			hb_stackPop();
			goto lab00021;
		}
		if( pszText && nLen == 8 && ! memcmp( pszText, "PRIVATES", 8 ) )
		{
			hb_stackPop();
			goto lab00022;
		}
		if( pszText && nLen == 14 && ! memcmp( pszText, "PRIVATE_CALLEE", 14 ) )
		{
			hb_stackPop();
			goto lab00023;
		}
		if( pszText && nLen == 7 && ! memcmp( pszText, "PUBLICS", 7 ) )
		{
			hb_stackPop();
			goto lab00024;
		}
		if( pszText && nLen == 10 && ! memcmp( pszText, "EXPRESSION", 10 ) )
		{
			hb_stackPop();
			goto lab00025;
		}
		if( pszText && nLen == 7 && ! memcmp( pszText, "INERROR", 7 ) )
		{
			hb_stackPop();
			goto lab00026;
		}
		if( pszText && nLen == 9 && ! memcmp( pszText, "ERROR_VAR", 9 ) )
		{
			hb_stackPop();
			goto lab00029;
		}
		if( pszText && nLen == 9 && ! memcmp( pszText, "ERRORTYPE", 9 ) )
		{
			hb_stackPop();
			goto lab00031;
		}
		if( pszText && nLen == 12 && ! memcmp( pszText, "COMPLETITION", 12 ) )
		{
			hb_stackPop();
			goto lab00032;
		}
		if( pszText && nLen == 10 && ! memcmp( pszText, "DISCONNECT", 10 ) )
		{
			hb_stackPop();
			goto lab00033;
		}
		hb_stackPop();
	}
	goto lab00010;
lab00035: ;
	hb_xvmSetLine( 219 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00036;
	hb_xvmSetLine( 220 );
	/* *** END PROC *** */
	break;
lab00036: ;
	hb_xvmSetLine( 222 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00040;
	hb_xvmSetLine( 223 );
	hb_xvmPushFuncSymbol( symbols + 25 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00037;
	hb_xvmSetLine( 224 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 226 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00037;
	hb_xvmSetLine( 227 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "STOP:break\x0D\x0A", 12 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 228 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 1 );
lab00037: ;
	hb_xvmSetLine( 231 );
	hb_xvmPushFuncSymbol( symbols + 26 );
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00038;
	hb_xvmSetLine( 232 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 234 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00038;
	hb_xvmSetLine( 235 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "STOP:AltD\x0D\x0A", 11 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 236 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 1 );
lab00038: ;
	hb_xvmSetLine( 239 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00040;
	hb_xvmSetLine( 241 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00039;
	hb_xvmSetLine( 243 );
	/* *** END PROC *** */
	break;
lab00039: ;
	hb_xvmSetLine( 245 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 246 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 248 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00040;
	hb_xvmSetLine( 249 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "STOP:next\x0D\x0A", 11 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 250 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 1 );
lab00040: ;
	hb_xvmSetLine( 254 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00041;
	hb_xvmSetLine( 255 );
	/* *** END PROC *** */
	break;
lab00041: ;
	hb_xvmSetLine( 257 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 258 );
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushDouble( * ( double * ) "\x9A\x99\x99\x99\x99\x99\xB9\?", 10, 1 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 259 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 260 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00042;
	hb_xvmSetLine( 261 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "STOP:step\x0D\x0A", 11 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 262 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopLocal( 1 );
lab00042: ;
	goto lab00009;
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SENDSTACK )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 10, 0 );
	hb_xvmSetLine( 270 );
	hb_xvmLocalSetInt( 6, 3L );
	hb_xvmSetLine( 271 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 272 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 10 );
	hb_xvmSetLine( 273 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 274 );
	hb_xvmLocalSetInt( 6, 4L );
lab00001: ;
	hb_xvmSetLine( 277 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 9 );
	hb_xvmSetLine( 278 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmAddInt( -1L ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 280 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "STACK ", 6 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmMinus() ) break;
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 281 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 1 );
	goto lab00004;
lab00002: ;
	hb_xvmSetLine( 282 );
	hb_xvmPushFuncSymbol( symbols + 29 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 283 );
	hb_xvmPushFuncSymbol( symbols + 30 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 284 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 10 );
	{
		static const HB_BYTE codeblock[ 20 ] = {
			1, 0, 2, 0, 9, 0, 1, 0, 95, 255, 95, 1, 92, 4, 1, 49, 
			95, 254, 8, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 8 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 285 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPopLocal( 4 );
lab00003: ;
	hb_xvmSetLine( 290 );
	hb_xvmPushFuncSymbol( symbols + 32 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( ":", 1 );
	hb_xvmPushStringConst( ";", 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 292 );
	hb_xvmPushFuncSymbol( symbols + 32 );
	hb_xvmPushFuncSymbol( symbols + 33 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( ":", 1 );
	hb_xvmPushStringConst( ";", 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 293 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 281 );
	if( hb_xvmLocalIncPush( 1 ) ) break;
lab00004: ;
	hb_xvmPushLocal( 2 );
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 307 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( FORMAT )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 0, 1 );
	hb_xvmSetLine( 310 );
	goto lab00016;
lab00001: ;
	hb_xvmSetLine( 312 );
	hb_xvmPushStringConst( "nil", 3 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00002: ;
	hb_xvmSetLine( 315 );
	hb_xvmPushFuncSymbol( symbols + 32 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( "\x0A", 1 );
	hb_xvmPushStringConst( "\\$\\n", 4 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 316 );
	hb_xvmPushFuncSymbol( symbols + 32 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( "\x0D", 1 );
	hb_xvmPushStringConst( "\\$\\r", 4 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 317 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( "\"", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 318 );
	hb_xvmPushStringConst( "\"", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\"", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00003: ;
	hb_xvmSetLine( 319 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( "'", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00004;
	hb_xvmSetLine( 320 );
	hb_xvmPushStringConst( "'", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "'", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00004: ;
	hb_xvmSetLine( 322 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00005: ;
	hb_xvmSetLine( 325 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	/* *** END PROC *** */
	break;
lab00006: ;
	hb_xvmSetLine( 327 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00007;
	hb_xvmPushStringConst( ".T.", 3 );
	goto lab00008;
lab00007: ;
	hb_xvmPushStringConst( ".F.", 3 );
lab00008: ;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00009: ;
	hb_xvmSetLine( 335 );
	hb_xvmPushStringConst( "d\"", 2 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushFuncSymbol( symbols + 36 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushInteger( 10 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\"", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00010: ;
	hb_xvmSetLine( 337 );
	hb_xvmPushStringConst( "t\"", 2 );
	hb_xvmPushFuncSymbol( symbols + 36 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\"", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00011: ;
	hb_xvmSetLine( 341 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	/* *** END PROC *** */
	break;
lab00012: ;
	hb_xvmSetLine( 343 );
	hb_xvmPushStringConst( "{|| ...}", 8 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00013: ;
	hb_xvmSetLine( 346 );
	hb_xvmPushSymbol( symbols + 38 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPushStringConst( " ", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushFuncSymbol( symbols + 39 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushInteger( 0 );
	if( hb_xvmFunction( 3 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00014: ;
	hb_xvmSetLine( 348 );
	hb_xvmPushStringConst( "Pointer", 7 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00015: ;
	hb_xvmSetLine( 350 );
	hb_xvmPushStringConst( "@", 1 );
	hb_xvmPushSymbol( symbols + 40 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "()", 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00016: ;
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		const char * pszText;
		HB_SIZE nLen;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		pszText = ( type & HB_IT_STRING ) ? hb_itemGetCPtr( pSwitch ) : NULL;
		nLen = pszText ? hb_itemGetCLen( pSwitch ) : 0;
		if( pszText && nLen == 1 && ! memcmp( pszText, "U", 1 ) )
		{
			hb_stackPop();
			goto lab00001;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "C", 1 ) )
		{
			hb_stackPop();
			goto lab00002;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "M", 1 ) )
		{
			hb_stackPop();
			goto lab00002;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "N", 1 ) )
		{
			hb_stackPop();
			goto lab00005;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "L", 1 ) )
		{
			hb_stackPop();
			goto lab00006;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "D", 1 ) )
		{
			hb_stackPop();
			goto lab00009;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "T", 1 ) )
		{
			hb_stackPop();
			goto lab00010;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "A", 1 ) )
		{
			hb_stackPop();
			goto lab00011;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "H", 1 ) )
		{
			hb_stackPop();
			goto lab00011;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "B", 1 ) )
		{
			hb_stackPop();
			goto lab00012;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "O", 1 ) )
		{
			hb_stackPop();
			goto lab00013;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "P", 1 ) )
		{
			hb_stackPop();
			goto lab00014;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "S", 1 ) )
		{
			hb_stackPop();
			goto lab00015;
		}
		hb_stackPop();
	}
	hb_xvmSetLine( 352 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( GETSTACKID )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 1, 2 );
	hb_xvmSetLine( 355 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmMinus() ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 356 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 357 );
	if( hb_xvmLocalAddInt( 3, -1 ) ) break;
lab00001: ;
	hb_xvmSetLine( 359 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 360 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 2 );
lab00002: ;
	hb_xvmSetLine( 362 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 2 );
	{
		static const HB_BYTE codeblock[ 15 ] = {
			1, 0, 1, 0, 3, 0, 95, 1, 92, 4, 1, 95, 255, 8, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmDo( 2 ) ) break;
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( GETSTACKANDPARAMS )
{
   do {
	hb_xvmFrame( 6, 2 );
	hb_xvmSetLine( 365 );
	hb_xvmPushFuncSymbol( symbols + 44 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 367 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 368 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 369 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 370 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 7 );
	if( hb_xvmMinus() ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 371 );
	hb_xvmPushFuncSymbol( symbols + 42 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 372 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 7 );
	hb_xvmArrayGen( 5 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SENDLOCALS )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 11, 2 );
	hb_xvmSetLine( 375 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 376 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 377 );
	hb_xvmPushFuncSymbol( symbols + 43 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 378 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 379 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 380 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 381 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 9 );
	hb_xvmSetLine( 384 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( " ", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 5L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 385 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00004;
	hb_xvmSetLine( 386 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 387 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 8 );
lab00001: ;
	hb_xvmSetLine( 389 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 10 );
	goto lab00003;
lab00002: ;
	hb_xvmSetLine( 390 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmSetLine( 393 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 11 );
	hb_xvmSetLine( 394 );
	hb_xvmPushFuncSymbol( symbols + 46 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmMinus() ) break;
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 12 );
	hb_xvmSetLine( 398 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushInteger( 3 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "::", 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 12 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushLocal( 12 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmLocalAdd( 13 );
	hb_xvmSetLine( 399 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 13 );
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 389 );
	if( hb_xvmLocalIncPush( 10 ) ) break;
lab00003: ;
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
lab00004: ;
	hb_xvmSetLine( 402 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "END\x0D\x0A", 5 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 403 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SENDSTATICS )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 15, 2 );
	hb_xvmSetLine( 406 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 407 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 408 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 410 );
	hb_xvmPushFuncSymbol( symbols + 43 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 10 );
	hb_xvmSetLine( 411 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPopLocal( 11 );
	hb_xvmSetLine( 412 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPopLocal( 12 );
	hb_xvmSetLine( 413 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	hb_xvmPopLocal( 13 );
	hb_xvmSetLine( 416 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 417 );
	hb_xvmPushFuncSymbol( symbols + 47 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 418 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 5 );
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 6, 0, 95, 1, 122, 1, 95, 255, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 7 );
	goto lab00002;
lab00001: ;
	hb_xvmSetLine( 420 );
	hb_xvmLocalSetInt( 7, 0L );
lab00002: ;
	hb_xvmSetLine( 422 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 423 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 8 );
	goto lab00004;
lab00003: ;
	hb_xvmSetLine( 425 );
	hb_xvmLocalSetInt( 8, 0L );
lab00004: ;
	hb_xvmSetLine( 427 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	goto lab00006;
lab00005: ;
	hb_xvmPushInteger( 0 );
lab00006: ;
	hb_xvmPopLocal( 9 );
	hb_xvmSetLine( 428 );
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00007;
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmPlus() ) break;
	goto lab00008;
lab00007: ;
	hb_xvmPushLocal( 12 );
lab00008: ;
	hb_xvmPopLocal( 12 );
	hb_xvmSetLine( 429 );
	hb_xvmPushLocal( 12 );
	if( hb_xvmLessThenIntIs( 1L, &fValue ) ) break;
	if( !fValue )
		goto lab00009;
	hb_xvmPushInteger( 1 );
	goto lab00010;
lab00009: ;
	hb_xvmPushLocal( 12 );
lab00010: ;
	hb_xvmPopLocal( 12 );
	hb_xvmSetLine( 430 );
	hb_xvmPushLocal( 13 );
	if( hb_xvmLessThenIntIs( 1L, &fValue ) ) break;
	if( !fValue )
		goto lab00011;
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmPlus() ) break;
	goto lab00012;
lab00011: ;
	hb_xvmPushLocal( 13 );
lab00012: ;
	hb_xvmPopLocal( 13 );
	hb_xvmSetLine( 432 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( " ", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayItemPush( 5L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 433 );
	hb_xvmPushLocal( 12 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 14 );
	goto lab00016;
lab00013: ;
	hb_xvmSetLine( 434 );
	hb_xvmPushLocal( 14 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmLessEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00014;
	hb_xvmSetLine( 435 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 14 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 15 );
	goto lab00015;
lab00014: ;
	hb_xvmSetLine( 436 );
	hb_xvmPushLocal( 14 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmLessEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00017;
	hb_xvmSetLine( 437 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	hb_xvmPushLocal( 14 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmMinus() ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 15 );
lab00015: ;
	hb_xvmSetLine( 441 );
	hb_xvmPushFuncSymbol( symbols + 48 );
	hb_xvmPushLocal( 15 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 15 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 16 );
	hb_xvmSetLine( 444 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushInteger( 3 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 14 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "::", 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 15 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 16 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushLocal( 16 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmLocalAdd( 17 );
	hb_xvmSetLine( 445 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 17 );
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 433 );
	if( hb_xvmLocalIncPush( 14 ) ) break;
lab00016: ;
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 13 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00013;
lab00017: ;
	hb_xvmSetLine( 447 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "END\x0D\x0A", 5 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 448 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( MYGETSTA )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 8, 2 );
	hb_xvmSetLine( 451 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 452 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 453 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 455 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	goto lab00002;
lab00001: ;
	hb_xvmPushInteger( 0 );
lab00002: ;
	hb_xvmPopLocal( 10 );
	hb_xvmSetLine( 456 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 457 );
	hb_xvmPushFuncSymbol( symbols + 47 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 458 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 5 );
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 6, 0, 95, 1, 122, 1, 95, 255, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 7 );
	goto lab00004;
lab00003: ;
	hb_xvmSetLine( 460 );
	hb_xvmLocalSetInt( 7, 0L );
lab00004: ;
	hb_xvmSetLine( 462 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
	hb_xvmSetLine( 463 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 8 );
	goto lab00006;
lab00005: ;
	hb_xvmSetLine( 465 );
	hb_xvmLocalSetInt( 8, 0L );
lab00006: ;
	hb_xvmSetLine( 467 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmLessEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00007;
	hb_xvmSetLine( 468 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 9 );
	goto lab00009;
lab00007: ;
	hb_xvmSetLine( 469 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmLessEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00008;
	hb_xvmSetLine( 470 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmMinus() ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 9 );
	goto lab00009;
lab00008: ;
	hb_xvmSetLine( 472 );
	hb_xvmRetNil();
	/* *** END PROC *** */
	break;
lab00009: ;
	hb_xvmSetLine( 474 );
	hb_xvmPushFuncSymbol( symbols + 48 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SENDFROMINFO )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 12, 4 );
	hb_xvmSetLine( 477 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 478 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 479 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 480 );
	hb_xvmPushFuncSymbol( symbols + 43 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 482 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPopLocal( 9 );
	hb_xvmSetLine( 483 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	hb_xvmPopLocal( 10 );
	hb_xvmSetLine( 484 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPopLocal( 11 );
	hb_xvmSetLine( 489 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 4 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 16 );
	hb_xvmSetLine( 491 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( " ", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmArrayItemPush( 5L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 492 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 493 );
	hb_xvmCopyLocals( 7, 10 );
lab00001: ;
	hb_xvmSetLine( 496 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 12 );
	goto lab00006;
lab00002: ;
	hb_xvmSetLine( 498 );
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00005;
	hb_xvmSetLine( 501 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmEqualIntIs( 6L, &fValue ) ) break;
	if( !fValue )
		goto lab00004;
	hb_xvmSetLine( 502 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 16 );
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00005;
lab00003: ;
	hb_xvmSetLine( 505 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 16 );
	if( hb_xvmLessEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00005;
lab00004: ;
	hb_xvmSetLine( 509 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocalByRef( 14 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 15 );
	hb_xvmSetLine( 512 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushInteger( 3 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushStringConst( "::", 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 12 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "::", 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 14 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 15 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushLocal( 15 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmLocalAdd( 13 );
	hb_xvmSetLine( 513 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 13 );
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
lab00005: ;
	hb_xvmSetLine( 496 );
	if( hb_xvmLocalIncPush( 12 ) ) break;
lab00006: ;
	hb_xvmPushLocal( 9 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 516 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "END\x0D\x0A", 5 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 517 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( GETVALUE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 5, 1 );
	hb_xvmSetLine( 520 );
	hb_xvmPushFuncSymbol( symbols + 44 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 535 );
	goto lab00009;
lab00001: ;
	hb_xvmSetLine( 537 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "error", 5 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00002: ;
	hb_xvmSetLine( 540 );
	hb_xvmPushFuncSymbol( symbols + 46 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmMinus() ) break;
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00003: ;
	hb_xvmSetLine( 543 );
	hb_xvmPushFuncSymbol( symbols + 49 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00004: ;
	hb_xvmSetLine( 546 );
	hb_xvmPushFuncSymbol( symbols + 48 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00005: ;
	hb_xvmSetLine( 549 );
	hb_xvmPushFuncSymbol( symbols + 48 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00006: ;
	hb_xvmSetLine( 552 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 6 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocalByRef( 6 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00007: ;
	hb_xvmSetLine( 555 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocalByRef( 6 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00008: ;
	hb_xvmSetLine( 558 );
	hb_xvmPushFuncSymbol( symbols + 52 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00010;
lab00009: ;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		const char * pszText;
		HB_SIZE nLen;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		pszText = ( type & HB_IT_STRING ) ? hb_itemGetCPtr( pSwitch ) : NULL;
		nLen = pszText ? hb_itemGetCLen( pSwitch ) : 0;
		if( pszText && nLen == 3 && ! memcmp( pszText, "ERR", 3 ) )
		{
			hb_stackPop();
			goto lab00001;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "LOC", 3 ) )
		{
			hb_stackPop();
			goto lab00002;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "STA", 3 ) )
		{
			hb_stackPop();
			goto lab00003;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "GLO", 3 ) )
		{
			hb_stackPop();
			goto lab00004;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "EXT", 3 ) )
		{
			hb_stackPop();
			goto lab00005;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "PRI", 3 ) )
		{
			hb_stackPop();
			goto lab00006;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "PUB", 3 ) )
		{
			hb_stackPop();
			goto lab00007;
		}
		if( pszText && nLen == 3 && ! memcmp( pszText, "EXP", 3 ) )
		{
			hb_stackPop();
			goto lab00008;
		}
		hb_stackPop();
	}
lab00010: ;
	hb_xvmSetLine( 564 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmLocalAdd( 1 );
	hb_xvmSetLine( 565 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00023;
	hb_xvmSetLine( 566 );
	hb_xvmPushFuncSymbol( symbols + 44 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushStringConst( ",", 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 567 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 4 );
	goto lab00022;
lab00011: ;
	hb_xvmSetLine( 568 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "AHO", 3 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00012;
	hb_xvmSetLine( 569 );
	hb_xvmArrayGen( 0 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00012: ;
	hb_xvmSetLine( 571 );
	goto lab00020;
lab00013: ;
	hb_xvmSetLine( 573 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00014;
	hb_xvmSetLine( 574 );
	hb_xvmArrayGen( 0 );
	hb_xvmPopLocal( 3 );
	goto lab00015;
lab00014: ;
	hb_xvmSetLine( 576 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 3 );
lab00015: ;
	goto lab00021;
lab00016: ;
	hb_xvmSetLine( 580 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00017;
	hb_xvmSetLine( 581 );
	hb_xvmArrayGen( 0 );
	hb_xvmPopLocal( 3 );
	goto lab00018;
lab00017: ;
	hb_xvmSetLine( 586 );
	hb_xvmPushFuncSymbol( symbols + 53 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
lab00018: ;
	goto lab00021;
lab00019: ;
	hb_xvmSetLine( 591 );
	hb_xvmPushFuncSymbol( symbols + 54 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00021;
lab00020: ;
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		const char * pszText;
		HB_SIZE nLen;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		pszText = ( type & HB_IT_STRING ) ? hb_itemGetCPtr( pSwitch ) : NULL;
		nLen = pszText ? hb_itemGetCLen( pSwitch ) : 0;
		if( pszText && nLen == 1 && ! memcmp( pszText, "A", 1 ) )
		{
			hb_stackPop();
			goto lab00013;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "H", 1 ) )
		{
			hb_stackPop();
			goto lab00016;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "O", 1 ) )
		{
			hb_stackPop();
			goto lab00019;
		}
		hb_stackPop();
	}
lab00021: ;
	hb_xvmSetLine( 567 );
	if( hb_xvmLocalIncPush( 4 ) ) break;
lab00022: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00011;
lab00023: ;
	hb_xvmSetLine( 595 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "AHO", 3 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00024;
	hb_xvmSetLine( 596 );
	hb_xvmArrayGen( 0 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00024: ;
	hb_xvmSetLine( 598 );
	hb_xvmPushLocal( 3 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( __DBGOBJGETVALUE )
{
   do {
	hb_xvmFrame( 3, 3 );
	hb_xvmSetLine( 604 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 608 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 6 );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 625 );
	hb_xvmSeqBegin();
	for( ;; ) {
	{
		static const HB_BYTE codeblock[ 6 ] = {
			176, 55, 0, 12, 0, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	if( hb_xvmSeqBlock() ) break;
	hb_xvmSetLine( 626 );
	hb_xvmPushFuncSymbol( symbols + 56 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_stackPop();
	if( hb_xvmSeqEndTest() ) break;
	goto lab00001;
	}
	hb_xvmSetLine( 628 );
	if( hb_xvmSeqRecover() ) break;
	hb_stackPop();
	hb_xvmSetLine( 629 );
	hb_xvmSeqBegin();
	for( ;; ) {
	hb_xvmPushFuncSymbol( symbols + 57 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSeqBlock() ) break;
	hb_xvmSetLine( 631 );
	hb_xvmPushFuncSymbol( symbols + 56 );
	hb_xvmPushInteger( 0 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_stackPop();
	if( hb_xvmSeqEndTest() ) break;
	goto lab00001;
	}
	hb_xvmSetLine( 632 );
	if( hb_xvmSeqRecover() ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 633 );
	hb_xvmCopyLocals( 5, 4 );
lab00001: ;
	hb_xvmSetLine( 637 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 6 );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 638 );
	hb_xvmPushLocal( 4 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SENDCOUMPOUNDVAR )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 13, 2 );
	hb_xvmSetLine( 641 );
	hb_xvmPushFuncSymbol( symbols + 51 );
	hb_xvmPushLocalByRef( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 642 );
	hb_xvmPushFuncSymbol( symbols + 44 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 643 );
	hb_xvmPushFuncSymbol( symbols + 43 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 644 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 645 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 647 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 15 );
	hb_xvmSetLine( 648 );
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "O", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 652 );
	hb_xvmPushFuncSymbol( symbols + 39 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 13 );
	hb_xvmSetLine( 654 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 13 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 8 );
lab00001: ;
	hb_xvmSetLine( 656 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 15 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 657 );
	hb_xvmPushFuncSymbol( symbols + 58 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmNotEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 658 );
	hb_xvmPushLocalByRef( 1 );
	hb_xvmPushStringConst( ",", 1 );
	if( hb_xvmPlusEqPop() ) break;
lab00002: ;
	hb_xvmSetLine( 660 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 661 );
	hb_xvmCopyLocals( 8, 7 );
lab00003: ;
	hb_xvmSetLine( 664 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 9 );
	goto lab00011;
lab00004: ;
	hb_xvmSetLine( 665 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00010;
	hb_xvmSetLine( 668 );
	goto lab00008;
lab00005: ;
	hb_xvmSetLine( 670 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 10 );
	hb_xvmPopLocal( 14 );
	hb_xvmSetLine( 671 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 11 );
	goto lab00009;
lab00006: ;
	hb_xvmSetLine( 678 );
	hb_xvmPushFuncSymbol( symbols + 53 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 11 );
	hb_xvmSetLine( 679 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushFuncSymbol( symbols + 59 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 14 );
	hb_xvmSetLine( 681 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 10 );
	goto lab00009;
lab00007: ;
	hb_xvmSetLine( 688 );
	hb_xvmPushLocal( 13 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 10 );
	hb_xvmPopLocal( 14 );
	hb_xvmSetLine( 689 );
	hb_xvmPushFuncSymbol( symbols + 54 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 13 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 11 );
	goto lab00009;
lab00008: ;
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		const char * pszText;
		HB_SIZE nLen;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		pszText = ( type & HB_IT_STRING ) ? hb_itemGetCPtr( pSwitch ) : NULL;
		nLen = pszText ? hb_itemGetCLen( pSwitch ) : 0;
		if( pszText && nLen == 1 && ! memcmp( pszText, "A", 1 ) )
		{
			hb_stackPop();
			goto lab00005;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "H", 1 ) )
		{
			hb_stackPop();
			goto lab00006;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "O", 1 ) )
		{
			hb_stackPop();
			goto lab00007;
		}
		hb_stackPop();
	}
lab00009: ;
	hb_xvmSetLine( 693 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 14 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmLocalAdd( 12 );
	hb_xvmSetLine( 694 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 15 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 12 );
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
lab00010: ;
	hb_xvmSetLine( 664 );
	if( hb_xvmLocalIncPush( 9 ) ) break;
lab00011: ;
	hb_xvmPushLocal( 6 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
	hb_xvmSetLine( 697 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 15 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "END\x0D\x0A", 5 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 698 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( ISVALIDFILENAME )
{
   do {
	hb_xvmFrame( 2, 1 );
	hb_xvmSetLine( 701 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 703 );
	hb_xvmPushFuncSymbol( symbols + 61 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 704 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 1, 0, 95, 1, 122, 1, 95, 255, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 706 );
	hb_xvmPushLocal( 2 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( ISVALIDSTOPLINE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 4, 2 );
	hb_xvmSetLine( 710 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 712 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 713 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00001: ;
	hb_xvmSetLine( 715 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmMinus() ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 716 );
	hb_xvmPushFuncSymbol( symbols + 63 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmDivideByInt( 8L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 717 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreaterEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 718 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00002: ;
	hb_xvmSetLine( 720 );
	hb_xvmPushFuncSymbol( symbols + 64 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 3L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 1L ) ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 3 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 721 );
	hb_xvmPushFuncSymbol( symbols + 65 );
	hb_xvmPushFuncSymbol( symbols + 66 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmMultByInt( 8L ) ) break;
	if( hb_xvmMinus() ) break;
	if( hb_xvmNegate() ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmEqualInt( 1L ) ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SETBREAKPOINT )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 8, 1 );
	hb_xvmSetLine( 724 );
	hb_xvmPushFuncSymbol( symbols + 44 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 726 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 9 );
	hb_xvmSetLine( 728 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 729 );
	hb_xvmPushFuncSymbol( symbols + 47 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPop( 2L ) ) break;
	hb_xvmSetLine( 730 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPushStringConst( "-", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 732 );
	hb_xvmPushFuncSymbol( symbols + 67 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 733 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 4, 0, 95, 1, 122, 1, 95, 255, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 734 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 735 );
	hb_xvmPushFuncSymbol( symbols + 68 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 3 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 736 );
	hb_xvmPushFuncSymbol( symbols + 69 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	if( hb_xvmDo( 2 ) ) break;
lab00001: ;
	hb_xvmSetLine( 739 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "BREAK:", 6 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":-1:request", 11 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 741 );
	/* *** END PROC *** */
	break;
lab00002: ;
	hb_xvmSetLine( 743 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPushStringConst( "+", 1 );
	if( hb_xvmNotEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmSetLine( 744 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "BREAK:", 6 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":-1:invalid request", 19 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 746 );
	/* *** END PROC *** */
	break;
lab00003: ;
	hb_xvmSetLine( 748 );
	hb_xvmPushFuncSymbol( symbols + 60 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushInteger( 2 );
	if( hb_xvmArrayPushRef() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 749 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00004;
	hb_xvmSetLine( 750 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "BREAK:", 6 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":-1:not found", 13 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 751 );
	/* *** END PROC *** */
	break;
lab00004: ;
	hb_xvmSetLine( 753 );
	hb_xvmCopyLocals( 4, 5 );
lab00005: ;
	hb_xvmSetLine( 754 );
	hb_xvmPushFuncSymbol( symbols + 62 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00006;
	hb_xvmSetLine( 755 );
	if( hb_xvmLocalInc( 5 ) ) break;
	hb_xvmSetLine( 756 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmMinus() ) break;
	if( hb_xvmGreaterThenIntIs( 2L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
lab00006: ;
	hb_xvmSetLine( 760 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00008;
	hb_xvmSetLine( 761 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmAddInt( -1L ) ) break;
	hb_xvmPopLocal( 5 );
lab00007: ;
	hb_xvmSetLine( 762 );
	hb_xvmPushFuncSymbol( symbols + 62 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00008;
	hb_xvmSetLine( 763 );
	if( hb_xvmLocalDec( 5 ) ) break;
	hb_xvmSetLine( 764 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmMinus() ) break;
	if( hb_xvmGreaterThenIntIs( 2L, &fValue ) ) break;
	if( !fValue )
		goto lab00007;
lab00008: ;
	hb_xvmSetLine( 769 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00009;
	hb_xvmSetLine( 770 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "BREAK:", 6 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":-1:invalid", 11 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 771 );
	/* *** END PROC *** */
	break;
lab00009: ;
	hb_xvmSetLine( 773 );
	hb_xvmPushFuncSymbol( symbols + 67 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00010;
	hb_xvmSetLine( 774 );
	hb_xvmArrayGen( 0 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPop() ) break;
lab00010: ;
	hb_xvmSetLine( 776 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 5, 0, 95, 1, 122, 1, 95, 255, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 777 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00011;
	hb_xvmSetLine( 778 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 5 );
	hb_xvmArrayGen( 1 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 779 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 3 );
lab00011: ;
	hb_xvmSetLine( 781 );
	hb_xvmLocalSetInt( 7, 4L );
lab00012: ;
	hb_xvmSetLine( 782 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 7 );
	if( hb_xvmGreaterEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00015;
	hb_xvmSetLine( 783 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "\?CL", 3 );
	if( hb_xvmInstring() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00013;
	hb_xvmSetLine( 784 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "BREAK:", 6 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":-1:invalid request ", 20 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 786 );
	/* *** END PROC *** */
	break;
lab00013: ;
	hb_xvmSetLine( 788 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "C", 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00014;
	hb_xvmSetLine( 789 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmArrayPop() ) break;
lab00014: ;
	hb_xvmSetLine( 791 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 792 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 793 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushInteger( 0 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 794 );
	if( hb_xvmLocalAddInt( 7, 2 ) ) break;
	goto lab00012;
lab00015: ;
	hb_xvmSetLine( 796 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "BREAK:", 6 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 798 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( INBREAKPOINT )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 7, 0 );
	hb_xvmSetLine( 801 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "aBreaks", 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 802 );
	hb_xvmPushFuncSymbol( symbols + 29 );
	hb_xvmPushInteger( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 807 );
	hb_xvmPushFuncSymbol( symbols + 61 );
	hb_xvmPushFuncSymbol( symbols + 30 );
	hb_xvmPushInteger( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 809 );
	hb_xvmLocalSetInt( 6, 2L );
	hb_xvmSetLine( 811 );
	hb_xvmPushFuncSymbol( symbols + 67 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00001;
	hb_xvmSetLine( 812 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00001: ;
	hb_xvmSetLine( 814 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayPush() ) break;
	{
		static const HB_BYTE codeblock[ 32 ] = {
			1, 0, 2, 0, 3, 0, 2, 0, 176, 2, 0, 95, 1, 12, 1, 31, 
			15, 95, 1, 80, 255, 95, 1, 122, 1, 95, 254, 5, 25, 3, 9, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 815 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00002;
	hb_xvmSetLine( 816 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00002: ;
	hb_xvmSetLine( 819 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmGreaterEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00011;
	hb_xvmSetLine( 820 );
	goto lab00009;
lab00003: ;
	hb_xvmSetLine( 823 );
	hb_xvmSeqBegin();
	for( ;; ) {
	{
		static const HB_BYTE codeblock[ 6 ] = {
			176, 55, 0, 12, 0, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	if( hb_xvmSeqBlock() ) break;
	hb_xvmSetLine( 824 );
	hb_xvmPushFuncSymbol( symbols + 52 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 7 );
	hb_stackPop();
	break;
	}
	if( hb_xvmSeqEnd() ) break;
	hb_xvmSetLine( 832 );
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "L", 1 );
	if( hb_xvmNotEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmPushLocal( 7 );
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00005;
lab00004: ;
	hb_xvmSetLine( 833 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00005: ;
	goto lab00010;
lab00006: ;
	hb_xvmSetLine( 837 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 2L ) ) break;
	if( hb_xvmArrayPushRef() ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmSetLine( 838 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 2L ) ) break;
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00007;
	hb_xvmSetLine( 839 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00007: ;
	goto lab00010;
lab00008: ;
	hb_xvmSetLine( 843 );
	hb_xvmPushFuncSymbol( symbols + 71 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 844 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00009: ;
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		const char * pszText;
		HB_SIZE nLen;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		pszText = ( type & HB_IT_STRING ) ? hb_itemGetCPtr( pSwitch ) : NULL;
		nLen = pszText ? hb_itemGetCLen( pSwitch ) : 0;
		if( pszText && nLen == 1 && ! memcmp( pszText, "\?", 1 ) )
		{
			hb_stackPop();
			goto lab00003;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "C", 1 ) )
		{
			hb_stackPop();
			goto lab00006;
		}
		if( pszText && nLen == 1 && ! memcmp( pszText, "L", 1 ) )
		{
			hb_stackPop();
			goto lab00008;
		}
		hb_stackPop();
	}
lab00010: ;
	hb_xvmSetLine( 846 );
	if( hb_xvmLocalAddInt( 6, 3 ) ) break;
	goto lab00002;
lab00011: ;
	hb_xvmSetLine( 848 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( BREAKLOG )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 5, 1 );
	hb_xvmSetLine( 851 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 852 );
	hb_xvmLocalSetInt( 5, 0L );
	hb_xvmSetLine( 853 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	goto lab00007;
lab00001: ;
	hb_xvmSetLine( 854 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 855 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 856 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "{", 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 857 );
	hb_xvmLocalSetInt( 5, 1L );
	hb_xvmSetLine( 858 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 4 );
	goto lab00006;
lab00002: ;
	hb_xvmSetLine( 860 );
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlusEqPop() ) break;
	goto lab00006;
lab00003: ;
	hb_xvmSetLine( 863 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "{", 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
	hb_xvmSetLine( 864 );
	if( hb_xvmLocalAddInt( 5, 1 ) ) break;
	hb_xvmSetLine( 865 );
	hb_xvmPushLocalByRef( 4 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlusEqPop() ) break;
	goto lab00006;
lab00004: ;
	hb_xvmSetLine( 866 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "}", 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00005;
	hb_xvmSetLine( 867 );
	if( hb_xvmLocalAddInt( 5, -1 ) ) break;
	hb_xvmSetLine( 868 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00006;
	hb_xvmSetLine( 869 );
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushFuncSymbol( symbols + 52 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlusEqPop() ) break;
	goto lab00006;
lab00005: ;
	hb_xvmSetLine( 872 );
	hb_xvmPushLocalByRef( 4 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlusEqPop() ) break;
lab00006: ;
	hb_xvmSetLine( 853 );
	if( hb_xvmLocalIncPush( 6 ) ) break;
lab00007: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 876 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "LOG:", 4 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 877 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( EXTRACTFILENAME )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 1, 1 );
	hb_xvmSetLine( 884 );
	hb_xvmPushFuncSymbol( symbols + 47 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 888 );
	hb_xvmPushFuncSymbol( symbols + 72 );
	hb_xvmPushFuncSymbol( symbols + 73 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 889 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 890 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 1 );
lab00001: ;
	hb_xvmSetLine( 893 );
	hb_xvmPushLocal( 1 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( ADDMODULE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 3, 1 );
	hb_xvmSetLine( 898 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 905 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 3 );
	goto lab00004;
lab00001: ;
	hb_xvmSetLine( 906 );
	hb_xvmPushFuncSymbol( symbols + 61 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPop( 1L ) ) break;
	hb_xvmSetLine( 907 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( fValue )
		goto lab00003;
	hb_xvmSetLine( 910 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	{
		static const HB_BYTE codeblock[ 21 ] = {
			1, 0, 2, 0, 1, 0, 3, 0, 95, 255, 95, 254, 1, 122, 1, 95, 
			1, 122, 1, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 911 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00002;
	hb_xvmSetLine( 912 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmArrayGen( 0 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 913 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmDo( 2 ) ) break;
	goto lab00003;
lab00002: ;
	hb_xvmSetLine( 915 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 916 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPop() ) break;
lab00003: ;
	hb_xvmSetLine( 905 );
	if( hb_xvmLocalIncPush( 3 ) ) break;
lab00004: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 932 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( ADDSTATICMODULE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 3, 3 );
	hb_xvmSetLine( 935 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 936 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 938 );
	hb_xvmPushFuncSymbol( symbols + 47 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 939 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 5, 0, 95, 1, 122, 1, 95, 255, 8, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 940 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 941 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 5 );
	hb_xvmPushInteger( 0 );
	hb_xvmArrayGen( 0 );
	hb_xvmArrayGen( 0 );
	hb_xvmArrayGen( 4 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 942 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
lab00001: ;
	hb_xvmSetLine( 944 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( "S", 1 );
	hb_xvmPushLocal( 3 );
	hb_xvmArrayGen( 4 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 945 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( REPLACEEXPRESSION )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 3, 4 );
	hb_xvmSetLine( 948 );
	hb_xvmPushFuncSymbol( symbols + 77 );
	hb_xvmPushStringConst( "\\b", 2 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\\b", 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 1 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmFunction( 7 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 950 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 951 );
	hb_xvmPushLocal( 1 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00001: ;
	hb_xvmSetLine( 953 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 954 );
	hb_xvmPushStringConst( "__dbg[", 6 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	hb_xvmLocalAdd( 7 );
	hb_xvmSetLine( 955 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	goto lab00003;
lab00002: ;
	hb_xvmSetLine( 956 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 7 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 3L ) ) break;
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmLocalAdd( 1 );
	hb_xvmSetLine( 955 );
	if( hb_xvmLocalAddInt( 6, -1 ) ) break;
	hb_xvmPushLocal( 6 );
lab00003: ;
	if( hb_xvmLessThenIntIs( 1L, &fValue ) ) break;
	if( !fValue )
		goto lab00002;
	hb_xvmSetLine( 958 );
	hb_xvmPushLocal( 1 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( EVALEXPRESSION )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 12, 2 );
	hb_xvmSetLine( 961 );
	hb_xvmArrayGen( 0 );
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 963 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 9 );
	hb_xvmSetLine( 964 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 10 );
	hb_xvmSetLine( 965 );
	hb_xvmPushFuncSymbol( symbols + 42 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 11 );
	hb_xvmSetLine( 966 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 12 );
	hb_xvmSetLine( 967 );
	hb_xvmLocalSetInt( 14, 0L );
	hb_xvmSetLine( 968 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 969 );
	hb_xvmPushFuncSymbol( symbols + 47 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 13 );
	hb_xvmSetLine( 970 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 12 );
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 13, 0, 95, 1, 122, 1, 95, 255, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 14 );
lab00001: ;
	hb_xvmSetLine( 973 );
	hb_xvmPushFuncSymbol( symbols + 32 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( ";", 1 );
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 974 );
	hb_xvmPushFuncSymbol( symbols + 32 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( "::", 2 );
	hb_xvmPushStringConst( "self:", 5 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 975 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00006;
	hb_xvmSetLine( 977 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	goto lab00003;
lab00002: ;
	hb_xvmSetLine( 979 );
	hb_xvmPushFuncSymbol( symbols + 76 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 46 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmMinus() ) break;
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 4 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 977 );
	if( hb_xvmLocalIncPush( 6 ) ) break;
lab00003: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 982 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	goto lab00005;
lab00004: ;
	hb_xvmSetLine( 984 );
	hb_xvmPushFuncSymbol( symbols + 76 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 48 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 4 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 982 );
	if( hb_xvmLocalIncPush( 6 ) ) break;
lab00005: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 10 );
	hb_xvmPushLocal( 11 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
lab00006: ;
	hb_xvmSetLine( 988 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	goto lab00008;
lab00007: ;
	hb_xvmSetLine( 989 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushLocalByRef( 7 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 990 );
	hb_xvmPushFuncSymbol( symbols + 76 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmFunction( 4 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 988 );
	if( hb_xvmLocalIncPush( 6 ) ) break;
lab00008: ;
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00007;
	hb_xvmSetLine( 993 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	goto lab00010;
lab00009: ;
	hb_xvmSetLine( 994 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 6 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushLocalByRef( 7 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 995 );
	hb_xvmPushFuncSymbol( symbols + 76 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmFunction( 4 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 993 );
	if( hb_xvmLocalIncPush( 6 ) ) break;
lab00010: ;
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 6 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00009;
	hb_xvmSetLine( 998 );
	hb_xvmPushLocal( 14 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00013;
	hb_xvmSetLine( 999 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 6 );
	goto lab00012;
lab00011: ;
	hb_xvmSetLine( 1001 );
	hb_xvmPushFuncSymbol( symbols + 76 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 14 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 48 );
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 14 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 14 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 4 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 999 );
	if( hb_xvmLocalIncPush( 6 ) ) break;
lab00012: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 12 );
	hb_xvmPushLocal( 14 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00011;
lab00013: ;
	hb_xvmSetLine( 1005 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1007 );
	hb_xvmSeqBegin();
	for( ;; ) {
	hb_xvmPushFuncSymbol( symbols + 57 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSeqBlock() ) break;
	hb_xvmSetLine( 1008 );
	hb_xvmPushSymbol( symbols + 78 );
	hb_xvmPushStringConst( "{|__dbg| ", 9 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "}", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmMacroPush( 11 ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmSend( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_stackPop();
	if( hb_xvmSeqEndTest() ) break;
	goto lab00014;
	}
	hb_xvmSetLine( 1009 );
	if( hb_xvmSeqRecover() ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 1010 );
	hb_xvmCopyLocals( 3, 4 );
lab00014: ;
	hb_xvmSetLine( 1019 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 9 );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1020 );
	hb_xvmPushLocal( 4 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SENDEXPRESSION )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 5, 1 );
	hb_xvmSetLine( 1024 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( ":", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1025 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 1026 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 1027 );
	hb_xvmPushFuncSymbol( symbols + 52 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 1028 );
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "O", 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmPushSymbol( symbols + 38 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPushStringConst( "ERROR", 5 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 1029 );
	hb_xvmPushStringConst( "E", 1 );
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 1030 );
	hb_xvmPushSymbol( symbols + 79 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPopLocal( 2 );
	goto lab00002;
lab00001: ;
	hb_xvmSetLine( 1032 );
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 1033 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 2 );
lab00002: ;
	hb_xvmSetLine( 1035 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 6 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "EXPRESSION:", 11 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ":", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 1036 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SENDCOMPLETITION )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 4, 1 );
	hb_xvmSetLine( 1039 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( ":", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmPushStringConst( "COMPLETITION\x0D\x0A", 14 );
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 1040 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmAddInt( -1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 1041 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1042 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 1043 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( ":", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 1044 );
	hb_xvmPushLocalByRef( 3 );
	hb_xvmPushFuncSymbol( symbols + 80 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPlusEqPop() ) break;
	goto lab00002;
lab00001: ;
	hb_xvmSetLine( 1046 );
	hb_xvmPushLocalByRef( 3 );
	hb_xvmPushFuncSymbol( symbols + 81 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00002: ;
	hb_xvmSetLine( 1048 );
	hb_xvmPushLocalByRef( 3 );
	hb_xvmPushStringConst( "END\x0D\x0A", 5 );
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmSetLine( 1049 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 3 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 1050 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( CLASSSYMBOLS )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 8, 2 );
	hb_xvmSetLine( 1054 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 1055 );
	hb_xvmPushFuncSymbol( symbols + 72 );
	hb_xvmPushStringConst( ":", 1 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 10 );
	hb_xvmSetLine( 1056 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 1057 );
	hb_xvmPushFuncSymbol( symbols + 52 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmAddInt( -1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 3 );
	goto lab00002;
lab00001: ;
	hb_xvmSetLine( 1059 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00002: ;
	hb_xvmSetLine( 1061 );
	hb_xvmPushFuncSymbol( symbols + 41 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "O", 1 );
	if( hb_xvmNotEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmSetLine( 1062 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00003: ;
	hb_xvmSetLine( 1064 );
	hb_xvmPushFuncSymbol( symbols + 82 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 1065 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 9 );
	hb_xvmSetLine( 1066 );
	hb_xvmPushFuncSymbol( symbols + 39 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 1067 );
	hb_xvmPushFuncSymbol( symbols + 83 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1068 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 7 );
	goto lab00007;
lab00004: ;
	hb_xvmSetLine( 1069 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 1070 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( fValue )
		goto lab00005;
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00006;
lab00005: ;
	hb_xvmSetLine( 1071 );
	hb_xvmPushLocalByRef( 6 );
	hb_xvmPushStringConst( "D:", 2 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00006: ;
	hb_xvmSetLine( 1068 );
	if( hb_xvmLocalIncPush( 7 ) ) break;
lab00007: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
	hb_xvmSetLine( 1074 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 7 );
	goto lab00011;
lab00008: ;
	hb_xvmSetLine( 1075 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 1076 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( fValue )
		goto lab00009;
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 8 );
	hb_xvmPushLocal( 9 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00010;
lab00009: ;
	hb_xvmSetLine( 1077 );
	hb_xvmPushLocalByRef( 6 );
	hb_xvmPushStringConst( "M:", 2 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00010: ;
	hb_xvmSetLine( 1074 );
	if( hb_xvmLocalIncPush( 7 ) ) break;
lab00011: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00008;
	hb_xvmSetLine( 1080 );
	hb_xvmPushLocal( 6 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( NORMALSYMBOLS )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 10, 2 );
	hb_xvmSetLine( 1083 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 1084 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 1085 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "aModules", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1086 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 1087 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 1088 );
	hb_xvmPushFuncSymbol( symbols + 42 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 10 );
	hb_xvmSetLine( 1090 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 1091 );
	hb_xvmPushFuncSymbol( symbols + 47 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 11 );
	hb_xvmSetLine( 1092 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 5 );
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 11, 0, 95, 1, 122, 1, 95, 255, 5, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 12 );
lab00001: ;
	hb_xvmSetLine( 1094 );
	hb_xvmPushFuncSymbol( symbols + 82 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmSetLine( 1095 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00008;
	hb_xvmSetLine( 1097 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 9 );
	goto lab00004;
lab00002: ;
	hb_xvmSetLine( 1098 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 1099 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmSetLine( 1100 );
	hb_xvmPushLocalByRef( 8 );
	hb_xvmPushStringConst( "L:", 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00003: ;
	hb_xvmSetLine( 1097 );
	if( hb_xvmLocalIncPush( 9 ) ) break;
lab00004: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 1104 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 9 );
	goto lab00007;
lab00005: ;
	hb_xvmSetLine( 1105 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 1106 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00006;
	hb_xvmSetLine( 1107 );
	hb_xvmPushLocalByRef( 8 );
	hb_xvmPushStringConst( "S:", 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00006: ;
	hb_xvmSetLine( 1104 );
	if( hb_xvmLocalIncPush( 9 ) ) break;
lab00007: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00005;
lab00008: ;
	hb_xvmSetLine( 1112 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 9 );
	goto lab00011;
lab00009: ;
	hb_xvmSetLine( 1113 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushLocalByRef( 7 );
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 1114 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00010;
	hb_xvmSetLine( 1115 );
	hb_xvmPushLocalByRef( 8 );
	hb_xvmPushStringConst( "PB:", 3 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00010: ;
	hb_xvmSetLine( 1112 );
	if( hb_xvmLocalIncPush( 9 ) ) break;
lab00011: ;
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00009;
	hb_xvmSetLine( 1119 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 9 );
	goto lab00014;
lab00012: ;
	hb_xvmSetLine( 1120 );
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 6 );
	hb_xvmPushLocal( 9 );
	hb_xvmPushLocalByRef( 7 );
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 1121 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00013;
	hb_xvmSetLine( 1122 );
	hb_xvmPushLocalByRef( 8 );
	hb_xvmPushStringConst( "PR:", 3 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00013: ;
	hb_xvmSetLine( 1119 );
	if( hb_xvmLocalIncPush( 9 ) ) break;
lab00014: ;
	hb_xvmPushFuncSymbol( symbols + 50 );
	hb_xvmPushInteger( 6 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00012;
	hb_xvmSetLine( 1126 );
	hb_xvmPushLocal( 12 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00018;
	hb_xvmSetLine( 1127 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 9 );
	goto lab00017;
lab00015: ;
	hb_xvmSetLine( 1128 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 12 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	hb_xvmPushLocal( 9 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 1129 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00016;
	hb_xvmSetLine( 1130 );
	hb_xvmPushLocalByRef( 8 );
	hb_xvmPushStringConst( "S:", 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00016: ;
	hb_xvmSetLine( 1127 );
	if( hb_xvmLocalIncPush( 9 ) ) break;
lab00017: ;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 12 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00015;
lab00018: ;
	hb_xvmSetLine( 1134 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00019;
	hb_xvmSetLine( 1135 );
	hb_xvmPushLocalByRef( 8 );
	hb_xvmPushFuncSymbol( symbols + 84 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00019: ;
	hb_xvmSetLine( 1137 );
	hb_xvmPushLocal( 8 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( ADDDYNSYMBOLS )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 5, 1 );
	hb_xvmSetLine( 1140 );
	hb_xvmLocalSetInt( 2, 0L );
	hb_xvmPushFuncSymbol( symbols + 85 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmSetLine( 1141 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 6 );
lab00001: ;
	hb_xvmSetLine( 1143 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmSetLine( 1144 );
	hb_xvmPushFuncSymbol( symbols + 66 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushInteger( -1 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmSetLine( 1145 );
	hb_xvmPushFuncSymbol( symbols + 86 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1146 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00003;
	hb_xvmSetLine( 1149 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSetLine( 1150 );
	hb_xvmCopyLocals( 4, 3 );
	goto lab00001;
lab00002: ;
	hb_xvmSetLine( 1152 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmAddInt( 1L ) ) break;
	hb_xvmPopLocal( 2 );
	goto lab00001;
lab00003: ;
	hb_xvmSetLine( 1155 );
	hb_xvmPushFuncSymbol( symbols + 86 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
	hb_xvmSetLine( 1156 );
	if( hb_xvmLocalAddInt( 4, -1 ) ) break;
	goto lab00003;
lab00004: ;
	hb_xvmSetLine( 1158 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 4 );
	goto lab00007;
lab00005: ;
	hb_xvmSetLine( 1159 );
	hb_xvmPushFuncSymbol( symbols + 86 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1160 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmNotEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00008;
	hb_xvmSetLine( 1163 );
	hb_xvmPushFuncSymbol( symbols + 87 );
	hb_xvmPushLocal( 4 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00006;
	hb_xvmSetLine( 1164 );
	hb_xvmPushLocalByRef( 6 );
	hb_xvmPushStringConst( "F:", 2 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00006: ;
	hb_xvmSetLine( 1158 );
	if( hb_xvmLocalAddInt( 4, -1 ) ) break;
	hb_xvmPushLocal( 4 );
lab00007: ;
	if( hb_xvmLessThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
lab00008: ;
	hb_xvmSetLine( 1167 );
	hb_xvmPushLocal( 6 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( SETERRORTYPE )
{
   do {
	hb_xvmFrame( 1, 1 );
	hb_xvmSetLine( 1170 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 1171 );
	hb_xvmPushFuncSymbol( symbols + 45 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "errorType", 9 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1173 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 1174 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( ERRORBLOCKCODE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 1, 1 );
	hb_xvmSetLine( 1177 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 1178 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmSetLine( 1179 );
	/* *** END PROC *** */
	break;
lab00001: ;
	hb_xvmSetLine( 1182 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "errorType", 9 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 1183 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00002;
	hb_xvmSetLine( 1184 );
	hb_xvmPushSymbol( symbols + 78 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 1 ) ) break;
	hb_stackPop();
lab00002: ;
	hb_xvmSetLine( 1186 );
	/* *** END PROC *** */
	break;
lab00003: ;
	hb_xvmSetLine( 1188 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "errorType", 9 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmEqualIntIs( 1L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
	hb_xvmPushFuncSymbol( symbols + 89 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00005;
	hb_xvmSetLine( 1189 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmSetLine( 1190 );
	hb_xvmPushSymbol( symbols + 78 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 1 ) ) break;
	hb_stackPop();
lab00004: ;
	hb_xvmSetLine( 1192 );
	/* *** END PROC *** */
	break;
lab00005: ;
	hb_xvmSetLine( 1194 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1195 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00006;
	hb_xvmSetLine( 1196 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "error", 5 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1197 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1198 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1200 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "socket", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushStringConst( "ERROR:", 6 );
	hb_xvmPushSymbol( symbols + 79 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 1201 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 1202 );
	hb_xvmPushFuncSymbol( symbols + 0 );
	hb_xvmPushLogical( HB_TRUE );
	if( hb_xvmDo( 1 ) ) break;
lab00006: ;
	hb_xvmSetLine( 1204 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 1205 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00007;
	hb_xvmSetLine( 1206 );
	hb_xvmPushSymbol( symbols + 78 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 1 ) ) break;
	hb_stackPop();
lab00007: ;
	hb_xvmSetLine( 1208 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( __DBGENTRY )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 4, 4 );
	hb_xvmSetLine( 1235 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqualIntIs( 6L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 1236 );
	/* *** END PROC *** */
	break;
lab00001: ;
	hb_xvmSetLine( 1243 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 1244 );
	goto lab00028;
lab00002: ;
	hb_xvmSetLine( 1246 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmSetLine( 1266 );
	hb_xvmPushStringConst( "socket", 6 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "lRunning", 8 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushStringConst( "aBreaks", 7 );
	hb_xvmHashGen( 0 );
	hb_xvmPushStringConst( "aStack", 6 );
	hb_xvmArrayGen( 0 );
	hb_xvmPushStringConst( "aModules", 8 );
	hb_xvmArrayGen( 0 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "bInitStatics", 12 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushStringConst( "bInitGlobals", 12 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushStringConst( "bInitLines", 10 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushStringConst( "errorBlock", 10 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "errorType", 9 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushStringConst( "errorBlockHistory", 17 );
	hb_xvmArrayGen( 0 );
	hb_xvmPushStringConst( "error", 5 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "inError", 7 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	hb_xvmPushInteger( 0 );
	hb_xvmPushStringConst( "timeCheckForDebug", 17 );
	hb_xvmPushInteger( 0 );
	hb_xvmHashGen( 18 );
	hb_xvmPopLocal( 7 );
	hb_xvmSetLine( 1267 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmDo( 1 ) ) break;
lab00003: ;
	hb_xvmSetLine( 1274 );
	hb_xvmPushFuncSymbol( symbols + 72 );
	hb_xvmPushStringConst( ":", 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 1275 );
	hb_xvmPushFuncSymbol( symbols + 91 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1276 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmDuplicate();
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_stackPop();
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 4L ) ) break;
	if( hb_xvmNotEqual() ) break;
lab00004: ;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 1277 );
	hb_xvmPushLocal( 8 );
	hb_xvmDuplicate();
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00005;
	hb_stackPop();
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitStatics", 12 );
	if( hb_xvmArrayPush() ) break;
lab00005: ;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 1278 );
	hb_xvmPushLocal( 8 );
	hb_xvmDuplicate();
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00006;
	hb_stackPop();
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitGlobals", 12 );
	if( hb_xvmArrayPush() ) break;
lab00006: ;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 1279 );
	hb_xvmPushLocal( 8 );
	hb_xvmDuplicate();
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00007;
	hb_stackPop();
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitLines", 10 );
	if( hb_xvmArrayPush() ) break;
lab00007: ;
	hb_xvmPopLocal( 8 );
	hb_xvmSetLine( 1280 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00008;
	hb_xvmSetLine( 1281 );
	hb_xvmPushFuncSymbol( symbols + 92 );
	hb_xvmPushInteger( 6 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
lab00008: ;
	hb_xvmSetLine( 1293 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00009;
	hb_xvmSetLine( 1294 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 1L ) ) break;
	hb_xvmSetLine( 1295 );
	hb_xvmPushFuncSymbol( symbols + 33 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 2L ) ) break;
	goto lab00010;
lab00009: ;
	hb_xvmSetLine( 1297 );
	hb_xvmPushFuncSymbol( symbols + 35 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( -1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 1L ) ) break;
	hb_xvmSetLine( 1298 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 1L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 2L ) ) break;
lab00010: ;
	hb_xvmSetLine( 1303 );
	hb_xvmPushFuncSymbol( symbols + 29 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 3L ) ) break;
	hb_xvmSetLine( 1304 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 4L ) ) break;
	hb_xvmSetLine( 1305 );
	hb_xvmArrayGen( 0 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 5L ) ) break;
	hb_xvmSetLine( 1306 );
	hb_xvmArrayGen( 0 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 6L ) ) break;
	hb_xvmSetLine( 1313 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( "_INITSTATICS", 12 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmNotEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00011;
	hb_xvmSetLine( 1314 );
	hb_xvmPushFuncSymbol( symbols + 30 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPop( 1L ) ) break;
	hb_xvmSetLine( 1315 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitStatics", 12 );
	if( hb_xvmArrayPop() ) break;
	goto lab00013;
lab00011: ;
	hb_xvmSetLine( 1316 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( "_INITGLOBALS", 12 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmNotEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00012;
	hb_xvmSetLine( 1317 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitGlobals", 12 );
	if( hb_xvmArrayPop() ) break;
	goto lab00013;
lab00012: ;
	hb_xvmSetLine( 1318 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	hb_xvmPushStringConst( "_INITLINES", 10 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmNotEqualIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00013;
	hb_xvmSetLine( 1319 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitLines", 10 );
	if( hb_xvmArrayPop() ) break;
lab00013: ;
	hb_xvmSetLine( 1321 );
	hb_xvmPushLocal( 8 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00014;
	hb_xvmSetLine( 1322 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmDo( 2 ) ) break;
lab00014: ;
	goto lab00029;
lab00015: ;
	hb_xvmSetLine( 1326 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitGlobals", 12 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00016;
	hb_xvmSetLine( 1329 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushFuncSymbol( symbols + 91 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 5L ) ) break;
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "L", 1 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	hb_xvmArrayGen( 4 );
	if( hb_xvmDo( 2 ) ) break;
lab00016: ;
	goto lab00029;
lab00017: ;
	hb_xvmSetLine( 1343 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitStatics", 12 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00018;
	hb_xvmSetLine( 1346 );
	hb_xvmPushFuncSymbol( symbols + 75 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmDo( 3 ) ) break;
	goto lab00019;
lab00018: ;
	hb_xvmSetLine( 1347 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitGlobals", 12 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00019;
	hb_xvmSetLine( 1352 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushFuncSymbol( symbols + 91 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 6L ) ) break;
	hb_xvmPushLocal( 4 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "S", 1 );
	hb_xvmPushLocal( 2 );
	hb_xvmArrayGen( 4 );
	if( hb_xvmDo( 2 ) ) break;
lab00019: ;
	goto lab00029;
lab00020: ;
	hb_xvmSetLine( 1359 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00021;
	hb_xvmSetLine( 1360 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "maxLevel", 8 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	if( hb_xvmGreaterEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00021;
	hb_xvmSetLine( 1362 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "lRunning", 8 );
	if( hb_xvmArrayPop() ) break;
lab00021: ;
	hb_xvmSetLine( 1365 );
	hb_xvmPushFuncSymbol( symbols + 69 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmAddInt( -1L ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 1366 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitLines", 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00022;
	hb_xvmSetLine( 1374 );
	hb_xvmPushFuncSymbol( symbols + 93 );
	hb_xvmPushInteger( 13 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1376 );
	hb_xvmPushFuncSymbol( symbols + 74 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmDo( 1 ) ) break;
lab00022: ;
	hb_xvmSetLine( 1379 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitStatics", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1380 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitGlobals", 12 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1381 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "bInitLines", 10 );
	if( hb_xvmArrayPop() ) break;
	goto lab00029;
lab00023: ;
	hb_xvmSetLine( 1389 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "lInternalRun", 12 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00029;
	hb_xvmSetLine( 1392 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "__dbgEntryLevel", 15 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1393 );
	hb_xvmPushFuncSymbol( symbols + 94 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPopLocal( 5 );
	hb_xvmSetLine( 1395 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 5 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00024;
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlock", 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00024;
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlock", 10 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 5 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00027;
lab00024: ;
	hb_xvmSetLine( 1398 );
	hb_xvmPushFuncSymbol( symbols + 31 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlockHistory", 17 );
	if( hb_xvmArrayPush() ) break;
	{
		static const HB_BYTE codeblock[ 14 ] = {
			1, 0, 1, 0, 5, 0, 95, 1, 122, 1, 95, 255, 8, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 6 );
	hb_xvmSetLine( 1399 );
	hb_xvmPushLocal( 6 );
	if( hb_xvmGreaterThenIntIs( 0L, &fValue ) ) break;
	if( !fValue )
		goto lab00025;
	hb_xvmSetLine( 1401 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlockHistory", 17 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1402 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlockHistory", 17 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlock", 10 );
	if( hb_xvmArrayPop() ) break;
	goto lab00026;
lab00025: ;
	hb_xvmSetLine( 1405 );
	hb_xvmPushLocal( 5 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "userErrorBlock", 14 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1406 );
	{
		static const HB_BYTE codeblock[ 12 ] = {
			1, 0, 0, 0, 176, 88, 0, 95, 1, 12, 1, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlock", 10 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1407 );
	hb_xvmPushFuncSymbol( symbols + 70 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlockHistory", 17 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlock", 10 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushLocal( 5 );
	hb_xvmArrayGen( 2 );
	if( hb_xvmDo( 2 ) ) break;
lab00026: ;
	hb_xvmSetLine( 1409 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushLocal( 7 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 1410 );
	hb_xvmPushFuncSymbol( symbols + 94 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "errorBlock", 10 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmDo( 1 ) ) break;
lab00027: ;
	hb_xvmSetLine( 1413 );
	hb_xvmPushNil();
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "error", 5 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1414 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "inError", 7 );
	if( hb_xvmArrayPop() ) break;
	hb_xvmSetLine( 1415 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPushFuncSymbol( symbols + 37 );
	hb_xvmPushLocal( 7 );
	hb_xvmPushStringConst( "aStack", 6 );
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayPush() ) break;
	if( hb_xvmArrayItemPop( 3L ) ) break;
	hb_xvmSetLine( 1416 );
	hb_xvmPushFuncSymbol( symbols + 0 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 1417 );
	hb_xvmPushFuncSymbol( symbols + 26 );
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmDo( 1 ) ) break;
	goto lab00029;
lab00028: ;
	hb_xvmPushLocal( 1 );
	{
		PHB_ITEM pSwitch;
		HB_TYPE type;
		long lVal;
		if( hb_xvmSwitchGet( &pSwitch ) ) break;
		type = hb_itemType( pSwitch );
		lVal = ( type & HB_IT_NUMINT ) ? hb_itemGetNL( pSwitch ) : 0;

		if( ( type & HB_IT_NUMINT ) != 0 && lVal == 1L )
		{
			hb_stackPop();
			goto lab00002;
		}
		if( ( type & HB_IT_NUMINT ) != 0 && lVal == 2L )
		{
			hb_stackPop();
			goto lab00015;
		}
		if( ( type & HB_IT_NUMINT ) != 0 && lVal == 3L )
		{
			hb_stackPop();
			goto lab00017;
		}
		if( ( type & HB_IT_NUMINT ) != 0 && lVal == 4L )
		{
			hb_stackPop();
			goto lab00020;
		}
		if( ( type & HB_IT_NUMINT ) != 0 && lVal == 5L )
		{
			hb_stackPop();
			goto lab00023;
		}
		hb_stackPop();
	}
lab00029: ;
	hb_xvmSetLine( 1420 );
	/* *** END PROC *** */
   } while( 0 );
}

#line 1436 "vscode_debugger.prg"

#include <hbapi.h>
#include <hbstack.h>
//#include <hbvmint.h>
#include <hbapiitm.h>
#include <stdio.h>

#if defined( HB_OS_UNIX ) || defined( __DJGPP__ )
#  include <sys/types.h>
#  include <unistd.h>
#elif defined( HB_OS_WIN )
#  include <windows.h>
#elif defined( HB_OS_OS2 ) || defined( HB_OS_DOS )
#  include <process.h>
#endif

HB_FUNC( __GETLASTRETURN )
{
	PHB_ITEM pItem = hb_stackItemFromTop( -1-hb_parni(1) );
	hb_itemReturn( HB_IS_BYREF( pItem ) ? hb_itemUnRef( pItem ) : pItem );
}

static PHB_ITEM sDebugInfo = NULL;
HB_FUNC( __DEBUGITEM )
{
	if(!sDebugInfo)
	{
		sDebugInfo = hb_itemNew(0);
	}
	if(hb_pcount()>0)
	{
		hb_itemCopy(sDebugInfo, hb_param(1,HB_IT_ANY));
	}
	hb_itemReturn(sDebugInfo);
}

HB_FUNC( __PIDNUM )
{
#if defined( HB_OS_WIN_CE )
   hb_retni( 0 );
#elif defined( HB_OS_WIN )
   hb_retnint( GetCurrentProcessId() );
#elif ( defined( HB_OS_OS2 ) && defined( __GNUC__ ) )
   hb_retnint( _getpid() );
#else
   hb_retnint( getpid() );
#endif
}

#ifndef __XHARBOUR__
#if !defined( _HB_API_INTERNAL_ ) && !defined( _HB_STACK_MACROS_ )
extern HB_EXPORT HB_ISIZ     hb_stackGetRecoverBase( void );
#endif

HB_FUNC( ISBEGSEQ )
{
   hb_retl( hb_stackGetRecoverBase() != 0 );
}
#else

HB_FUNC( ISBEGSEQ )
{
#ifndef _HB_API_INTERNAL_
	hb_retl( HB_FALSE );
#else
   hb_retl( HB_VM_STACK.lRecoverBase!=0 );
#endif
}

#endif

#ifdef INAPACHE
#include <hbapicls.h>
HB_FUNC( __DBGSENDMSG )
{
   hb_dbg_objSendMessage( hb_parnl( 1 ), hb_param( 2, HB_IT_ANY ),
                          hb_param( 3, HB_IT_ANY ), 4 );
}
#endif

