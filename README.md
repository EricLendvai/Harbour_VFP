# Harbour_VFP

THIS REPO IS NO LONGER BEING MAINTAINED.   

For future enhancements use the Harbour_EL Repo instead. Since Microsoft announced the discontinuation of Visual FoxPro in 2007.   
The new Harbour_EL repo will focus on extending features when missing, instead of simply being different than VFP.    
Harbour_EL, which stands to "Extended Library" can be used for Web and Desktop applications.

## About this project
Partial Compatibly For VFP 9 in Harbour.

View [ChangeLog.md](ChangeLog.md) for list of enhancements and fixes.

## Warnings
This is a work in progress and will focus on adding support for PRGs functions and commands.

Many features in Harbour are driven by the fact that Harbour is not only a compiler but has a very powerful a pre-compiler.

There are many similarities between VFP and Harbour, but in some area, like arrays, Harbour has more flexibility and power than VFP.

On the other hand, VFP is a superior for Graphical User Interface features, including visual inheritance for forms and classes, but only in Windows 32-bits apps.

The Test folder currently only has one example: hb_vfp_Test.code-workspace (open with VSCODE)

Please go to https://harbour.wiki for articles, documentation and message board search engine.

## Development Note
When changing the version, update the files hb_vfp.ch, vfp.ch, hb_vfp.prg (VFP_GetCompatibilityPackVersion()).
