# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = kaiguangai1108
TARGET      = sfun
MODULE_SRCS   = c1_kaiguangai1108.c c2_kaiguangai1108.c c3_kaiguangai1108.c c4_kaiguangai1108.c c5_kaiguangai1108.c c6_kaiguangai1108.c c7_kaiguangai1108.c c8_kaiguangai1108.c c9_kaiguangai1108.c c10_kaiguangai1108.c c11_kaiguangai1108.c c12_kaiguangai1108.c c13_kaiguangai1108.c c14_kaiguangai1108.c c15_kaiguangai1108.c c16_kaiguangai1108.c c17_kaiguangai1108.c c18_kaiguangai1108.c c19_kaiguangai1108.c c20_kaiguangai1108.c c21_kaiguangai1108.c c22_kaiguangai1108.c c23_kaiguangai1108.c c24_kaiguangai1108.c c26_kaiguangai1108.c c27_kaiguangai1108.c
MODEL_SRC  = kaiguangai1108_sfun.c
MODEL_REG = kaiguangai1108_sfun_registry.c
MAKEFILE    = kaiguangai1108_sfun.mak
MATLAB_ROOT  = D:\Program Files\MATLAB\R2016b
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

USER_INCLUDES   = 
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "D:\Program Files\MATLAB\R2016b\extern\include" \
    /I "D:\Program Files\MATLAB\R2016b\simulink\include" \
    /I "D:\Program Files\MATLAB\R2016b\simulink\include\sf_runtime" \
    /I "D:\Program Files\MATLAB\R2016b\stateflow\c\mex\include" \
    /I "D:\Program Files\MATLAB\R2016b\rtw\c\src" \
    /I "C:\Users\zczg\Desktop\kaigguangai\remake\slprj\_sfprj\kaiguangai1108\_self\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_ABS_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS =

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = kaiguangai1108_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
 @echo ### Linking ...
 $(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map"\
  $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS)\
  $(DSP_LIBS) $(THIRD_PARTY_LIBS)\
  @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


