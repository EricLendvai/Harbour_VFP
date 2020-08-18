//Copyright (c) 2020 Eric Lendvai MIT License

#include "fileio.ch"

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
altd()
return 1.3
//=================================================================================================================
//The VFP_ScanStack is to be used in conjuntion with the "#command SCAN" and "#command ENDSCAN"
function VFP_ScanStack(par_action)    //action = "push" "pop" "scan" , "clear" (empty the entire stack)
local xResult := nil
static iTop   := 0
static aStack := {}

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
//=================================================================================================================
