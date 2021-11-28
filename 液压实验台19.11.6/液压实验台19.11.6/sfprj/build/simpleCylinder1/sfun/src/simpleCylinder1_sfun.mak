# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


!include <ntwin32.mak>

MACHINE     = simpleCylinder1
TARGET      = sfun
CHART_SRCS 	= \
		c1_simpleCylinder1.c
MACHINE_SRC	= simpleCylinder1_sfun.c
MACHINE_REG = simpleCylinder1_sfun_registry.c
MEX_WRAPPER =
MAKEFILE    = simpleCylinder1_sfun.mak
MATLAB_ROOT	= c:\program files\matlab\r2006b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "c:\users\administrator\desktop\液压实验台11.16\sfprj\build\simplecylinder1\sfun\src" /I "c:\users\administrator\desktop\液压实验台11.16"
ML_INCLUDES     = /I "$(MATLAB_ROOT)\extern\include"
SL_INCLUDES     = /I "$(MATLAB_ROOT)\simulink\include"
SF_INCLUDES     = /I "c:\program files\matlab\r2006b\stateflow\c\mex\include" /I "c:\program files\matlab\r2006b\stateflow\c\debugger\include"

DSP_INCLUDES    = /I "c:\program files\matlab\r2006b\toolbox\eml\lib\dsp"

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

INCLUDE_PATH = $(USER_INCLUDES) $(ML_INCLUDES) $(SL_INCLUDES) $(SF_INCLUDES) $(DSP_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = $(COMPFLAGS) /MD
LDFLAGS = /nologo /dll /OPT:NOREF /export:mexFunction

#----------------------------- Source Files -----------------------------------

REQ_SRCS  = $(MACHINE_SRC) $(MACHINE_REG) $(MEX_WRAPPER) $(CHART_SRCS)

USER_ABS_OBJS =

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS)
OBJLIST_FILE = simpleCylinder1_sfun.mol
SFCLIB = "c:\program files\matlab\r2006b\stateflow\c\mex\lib\win32\sfc_mexmsvc.lib" "c:\program files\matlab\r2006b\stateflow\c\debugger\lib\win32\sfc_debugmsvc.lib"
USER_LIBS =
LINK_MACHINE_LIBS =

DSP_LIBS    = "c:\program files\matlab\r2006b\toolbox\dspblks\lib\win32\dsp_dyn_rt_vc.lib"

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MACHINE)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw32
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

MEXLIB = "C:\Program Files\MATLAB\R2006b\extern\lib\win32\microsoft\libmx.lib" "C:\Program Files\MATLAB\R2006b\extern\lib\win32\microsoft\libmex.lib" "C:\Program Files\MATLAB\R2006b\extern\lib\win32\microsoft\libmat.lib" "C:\Program Files\MATLAB\R2006b\extern\lib\win32\microsoft\libfixedpoint.lib" "C:\Program Files\MATLAB\R2006b\extern\lib\win32\microsoft\libut.lib"

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(USER_LIBS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(USER_LIBS) $(SFCLIB) $(MEXLIB) $(LINK_MACHINE_LIBS) $(DSP_LIBS) @$(OBJLIST_FILE)
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

