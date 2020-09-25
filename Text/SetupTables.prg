//Copyright (c) 2020 Eric Lendvai MIT License

#include "fileio.ch"
#include "dbinfo.ch"
#include "hb_vfp.ch"

request DBFCDX
request DBFFPT
request HB_CODEPAGE_EN
//request HB_CODEPAGE_UTF8
//=================================================================================================================
function UpdateSchema()

local aTableSchema
local cTableName
local aTableStructure := {}
local aTableTags := {}
local aTag
local aStructureOnFile := {}
local lUpdateTableStructure := .f.
local aStructure
local nPos

//Field Structure = {FieldName,FieldType,FieldLength,FieldDec}
//Index Structure = {TagName,TagExpression,Unique,Order}

local aSchema := { ;
    {"CLIENT",{;
        {"KEY" ,"I:+",  4,0},;
        {"NAME","C"  ,180,0};
        },{;
        {"KEY" ,"KEY"        ,.f.,"A"},;
        {"TAG1","UPPER(NAME)",.f.,"A"};
        };
    },;
    {"INVOICE",{;
        {"KEY"     ,"I:+", 4,0},;
        {"P_CLIENT","I"  , 4,0},;
        {"NUMBER"  ,"C"  ,10,0};
        },{;
        {"KEY"   ,"KEY"   ,.f.,"A"},;
        {"NUMBER","NUMBER",.f.,"D"};
        };
    },;
    {"ITEM",{;
        {"KEY"      ,"I:+",  4,0},;
        {"P_INVOICE","I"  ,  4,0},;
        {"QTY"      ,"N"  ,  5,0},;
        {"DESC"     ,"C"  ,100,0};
        },{;
        {"KEY"   ,"KEY"   ,.f.,"A"};
        };
    };
}


// 2015-02-08 13:19 UTC+0100 Przemyslaw Czerpak (druzus/at/poczta.onet.pl)
// * src/rdd/workarea.c
//   + added support for field flags in dbCreate()/dbStruct().
//     Flags can be passed in string with field type after ":", i.e.
//        "C:U"
//     means Unicode character field.
//     The following flags are recognized:
//        "N" - column can store null values
//        "B" - binary column
//        "+" - column is autoincrementing
//        "Z" - column is compressed
//        "E" - column is encrypted
//        "U" - column stores Unicode strings


RddSetDefault("DBFCDX")
rddInfo( RDDI_TABLETYPE, DB_DBF_VFP )
Set(_SET_CODEPAGE,"EN")

//hb_DirBuild(oFcgi:PathData)

for each aTableSchema in aSchema
    cTableName      := lower(aTableSchema[1])
    aTableStructure := aTableSchema[2]
    aTableTags      := aTableSchema[3]

    select 0
    if !File(cTableName+".dbf")
        DbCreate(cTableName+".dbf",aTableStructure,"DBFCDX",nil,,,"EN")  //Have to use nil and not .F. to not keep the table open
        SetTableCodePageToEN(cTableName+".dbf")
    else
        //Compare file
        if dbUseArea(.t.,"DBFCDX", cTableName+".dbf", cTableName, .t., .t., "EN")  // Opened Shared and readonly
            aStructureOnFile := dbStruct()  // load current table structure in an array
    
            if !(lUpdateTableStructure := (len(aStructureOnFile) <> len(aTableStructure)))
                //Same number of Elements, Compare Arrays
                for each aStructure in aTableStructure
                    if (nPos := AScan(aStructureOnFile,{|aElement|aElement[1] == allt(aStructure[1])})) == 0
                        lUpdateTableStructure := .T.  //Did not find that column on file
                        exit
                    else
                        if aStructureOnFile[nPos,2] == "@"
                            aStructureOnFile[nPos,2] := "T"
                        endif
                        if (aStructureOnFile[nPos,2] <> aStructure[2]) .or. ;
                        (aStructureOnFile[nPos,3] <> aStructure[3]) .or. ;
                        (aStructureOnFile[nPos,4] <> aStructure[4])
                            lUpdateTableStructure := .t.
                            exit
                        endif
                    endif
                endfor
    
            endif
            
            dbCloseArea()
    
            if lUpdateTableStructure   // Create an new empty structure and import the data.
                select 0
                hb_FileDelete(cTableName+"_Conversion.*")
                DbCreate(cTableName+"_Conversion.dbf",aTableStructure,"DBFCDX",.t.,"Conversion",,"EN")  //Will keep open with alias "conversion"
                SetTableCodePageToEN(cTableName+"_Conversion.dbf")
                __dbApp(cTableName+".dbf", , , , , , ,"DBFCDX", ,"EN",)  //Append Records
                dbCloseArea()

                hb_FileDelete(cTableName+".cdx")
                hb_FileDelete(cTableName+".dbf")
                hb_FileDelete(cTableName+".ftp")

                if !hb_dbRename(cTableName+"_Conversion", , cTableName, "DBFCDX")
                    //Report it failed
                endif
    
            endif
    
        endif
    endif

    //Compare table structure
    if len(aTableTags) > 0
        if File(cTableName+".cdx")
            //_M_ compare tags
        else
            select 0
            if dbUseArea(.t.,"DBFCDX", cTableName+".dbf", cTableName, .f., .f., "EN")
                for each aTag in aTableTags
                    //ordCondSet( [<cForCondition>], [<bForCondition>], [<lAllRecords>], [<bWhileCondition>], [<bEval>], [<nInterval>], [<nStart>], [<nNext>], [<nRecord>], [<lRest>], [<lDescend>], [<reserved>], [<lAdditive>], [<lCurrent>], [<lCustom>], [<lNoOptimize>], [<cWhileCondition>], [<lTemporary>], [<lUseFilter>], [<lExclusive>]) 
                    ordCondSet(,,,,,,,,,, (upper(left(aTag[4],1)) == "D") ,,,,,,,,,)
                    ordCreate(cTableName+".cdx",aTag[1],aTag[2],,aTag[3])
                endfor
                dbCloseArea()
            endif
        endif
    endif

endfor

return nil
//=================================================================================================================
function SetTableCodePageToEN(par_TableFullPath)
local nFileHandle
//Mark Codepage flag as "EN"
nFileHandle := FOpen(par_TableFullPath)
if nFileHandle >= 0
    FSeek(nFileHandle,29)
    FWrite(nFileHandle,chr(1),1)
    FClose(nFileHandle)
endif
return nil
//=================================================================================================================
function OpenTable(par_cTableName,par_lShared,par_lReadOnly)
local lResult
(select(par_cTableName))->(dbCloseArea())
if (lResult := dbUseArea(.t.,"DBFCDX", par_cTableName+".dbf", par_cTableName, par_lShared, par_lReadOnly, "EN"))
    select (par_cTableName)
else
    select 0
endif
return lResult
//=================================================================================================================
