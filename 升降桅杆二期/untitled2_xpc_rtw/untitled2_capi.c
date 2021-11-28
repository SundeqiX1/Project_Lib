/*
 * untitled2_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "untitled2.mdl".
 *
 * Model version              : 1.7
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Nov 22 13:10:27 2021
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled2.h"
#include "rtw_capi.h"
#include "untitled2_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 2, 0, "Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 3, 0, "Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "xuanzhuana",
    "", 0, 1, 0, 0, 0 },

  { 5, 0, "Multiport Switch3",
    "", 0, 1, 0, 0, 0 },

  { 6, 0, "3402Receive 1/p1",
    "", 0, 1, 0, 0, 0 },

  { 7, 0, "3402Receive 1/p2",
    "", 1, 1, 0, 0, 0 },

  { 8, 0, "3402Receive 1/p3",
    "", 2, 1, 0, 0, 0 },

  { 9, 0, "3402Receive 1/p4",
    "", 3, 1, 0, 0, 0 },

  { 10, 0, "CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 11, 0, "CAN bit-packing 7",
    "", 0, 1, 0, 0, 0 },

  { 12, 0, "CAN bit-unpacking 1/p1",
    "", 0, 0, 0, 0, 0 },

  { 13, 0, "CAN bit-unpacking 1/p2",
    "", 1, 0, 0, 0, 0 },

  { 14, 0, "CAN bit-unpacking 1/p3",
    "", 2, 0, 0, 0, 0 },

  { 15, 0, "CAN bit-unpacking 1/p4",
    "", 3, 0, 0, 0, 0 },

  { 16, 0, "CAN bit-unpacking 1/p5",
    "", 4, 0, 0, 0, 0 },

  { 17, 0, "CAN bit-unpacking 2/p1",
    "", 0, 0, 0, 0, 0 },

  { 18, 0, "CAN bit-unpacking 2/p2",
    "", 1, 0, 0, 0, 0 },

  { 19, 0, "CAN bit-unpacking 2/p3",
    "", 2, 0, 0, 0, 0 },

  { 20, 0, "CAN bit-unpacking 2/p4",
    "", 3, 0, 0, 0, 0 },

  { 21, 0, "CAN bit-unpacking 2/p5",
    "", 4, 0, 0, 0, 0 },

  { 22, 0, "CAN bit-unpacking 3/p1",
    "", 0, 0, 0, 0, 0 },

  { 23, 0, "CAN bit-unpacking 3/p2",
    "", 1, 0, 0, 0, 0 },

  { 24, 0, "CAN bit-unpacking 3/p3",
    "", 2, 0, 0, 0, 0 },

  { 25, 0, "CAN bit-unpacking 3/p4",
    "", 3, 0, 0, 0, 0 },

  { 26, 0, "CAN bit-unpacking 3/p5",
    "", 4, 0, 0, 0, 0 },

  { 27, 0, "CAN bit-unpacking 5/p1",
    "", 0, 0, 0, 0, 0 },

  { 28, 0, "CAN bit-unpacking 5/p2",
    "", 1, 0, 0, 0, 0 },

  { 29, 0, "CAN bit-unpacking 5/p3",
    "", 2, 0, 0, 0, 0 },

  { 30, 0, "CAN bit-unpacking 5/p4",
    "", 3, 0, 0, 0, 0 },

  { 31, 0, "CAN bit-unpacking 5/p5",
    "", 4, 0, 0, 0, 0 },

  { 32, 0, "Manual Switch2/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 33, 0, "Subsystem1/Relational Operator",
    "", 0, 2, 0, 0, 0 },

  { 34, 0, "Subsystem1/Integer Delay",
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
  { 35, "constant3",
    "Value", 1, 0, 0 },

  { 36, "constant5",
    "Value", 1, 0, 0 },

  { 37, "constant7",
    "Value", 1, 0, 0 },

  { 38, "xuanzhuany",
    "Value", 1, 0, 0 },

  { 39, "xuanzhuany1",
    "Value", 1, 0, 0 },

  { 40, "Setup ",
    "P1", 1, 1, 0 },

  { 41, "Setup ",
    "P2", 1, 1, 0 },

  { 42, "Setup ",
    "P5", 1, 0, 0 },

  { 43, "Setup ",
    "P6", 1, 1, 0 },

  { 44, "Setup ",
    "P13", 1, 1, 0 },

  { 45, "Setup ",
    "P15", 1, 0, 0 },

  { 46, "Setup ",
    "P16", 1, 0, 0 },

  { 47, "Setup ",
    "P17", 1, 0, 0 },

  { 48, "Setup ",
    "P18", 1, 0, 0 },

  { 49, "Setup ",
    "P19", 1, 0, 0 },

  { 50, "Setup ",
    "P20", 1, 0, 0 },

  { 51, "Setup ",
    "P21", 1, 0, 0 },

  { 52, "Setup ",
    "P22", 1, 0, 0 },

  { 53, "Setup ",
    "P23", 1, 0, 0 },

  { 54, "Setup ",
    "P24", 1, 0, 0 },

  { 55, "Manual Switch2/Constant",
    "Value", 0, 0, 0 },

  { 56, "Manual Switch2/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 57, "Subsystem1/Integer Delay",
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
  &untitled2_B.DataTypeConversion10,   /* 0: Signal */
  &untitled2_B.DataTypeConversion11,   /* 1: Signal */
  &untitled2_B.DataTypeConversion8,    /* 2: Signal */
  &untitled2_B.DataTypeConversion9,    /* 3: Signal */
  &untitled2_B.xuanzhuana,             /* 4: Signal */
  &untitled2_B.MultiportSwitch3,       /* 5: Signal */
  &untitled2_B.u02Receive1_o1,         /* 6: Signal */
  &untitled2_B.u02Receive1_o2,         /* 7: Signal */
  &untitled2_B.u02Receive1_o3,         /* 8: Signal */
  &untitled2_B.u02Receive1_o4,         /* 9: Signal */
  &untitled2_B.CANbitpacking1,         /* 10: Signal */
  &untitled2_B.CANbitpacking7,         /* 11: Signal */
  &untitled2_B.CANbitunpacking1_o1,    /* 12: Signal */
  &untitled2_B.CANbitunpacking1_o2,    /* 13: Signal */
  &untitled2_B.CANbitunpacking1_o3,    /* 14: Signal */
  &untitled2_B.CANbitunpacking1_o4,    /* 15: Signal */
  &untitled2_B.CANbitunpacking1_o5,    /* 16: Signal */
  &untitled2_B.CANbitunpacking2_o1,    /* 17: Signal */
  &untitled2_B.CANbitunpacking2_o2,    /* 18: Signal */
  &untitled2_B.CANbitunpacking2_o3,    /* 19: Signal */
  &untitled2_B.CANbitunpacking2_o4,    /* 20: Signal */
  &untitled2_B.CANbitunpacking2_o5,    /* 21: Signal */
  &untitled2_B.CANbitunpacking3_o1,    /* 22: Signal */
  &untitled2_B.CANbitunpacking3_o2,    /* 23: Signal */
  &untitled2_B.CANbitunpacking3_o3,    /* 24: Signal */
  &untitled2_B.CANbitunpacking3_o4,    /* 25: Signal */
  &untitled2_B.CANbitunpacking3_o5,    /* 26: Signal */
  &untitled2_B.CANbitunpacking5_o1,    /* 27: Signal */
  &untitled2_B.CANbitunpacking5_o2,    /* 28: Signal */
  &untitled2_B.CANbitunpacking5_o3,    /* 29: Signal */
  &untitled2_B.CANbitunpacking5_o4,    /* 30: Signal */
  &untitled2_B.CANbitunpacking5_o5,    /* 31: Signal */
  &untitled2_B.SwitchControl,          /* 32: Signal */
  &untitled2_B.RelationalOperator,     /* 33: Signal */
  &untitled2_B.IntegerDelay,           /* 34: Signal */
  &untitled2_P.constant3_Value,        /* 35: Block Parameter */
  &untitled2_P.constant5_Value,        /* 36: Block Parameter */
  &untitled2_P.constant7_Value,        /* 37: Block Parameter */
  &untitled2_P.xuanzhuany_Value,       /* 38: Block Parameter */
  &untitled2_P.xuanzhuany1_Value,      /* 39: Block Parameter */
  &untitled2_P.Setup_P1[0],            /* 40: Block Parameter */
  &untitled2_P.Setup_P2[0],            /* 41: Block Parameter */
  &untitled2_P.Setup_P5,               /* 42: Block Parameter */
  &untitled2_P.Setup_P6[0],            /* 43: Block Parameter */
  &untitled2_P.Setup_P13[0],           /* 44: Block Parameter */
  &untitled2_P.Setup_P15,              /* 45: Block Parameter */
  &untitled2_P.Setup_P16,              /* 46: Block Parameter */
  &untitled2_P.Setup_P17,              /* 47: Block Parameter */
  &untitled2_P.Setup_P18,              /* 48: Block Parameter */
  &untitled2_P.Setup_P19,              /* 49: Block Parameter */
  &untitled2_P.Setup_P20,              /* 50: Block Parameter */
  &untitled2_P.Setup_P21,              /* 51: Block Parameter */
  &untitled2_P.Setup_P22,              /* 52: Block Parameter */
  &untitled2_P.Setup_P23,              /* 53: Block Parameter */
  &untitled2_P.Setup_P24,              /* 54: Block Parameter */
  &untitled2_P.Constant_Value,         /* 55: Block Parameter */
  &untitled2_P.SwitchControl_Threshold,/* 56: Block Parameter */
  &untitled2_P.IntegerDelay_InitialCondition/* 57: Block Parameter */
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
  { rtBlockSignals, 35 },

  { rtBlockParameters, 23,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void untitled2_InitializeDataMapInfo(rtModel_untitled2 *untitled2_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(untitled2_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(untitled2_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(untitled2_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(untitled2_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(untitled2_rtM->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(untitled2_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(untitled2_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(untitled2_rtM->DataMapInfo.mmi, 0);
}

/* EOF: untitled2_capi.c */
