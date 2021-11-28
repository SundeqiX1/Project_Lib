/*
 * Copy_of_canceshi_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "Copy_of_canceshi.mdl".
 *
 * Model version              : 1.12
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Fri May 29 10:29:21 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Copy_of_canceshi.h"
#include "rtw_capi.h"
#include "Copy_of_canceshi_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 2, 0, "3402Receive ",
    "", 0, 1, 0, 0, 0 },

  { 3, 0, "CAN bit-packing 4",
    "", 0, 1, 0, 0, 0 },

  { 4, 0, "CAN bit-unpacking 4/p1",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "CAN bit-unpacking 4/p2",
    "", 1, 0, 0, 0, 0 },

  { 6, 0, "CAN bit-unpacking 4/p3",
    "", 2, 0, 0, 0, 0 },

  { 7, 0, "CAN bit-unpacking 4/p4",
    "", 3, 0, 0, 0, 0 },

  { 8, 0, "CAN bit-unpacking 4/p5",
    "", 4, 0, 0, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 9, "constant6",
    "Value", 1, 0, 0 },

  { 10, "constant9",
    "Value", 1, 0, 0 },

  { 11, "Setup ",
    "P1", 1, 1, 0 },

  { 12, "Setup ",
    "P2", 1, 1, 0 },

  { 13, "Setup ",
    "P5", 1, 0, 0 },

  { 14, "Setup ",
    "P6", 1, 0, 0 },

  { 15, "Setup ",
    "P13", 1, 0, 0 },

  { 16, "Setup ",
    "P15", 1, 0, 0 },

  { 17, "Setup ",
    "P16", 1, 0, 0 },

  { 18, "Setup ",
    "P17", 1, 0, 0 },

  { 19, "Setup ",
    "P18", 1, 0, 0 },

  { 20, "Setup ",
    "P19", 1, 0, 0 },

  { 21, "Setup ",
    "P20", 1, 0, 0 },

  { 22, "Setup ",
    "P21", 1, 0, 0 },

  { 23, "Setup ",
    "P22", 1, 0, 0 },

  { 24, "Setup ",
    "P23", 1, 0, 0 },

  { 25, "Setup ",
    "P24", 1, 0, 0 },

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
  &Copy_of_canceshi_B.DataTypeConversion12,/* 0: Signal */
  &Copy_of_canceshi_B.DataTypeConversion13,/* 1: Signal */
  &Copy_of_canceshi_B.u02Receive,      /* 2: Signal */
  &Copy_of_canceshi_B.CANbitpacking4,  /* 3: Signal */
  &Copy_of_canceshi_B.CANbitunpacking4_o1,/* 4: Signal */
  &Copy_of_canceshi_B.CANbitunpacking4_o2,/* 5: Signal */
  &Copy_of_canceshi_B.CANbitunpacking4_o3,/* 6: Signal */
  &Copy_of_canceshi_B.CANbitunpacking4_o4,/* 7: Signal */
  &Copy_of_canceshi_B.CANbitunpacking4_o5,/* 8: Signal */
  &Copy_of_canceshi_P.constant6_Value, /* 9: Block Parameter */
  &Copy_of_canceshi_P.constant9_Value, /* 10: Block Parameter */
  &Copy_of_canceshi_P.Setup_P1[0],     /* 11: Block Parameter */
  &Copy_of_canceshi_P.Setup_P2[0],     /* 12: Block Parameter */
  &Copy_of_canceshi_P.Setup_P5,        /* 13: Block Parameter */
  &Copy_of_canceshi_P.Setup_P6,        /* 14: Block Parameter */
  &Copy_of_canceshi_P.Setup_P13,       /* 15: Block Parameter */
  &Copy_of_canceshi_P.Setup_P15,       /* 16: Block Parameter */
  &Copy_of_canceshi_P.Setup_P16,       /* 17: Block Parameter */
  &Copy_of_canceshi_P.Setup_P17,       /* 18: Block Parameter */
  &Copy_of_canceshi_P.Setup_P18,       /* 19: Block Parameter */
  &Copy_of_canceshi_P.Setup_P19,       /* 20: Block Parameter */
  &Copy_of_canceshi_P.Setup_P20,       /* 21: Block Parameter */
  &Copy_of_canceshi_P.Setup_P21,       /* 22: Block Parameter */
  &Copy_of_canceshi_P.Setup_P22,       /* 23: Block Parameter */
  &Copy_of_canceshi_P.Setup_P23,       /* 24: Block Parameter */
  &Copy_of_canceshi_P.Setup_P24        /* 25: Block Parameter */
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

  { rtwCAPI_VECTOR, 2, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  4                                    /* 3 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.1, 0.0
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
  { rtBlockSignals, 9 },

  { rtBlockParameters, 17,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void Copy_of_canceshi_InitializeDataMapInfo(rtModel_Copy_of_canceshi
  *Copy_of_canceshi_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Copy_of_canceshi_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Copy_of_canceshi_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Copy_of_canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Copy_of_canceshi_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Copy_of_canceshi_rtM->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Copy_of_canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(Copy_of_canceshi_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(Copy_of_canceshi_rtM->DataMapInfo.mmi, 0);
}

/* EOF: Copy_of_canceshi_capi.c */
