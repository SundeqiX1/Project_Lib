/*
 * luoji1_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "luoji1.mdl".
 *
 * Model version              : 1.3
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Jun 01 16:00:29 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "luoji1.h"
#include "rtw_capi.h"
#include "luoji1_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 1, "Chart/p1",
    "a", 0, 0, 0, 0, 0 },

  { 1, 1, "Chart/p2",
    "shengqidaowei", 1, 0, 0, 0, 0 },

  { 2, 1, "Chart/p3",
    "huiluodaowei", 2, 0, 0, 0, 0 },

  { 3, 1, "Chart/p4",
    "fanzhuanfudaowei", 3, 0, 0, 0, 0 },

  { 4, 1, "Chart/p5",
    "fanzhuanyangdaowei", 4, 0, 0, 0, 0 },

  { 5, 1, "Chart/p6",
    "dangbanzhangkaidaowei", 5, 0, 0, 0, 0 },

  { 6, 1, "Chart/p7",
    "dangbanhelongdaowei", 6, 0, 0, 0, 0 },

  { 7, 0, "Constant",
    "", 0, 0, 0, 0, 0 },

  { 8, 0, "Constant1",
    "", 0, 0, 0, 0, 0 },

  { 9, 0, "Constant2",
    "", 0, 0, 0, 0, 0 },

  { 10, 0, "Constant3",
    "", 0, 0, 0, 0, 0 },

  { 11, 0, "Constant4",
    "", 0, 0, 0, 0, 0 },

  { 12, 0, "Constant5",
    "", 0, 0, 0, 0, 0 },

  { 13, 0, "Constant6",
    "", 0, 0, 0, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 14, "Constant",
    "Value", 0, 0, 0 },

  { 15, "Constant1",
    "Value", 0, 0, 0 },

  { 16, "Constant2",
    "Value", 0, 0, 0 },

  { 17, "Constant3",
    "Value", 0, 0, 0 },

  { 18, "Constant4",
    "Value", 0, 0, 0 },

  { 19, "Constant5",
    "Value", 0, 0, 0 },

  { 20, "Constant6",
    "Value", 0, 0, 0 },

  {
    0, NULL, NULL, 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, NULL, 0, 0, 0 }
};

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &luoji1_B.a,                         /* 0: Signal */
  &luoji1_B.shengqidaowei,             /* 1: Signal */
  &luoji1_B.huiluodaowei,              /* 2: Signal */
  &luoji1_B.fanzhuanfudaowei,          /* 3: Signal */
  &luoji1_B.fanzhuanyangdaowei,        /* 4: Signal */
  &luoji1_B.dangbanzhangkaidaowei,     /* 5: Signal */
  &luoji1_B.dangbanhelongdaowei,       /* 6: Signal */
  &luoji1_B.Constant,                  /* 7: Signal */
  &luoji1_B.Constant1,                 /* 8: Signal */
  &luoji1_B.Constant2,                 /* 9: Signal */
  &luoji1_B.Constant3,                 /* 10: Signal */
  &luoji1_B.Constant4,                 /* 11: Signal */
  &luoji1_B.Constant5,                 /* 12: Signal */
  &luoji1_B.Constant6,                 /* 13: Signal */
  &luoji1_P.Constant_Value,            /* 14: Block Parameter */
  &luoji1_P.Constant1_Value,           /* 15: Block Parameter */
  &luoji1_P.Constant2_Value,           /* 16: Block Parameter */
  &luoji1_P.Constant3_Value,           /* 17: Block Parameter */
  &luoji1_P.Constant4_Value,           /* 18: Block Parameter */
  &luoji1_P.Constant5_Value,           /* 19: Block Parameter */
  &luoji1_P.Constant6_Value            /* 20: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 }
};

/* Structure Element Map - use elemMapIndex to access this structure */
static const rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { NULL, 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1                                    /* 1 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 14 },

  { rtBlockParameters, 7,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void luoji1_InitializeDataMapInfo(rtModel_luoji1 *luoji1_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(luoji1_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(luoji1_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(luoji1_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(luoji1_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(luoji1_rtM->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(luoji1_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(luoji1_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(luoji1_rtM->DataMapInfo.mmi, 0);
}

/* EOF: luoji1_capi.c */
