/*
 * Copy_3_of_canceshi_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "Copy_3_of_canceshi.mdl".
 *
 * Model version              : 1.71
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Wed May 27 09:28:19 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Copy_3_of_canceshi.h"
#include "rtw_capi.h"
#include "Copy_3_of_canceshi_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Data Type Conversion",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 2, 0, "Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 3, 0, "Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 6, 0, "Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 7, 0, "Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 8, 0, "Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 9, 0, "Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 10, 0, "Data Type Conversion19",
    "", 0, 0, 0, 0, 0 },

  { 11, 0, "Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 12, 0, "Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 13, 0, "Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 14, 0, "Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 15, 0, "Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 16, 0, "a",
    "", 0, 1, 1, 0, 0 },

  { 17, 0, "b",
    "", 0, 1, 1, 0, 0 },

  { 18, 0, "baozhuaa",
    "", 0, 1, 0, 0, 0 },

  { 19, 0, "c",
    "", 0, 1, 2, 0, 0 },

  { 20, 0, "d",
    "", 0, 1, 2, 0, 0 },

  { 21, 0, "shengjianga",
    "", 0, 1, 0, 0, 0 },

  { 22, 0, "xuanzhuana",
    "", 0, 1, 0, 0, 0 },

  { 23, 0, "Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 24, 0, "Multiport Switch1",
    "", 0, 1, 0, 0, 0 },

  { 25, 0, "Multiport Switch2",
    "", 0, 1, 0, 0, 0 },

  { 26, 0, "Multiport Switch3",
    "", 0, 1, 0, 0, 0 },

  { 27, 0, "3402Receive 1/p1",
    "", 0, 1, 0, 0, 0 },

  { 28, 0, "3402Receive 1/p2",
    "", 1, 1, 0, 0, 0 },

  { 29, 0, "3402Receive 1/p3",
    "", 2, 1, 0, 0, 0 },

  { 30, 0, "3402Receive 1/p4",
    "", 3, 1, 0, 0, 0 },

  { 31, 0, "CAN bit-packing ",
    "", 0, 1, 0, 0, 0 },

  { 32, 0, "CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 33, 0, "CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 34, 0, "CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 35, 0, "CAN bit-packing 4",
    "", 0, 1, 0, 0, 0 },

  { 36, 0, "CAN bit-packing 5",
    "", 0, 1, 0, 0, 0 },

  { 37, 0, "CAN bit-packing 6",
    "", 0, 1, 0, 0, 0 },

  { 38, 0, "CAN bit-packing 7",
    "", 0, 1, 0, 0, 0 },

  { 39, 0, "CAN bit-unpacking 2/p1",
    "", 0, 0, 0, 0, 0 },

  { 40, 0, "CAN bit-unpacking 2/p2",
    "", 1, 0, 0, 0, 0 },

  { 41, 0, "CAN bit-unpacking 2/p3",
    "", 2, 0, 0, 0, 0 },

  { 42, 0, "CAN bit-unpacking 2/p4",
    "", 3, 0, 0, 0, 0 },

  { 43, 0, "CAN bit-unpacking 3/p1",
    "", 0, 0, 0, 0, 0 },

  { 44, 0, "CAN bit-unpacking 3/p2",
    "", 1, 0, 0, 0, 0 },

  { 45, 0, "CAN bit-unpacking 3/p3",
    "", 2, 0, 0, 0, 0 },

  { 46, 0, "CAN bit-unpacking 3/p4",
    "", 3, 0, 0, 0, 0 },

  { 47, 0, "CAN bit-unpacking 4/p1",
    "", 0, 0, 0, 0, 0 },

  { 48, 0, "CAN bit-unpacking 4/p2",
    "", 1, 0, 0, 0, 0 },

  { 49, 0, "CAN bit-unpacking 4/p3",
    "", 2, 0, 0, 0, 0 },

  { 50, 0, "CAN bit-unpacking 4/p4",
    "", 3, 0, 0, 0, 0 },

  { 51, 0, "CAN bit-unpacking 4/p5",
    "", 4, 0, 0, 0, 0 },

  { 52, 0, "CAN bit-unpacking 5/p1",
    "", 0, 0, 0, 0, 0 },

  { 53, 0, "CAN bit-unpacking 5/p2",
    "", 1, 0, 0, 0, 0 },

  { 54, 0, "CAN bit-unpacking 5/p3",
    "", 2, 0, 0, 0, 0 },

  { 55, 0, "CAN bit-unpacking 5/p4",
    "", 3, 0, 0, 0, 0 },

  { 56, 0, "CAN bit-unpacking 5/p5",
    "", 4, 0, 0, 0, 0 },

  { 57, 0, "Subsystem1/Relational Operator",
    "", 0, 2, 0, 0, 0 },

  { 58, 0, "Subsystem1/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 59, 0, "Subsystem2/Relational Operator",
    "", 0, 2, 0, 0, 0 },

  { 60, 0, "Subsystem2/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 61, 0, "Subsystem3/Relational Operator",
    "", 0, 2, 0, 0, 0 },

  { 62, 0, "Subsystem3/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 63, "baozhuay",
    "Value", 1, 0, 0 },

  { 64, "constant1",
    "Value", 1, 0, 0 },

  { 65, "constant10",
    "Value", 1, 0, 0 },

  { 66, "constant11",
    "Value", 1, 0, 0 },

  { 67, "constant12",
    "Value", 1, 0, 0 },

  { 68, "constant13",
    "Value", 1, 0, 0 },

  { 69, "constant14",
    "Value", 1, 0, 0 },

  { 70, "constant15",
    "Value", 1, 0, 0 },

  { 71, "constant2",
    "Value", 1, 0, 0 },

  { 72, "constant4",
    "Value", 1, 0, 0 },

  { 73, "constant5",
    "Value", 1, 0, 0 },

  { 74, "constant6",
    "Value", 1, 0, 0 },

  { 75, "constant9",
    "Value", 1, 0, 0 },

  { 76, "shengjiangy",
    "Value", 1, 0, 0 },

  { 77, "xuanzhuany",
    "Value", 1, 0, 0 },

  { 78, "Setup ",
    "P1", 1, 3, 0 },

  { 79, "Setup ",
    "P2", 1, 3, 0 },

  { 80, "Setup ",
    "P3", 1, 0, 0 },

  { 81, "Setup ",
    "P5", 1, 4, 0 },

  { 82, "Setup ",
    "P6", 1, 3, 0 },

  { 83, "Setup ",
    "P13", 1, 3, 0 },

  { 84, "Setup ",
    "P15", 1, 0, 0 },

  { 85, "Setup ",
    "P16", 1, 0, 0 },

  { 86, "Setup ",
    "P17", 1, 0, 0 },

  { 87, "Setup ",
    "P18", 1, 0, 0 },

  { 88, "Setup ",
    "P19", 1, 0, 0 },

  { 89, "Setup ",
    "P20", 1, 0, 0 },

  { 90, "Setup ",
    "P21", 1, 0, 0 },

  { 91, "Setup ",
    "P22", 1, 0, 0 },

  { 92, "Setup ",
    "P23", 1, 0, 0 },

  { 93, "Setup ",
    "P24", 1, 0, 0 },

  { 94, "Subsystem1/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 95, "Subsystem2/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 96, "Subsystem3/Integer Delay",
    "InitialCondition", 1, 0, 0 },

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
  &Copy_3_of_canceshi_B.DataTypeConversion,/* 0: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion10,/* 1: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion11,/* 2: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion12,/* 3: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion13,/* 4: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion14,/* 5: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion15,/* 6: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion16,/* 7: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion17,/* 8: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion18,/* 9: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion19,/* 10: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion5,/* 11: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion6,/* 12: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion7,/* 13: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion8,/* 14: Signal */
  &Copy_3_of_canceshi_B.DataTypeConversion9,/* 15: Signal */
  &Copy_3_of_canceshi_B.a[0],          /* 16: Signal */
  &Copy_3_of_canceshi_B.b[0],          /* 17: Signal */
  &Copy_3_of_canceshi_B.baozhuaa,      /* 18: Signal */
  &Copy_3_of_canceshi_B.c[0],          /* 19: Signal */
  &Copy_3_of_canceshi_B.d[0],          /* 20: Signal */
  &Copy_3_of_canceshi_B.shengjianga,   /* 21: Signal */
  &Copy_3_of_canceshi_B.xuanzhuana,    /* 22: Signal */
  &Copy_3_of_canceshi_B.MultiportSwitch,/* 23: Signal */
  &Copy_3_of_canceshi_B.MultiportSwitch1,/* 24: Signal */
  &Copy_3_of_canceshi_B.MultiportSwitch2,/* 25: Signal */
  &Copy_3_of_canceshi_B.MultiportSwitch3,/* 26: Signal */
  &Copy_3_of_canceshi_B.u02Receive1_o1,/* 27: Signal */
  &Copy_3_of_canceshi_B.u02Receive1_o2,/* 28: Signal */
  &Copy_3_of_canceshi_B.u02Receive1_o3,/* 29: Signal */
  &Copy_3_of_canceshi_B.u02Receive1_o4,/* 30: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking, /* 31: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking1,/* 32: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking2,/* 33: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking3,/* 34: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking4,/* 35: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking5,/* 36: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking6,/* 37: Signal */
  &Copy_3_of_canceshi_B.CANbitpacking7,/* 38: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking2_o1,/* 39: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking2_o2,/* 40: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking2_o3,/* 41: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking2_o4,/* 42: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking3_o1,/* 43: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking3_o2,/* 44: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking3_o3,/* 45: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking3_o4,/* 46: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking4_o1,/* 47: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking4_o2,/* 48: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking4_o3,/* 49: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking4_o4,/* 50: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking4_o5,/* 51: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking5_o1,/* 52: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking5_o2,/* 53: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking5_o3,/* 54: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking5_o4,/* 55: Signal */
  &Copy_3_of_canceshi_B.CANbitunpacking5_o5,/* 56: Signal */
  &Copy_3_of_canceshi_B.RelationalOperator_e,/* 57: Signal */
  &Copy_3_of_canceshi_B.IntegerDelay_d,/* 58: Signal */
  &Copy_3_of_canceshi_B.RelationalOperator,/* 59: Signal */
  &Copy_3_of_canceshi_B.IntegerDelay,  /* 60: Signal */
  &Copy_3_of_canceshi_B.RelationalOperator_h,/* 61: Signal */
  &Copy_3_of_canceshi_B.IntegerDelay_j,/* 62: Signal */
  &Copy_3_of_canceshi_P.baozhuay_Value,/* 63: Block Parameter */
  &Copy_3_of_canceshi_P.constant1_Value,/* 64: Block Parameter */
  &Copy_3_of_canceshi_P.constant10_Value,/* 65: Block Parameter */
  &Copy_3_of_canceshi_P.constant11_Value,/* 66: Block Parameter */
  &Copy_3_of_canceshi_P.constant12_Value,/* 67: Block Parameter */
  &Copy_3_of_canceshi_P.constant13_Value,/* 68: Block Parameter */
  &Copy_3_of_canceshi_P.constant14_Value,/* 69: Block Parameter */
  &Copy_3_of_canceshi_P.constant15_Value,/* 70: Block Parameter */
  &Copy_3_of_canceshi_P.constant2_Value,/* 71: Block Parameter */
  &Copy_3_of_canceshi_P.constant4_Value,/* 72: Block Parameter */
  &Copy_3_of_canceshi_P.constant5_Value,/* 73: Block Parameter */
  &Copy_3_of_canceshi_P.constant6_Value,/* 74: Block Parameter */
  &Copy_3_of_canceshi_P.constant9_Value,/* 75: Block Parameter */
  &Copy_3_of_canceshi_P.shengjiangy_Value,/* 76: Block Parameter */
  &Copy_3_of_canceshi_P.xuanzhuany_Value,/* 77: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P1[0],   /* 78: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P2[0],   /* 79: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P3,      /* 80: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P5[0],   /* 81: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P6[0],   /* 82: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P13[0],  /* 83: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P15,     /* 84: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P16,     /* 85: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P17,     /* 86: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P18,     /* 87: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P19,     /* 88: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P20,     /* 89: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P21,     /* 90: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P22,     /* 91: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P23,     /* 92: Block Parameter */
  &Copy_3_of_canceshi_P.Setup_P24,     /* 93: Block Parameter */
  &Copy_3_of_canceshi_P.IntegerDelay_InitialCondition_d,/* 94: Block Parameter */
  &Copy_3_of_canceshi_P.IntegerDelay_InitialCondition,/* 95: Block Parameter */
  &Copy_3_of_canceshi_P.IntegerDelay_InitialCondition_a/* 96: Block Parameter */
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

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 }
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

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  4,                                   /* 2 */
  1,                                   /* 3 */
  5,                                   /* 4 */
  1,                                   /* 5 */
  1,                                   /* 6 */
  4,                                   /* 7 */
  1,                                   /* 8 */
  3                                    /* 9 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.5, 0.0
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
  { rtBlockSignals, 63 },

  { rtBlockParameters, 34,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void Copy_3_of_canceshi_InitializeDataMapInfo(rtModel_Copy_3_of_canceshi
  *Copy_3_of_canceshi_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Copy_3_of_canceshi_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Copy_3_of_canceshi_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Copy_3_of_canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Copy_3_of_canceshi_rtM->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Copy_3_of_canceshi_rtM->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Copy_3_of_canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(Copy_3_of_canceshi_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(Copy_3_of_canceshi_rtM->DataMapInfo.mmi, 0);
}

/* EOF: Copy_3_of_canceshi_capi.c */
