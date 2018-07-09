@echo off
setlocal
set MYDIR=%~dp0
%MYDIR%..\epicsIOC\bin\%EPICS_HOST_ARCH%\MCGASim.exe
