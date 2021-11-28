/*
 * pci1756a_capi.c
 *
 * Code generation for model "pci1756a".
 *
 * Model version              : 1.4
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri Jul 09 22:36:31 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "pci1756a_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "pci1756a.h"
#include "pci1756a_capi.h"
#include "pci1756a_private.h"
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
  { 0, 0, TARGET_STRING("PCI1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 1, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 2, TARGET_STRING("Constant1"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 3, TARGET_STRING("Constant10"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 4, TARGET_STRING("Constant11"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 5, TARGET_STRING("Constant12"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 6, TARGET_STRING("Constant13"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 7, TARGET_STRING("Constant14"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 8, TARGET_STRING("Constant15"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 9, TARGET_STRING("Constant16"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 10, TARGET_STRING("Constant17"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 11, TARGET_STRING("Constant18"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 12, TARGET_STRING("Constant19"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 13, TARGET_STRING("Constant2"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 14, TARGET_STRING("Constant20"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 15, TARGET_STRING("Constant21"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 16, TARGET_STRING("Constant22"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 17, TARGET_STRING("Constant23"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 18, TARGET_STRING("Constant24"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 19, TARGET_STRING("Constant25"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 20, TARGET_STRING("Constant26"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 21, TARGET_STRING("Constant27"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 22, TARGET_STRING("Constant28"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 23, TARGET_STRING("Constant29"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 24, TARGET_STRING("Constant3"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 25, TARGET_STRING("Constant30"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 26, TARGET_STRING("Constant31"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 27, TARGET_STRING("Constant4"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 28, TARGET_STRING("Constant5"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 29, TARGET_STRING("Constant6"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 30, TARGET_STRING("Constant7"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 31, TARGET_STRING("Constant8"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 32, TARGET_STRING("Constant9"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 33, TARGET_STRING("PCI1"),
    TARGET_STRING("P1"), 0, 1, 0 },

  { 34, TARGET_STRING("PCI1"),
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
  &pci1756a_B.PCI1[0],                 /* 0: Signal */
  &pci1756a_P.Constant_Value,          /* 1: Block Parameter */
  &pci1756a_P.Constant1_Value,         /* 2: Block Parameter */
  &pci1756a_P.Constant10_Value,        /* 3: Block Parameter */
  &pci1756a_P.Constant11_Value,        /* 4: Block Parameter */
  &pci1756a_P.Constant12_Value,        /* 5: Block Parameter */
  &pci1756a_P.Constant13_Value,        /* 6: Block Parameter */
  &pci1756a_P.Constant14_Value,        /* 7: Block Parameter */
  &pci1756a_P.Constant15_Value,        /* 8: Block Parameter */
  &pci1756a_P.Constant16_Value,        /* 9: Block Parameter */
  &pci1756a_P.Constant17_Value,        /* 10: Block Parameter */
  &pci1756a_P.Constant18_Value,        /* 11: Block Parameter */
  &pci1756a_P.Constant19_Value,        /* 12: Block Parameter */
  &pci1756a_P.Constant2_Value,         /* 13: Block Parameter */
  &pci1756a_P.Constant20_Value,        /* 14: Block Parameter */
  &pci1756a_P.Constant21_Value,        /* 15: Block Parameter */
  &pci1756a_P.Constant22_Value,        /* 16: Block Parameter */
  &pci1756a_P.Constant23_Value,        /* 17: Block Parameter */
  &pci1756a_P.Constant24_Value,        /* 18: Block Parameter */
  &pci1756a_P.Constant25_Value,        /* 19: Block Parameter */
  &pci1756a_P.Constant26_Value,        /* 20: Block Parameter */
  &pci1756a_P.Constant27_Value,        /* 21: Block Parameter */
  &pci1756a_P.Constant28_Value,        /* 22: Block Parameter */
  &pci1756a_P.Constant29_Value,        /* 23: Block Parameter */
  &pci1756a_P.Constant3_Value,         /* 24: Block Parameter */
  &pci1756a_P.Constant30_Value,        /* 25: Block Parameter */
  &pci1756a_P.Constant31_Value,        /* 26: Block Parameter */
  &pci1756a_P.Constant4_Value,         /* 27: Block Parameter */
  &pci1756a_P.Constant5_Value,         /* 28: Block Parameter */
  &pci1756a_P.Constant6_Value,         /* 29: Block Parameter */
  &pci1756a_P.Constant7_Value,         /* 30: Block Parameter */
  &pci1756a_P.Constant8_Value,         /* 31: Block Parameter */
  &pci1756a_P.Constant9_Value,         /* 32: Block Parameter */
  &pci1756a_P.PCI1_P1,                 /* 33: Block Parameter */
  &pci1756a_P.PCI1_P2[0],              /* 34: Block Parameter */
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
  { rtwCAPI_VECTOR, 0, 2, 0 },

  { rtwCAPI_SCALAR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  32,                                  /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
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
  { rtBlockSignals, 1,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 34,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3501107398U,
    2254795594U,
    2179077872U,
    846751539U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  pci1756a_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void pci1756a_InitializeDataMapInfo(RT_MODEL_pci1756a_T *const pci1756a_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(pci1756a_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(pci1756a_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(pci1756a_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(pci1756a_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(pci1756a_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  pci1756a_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (pci1756a_M);
  pci1756a_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_pci1756a_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(pci1756a_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(pci1756a_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(pci1756a_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void pci1756a_host_InitializeDataMapInfo(pci1756a_host_DataMapInfo_T *dataMap,
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

/* EOF: pci1756a_capi.c */
