//Copyright (c) 2020 Eric Lendvai MIT License

#include "fileio.ch"
#include "dbinfo.ch"

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
// altd()
return 1.3
//=================================================================================================================
//The VFP_ScanStack is to be used in conjuntion with the "#command SCAN" and "#command ENDSCAN"
function VFP_ScanStack(par_action)    //action = "push" "pop" "scan" , "clear" (empty the entire stack)
local xResult := nil
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
        xResult := nil
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
        xResult := aStack[iTop,2]
        aStack[iTop,2] := .f.
        exit
endswitch

return xResult
//=================================================================================================================
function VFP_StrToFile(par_cExpression,par_cFileName,par_lAdditive)   //Partial implementation of VFP9's strtran(). The 3rd parameter only supports a logical

local lAdditive
local nBytesWritten := 0
local nFileHandle

lAdditive := hb_defaultValue(par_lAdditive,.f.)

if hb_FileExists(par_cFileName)
    if lAdditive
        nFileHandle := FOpen(par_cFileName,FO_WRITE)
        FSeek(nFileHandle,0,FS_END)  // go to the end of file
    else
        if ferase(par_cFileName) == 0
            nFileHandle := FCreate(par_cFileName)
        else
            nFileHandle := -1
        endif
    endif
else
    nFileHandle := FCreate(par_cFileName)
endif

if nFileHandle >= 0
    nBytesWritten := fwrite(nFileHandle,par_cExpression)
    fclose(nFileHandle)
endif

return nBytesWritten
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
function hb_vfp_SendToDebugView(cStep,xValue)
    local cTypeOfxValue
    local cValue := "Unknown Value"
    
    cTypeOfxValue := ValType(xValue)
    
    do case
    case pcount() < 2
        cValue := ""
    case cTypeOfxValue $ "AH" // Array or Hash
        cValue := hb_ValToExp(xValue)
    case cTypeOfxValue == "B" // Block
        //Not coded yet
    case cTypeOfxValue == "C" // Character (string)
        cValue := xValue
        //Not coded yet
    case cTypeOfxValue == "D" // Date
        cValue := DTOC(xValue)
    case cTypeOfxValue == "L" // Logical
        cValue := IIF(xValue,"True","False")
    case cTypeOfxValue == "M" // Memo
        //Not coded yet
    case cTypeOfxValue == "N" // Numeric
        cValue := alltrim(str(xValue))
    case cTypeOfxValue == "O" // Object
        //Not coded yet
    case cTypeOfxValue == "P" // Pointer
        //Not coded yet
    case cTypeOfxValue == "S" // Symbol
        //Not coded yet
    case cTypeOfxValue == "U" // NIL
        cValue := "Null"
    endcase
    
    if empty(cValue)
        hb_vfp_OutputDebugString("[Harbour] VFP "+cStep)
    else
        hb_vfp_OutputDebugString("[Harbour] VFP "+cStep+" - "+cValue)
    endif
    
return .T.
//=================================================================================================================
