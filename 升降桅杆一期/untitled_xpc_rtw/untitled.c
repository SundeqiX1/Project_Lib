/*
 * untitled.c
 *
 * Real-Time Workshop code generation for Simulink model "untitled.mdl".
 *
 * Model version              : 1.0
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Jul 27 17:07:13 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "untitled_capi.h"
#include "untitled.h"
#include "untitled_private.h"
#include <stdio.h>
#include "untitled_dt.h"

/* Block signals (auto storage) */
BlockIO_untitled untitled_B;

/* Real-time model */
rtModel_untitled untitled_rtM_;
rtModel_untitled *untitled_rtM = &untitled_rtM_;

/* Model output function */
void untitled_output(int_T tid)
{
  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  untitled_B.DataTypeConversion = untitled_P.Constant_Value;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void untitled_update(int_T tid)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++untitled_rtM->Timing.clockTick0)) {
    ++untitled_rtM->Timing.clockTickH0;
  }

  untitled_rtM->Timing.t[0] = untitled_rtM->Timing.clockTick0 *
    untitled_rtM->Timing.stepSize0 + untitled_rtM->Timing.clockTickH0 *
    untitled_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void untitled_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled_rtM, 0,
                sizeof(rtModel_untitled));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = untitled_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    untitled_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    untitled_rtM->Timing.sampleTimes = (&untitled_rtM->Timing.sampleTimesArray[0]);
    untitled_rtM->Timing.offsetTimes = (&untitled_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    untitled_rtM->Timing.sampleTimes[0] = (0.2);

    /* task offsets */
    untitled_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(untitled_rtM, &untitled_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = untitled_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    untitled_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(untitled_rtM, -1);
  untitled_rtM->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    untitled_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(untitled_rtM->rtwLogInfo, "tout");
    rtliSetLogX(untitled_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(untitled_rtM->rtwLogInfo, "");
    rtliSetSigLog(untitled_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(untitled_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(untitled_rtM->rtwLogInfo, 1);
    rtliSetLogY(untitled_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  untitled_rtM->Sizes.checksums[0] = (3656474426U);
  untitled_rtM->Sizes.checksums[1] = (290198882U);
  untitled_rtM->Sizes.checksums[2] = (2631426362U);
  untitled_rtM->Sizes.checksums[3] = (1175579945U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    untitled_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_rtM->extModeInfo,
      &untitled_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_rtM->extModeInfo, untitled_rtM->Sizes.checksums);
    rteiSetTPtr(untitled_rtM->extModeInfo, rtmGetTPtr(untitled_rtM));
  }

  untitled_rtM->solverInfoPtr = (&untitled_rtM->solverInfo);
  untitled_rtM->Timing.stepSize = (0.2);
  rtsiSetFixedStepSize(&untitled_rtM->solverInfo, 0.2);
  rtsiSetSolverMode(&untitled_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  untitled_rtM->ModelData.blockIO = ((void *) &untitled_B);
  (void) memset(((void *) &untitled_B), 0,
                sizeof(BlockIO_untitled));

  /* parameters */
  untitled_rtM->ModelData.defaultParam = ((real_T *)&untitled_P);

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    untitled_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    untitled_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  untitled_InitializeDataMapInfo(untitled_rtM);
}

/* Model terminate function */
void untitled_terminate(void)
{
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  untitled_output(tid);
}

void MdlUpdate(int_T tid)
{
  untitled_update(tid);
}

void MdlInitializeSizes(void)
{
  untitled_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  untitled_rtM->Sizes.numY = (0);      /* Number of model outputs */
  untitled_rtM->Sizes.numU = (0);      /* Number of model inputs */
  untitled_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  untitled_rtM->Sizes.numBlocks = (2); /* Number of blocks */
  untitled_rtM->Sizes.numBlockIO = (1);/* Number of block outputs */
  untitled_rtM->Sizes.numBlockPrms = (1);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  MdlInitialize();
}

void MdlTerminate(void)
{
  untitled_terminate();
}

rtModel_untitled *untitled(void)
{
  untitled_initialize(1);
  return untitled_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
