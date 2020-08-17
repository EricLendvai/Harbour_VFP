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
