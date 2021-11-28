/*
 * bb2010.c
 *
 * Real-Time Workshop code generation for Simulink model "bb2010.mdl".
 *
 * Model version              : 1.3
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Jul 27 16:36:37 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit Real-Time Simulator
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "bb2010_capi.h"
#include "bb2010.h"
#include "bb2010_private.h"
#include <stdio.h>
#include "bb2010_dt.h"

/* Block signals (auto storage) */
BlockIO_bb2010 bb2010_B;

/* Block states (auto storage) */
D_Work_bb2010 bb2010_DWork;

/* Real-time model */
rtModel_bb2010 bb2010_rtM_;
rtModel_bb2010 *bb2010_rtM = &bb2010_rtM_;

/* Model output function */
void bb2010_output(int_T tid)
{
  /* ok to acquire for <S1>/S-Function */
  bb2010_DWork.SFunction_IWORK.AcquireOK = 1;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  bb2010_B.DataTypeConversion = bb2010_P.Constant_Value;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void bb2010_update(int_T tid)
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
  if (!(++bb2010_rtM->Timing.clockTick0)) {
    ++bb2010_rtM->Timing.clockTickH0;
  }

  bb2010_rtM->Timing.t[0] = bb2010_rtM->Timing.clockTick0 *
    bb2010_rtM->Timing.stepSize0 + bb2010_rtM->Timing.clockTickH0 *
    bb2010_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void bb2010_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)bb2010_rtM, 0,
                sizeof(rtModel_bb2010));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = bb2010_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    bb2010_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    bb2010_rtM->Timing.sampleTimes = (&bb2010_rtM->Timing.sampleTimesArray[0]);
    bb2010_rtM->Timing.offsetTimes = (&bb2010_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    bb2010_rtM->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    bb2010_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(bb2010_rtM, &bb2010_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = bb2010_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    bb2010_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(bb2010_rtM, -1);
  bb2010_rtM->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    bb2010_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(bb2010_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(bb2010_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(bb2010_rtM->rtwLogInfo, "tout");
    rtliSetLogX(bb2010_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(bb2010_rtM->rtwLogInfo, "");
    rtliSetSigLog(bb2010_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(bb2010_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(bb2010_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(bb2010_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(bb2010_rtM->rtwLogInfo, 1);
    rtliSetLogY(bb2010_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(bb2010_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(bb2010_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  bb2010_rtM->Sizes.checksums[0] = (2176360319U);
  bb2010_rtM->Sizes.checksums[1] = (2051572944U);
  bb2010_rtM->Sizes.checksums[2] = (241626812U);
  bb2010_rtM->Sizes.checksums[3] = (3057928936U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    bb2010_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(bb2010_rtM->extModeInfo,
      &bb2010_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(bb2010_rtM->extModeInfo, bb2010_rtM->Sizes.checksums);
    rteiSetTPtr(bb2010_rtM->extModeInfo, rtmGetTPtr(bb2010_rtM));
  }

  bb2010_rtM->solverInfoPtr = (&bb2010_rtM->solverInfo);
  bb2010_rtM->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&bb2010_rtM->solverInfo, 0.001);
  rtsiSetSolverMode(&bb2010_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  bb2010_rtM->ModelData.blockIO = ((void *) &bb2010_B);
  (void) memset(((void *) &bb2010_B), 0,
                sizeof(BlockIO_bb2010));

  /* parameters */
  bb2010_rtM->ModelData.defaultParam = ((real_T *)&bb2010_P);

  /* states (dwork) */
  bb2010_rtM->Work.dwork = ((void *) &bb2010_DWork);
  (void) memset((void *)&bb2010_DWork, 0,
                sizeof(D_Work_bb2010));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    bb2010_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    bb2010_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  bb2010_InitializeDataMapInfo(bb2010_rtM);
}

/* Model terminate function */
void bb2010_terminate(void)
{
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  bb2010_output(tid);
}

void MdlUpdate(int_T tid)
{
  bb2010_update(tid);
}

void MdlInitializeSizes(void)
{
  bb2010_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  bb2010_rtM->Sizes.numY = (0);        /* Number of model outputs */
  bb2010_rtM->Sizes.numU = (0);        /* Number of model inputs */
  bb2010_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  bb2010_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  bb2010_rtM->Sizes.numBlocks = (3);   /* Number of blocks */
  bb2010_rtM->Sizes.numBlockIO = (1);  /* Number of block outputs */
  bb2010_rtM->Sizes.numBlockPrms = (1);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  /* S-Function Block: <S1>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion"));
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 40, 0);
        rl32eSetScope(1, 7, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Data Type Conversion"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 10, 0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &bb2010_DWork.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  bb2010_terminate();
}

rtModel_bb2010 *bb2010(void)
{
  bb2010_initialize(1);
  return bb2010_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
