set MATLAB=C:\Program Files\MATLAB\R2006b
set MSVCDir=c:\program files\microsoft visual studio\vc98
set MSDevDir=c:\program files\microsoft visual studio\common\msdev98
"C:\Program Files\MATLAB\R2006b\rtw\bin\win32\envcheck" INCLUDE "c:\program files\microsoft visual studio\vc98\include"
if errorlevel 1 goto vcvars32
"C:\Program Files\MATLAB\R2006b\rtw\bin\win32\envcheck" PATH "c:\program files\microsoft visual studio\vc98\bin"
if errorlevel 1 goto vcvars32
goto make

:vcvars32
set VSCommonDir=c:\program files\microsoft visual studio\common
call "C:\Program Files\MATLAB\R2006b\toolbox\rtw\rtw\private\vcvars32_600.bat"

:make
cd .
nmake -f simpleCylinder1.mk  GENERATE_REPORT=0 ADD_MDL_NAME_TO_GLOBALS=1 EXT_MODE=1 VISUAL_VER=6.0
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
