//Copyright (c) 2023 Eric Lendvai, MIT License

#include "fileio.ch"
#include "dbinfo.ch"

//#include "hb_vfp.ch"   // Linker would crash of this was enabled.


// #define DEVELOPMENTMODE
// #ifdef DEVELOPMENTMODE
// #endif

//=================================================================================================================
// function  hb_vfp_SendToClipboard(cText)   //_CLIPTEXT = 
//     wvt_SetClipboard(cText)
// return .T.
//=================================================================================================================
//=================================================================================================================
function VFP_GetCompatibilityPackVersion()
return 3.5
//=================================================================================================================
//The VFP_ScanStack is to be used in conjuntion with the "#command SCAN" and "#command ENDSCAN"
function VFP_ScanStack(par_action)    //action = "push" "pop" "scan" , "clear" (empty the entire stack)
local l_xResult := nil
static iTop   := 0
static aStack := {}     //Will hold an array [WorkArea,.t. if first loop]

hb_default( @par_action, "scan" )

switch par_action
    case "push"
        iTop++
        if len(aStack) < iTop
            ASize( aStack, iTop )
        endif
        aStack[iTop] := {select(),.t.} // Record the current work area and flag to know during "scan" calls if they are going to be the initial "locate" or should be "continue"
        l_xResult := nil
        exit
    case "pop"
        iTop--
        //No need to reduce the size of aStack since will most likely be increased again
        exit
    case "clear"
        iTop   := 0
        ASize( aStack, 0 )
        exit
    otherwise
        select (aStack[iTop,1])
        l_xResult := aStack[iTop,2]
        aStack[iTop,2] := .f.
        exit
endswitch

return l_xResult
//=================================================================================================================
function VFP_StrToFile(par_cExpression,par_cFileName,par_lAdditive)   //Partial implementation of VFP9's strtran(). The 3rd parameter only supports a logical

local l_lAdditive
local l_nBytesWritten := 0
local l_nFileHandle

l_lAdditive := hb_defaultValue(par_lAdditive,.f.)

if hb_FileExists(par_cFileName)
    if l_lAdditive
        l_nFileHandle := FOpen(par_cFileName,FO_WRITE)
        FSeek(l_nFileHandle,0,FS_END)  // go to the end of file
    else
        if ferase(par_cFileName) == 0
            l_nFileHandle := FCreate(par_cFileName)
        else
            l_nFileHandle := -1
        endif
    endif
else
    l_nFileHandle := FCreate(par_cFileName)
endif

if l_nFileHandle >= 0
    l_nBytesWritten := fwrite(l_nFileHandle,par_cExpression)
    fclose(l_nFileHandle)
endif

return l_nBytesWritten
//=================================================================================================================
function VFP_dbf(par_xalias)

//Sadly will only return the file name, not the fullpath

//Notes for future solution to get the file name with the path
//Following Will return the file handle instead
hb_vfp_SendToDebugView("Table File Handle",(par_xalias)->(DbInfo(DBI_FILEHANDLE)))
// See https://docs.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-getfinalpathnamebyhandlea
// See https://docs.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-getfinalpathnamebyhandlew
// See c:\harbour\src\rtl\fslink.c for example code for Windows api call

return (par_xalias)->(DbInfo(DBI_FULLPATH))   //Does not include the fullpath!
//=================================================================================================================
//=================================================================================================================
function hb_vfp_SendToDebugView(par_cStep,par_xValue)
local l_cTypeOfxValue
local l_cValue := "Unknown Value"

l_cTypeOfxValue := ValType(par_xValue)

do case
case pcount() < 2
    l_cValue := ""
case l_cTypeOfxValue $ "AH" // Array or Hash
    l_cValue := hb_ValToExp(par_xValue)
case l_cTypeOfxValue == "B" // Block
    //Not coded yet
case l_cTypeOfxValue == "C" // Character (string)
    l_cValue := par_xValue
    //Not coded yet
case l_cTypeOfxValue == "D" // Date
    l_cValue := DTOC(par_xValue)
case l_cTypeOfxValue == "L" // Logical
    l_cValue := IIF(par_xValue,"True","False")
case l_cTypeOfxValue == "M" // Memo
    //Not coded yet
case l_cTypeOfxValue == "N" // Numeric
    l_cValue := alltrim(str(par_xValue))
case l_cTypeOfxValue == "O" // Object
    //Not coded yet
case l_cTypeOfxValue == "P" // Pointer
    //Not coded yet
case l_cTypeOfxValue == "S" // Symbol
    //Not coded yet
case l_cTypeOfxValue == "U" // NIL
    l_cValue := "Null"
endcase

if empty(l_cValue)
    hb_vfp_OutputDebugString("[Harbour] VFP "+par_cStep)
else
    hb_vfp_OutputDebugString("[Harbour] VFP "+par_cStep+" - "+l_cValue)
endif

return .T.
//=================================================================================================================
function hb_vfp_buildinfo()
#include "BuildInfo.txt"
return l_cBuildInfo
//=================================================================================================================

