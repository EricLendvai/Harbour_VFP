# Harbour VFP - Change Log

## 04/08/2023 v 3.4
* Changed Dockerfiles of devcontainers to work around git install failure introduced around April 2023.

## 02/15/2023 v 3.4
* Simplified distribution of library by generating hb_vfp.hbc file.

## 01/29/2023 v 3.3
* New function el_GetProcessID(), compatible under Windows and Linux. Equivalent to "_VFP.ProcessID".

## 01/03/2023 v 3.2
* Fixed issue with devcontainer builds
* Updated devcontainer to use ubuntu:22.04
* Location of Harbour install in devcontainer is now /src/harbour
* Added this ChangeLog.md file