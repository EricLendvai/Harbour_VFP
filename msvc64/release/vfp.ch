//Copyright (c) 2020 Eric Lendvai MIT License

#ifndef VFP_CH_
#define VFP_CH_

//#include "hbclass.ch"

#xcommand TRY => BEGIN SEQUENCE WITH __BreakBlock()
#xcommand CATCH [<!oErr!>] => RECOVER [USING <oErr>] <-oErr->
#xcommand FINALLY => ALWAYS
#xcommand ENDTRY => END
#xcommand ENDDO => END
#xcommand ENDFOR => END
#xcommand ENDCASE => END
#xcommand ENDWITH => END
#xcommand ENDIF => END
#xcommand ENDSWITCH => END
#xcommand ENDWHILE => END


//Find out how to make the xcommand case insensitive for VSCode
#xcommand try => BEGIN SEQUENCE WITH __BreakBlock()
#xcommand catch [<!oErr!>] => RECOVER [USING <oErr>] <-oErr->
#xcommand finally => ALWAYS
#xcommand endtry => END
#xcommand enddo => END
#xcommand endfor => END
#xcommand endwith => END
#xcommand endif => END
#xcommand endswitch => END
#xcommand endwhile => END

//Made more than one #translate to assist VSCODE. #translate and #xtranslate are case insensitive
#translate Allt(<x>)    => alltrim( <x> )
#translate allt(<x>)    => alltrim( <x> )

#translate Trans(<x>)   => alltrim( str(<x>,10) )

#xtranslate used(<cAlias>) => ((select(cAlias)>0))

#xtranslate inlist(<x,...>) => vfp_inlist(<x>)
#xtranslate between(<x>,<a>,<b>) => vfp_between(<x>,<a>,<b>)

//A common shortcut for end of line

#define CRLF chr(13)+chr(10)

//--------------------------------------------------------------------------------------------

#xcommand SCAN ALL [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.},{||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

#xcommand SCAN [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.},{||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//--------------------------------------------------------------------------------------------

#xcommand SCAN ALL WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.} , <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

#xcommand SCAN WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.} , <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//--------------------------------------------------------------------------------------------

#xcommand SCAN ALL FOR <for> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

#xcommand SCAN FOR <for> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//--------------------------------------------------------------------------------------------

#xcommand SCAN ALL FOR <for> WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

#xcommand SCAN FOR <for> WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//--------------------------------------------------------------------------------------------
                    
#command ENDSCAN => ENDDO;VFP_ScanStack("pop")

#xcommand TEXT TO VAR <var> => #pragma __stream|<var>:=%s
#xcommand ENDTEXT => #pragma __endtext


//The problem is that in VFP    <tablename>.<fieldname>      <objectname>.<property>         <objectname>.<method>()
//#xtranslate .<!PEM!> => :<PEM>
#translate  this.    => Self:
#xtranslate .null.   => NIL


#command SKIP [<npos>] IN <workarea>   => (<workarea>)->( dbSkip( <npos> ) )
#command UNLOCK IN <workarea>          => (<workarea>)->( dbUnlock() )
#command GO TOP IN <workarea>          => (<workarea>)->( dbGoTop() )
#command GO BOTTOM IN <workarea>       => (<workarea>)->( dbGoBottom() )
#command GOTO <nRecno> IN <workarea>   => (<workarea>)->( dbGoto( <nRecno> ) )


#xcommand VarType(<varname>) => ValType(<varname>)

#xcommand endproc => return NIL

//Test the following
#xcommand use in select(<workarea>)  => (<workarea>)->(dbCloseArea())

//_M_  Make strtran(...)  use the vfp_strtran(...)   not 
#xtranslate strtran(<params,...>) => vfp_strtran(<params>)

#endif /* VFP_CH_ */

