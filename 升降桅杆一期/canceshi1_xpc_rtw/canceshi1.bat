set MATLAB=C:\matlab2010b
set MSVCDir=c:\program files (x86)\microsoft visual studio\vc98

set MSDevDir=c:\program files (x86)\microsoft visual studio\common\msdev98
"C:\matlab2010b\rtw\bin\win32\envcheck" INCLUDE "c:\program files (x86)\microsoft visual studio\vc98\include"
if errorlevel 1 goto vcvars32
"C:\matlab2010b\rtw\bin\win32\envcheck" PATH "c:\program files (x86)\microsoft visual studio\vc98\bin"
if errorlevel 1 goto vcvars32
goto make

:vcvars32
set VSCommonDir=c:\program files (x86)\microsoft visual studio\common
call "C:\matlab2010b\toolbox\rtw\rtw\private\vcvars32_600.bat"

:make
cd .
nmake -f canceshi1.mk  GENERATE_REPORT=0 EXT_MODE=1
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
