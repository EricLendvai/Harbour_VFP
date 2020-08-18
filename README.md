# Harbour_VFP
Partial Compatibly For VFP 9 in Harbour
This is a work in progress and will focus on adding support for PRGs functions and commands.
Many features in Harbour are driven by the fact that Harbour is not only a compiler but has a very powerful a pre-compiler.
There are many similarities between VFP and Harbour, but in some area, like arrays, Harbour has more flexibility and power than VFP.
On the other hand, VFP is a superior for Graphical User Interface features, including visual inheritance for forms and classes, but only in Windows 32-bits apps.
Please go to https://harbour.wiki for articles, documentation and message board search engine.

Ensure you add the library file into your executables, for example mingw64\release\libhb_vfp.a, msvc64\release\hb_vfp.lib

To add VFP functionality to Harbour without interfering with Harbour syntax (functions) add:
#include "hb_vfp.ch"

To have VFP functionality overwrite Harbour functions and behavior:
#include "vfp.ch"

This repo is relying on VSCODE for calling the BuildLIB.bat Batch file under Microsoft Windows 10.
Ensure you change any path to your local install location. An easy way to locate any path, search for "R:\\"

-------------------------------------------------------------------------------------------------------------------------------

Review the test.prg file in the Test folder to see the SCAN ... ENDSCAN in action. 
This is NOT the same behaviour as in the hbfoxpro contrib!
The SCAN ... ENDSCAN commands behaves as documented in https://harbour.wiki/index.asp?page=ShowVFPHelp&ID=3741
One of the most important features of the SCAN command is that the workarea is always reset to the one before entering the loop.
The LOOP command will execute the closest SCAN command.
The EXIT command will exit the most inner SCAN ... ENDSCAN and not reset the workarea.

In the following example, we have a list of clients, with related invoices, which in turn have related items.
The example show how simple it is to use three nested SCAN ... ENDSCAN loops.

```
select client
scan all
    ?"Client: "+Trim(client->name)
    select invoice
    scan all for invoice->p_client == client->key
        ?"  Invoice #: "+Trim(invoice->number)
        select item
        scan all for item->p_invoice == invoice->key
            if item->qty > 30
                select client  //This line will have no effect, since the "scan" will be executed, the workarea with switch back to "item"
                loop
            endif
            ?"    Item Qty/Description: "+Ltrim(str(item->qty))+" - "+Trim(item->desc)
        endscan
    endscan
endscan
```
