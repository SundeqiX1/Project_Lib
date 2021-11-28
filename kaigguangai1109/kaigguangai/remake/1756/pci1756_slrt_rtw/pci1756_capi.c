/*
 * pci1756_capi.c
 *
 * Code generation for model "pci1756".
 *
 * Model version              : 1.9
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Jul 12 09:51:50 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "pci1756_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "pci1756.h"
#include "pci1756_capi.h"
#include "pci1756_private.h"
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
  { 0, 0, TARGET_STRING("Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Constant10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Constant11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Constant12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Constant13"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Constant14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Constant15"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Constant31"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Constant4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Constant5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Constant6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Constant7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Constant8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Constant9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("PCI1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 18, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 19, TARGET_STRING("Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 20, TARGET_STRING("Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 21, TARGET_STRING("Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 22, TARGET_STRING("Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 23, TARGET_STRING("Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 24, TARGET_STRING("Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 25, TARGET_STRING("Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 26, TARGET_STRING("Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 27, TARGET_STRING("Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 28, TARGET_STRING("Constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 29, TARGET_STRING("Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 30, TARGET_STRING("Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 31, TARGET_STRING("Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 32, TARGET_STRING("Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 33, TARGET_STRING("Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 34, TARGET_STRING("Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 35, TARGET_STRING("PCI1"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 36, TARGET_STRING("PCI1"),
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
  &pci1756_B.Constant,                 /* 0: Signal */
  &pci1756_B.Constant1,                /* 1: Signal */
  &pci1756_B.Constant10,               /* 2: Signal */
  &pci1756_B.Constant11,               /* 3: Signal */
  &pci1756_B.Constant12,               /* 4: Signal */
  &pci1756_B.Constant13,               /* 5: Signal */
  &pci1756_B.Constant14,               /* 6: Signal */
  &pci1756_B.Constant15,               /* 7: Signal */
  &pci1756_B.Constant2,                /* 8: Signal */
  &pci1756_B.Constant3,                /* 9: Signal */
  &pci1756_B.Constant31,               /* 10: Signal */
  &pci1756_B.Constant4,                /* 11: Signal */
  &pci1756_B.Constant5,                /* 12: Signal */
  &pci1756_B.Constant6,                /* 13: Signal */
  &pci1756_B.Constant7,                /* 14: Signal */
  &pci1756_B.Constant8,                /* 15: Signal */
  &pci1756_B.Constant9,                /* 16: Signal */
  &pci1756_B.PCI1[0],                  /* 17: Signal */
  &pci1756_P.Constant_Value,           /* 18: Block Parameter */
  &pci1756_P.Constant1_Value,          /* 19: Block Parameter */
  &pci1756_P.Constant10_Value,         /* 20: Block Parameter */
  &pci1756_P.Constant11_Value,         /* 21: Block Parameter */
  &pci1756_P.Constant12_Value,         /* 22: Block Parameter */
  &pci1756_P.Constant13_Value,         /* 23: Block Parameter */
  &pci1756_P.Constant14_Value,         /* 24: Block Parameter */
  &pci1756_P.Constant15_Value,         /* 25: Block Parameter */
  &pci1756_P.Constant2_Value,          /* 26: Block Parameter */
  &pci1756_P.Constant3_Value,          /* 27: Block Parameter */
  &pci1756_P.Constant31_Value,         /* 28: Block Parameter */
  &pci1756_P.Constant4_Value,          /* 29: Block Parameter */
  &pci1756_P.Constant5_Value,          /* 30: Block Parameter */
  &pci1756_P.Constant6_Value,          /* 31: Block Parameter */
  &pci1756_P.Constant7_Value,          /* 32: Block Parameter */
  &pci1756_P.Constant8_Value,          /* 33: Block Parameter */
  &pci1756_P.Constant9_Value,          /* 34: Block Parameter */
  &pci1756_P.PCI1_P1[0],               /* 35: Block Parameter */
  &pci1756_P.PCI1_P2[0],               /* 36: Block Parameter */
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
  32,                                  /* 2 */
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
  { rtBlockSignals, 18,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 19,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 175561496U,
    1678504688U,
    2738846285U,
    3981475721U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  pci1756_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void pci1756_InitializeDataMapInfo(RT_MODEL_pci1756_T *const pci1756_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(pci1756_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(pci1756_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(pci1756_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(pci1756_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(pci1756_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  pci1756_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (pci1756_M);
  pci1756_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_pci1756_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(pci1756_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(pci1756_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(pci1756_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void pci1756_host_InitializeDataMapInfo(pci1756_host_DataMapInfo_T *dataMap,
    const char *path)
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

/* EOF: pci1756_capi.c */
