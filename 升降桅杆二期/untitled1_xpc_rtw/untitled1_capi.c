/*
 * untitled1_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "untitled1.mdl".
 *
 * Model version              : 1.6
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Nov 22 17:31:02 2021
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled1.h"
#include "rtw_capi.h"
#include "untitled1_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Data Type Conversion",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 2, 0, "Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 3, 0, "Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 6, 0, "Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 7, 0, "Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 8, 0, "phase",
    "", 0, 1, 0, 0, 0 },

  { 9, 0, "position",
    "", 0, 1, 0, 0, 0 },

  { 10, 0, "position2",
    "", 0, 1, 0, 0, 0 },

  { 11, 0, "Serial Receive",
    "", 0, 0, 1, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 12, "Constant",
    "Value", 1, 0, 0 },

  { 13, "Constant1",
    "Value", 1, 0, 0 },

  { 14, "Constant2",
    "Value", 1, 0, 0 },

  { 15, "Constant3",
    "Value", 1, 0, 0 },

  { 16, "Constant4",
    "Value", 1, 0, 0 },

  { 17, "Constant5",
    "Value", 1, 0, 0 },

  { 18, "Constant6",
    "Value", 1, 0, 0 },

  { 19, "Constant7",
    "Value", 1, 0, 0 },

  { 20, "Constant8",
    "Value", 1, 0, 0 },

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
  &untitled1_B.DataTypeConversion,     /* 0: Signal */
  &untitled1_B.DataTypeConversion1,    /* 1: Signal */
  &untitled1_B.DataTypeConversion2,    /* 2: Signal */
  &untitled1_B.DataTypeConversion3,    /* 3: Signal */
  &untitled1_B.DataTypeConversion4,    /* 4: Signal */
  &untitled1_B.DataTypeConversion5,    /* 5: Signal */
  &untitled1_B.DataTypeConversion6,    /* 6: Signal */
  &untitled1_B.DataTypeConversion7,    /* 7: Signal */
  &untitled1_B.phase,                  /* 8: Signal */
  &untitled1_B.position,               /* 9: Signal */
  &untitled1_B.position2,              /* 10: Signal */
  &untitled1_B.SerialReceive[0],       /* 11: Signal */
  &untitled1_P.Constant_Value,         /* 12: Block Parameter */
  &untitled1_P.Constant1_Value,        /* 13: Block Parameter */
  &untitled1_P.Constant2_Value,        /* 14: Block Parameter */
  &untitled1_P.Constant3_Value,        /* 15: Block Parameter */
  &untitled1_P.Constant4_Value,        /* 16: Block Parameter */
  &untitled1_P.Constant5_Value,        /* 17: Block Parameter */
  &untitled1_P.Constant6_Value,        /* 18: Block Parameter */
  &untitled1_P.Constant7_Value,        /* 19: Block Parameter */
  &untitled1_P.Constant8_Value         /* 20: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

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
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 2, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  2                                    /* 3 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.2, 0.0
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
    1, 0 }
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
  { rtBlockSignals, 12 },

  { rtBlockParameters, 9,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void untitled1_InitializeDataMapInfo(rtModel_untitled1 *untitled1_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(untitled1_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(untitled1_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(untitled1_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(untitled1_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(untitled1_rtM->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(untitled1_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(untitled1_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(untitled1_rtM->DataMapInfo.mmi, 0);
}

/* EOF: untitled1_capi.c */
