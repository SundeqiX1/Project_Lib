call "D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\VCVARSALL.BAT" x86

call  "D:\Program Files\MATLAB\R2016b\bin\win64\checkMATLABRootForDriveMap.exe" "D:\Program Files\MATLAB" R2016b  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n

cd .
nmake -f untitled20210804.mk MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  EXT_MODE=1 ISPROTECTINGMODEL=NOTPROTECTING
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
