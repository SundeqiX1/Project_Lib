/*
 * aaa_capi.c
 *
 * Code generation for model "aaa".
 *
 * Model version              : 1.14
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri Jul 30 09:33:51 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "aaa_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "aaa.h"
#include "aaa_capi.h"
#include "aaa_private.h"
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
  { 0, 0, TARGET_STRING("constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("constant10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("constant11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("constant12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("constant13"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("constant14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("constant15"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("constant16"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("constant17"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("constant18"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("constant19"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("constant20"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("constant21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("constant22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("constant23"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("constant24"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("constant25"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("constant26"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("constant27"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("constant28"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("constant29"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("constant30"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("constant31"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("constant32"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("constant4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("constant5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("constant6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("constant7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("constant8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("constant9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 33, 0, TARGET_STRING("PCI1/p1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 34, 0, TARGET_STRING("PCI1/p2"),
    TARGET_STRING(""), 1, 0, 1, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 35, TARGET_STRING("constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 36, TARGET_STRING("constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 37, TARGET_STRING("constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 38, TARGET_STRING("constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 39, TARGET_STRING("constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 40, TARGET_STRING("constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 41, TARGET_STRING("constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 42, TARGET_STRING("constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 43, TARGET_STRING("constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 44, TARGET_STRING("constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 45, TARGET_STRING("constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 46, TARGET_STRING("constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 47, TARGET_STRING("constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 48, TARGET_STRING("constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 49, TARGET_STRING("constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 50, TARGET_STRING("constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 51, TARGET_STRING("constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 52, TARGET_STRING("constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 53, TARGET_STRING("constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 54, TARGET_STRING("constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 55, TARGET_STRING("constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 56, TARGET_STRING("constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 57, TARGET_STRING("constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 58, TARGET_STRING("constant30"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 59, TARGET_STRING("constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 60, TARGET_STRING("constant32"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 61, TARGET_STRING("constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 62, TARGET_STRING("constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 63, TARGET_STRING("constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 64, TARGET_STRING("constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 65, TARGET_STRING("constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 66, TARGET_STRING("constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 67, TARGET_STRING("PCI1"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 68, TARGET_STRING("PCI1"),
    TARGET_STRING("P2"), 0, 2, 0 },

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
  &aaa_B.constant1,                    /* 0: Signal */
  &aaa_B.constant10,                   /* 1: Signal */
  &aaa_B.constant11,                   /* 2: Signal */
  &aaa_B.constant12,                   /* 3: Signal */
  &aaa_B.constant13,                   /* 4: Signal */
  &aaa_B.constant14,                   /* 5: Signal */
  &aaa_B.constant15,                   /* 6: Signal */
  &aaa_B.constant16,                   /* 7: Signal */
  &aaa_B.constant17,                   /* 8: Signal */
  &aaa_B.constant18,                   /* 9: Signal */
  &aaa_B.constant19,                   /* 10: Signal */
  &aaa_B.constant2,                    /* 11: Signal */
  &aaa_B.constant20,                   /* 12: Signal */
  &aaa_B.constant21,                   /* 13: Signal */
  &aaa_B.constant22,                   /* 14: Signal */
  &aaa_B.constant23,                   /* 15: Signal */
  &aaa_B.constant24,                   /* 16: Signal */
  &aaa_B.constant25,                   /* 17: Signal */
  &aaa_B.constant26,                   /* 18: Signal */
  &aaa_B.constant27,                   /* 19: Signal */
  &aaa_B.constant28,                   /* 20: Signal */
  &aaa_B.constant29,                   /* 21: Signal */
  &aaa_B.constant3,                    /* 22: Signal */
  &aaa_B.constant30,                   /* 23: Signal */
  &aaa_B.constant31,                   /* 24: Signal */
  &aaa_B.constant32,                   /* 25: Signal */
  &aaa_B.constant4,                    /* 26: Signal */
  &aaa_B.constant5,                    /* 27: Signal */
  &aaa_B.constant6,                    /* 28: Signal */
  &aaa_B.constant7,                    /* 29: Signal */
  &aaa_B.constant8,                    /* 30: Signal */
  &aaa_B.constant9,                    /* 31: Signal */
  &aaa_B.DataTypeConversion[0],        /* 32: Signal */
  &aaa_B.PCI1_o1[0],                   /* 33: Signal */
  &aaa_B.PCI1_o2[0],                   /* 34: Signal */
  &aaa_P.constant1_Value,              /* 35: Block Parameter */
  &aaa_P.constant10_Value,             /* 36: Block Parameter */
  &aaa_P.constant11_Value,             /* 37: Block Parameter */
  &aaa_P.constant12_Value,             /* 38: Block Parameter */
  &aaa_P.constant13_Value,             /* 39: Block Parameter */
  &aaa_P.constant14_Value,             /* 40: Block Parameter */
  &aaa_P.constant15_Value,             /* 41: Block Parameter */
  &aaa_P.constant16_Value,             /* 42: Block Parameter */
  &aaa_P.constant17_Value,             /* 43: Block Parameter */
  &aaa_P.constant18_Value,             /* 44: Block Parameter */
  &aaa_P.constant19_Value,             /* 45: Block Parameter */
  &aaa_P.constant2_Value,              /* 46: Block Parameter */
  &aaa_P.constant20_Value,             /* 47: Block Parameter */
  &aaa_P.constant21_Value,             /* 48: Block Parameter */
  &aaa_P.constant22_Value,             /* 49: Block Parameter */
  &aaa_P.constant23_Value,             /* 50: Block Parameter */
  &aaa_P.constant24_Value,             /* 51: Block Parameter */
  &aaa_P.constant25_Value,             /* 52: Block Parameter */
  &aaa_P.constant26_Value,             /* 53: Block Parameter */
  &aaa_P.constant27_Value,             /* 54: Block Parameter */
  &aaa_P.constant28_Value,             /* 55: Block Parameter */
  &aaa_P.constant29_Value,             /* 56: Block Parameter */
  &aaa_P.constant3_Value,              /* 57: Block Parameter */
  &aaa_P.constant30_Value,             /* 58: Block Parameter */
  &aaa_P.constant31_Value,             /* 59: Block Parameter */
  &aaa_P.constant32_Value,             /* 60: Block Parameter */
  &aaa_P.constant4_Value,              /* 61: Block Parameter */
  &aaa_P.constant5_Value,              /* 62: Block Parameter */
  &aaa_P.constant6_Value,              /* 63: Block Parameter */
  &aaa_P.constant7_Value,              /* 64: Block Parameter */
  &aaa_P.constant8_Value,              /* 65: Block Parameter */
  &aaa_P.constant9_Value,              /* 66: Block Parameter */
  &aaa_P.PCI1_P1[0],                   /* 67: Block Parameter */
  &aaa_P.PCI1_P2[0],                   /* 68: Block Parameter */
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
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 }
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

  { rtwCAPI_VECTOR, 4, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  16,                                  /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  2                                    /* 5 */
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
  { rtBlockSignals, 35,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 34,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 105816834U,
    1227952310U,
    956070U,
    4145864678U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  aaa_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void aaa_InitializeDataMapInfo(RT_MODEL_aaa_T *const aaa_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(aaa_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(aaa_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(aaa_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(aaa_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(aaa_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  aaa_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam(aaa_M);
  aaa_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_aaa_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(aaa_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(aaa_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(aaa_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void aaa_host_InitializeDataMapInfo(aaa_host_DataMapInfo_T *dataMap, const
    char *path)
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

/* EOF: aaa_capi.c */
