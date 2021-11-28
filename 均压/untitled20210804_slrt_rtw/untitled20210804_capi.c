/*
 * untitled20210804_capi.c
 *
 * Code generation for model "untitled20210804".
 *
 * Model version              : 1.3
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Aug 05 10:14:40 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "untitled20210804_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "untitled20210804.h"
#include "untitled20210804_capi.h"
#include "untitled20210804_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 2, TARGET_STRING("Data Type Conversion10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 2, TARGET_STRING("Data Type Conversion11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 2, TARGET_STRING("Data Type Conversion12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 2, TARGET_STRING("Data Type Conversion13"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 2, TARGET_STRING("Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 2, TARGET_STRING("Data Type Conversion15"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 1, TARGET_STRING("Data Type Conversion16"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 1, TARGET_STRING("Data Type Conversion17"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 1, TARGET_STRING("Data Type Conversion18"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 1, TARGET_STRING("Data Type Conversion19"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 1, TARGET_STRING("Data Type Conversion20"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 1, TARGET_STRING("Data Type Conversion21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 1, TARGET_STRING("Data Type Conversion22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 1, TARGET_STRING("Data Type Conversion23"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Data Type Conversion48"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 20, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 2, TARGET_STRING("Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 2, TARGET_STRING("Data Type Conversion9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Logical Operator2"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 27, 0, TARGET_STRING("1-D Lookup Table"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 28, 0, TARGET_STRING("CAN bit-packing "),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 29, 0, TARGET_STRING("CAN bit-packing 1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 30, 0, TARGET_STRING("CAN bit-unpacking 1/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 31, 0, TARGET_STRING("CAN bit-unpacking 1/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 32, 0, TARGET_STRING("CAN bit-unpacking 1/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 0 },

  { 33, 0, TARGET_STRING("CAN bit-unpacking 1/p4"),
    TARGET_STRING(""), 3, 2, 0, 0, 0 },

  { 34, 0, TARGET_STRING("CAN bit-unpacking 1/p5"),
    TARGET_STRING(""), 4, 2, 0, 0, 0 },

  { 35, 0, TARGET_STRING("CAN bit-unpacking 1/p6"),
    TARGET_STRING(""), 5, 2, 0, 0, 0 },

  { 36, 0, TARGET_STRING("CAN bit-unpacking 1/p7"),
    TARGET_STRING(""), 6, 2, 0, 0, 0 },

  { 37, 0, TARGET_STRING("CAN bit-unpacking 1/p8"),
    TARGET_STRING(""), 7, 2, 0, 0, 0 },

  { 38, 0, TARGET_STRING("CAN bit-unpacking 1/p9"),
    TARGET_STRING(""), 8, 2, 0, 0, 0 },

  { 39, 0, TARGET_STRING("CAN bit-unpacking 1/p10"),
    TARGET_STRING(""), 9, 2, 0, 0, 0 },

  { 40, 0, TARGET_STRING("CAN bit-unpacking 1/p11"),
    TARGET_STRING(""), 10, 2, 0, 0, 0 },

  { 41, 0, TARGET_STRING("CAN bit-unpacking 1/p12"),
    TARGET_STRING(""), 11, 2, 0, 0, 0 },

  { 42, 0, TARGET_STRING("CAN bit-unpacking 1/p13"),
    TARGET_STRING(""), 12, 2, 0, 0, 0 },

  { 43, 0, TARGET_STRING("CAN bit-unpacking 1/p14"),
    TARGET_STRING(""), 13, 2, 0, 0, 0 },

  { 44, 0, TARGET_STRING("CAN bit-unpacking 1/p15"),
    TARGET_STRING(""), 14, 2, 0, 0, 0 },

  { 45, 0, TARGET_STRING("CAN bit-unpacking 1/p16"),
    TARGET_STRING(""), 15, 2, 0, 0, 0 },

  { 46, 0, TARGET_STRING("CAN bit-unpacking 3/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 47, 0, TARGET_STRING("CAN bit-unpacking 3/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 48, 0, TARGET_STRING("CAN bit-unpacking 3/p3"),
    TARGET_STRING(""), 2, 3, 0, 0, 0 },

  { 49, 0, TARGET_STRING("CAN bit-unpacking 3/p4"),
    TARGET_STRING(""), 3, 3, 0, 0, 0 },

  { 50, 0, TARGET_STRING("tonggai1808Receive1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 51, 0, TARGET_STRING("tonggai3402Receive"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING("Manual Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 53, 0, TARGET_STRING("Manual Switch1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 54, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 55, TARGET_STRING("Constant1"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 56, TARGET_STRING("Constant10"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 57, TARGET_STRING("Constant11"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 58, TARGET_STRING("Constant12"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 59, TARGET_STRING("Constant13"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 60, TARGET_STRING("Constant14"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 61, TARGET_STRING("Constant15"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 62, TARGET_STRING("Constant16"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 63, TARGET_STRING("Constant17"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 64, TARGET_STRING("Constant18"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 65, TARGET_STRING("Constant19"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 66, TARGET_STRING("Constant2"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 67, TARGET_STRING("Constant20"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 68, TARGET_STRING("Constant21"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 69, TARGET_STRING("Constant22"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 70, TARGET_STRING("Constant23"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 71, TARGET_STRING("Constant3"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 72, TARGET_STRING("Constant4"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 73, TARGET_STRING("Constant5"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 74, TARGET_STRING("Constant6"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 75, TARGET_STRING("Constant7"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 76, TARGET_STRING("Constant8"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 77, TARGET_STRING("Constant9"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 78, TARGET_STRING("Gain"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 79, TARGET_STRING("1-D Lookup Table"),
    TARGET_STRING("Table"), 1, 4, 0 },

  { 80, TARGET_STRING("1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 1, 4, 0 },

  { 81, TARGET_STRING("Setup "),
    TARGET_STRING("P1"), 1, 5, 0 },

  { 82, TARGET_STRING("Setup "),
    TARGET_STRING("P2"), 1, 5, 0 },

  { 83, TARGET_STRING("Setup "),
    TARGET_STRING("P3"), 1, 4, 0 },

  { 84, TARGET_STRING("Setup "),
    TARGET_STRING("P4"), 1, 4, 0 },

  { 85, TARGET_STRING("Setup "),
    TARGET_STRING("P11"), 1, 4, 0 },

  { 86, TARGET_STRING("Setup "),
    TARGET_STRING("P15"), 1, 0, 0 },

  { 87, TARGET_STRING("Setup "),
    TARGET_STRING("P16"), 1, 0, 0 },

  { 88, TARGET_STRING("Setup "),
    TARGET_STRING("P17"), 1, 0, 0 },

  { 89, TARGET_STRING("Setup "),
    TARGET_STRING("P18"), 1, 0, 0 },

  { 90, TARGET_STRING("Setup "),
    TARGET_STRING("P19"), 1, 0, 0 },

  { 91, TARGET_STRING("Setup "),
    TARGET_STRING("P20"), 1, 0, 0 },

  { 92, TARGET_STRING("Setup "),
    TARGET_STRING("P21"), 1, 0, 0 },

  { 93, TARGET_STRING("Setup "),
    TARGET_STRING("P22"), 1, 0, 0 },

  { 94, TARGET_STRING("Setup "),
    TARGET_STRING("P23"), 1, 0, 0 },

  { 95, TARGET_STRING("Setup "),
    TARGET_STRING("P24"), 1, 0, 0 },

  { 96, TARGET_STRING("Manual Switch"),
    TARGET_STRING("CurrentSetting"), 0, 0, 0 },

  { 97, TARGET_STRING("Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &untitled20210804_B.DataTypeConversion,/* 0: Signal */
  &untitled20210804_B.DataTypeConversion1,/* 1: Signal */
  &untitled20210804_B.DataTypeConversion10,/* 2: Signal */
  &untitled20210804_B.DataTypeConversion11,/* 3: Signal */
  &untitled20210804_B.DataTypeConversion12,/* 4: Signal */
  &untitled20210804_B.DataTypeConversion13,/* 5: Signal */
  &untitled20210804_B.DataTypeConversion14,/* 6: Signal */
  &untitled20210804_B.DataTypeConversion15,/* 7: Signal */
  &untitled20210804_B.DataTypeConversion16,/* 8: Signal */
  &untitled20210804_B.DataTypeConversion17,/* 9: Signal */
  &untitled20210804_B.DataTypeConversion18,/* 10: Signal */
  &untitled20210804_B.DataTypeConversion19,/* 11: Signal */
  &untitled20210804_B.DataTypeConversion2,/* 12: Signal */
  &untitled20210804_B.DataTypeConversion20,/* 13: Signal */
  &untitled20210804_B.DataTypeConversion21,/* 14: Signal */
  &untitled20210804_B.DataTypeConversion22,/* 15: Signal */
  &untitled20210804_B.DataTypeConversion23,/* 16: Signal */
  &untitled20210804_B.DataTypeConversion3,/* 17: Signal */
  &untitled20210804_B.DataTypeConversion4,/* 18: Signal */
  &untitled20210804_B.DataTypeConversion48[0],/* 19: Signal */
  &untitled20210804_B.DataTypeConversion5,/* 20: Signal */
  &untitled20210804_B.DataTypeConversion6,/* 21: Signal */
  &untitled20210804_B.DataTypeConversion7,/* 22: Signal */
  &untitled20210804_B.DataTypeConversion8,/* 23: Signal */
  &untitled20210804_B.DataTypeConversion9,/* 24: Signal */
  &untitled20210804_B.Gain,            /* 25: Signal */
  &untitled20210804_B.LogicalOperator2[0],/* 26: Signal */
  &untitled20210804_B.uDLookupTable[0],/* 27: Signal */
  &untitled20210804_B.CANbitpacking,   /* 28: Signal */
  &untitled20210804_B.CANbitpacking1,  /* 29: Signal */
  &untitled20210804_B.CANbitunpacking1_o1,/* 30: Signal */
  &untitled20210804_B.CANbitunpacking1_o2,/* 31: Signal */
  &untitled20210804_B.CANbitunpacking1_o3,/* 32: Signal */
  &untitled20210804_B.CANbitunpacking1_o4,/* 33: Signal */
  &untitled20210804_B.CANbitunpacking1_o5,/* 34: Signal */
  &untitled20210804_B.CANbitunpacking1_o6,/* 35: Signal */
  &untitled20210804_B.CANbitunpacking1_o7,/* 36: Signal */
  &untitled20210804_B.CANbitunpacking1_o8,/* 37: Signal */
  &untitled20210804_B.CANbitunpacking1_o9,/* 38: Signal */
  &untitled20210804_B.CANbitunpacking1_o10,/* 39: Signal */
  &untitled20210804_B.CANbitunpacking1_o11,/* 40: Signal */
  &untitled20210804_B.CANbitunpacking1_o12,/* 41: Signal */
  &untitled20210804_B.CANbitunpacking1_o13,/* 42: Signal */
  &untitled20210804_B.CANbitunpacking1_o14,/* 43: Signal */
  &untitled20210804_B.CANbitunpacking1_o15,/* 44: Signal */
  &untitled20210804_B.CANbitunpacking1_o16,/* 45: Signal */
  &untitled20210804_B.CANbitunpacking3_o1,/* 46: Signal */
  &untitled20210804_B.CANbitunpacking3_o2,/* 47: Signal */
  &untitled20210804_B.CANbitunpacking3_o3,/* 48: Signal */
  &untitled20210804_B.CANbitunpacking3_o4,/* 49: Signal */
  &untitled20210804_B.tonggai1808Receive1,/* 50: Signal */
  &untitled20210804_B.tonggai3402Receive,/* 51: Signal */
  &untitled20210804_B.ManualSwitch[0], /* 52: Signal */
  &untitled20210804_B.ManualSwitch1[0],/* 53: Signal */
  &untitled20210804_P.Constant_Value,  /* 54: Block Parameter */
  &untitled20210804_P.Constant1_Value, /* 55: Block Parameter */
  &untitled20210804_P.Constant10_Value,/* 56: Block Parameter */
  &untitled20210804_P.Constant11_Value,/* 57: Block Parameter */
  &untitled20210804_P.Constant12_Value,/* 58: Block Parameter */
  &untitled20210804_P.Constant13_Value,/* 59: Block Parameter */
  &untitled20210804_P.Constant14_Value,/* 60: Block Parameter */
  &untitled20210804_P.Constant15_Value,/* 61: Block Parameter */
  &untitled20210804_P.Constant16_Value,/* 62: Block Parameter */
  &untitled20210804_P.Constant17_Value,/* 63: Block Parameter */
  &untitled20210804_P.Constant18_Value,/* 64: Block Parameter */
  &untitled20210804_P.Constant19_Value,/* 65: Block Parameter */
  &untitled20210804_P.Constant2_Value, /* 66: Block Parameter */
  &untitled20210804_P.Constant20_Value,/* 67: Block Parameter */
  &untitled20210804_P.Constant21_Value,/* 68: Block Parameter */
  &untitled20210804_P.Constant22_Value,/* 69: Block Parameter */
  &untitled20210804_P.Constant23_Value,/* 70: Block Parameter */
  &untitled20210804_P.Constant3_Value, /* 71: Block Parameter */
  &untitled20210804_P.Constant4_Value, /* 72: Block Parameter */
  &untitled20210804_P.Constant5_Value, /* 73: Block Parameter */
  &untitled20210804_P.Constant6_Value, /* 74: Block Parameter */
  &untitled20210804_P.Constant7_Value, /* 75: Block Parameter */
  &untitled20210804_P.Constant8_Value, /* 76: Block Parameter */
  &untitled20210804_P.Constant9_Value, /* 77: Block Parameter */
  &untitled20210804_P.Gain_Gain,       /* 78: Block Parameter */
  &untitled20210804_P.uDLookupTable_tableData[0],/* 79: Block Parameter */
  &untitled20210804_P.uDLookupTable_bp01Data[0],/* 80: Block Parameter */
  &untitled20210804_P.Setup_P1[0],     /* 81: Block Parameter */
  &untitled20210804_P.Setup_P2[0],     /* 82: Block Parameter */
  &untitled20210804_P.Setup_P3[0],     /* 83: Block Parameter */
  &untitled20210804_P.Setup_P4[0],     /* 84: Block Parameter */
  &untitled20210804_P.Setup_P11[0],    /* 85: Block Parameter */
  &untitled20210804_P.Setup_P15,       /* 86: Block Parameter */
  &untitled20210804_P.Setup_P16,       /* 87: Block Parameter */
  &untitled20210804_P.Setup_P17,       /* 88: Block Parameter */
  &untitled20210804_P.Setup_P18,       /* 89: Block Parameter */
  &untitled20210804_P.Setup_P19,       /* 90: Block Parameter */
  &untitled20210804_P.Setup_P20,       /* 91: Block Parameter */
  &untitled20210804_P.Setup_P21,       /* 92: Block Parameter */
  &untitled20210804_P.Setup_P22,       /* 93: Block Parameter */
  &untitled20210804_P.Setup_P23,       /* 94: Block Parameter */
  &untitled20210804_P.Setup_P24,       /* 95: Block Parameter */
  &untitled20210804_P.ManualSwitch_CurrentSetting,/* 96: Block Parameter */
  &untitled20210804_P.ManualSwitch1_CurrentSetting,/* 97: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  4,                                   /* 2 */
  1,                                   /* 3 */
  16,                                  /* 4 */
  1,                                   /* 5 */
  8,                                   /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  2,                                   /* 9 */
  1,                                   /* 10 */
  4                                    /* 11 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.002, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 54,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 44,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1127853506U,
    291046508U,
    96789644U,
    2059815339U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  untitled20210804_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void untitled20210804_InitializeDataMapInfo(RT_MODEL_untitled20210804_T *const
  untitled20210804_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(untitled20210804_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(untitled20210804_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(untitled20210804_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(untitled20210804_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(untitled20210804_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  untitled20210804_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(untitled20210804_M);
  untitled20210804_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_untitled20210804_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(untitled20210804_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(untitled20210804_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(untitled20210804_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void untitled20210804_host_InitializeDataMapInfo
    (untitled20210804_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: untitled20210804_capi.c */
