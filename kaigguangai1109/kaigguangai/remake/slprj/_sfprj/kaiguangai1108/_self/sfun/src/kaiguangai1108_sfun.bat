@echo off
set COMPILER=cl 
				set COMPFLAGS=/c /GR /W3 /EHs /nologo /MD -I"D:\Program Files\MATLAB\R2016b\extern\include" -I"D:\Program Files\MATLAB\R2016b\simulink\include"  /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0   /DMATLAB_MEX_FILE /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0   /DMATLAB_MEX_FILE  /DMATLAB_MEX_FILE 
				set OPTIMFLAGS=/O2 /Oy- /DNDEBUG 
				set DEBUGFLAGS=/Z7 
				set LINKER=link 
				set LINKFLAGS= /nologo /manifest /incremental:NO /export:%ENTRYPOINT% /DLL /LIBPATH:"D:\Program Files\MATLAB\R2016b\extern\lib\win64\microsoft" libmx.lib libmex.lib libmat.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib  /EXPORT:mexFunction 
				set LINKDEBUGFLAGS=/debug /PDB:"%OUTDIR%%MEX_NAME%.mexw64.pdb" 
				set NAME_OUTPUT=/out:"%OUTDIR%%MEX_NAME%%MEX_EXT%"
set PATH=D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\Bin\amd64;D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\Bin\VCPackages;D:\Program Files (x86)\Microsoft Visual Studio 11.0\Common7\IDE;D:\Program Files (x86)\Microsoft Visual Studio 11.0\Common7\Tools;C:\Program Files (x86)\Windows Kits\8.0\\Bin\x64;C:\Program Files (x86)\Windows Kits\8.0\\Bin;;%MATLAB_BIN%;%PATH%
set INCLUDE=D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\ATLMFC\INCLUDE;D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\INCLUDE;C:\Program Files (x86)\Windows Kits\8.0\\include\shared;C:\Program Files (x86)\Windows Kits\8.0\\include\um;C:\Program Files (x86)\Windows Kits\8.0\\include\winrt;D:\Program Files\MATLAB\R2016b\extern\include;%INCLUDE%
set LIB=D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\Lib\amd64;C:\Program Files (x86)\Windows Kits\8.0\\Lib\X64;C:\Program Files (x86)\Windows Kits\8.0\\lib\win8\um\x64;D:\Program Files\MATLAB\R2016b\lib\win64;D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\ATLMFC\LIB\amd64;%LIB%
set LIBPATH=D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\Lib\amd64;D:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\ATLMFC\LIB\amd64;C:\Program Files (x86)\Windows Kits\8.0\\lib\win8\um\x64;D:\Program Files\MATLAB\R2016b\extern\lib\win64;;%LIBPATH%

nmake -f kaiguangai1108_sfun.mak
