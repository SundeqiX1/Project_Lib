/*
 * untitled_capi.c
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.2
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Sep 28 14:23:22 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "untitled_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "untitled.h"
#include "untitled_capi.h"
#include "untitled_private.h"
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
  { 0, 0, TARGET_STRING("PCI-1756/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("PCI-1756/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("PCI-1756/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("PCI-1756/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("PCI-1756/Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("PCI-1756/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 6, 0, TARGET_STRING("PCI-1756/PCI1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("PCI-1756/PCI1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("PCI-1756/PCI2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("PCI-1756/PCI2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("PCI-1756/PCI3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("PCI-1756/PCI3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Subsystem/Constant"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 13, 0, TARGET_STRING("Subsystem/Constant1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 14, TARGET_STRING("PCI-1756/PCI1"),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 15, TARGET_STRING("PCI-1756/PCI1"),
    TARGET_STRING("P2"), 0, 3, 0 },

  { 16, TARGET_STRING("PCI-1756/PCI2"),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 17, TARGET_STRING("PCI-1756/PCI2"),
    TARGET_STRING("P2"), 0, 3, 0 },

  { 18, TARGET_STRING("PCI-1756/PCI3"),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 19, TARGET_STRING("PCI-1756/PCI3"),
    TARGET_STRING("P2"), 0, 3, 0 },

  { 20, TARGET_STRING("Subsystem/Constant"),
    TARGET_STRING("Value"), 0, 2, 0 },

  { 21, TARGET_STRING("Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 2, 0 },

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
  &untitled_B.DataTypeConversion1[0],  /* 0: Signal */
  &untitled_B.DataTypeConversion2[0],  /* 1: Signal */
  &untitled_B.DataTypeConversion3[0],  /* 2: Signal */
  &untitled_B.DataTypeConversion4[0],  /* 3: Signal */
  &untitled_B.DataTypeConversion5[0],  /* 4: Signal */
  &untitled_B.DataTypeConversion6[0],  /* 5: Signal */
  &untitled_B.PCI1_o1[0],              /* 6: Signal */
  &untitled_B.PCI1_o2[0],              /* 7: Signal */
  &untitled_B.PCI2_o1[0],              /* 8: Signal */
  &untitled_B.PCI2_o2[0],              /* 9: Signal */
  &untitled_B.PCI3_o1[0],              /* 10: Signal */
  &untitled_B.PCI3_o2[0],              /* 11: Signal */
  &untitled_B.Constant,                /* 12: Signal */
  &untitled_B.Constant1,               /* 13: Signal */
  &untitled_P.PCI1_P1[0],              /* 14: Block Parameter */
  &untitled_P.PCI1_P2[0],              /* 15: Block Parameter */
  &untitled_P.PCI2_P1[0],              /* 16: Block Parameter */
  &untitled_P.PCI2_P2[0],              /* 17: Block Parameter */
  &untitled_P.PCI3_P1[0],              /* 18: Block Parameter */
  &untitled_P.PCI3_P2[0],              /* 19: Block Parameter */
  &untitled_P.Constant_Value,          /* 20: Block Parameter */
  &untitled_P.Constant1_Value,         /* 21: Block Parameter */
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

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_SCALAR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  16,                                  /* 0 */
  1,                                   /* 1 */
  4,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  1,                                   /* 5 */
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
  { rtBlockSignals, 14,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 8,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 619542408U,
    1553138978U,
    2448679678U,
    104064824U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  untitled_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void untitled_InitializeDataMapInfo(RT_MODEL_untitled_T *const untitled_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(untitled_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(untitled_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(untitled_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(untitled_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(untitled_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  untitled_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (untitled_M);
  untitled_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_untitled_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(untitled_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(untitled_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(untitled_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void untitled_host_InitializeDataMapInfo(untitled_host_DataMapInfo_T *dataMap,
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

/* EOF: untitled_capi.c */
