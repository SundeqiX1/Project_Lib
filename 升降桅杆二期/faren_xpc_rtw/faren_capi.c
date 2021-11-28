/*
 * faren_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "faren.mdl".
 *
 * Model version              : 1.1
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Tue May 26 00:27:35 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "faren.h"
#include "rtw_capi.h"
#include "faren_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "f",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "3402Receive ",
    "", 0, 1, 1, 0, 0 },

  { 2, 0, "3402Receive 2",
    "", 0, 1, 1, 0, 0 },

  { 3, 0, "CAN bit-unpacking /p1",
    "", 0, 0, 1, 0, 0 },

  { 4, 0, "CAN bit-unpacking /p2",
    "", 1, 0, 1, 0, 0 },

  { 5, 0, "CAN bit-unpacking /p3",
    "", 2, 0, 1, 0, 0 },

  { 6, 0, "CAN bit-unpacking /p4",
    "", 3, 0, 1, 0, 0 },

  { 7, 0, "CAN bit-unpacking 1/p1",
    "", 0, 2, 1, 0, 0 },

  { 8, 0, "CAN bit-unpacking 1/p2",
    "", 1, 2, 1, 0, 0 },

  { 9, 0, "CAN bit-unpacking 1/p3",
    "", 2, 2, 1, 0, 0 },

  { 10, 0, "CAN bit-unpacking 1/p4",
    "", 3, 2, 1, 0, 0 },

  { 11, 0, "CAN bit-unpacking 1/p5",
    "", 4, 2, 1, 0, 0 },

  { 12, 0, "CAN bit-unpacking 1/p6",
    "", 5, 2, 1, 0, 0 },

  { 13, 0, "CAN bit-unpacking 1/p7",
    "", 6, 2, 1, 0, 0 },

  { 14, 0, "CAN bit-unpacking 1/p8",
    "", 7, 2, 1, 0, 0 },

  { 15, 0, "255_15shineng/Data Type Conversion1",
    "", 0, 2, 1, 0, 0 },

  { 16, 0, "255_15shineng/Data Type Conversion10",
    "", 0, 2, 1, 0, 0 },

  { 17, 0, "255_15shineng/Data Type Conversion11",
    "", 0, 2, 1, 0, 0 },

  { 18, 0, "255_15shineng/Data Type Conversion12",
    "", 0, 2, 1, 0, 0 },

  { 19, 0, "255_15shineng/Data Type Conversion13",
    "", 0, 2, 1, 0, 0 },

  { 20, 0, "255_15shineng/Data Type Conversion14",
    "", 0, 2, 1, 0, 0 },

  { 21, 0, "255_15shineng/Data Type Conversion15",
    "", 0, 2, 1, 0, 0 },

  { 22, 0, "255_15shineng/Data Type Conversion16",
    "", 0, 2, 1, 0, 0 },

  { 23, 0, "255_15shineng/Data Type Conversion2",
    "", 0, 2, 1, 0, 0 },

  { 24, 0, "255_15shineng/Data Type Conversion3",
    "", 0, 2, 1, 0, 0 },

  { 25, 0, "255_15shineng/Data Type Conversion4",
    "", 0, 2, 1, 0, 0 },

  { 26, 0, "255_15shineng/Data Type Conversion5",
    "", 0, 2, 1, 0, 0 },

  { 27, 0, "255_15shineng/Data Type Conversion6",
    "", 0, 2, 1, 0, 0 },

  { 28, 0, "255_15shineng/Data Type Conversion7",
    "", 0, 2, 1, 0, 0 },

  { 29, 0, "255_15shineng/Data Type Conversion8",
    "", 0, 2, 1, 0, 0 },

  { 30, 0, "255_15shineng/Data Type Conversion9",
    "", 0, 2, 1, 0, 0 },

  { 31, 0, "255_15shineng/CAN bit-packing 1",
    "", 0, 1, 1, 0, 0 },

  { 32, 0, "255_15shineng/CAN bit-packing 2",
    "", 0, 1, 1, 0, 0 },

  { 33, 0, "255_15shineng/Manual Switch/SwitchControl",
    "", 0, 1, 1, 0, 0 },

  { 34, 1, "255_15shineng/Manual Switch1/SwitchControl",
    "", 0, 1, 1, 0, 0 },

  { 35, 0, "255_15shineng/jihuo/Data Type Conversion17",
    "", 0, 2, 1, 0, 0 },

  { 36, 0, "255_15shineng/jihuo/Data Type Conversion18",
    "", 0, 2, 1, 0, 0 },

  { 37, 0, "255_15shineng/jihuo/Data Type Conversion19",
    "", 0, 2, 1, 0, 0 },

  { 38, 0, "255_15shineng/jihuo/Data Type Conversion20",
    "", 0, 2, 1, 0, 0 },

  { 39, 0, "255_15shineng/jihuo/Data Type Conversion21",
    "", 0, 2, 1, 0, 0 },

  { 40, 0, "255_15shineng/jihuo/Data Type Conversion22",
    "", 0, 2, 1, 0, 0 },

  { 41, 0, "255_15shineng/jihuo/Data Type Conversion23",
    "", 0, 2, 1, 0, 0 },

  { 42, 0, "255_15shineng/jihuo/Data Type Conversion24",
    "", 0, 2, 1, 0, 0 },

  { 43, 0, "255_15shineng/jihuo/CAN bit-packing 3",
    "", 0, 1, 1, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 44, "Setup ",
    "P1", 1, 2, 0 },

  { 45, "Setup ",
    "P2", 1, 2, 0 },

  { 46, "Setup ",
    "P5", 1, 1, 0 },

  { 47, "Setup ",
    "P6", 1, 3, 0 },

  { 48, "Setup ",
    "P13", 1, 3, 0 },

  { 49, "Setup ",
    "P15", 1, 1, 0 },

  { 50, "Setup ",
    "P16", 1, 1, 0 },

  { 51, "Setup ",
    "P17", 1, 1, 0 },

  { 52, "Setup ",
    "P18", 1, 1, 0 },

  { 53, "Setup ",
    "P19", 1, 1, 0 },

  { 54, "Setup ",
    "P20", 1, 1, 0 },

  { 55, "Setup ",
    "P21", 1, 1, 0 },

  { 56, "Setup ",
    "P22", 1, 1, 0 },

  { 57, "Setup ",
    "P23", 1, 1, 0 },

  { 58, "Setup ",
    "P24", 1, 1, 0 },

  { 59, "255_15shineng/Constant1",
    "Value", 1, 1, 0 },

  { 60, "255_15shineng/Constant10",
    "Value", 1, 1, 0 },

  { 61, "255_15shineng/Constant11",
    "Value", 1, 1, 0 },

  { 62, "255_15shineng/Constant12",
    "Value", 1, 1, 0 },

  { 63, "255_15shineng/Constant13",
    "Value", 1, 1, 0 },

  { 64, "255_15shineng/Constant14",
    "Value", 1, 1, 0 },

  { 65, "255_15shineng/Constant15",
    "Value", 1, 1, 0 },

  { 66, "255_15shineng/Constant16",
    "Value", 1, 1, 0 },

  { 67, "255_15shineng/Constant2",
    "Value", 1, 1, 0 },

  { 68, "255_15shineng/Constant3",
    "Value", 1, 1, 0 },

  { 69, "255_15shineng/Constant4",
    "Value", 1, 1, 0 },

  { 70, "255_15shineng/Constant5",
    "Value", 1, 1, 0 },

  { 71, "255_15shineng/Constant6",
    "Value", 1, 1, 0 },

  { 72, "255_15shineng/Constant7",
    "Value", 1, 1, 0 },

  { 73, "255_15shineng/Constant8",
    "Value", 1, 1, 0 },

  { 74, "255_15shineng/Constant9",
    "Value", 1, 1, 0 },

  { 75, "255_15shineng/Manual Switch/Constant",
    "Value", 2, 1, 0 },

  { 76, "255_15shineng/Manual Switch/SwitchControl",
    "Threshold", 2, 1, 0 },

  { 77, "255_15shineng/Manual Switch1/Constant",
    "Value", 2, 1, 0 },

  { 78, "255_15shineng/Manual Switch1/SwitchControl",
    "Threshold", 2, 1, 0 },

  { 79, "255_15shineng/jihuo/Constant17",
    "Value", 1, 1, 0 },

  { 80, "255_15shineng/jihuo/Constant18",
    "Value", 1, 1, 0 },

  { 81, "255_15shineng/jihuo/Constant19",
    "Value", 1, 1, 0 },

  { 82, "255_15shineng/jihuo/Constant20",
    "Value", 1, 1, 0 },

  { 83, "255_15shineng/jihuo/Constant21",
    "Value", 1, 1, 0 },

  { 84, "255_15shineng/jihuo/Constant22",
    "Value", 1, 1, 0 },

  { 85, "255_15shineng/jihuo/Constant23",
    "Value", 1, 1, 0 },

  { 86, "255_15shineng/jihuo/Constant24",
    "Value", 1, 1, 0 },

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
  &faren_B.f[0],                       /* 0: Signal */
  &faren_B.u02Receive,                 /* 1: Signal */
  &faren_B.u02Receive2,                /* 2: Signal */
  &faren_B.CANbitunpacking_o1,         /* 3: Signal */
  &faren_B.CANbitunpacking_o2,         /* 4: Signal */
  &faren_B.CANbitunpacking_o3,         /* 5: Signal */
  &faren_B.CANbitunpacking_o4,         /* 6: Signal */
  &faren_B.CANbitunpacking1_o1,        /* 7: Signal */
  &faren_B.CANbitunpacking1_o2,        /* 8: Signal */
  &faren_B.CANbitunpacking1_o3,        /* 9: Signal */
  &faren_B.CANbitunpacking1_o4,        /* 10: Signal */
  &faren_B.CANbitunpacking1_o5,        /* 11: Signal */
  &faren_B.CANbitunpacking1_o6,        /* 12: Signal */
  &faren_B.CANbitunpacking1_o7,        /* 13: Signal */
  &faren_B.CANbitunpacking1_o8,        /* 14: Signal */
  &faren_B.DataTypeConversion1,        /* 15: Signal */
  &faren_B.DataTypeConversion10,       /* 16: Signal */
  &faren_B.DataTypeConversion11,       /* 17: Signal */
  &faren_B.DataTypeConversion12,       /* 18: Signal */
  &faren_B.DataTypeConversion13,       /* 19: Signal */
  &faren_B.DataTypeConversion14,       /* 20: Signal */
  &faren_B.DataTypeConversion15,       /* 21: Signal */
  &faren_B.DataTypeConversion16,       /* 22: Signal */
  &faren_B.DataTypeConversion2,        /* 23: Signal */
  &faren_B.DataTypeConversion3,        /* 24: Signal */
  &faren_B.DataTypeConversion4,        /* 25: Signal */
  &faren_B.DataTypeConversion5,        /* 26: Signal */
  &faren_B.DataTypeConversion6,        /* 27: Signal */
  &faren_B.DataTypeConversion7,        /* 28: Signal */
  &faren_B.DataTypeConversion8,        /* 29: Signal */
  &faren_B.DataTypeConversion9,        /* 30: Signal */
  &faren_B.CANbitpacking1,             /* 31: Signal */
  &faren_B.CANbitpacking2,             /* 32: Signal */
  &faren_B.SwitchControl,              /* 33: Signal */
  &faren_B.SwitchControl_c,            /* 34: Signal */
  &faren_B.DataTypeConversion17,       /* 35: Signal */
  &faren_B.DataTypeConversion18,       /* 36: Signal */
  &faren_B.DataTypeConversion19,       /* 37: Signal */
  &faren_B.DataTypeConversion20,       /* 38: Signal */
  &faren_B.DataTypeConversion21,       /* 39: Signal */
  &faren_B.DataTypeConversion22,       /* 40: Signal */
  &faren_B.DataTypeConversion23,       /* 41: Signal */
  &faren_B.DataTypeConversion24,       /* 42: Signal */
  &faren_B.CANbitpacking3,             /* 43: Signal */
  &faren_P.Setup_P1[0],                /* 44: Block Parameter */
  &faren_P.Setup_P2[0],                /* 45: Block Parameter */
  &faren_P.Setup_P5,                   /* 46: Block Parameter */
  &faren_P.Setup_P6[0],                /* 47: Block Parameter */
  &faren_P.Setup_P13[0],               /* 48: Block Parameter */
  &faren_P.Setup_P15,                  /* 49: Block Parameter */
  &faren_P.Setup_P16,                  /* 50: Block Parameter */
  &faren_P.Setup_P17,                  /* 51: Block Parameter */
  &faren_P.Setup_P18,                  /* 52: Block Parameter */
  &faren_P.Setup_P19,                  /* 53: Block Parameter */
  &faren_P.Setup_P20,                  /* 54: Block Parameter */
  &faren_P.Setup_P21,                  /* 55: Block Parameter */
  &faren_P.Setup_P22,                  /* 56: Block Parameter */
  &faren_P.Setup_P23,                  /* 57: Block Parameter */
  &faren_P.Setup_P24,                  /* 58: Block Parameter */
  &faren_P.Constant1_Value,            /* 59: Block Parameter */
  &faren_P.Constant10_Value,           /* 60: Block Parameter */
  &faren_P.Constant11_Value,           /* 61: Block Parameter */
  &faren_P.Constant12_Value,           /* 62: Block Parameter */
  &faren_P.Constant13_Value,           /* 63: Block Parameter */
  &faren_P.Constant14_Value,           /* 64: Block Parameter */
  &faren_P.Constant15_Value,           /* 65: Block Parameter */
  &faren_P.Constant16_Value,           /* 66: Block Parameter */
  &faren_P.Constant2_Value,            /* 67: Block Parameter */
  &faren_P.Constant3_Value,            /* 68: Block Parameter */
  &faren_P.Constant4_Value,            /* 69: Block Parameter */
  &faren_P.Constant5_Value,            /* 70: Block Parameter */
  &faren_P.Constant6_Value,            /* 71: Block Parameter */
  &faren_P.Constant7_Value,            /* 72: Block Parameter */
  &faren_P.Constant8_Value,            /* 73: Block Parameter */
  &faren_P.Constant9_Value,            /* 74: Block Parameter */
  &faren_P.Constant_Value_h,           /* 75: Block Parameter */
  &faren_P.SwitchControl_Threshold_d,  /* 76: Block Parameter */
  &faren_P.Constant_Value,             /* 77: Block Parameter */
  &faren_P.SwitchControl_Threshold,    /* 78: Block Parameter */
  &faren_P.Constant17_Value,           /* 79: Block Parameter */
  &faren_P.Constant18_Value,           /* 80: Block Parameter */
  &faren_P.Constant19_Value,           /* 81: Block Parameter */
  &faren_P.Constant20_Value,           /* 82: Block Parameter */
  &faren_P.Constant21_Value,           /* 83: Block Parameter */
  &faren_P.Constant22_Value,           /* 84: Block Parameter */
  &faren_P.Constant23_Value,           /* 85: Block Parameter */
  &faren_P.Constant24_Value            /* 86: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 }
};

/* Structure Element Map - use elemMapIndex to access this structure */
static const rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { NULL, 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_VECTOR, 0, 2, 0 },

  { rtwCAPI_SCALAR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  4,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  4,                                   /* 5 */
  1,                                   /* 6 */
  2                                    /* 7 */
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
  { rtBlockSignals, 44 },

  { rtBlockParameters, 43,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void faren_InitializeDataMapInfo(rtModel_faren *faren_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(faren_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(faren_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(faren_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(faren_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(faren_rtM->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(faren_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(faren_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(faren_rtM->DataMapInfo.mmi, 0);
}

/* EOF: faren_capi.c */
