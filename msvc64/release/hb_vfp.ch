//Copyright (c) 2021 Eric Lendvai MIT License

#ifndef HB_VFP_CH_
#define HB_VFP_CH_

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
#translate Allt( <x> )    => alltrim( <x> )
#translate allt( <x> )    => alltrim( <x> )

#translate Trans( <x> )   => alltrim( str(<x>,10) )

//enhances the used() harbour function to support a parameter.
#xtranslate used( <cAlias> ) => ((select( <cAlias> ) > 0))

//A common shortcut for end of line
#ifndef CRLF
#define CRLF chr(13)+chr(10)
#endif

//--------------------------------------------------------------------------------------------

#xcommand SCAN ALL [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.}, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

#xcommand SCAN [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.}, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//--------------------------------------------------------------------------------------------
// #xcommand SCAN ALL WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
//             dbGoTop(); VFP_ScanStack("push") ;;
//             do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.}, <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(dbskip()) .and. hb_isnil(__dbContinue()) .and. Found() .and. !eof())

// #xcommand SCAN WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
//             VFP_ScanStack("push") ;;
//             do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.}, <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(dbskip()) .and. hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//Buggy WHILE, so added a using the eval({||<while>})

#xcommand SCAN ALL WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.}, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof() .and. eval({||<while>}),hb_isnil(__dbContinue()) .and. Found() .and. !eof() .and. eval({||<while>}))

#xcommand SCAN WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate({||.T.}, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof() .and. eval({||<while>}),hb_isnil(__dbContinue()) .and. Found() .and. !eof() .and. eval({||<while>}))


//--------------------------------------------------------------------------------------------

#xcommand SCAN ALL FOR <for> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

#xcommand SCAN FOR <for> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, {||.T.}, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//--------------------------------------------------------------------------------------------
//Did not test this att all. Most likely buggy due to the WHILE
#xcommand SCAN ALL FOR <for> WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            dbGoTop(); VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

#xcommand SCAN FOR <for> WHILE <while> [NEXT <next>] [RECORD <rec>] [<rest:REST>] [NOOPTIMIZE] => ;
            VFP_ScanStack("push") ;;
            do while iif(VFP_ScanStack(),hb_isnil(__dbLocate( <{for}>, <{while}>, <next>, <rec>, <.rest.> )) .and. Found() .and. !eof(),hb_isnil(__dbContinue()) .and. Found() .and. !eof())

//--------------------------------------------------------------------------------------------

#command ENDSCAN => ENDDO;VFP_ScanStack("pop")

//See https://github.com/dmajkic/harbour-core/blob/master/doc/pragma.txt
#xcommand TEXT TO VAR <var> => #pragma __stream|<var>:=%s
#xcommand ENDTEXT => #pragma __endtext


//The problem is that in VFP    <tablename>.<fieldname>      <objectname>.<property>         <objectname>.<method>()
//#xtranslate .<!PEM!> => :<PEM>


#translate  this.    => Self:
#xtranslate .null.   => NIL

#command CD <(path)> => hb_cwd(<(path)>)

//https://groups.google.com/forum/#!topic/harbour-devel/FfZhqda6x1E
#xcommand DEFAULT <v1> TO <x1> [, <vn> TO <xn> ] => hb_default( @<v1>, <x1> ) [; hb_default( @<vn>, <xn> ) ]
#xcommand DEFAULT <v1> := <x1> [, <vn> := <xn> ] => hb_default( @<v1>, <x1> ) [; hb_default( @<vn>, <xn> ) ]

#endif /* HB_VFP_CH_ */

