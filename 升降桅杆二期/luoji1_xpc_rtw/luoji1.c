/*
 * luoji1.c
 *
 * Real-Time Workshop code generation for Simulink model "luoji1.mdl".
 *
 * Model version              : 1.3
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Jun 01 16:00:29 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "luoji1_capi.h"
#include "luoji1.h"
#include "luoji1_private.h"
#include <stdio.h>
#include "luoji1_dt.h"

/* Named constants for Stateflow: '<Root>/Chart' */
#define luoji1_IN_off1                 (1U)
#define luoji1_IN_off2                 (2U)
#define luoji1_IN_off3                 (3U)
#define luoji1_IN_off4                 (4U)
#define luoji1_IN_off5                 (5U)
#define luoji1_IN_off6                 (6U)
#define luoji1_IN_on1                  (7U)
#define luoji1_IN_on2                  (8U)
#define luoji1_IN_on3                  (9U)
#define luoji1_IN_on4                  (10U)
#define luoji1_IN_on5                  (11U)
#define luoji1_IN_on6                  (12U)
#define luoji1_IN_start                (13U)

/* Block signals (auto storage) */
BlockIO_luoji1 luoji1_B;

/* Block states (auto storage) */
D_Work_luoji1 luoji1_DWork;

/* Real-time model */
rtModel_luoji1 luoji1_rtM_;
rtModel_luoji1 *luoji1_rtM = &luoji1_rtM_;

/* Model output function */
void luoji1_output(int_T tid)
{
  /* Constant: '<Root>/Constant' */
  luoji1_B.Constant = luoji1_P.Constant_Value;

  /* Constant: '<Root>/Constant1' */
  luoji1_B.Constant1 = luoji1_P.Constant1_Value;

  /* Constant: '<Root>/Constant2' */
  luoji1_B.Constant2 = luoji1_P.Constant2_Value;

  /* Constant: '<Root>/Constant3' */
  luoji1_B.Constant3 = luoji1_P.Constant3_Value;

  /* Constant: '<Root>/Constant4' */
  luoji1_B.Constant4 = luoji1_P.Constant4_Value;

  /* Constant: '<Root>/Constant5' */
  luoji1_B.Constant5 = luoji1_P.Constant5_Value;

  /* Constant: '<Root>/Constant6' */
  luoji1_B.Constant6 = luoji1_P.Constant6_Value;

  /* Stateflow: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  if (luoji1_DWork.temporalCounter_i1 < 3) {
    luoji1_DWork.temporalCounter_i1 = (uint8_T)(luoji1_DWork.temporalCounter_i1
      + 1);
  }

  if (luoji1_DWork.is_active_c1_luoji1 == 0) {
    /* Entry: Chart */
    luoji1_DWork.is_active_c1_luoji1 = 1U;

    /* Transition: '<S1>:6' */
    /* Entry 'start': '<S1>:1' */
    luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
    luoji1_B.a = 0.0;
  } else {
    switch (luoji1_DWork.is_c1_luoji1) {
     case luoji1_IN_off1:
      /* During 'off1': '<S1>:23' */
      if (luoji1_DWork.temporalCounter_i1 >= 2) {
        /* Transition: '<S1>:37' */
        /* Exit 'off1': '<S1>:23' */
        /* Entry 'start': '<S1>:1' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
        luoji1_B.a = 0.0;
      }
      break;

     case luoji1_IN_off2:
      /* During 'off2': '<S1>:26' */
      if (luoji1_DWork.temporalCounter_i1 >= 2) {
        /* Transition: '<S1>:38' */
        /* Exit 'off2': '<S1>:26' */
        /* Entry 'start': '<S1>:1' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
        luoji1_B.a = 0.0;
      }
      break;

     case luoji1_IN_off3:
      /* During 'off3': '<S1>:27' */
      if (luoji1_DWork.temporalCounter_i1 >= 2) {
        /* Transition: '<S1>:39' */
        /* Exit 'off3': '<S1>:27' */
        /* Entry 'start': '<S1>:1' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
        luoji1_B.a = 0.0;
      }
      break;

     case luoji1_IN_off4:
      /* During 'off4': '<S1>:28' */
      if (luoji1_DWork.temporalCounter_i1 >= 2) {
        /* Transition: '<S1>:40' */
        /* Exit 'off4': '<S1>:28' */
        /* Entry 'start': '<S1>:1' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
        luoji1_B.a = 0.0;
      }
      break;

     case luoji1_IN_off5:
      /* During 'off5': '<S1>:29' */
      if (luoji1_DWork.temporalCounter_i1 >= 2) {
        /* Transition: '<S1>:41' */
        /* Exit 'off5': '<S1>:29' */
        /* Entry 'start': '<S1>:1' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
        luoji1_B.a = 0.0;
      }
      break;

     case luoji1_IN_off6:
      /* During 'off6': '<S1>:30' */
      if (luoji1_DWork.temporalCounter_i1 >= 2) {
        /* Transition: '<S1>:42' */
        /* Exit 'off6': '<S1>:30' */
        /* Entry 'start': '<S1>:1' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
        luoji1_B.a = 0.0;
      }
      break;

     case luoji1_IN_on1:
      /* During 'on1': '<S1>:7' */
      if (luoji1_B.Constant1 == 1.0) {
        /* Transition: '<S1>:25' */
        /* Exit 'on1': '<S1>:7' */
        /* Entry 'off1': '<S1>:23' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_off1;
        luoji1_DWork.temporalCounter_i1 = 0U;
        luoji1_B.a = 0.0;
        luoji1_B.shengqidaowei = 1.0;
        luoji1_B.huiluodaowei = 0.0;
      }
      break;

     case luoji1_IN_on2:
      /* During 'on2': '<S1>:8' */
      if (luoji1_B.Constant2 == 2.0) {
        /* Transition: '<S1>:31' */
        /* Exit 'on2': '<S1>:8' */
        /* Entry 'off2': '<S1>:26' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_off2;
        luoji1_DWork.temporalCounter_i1 = 0U;
        luoji1_B.a = 0.0;
        luoji1_B.shengqidaowei = 0.0;
        luoji1_B.huiluodaowei = 1.0;
      }
      break;

     case luoji1_IN_on3:
      /* During 'on3': '<S1>:9' */
      if (luoji1_B.Constant3 >= 5200.0) {
        /* Transition: '<S1>:33' */
        /* Exit 'on3': '<S1>:9' */
        /* Entry 'off3': '<S1>:27' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_off3;
        luoji1_DWork.temporalCounter_i1 = 0U;
        luoji1_B.a = 0.0;
        luoji1_B.fanzhuanfudaowei = 1.0;
        luoji1_B.fanzhuanyangdaowei = 0.0;
      }
      break;

     case luoji1_IN_on4:
      /* During 'on4': '<S1>:10' */
      if (luoji1_B.Constant4 <= 1500.0) {
        /* Transition: '<S1>:34' */
        /* Exit 'on4': '<S1>:10' */
        /* Entry 'off4': '<S1>:28' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_off4;
        luoji1_DWork.temporalCounter_i1 = 0U;
        luoji1_B.a = 0.0;
        luoji1_B.fanzhuanfudaowei = 0.0;
        luoji1_B.fanzhuanyangdaowei = 1.0;
      }
      break;

     case luoji1_IN_on5:
      /* During 'on5': '<S1>:11' */
      if (luoji1_B.Constant5 >= 4900.0) {
        /* Transition: '<S1>:35' */
        /* Exit 'on5': '<S1>:11' */
        /* Entry 'off5': '<S1>:29' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_off5;
        luoji1_DWork.temporalCounter_i1 = 0U;
        luoji1_B.a = 0.0;
        luoji1_B.dangbanzhangkaidaowei = 1.0;
        luoji1_B.dangbanhelongdaowei = 0.0;
      }
      break;

     case luoji1_IN_on6:
      /* During 'on6': '<S1>:12' */
      if (luoji1_B.Constant6 <= 1400.0) {
        /* Transition: '<S1>:36' */
        /* Exit 'on6': '<S1>:12' */
        /* Entry 'off6': '<S1>:30' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_off6;
        luoji1_DWork.temporalCounter_i1 = 0U;
        luoji1_B.a = 0.0;
        luoji1_B.dangbanhelongdaowei = 1.0;
        luoji1_B.dangbanzhangkaidaowei = 0.0;
      }
      break;

     case luoji1_IN_start:
      /* During 'start': '<S1>:1' */
      /* Transition: '<S1>:15' */
      if (luoji1_B.Constant == 1.0) {
        /* Transition: '<S1>:16' */
        /* Exit 'start': '<S1>:1' */
        /* Entry 'on1': '<S1>:7' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_on1;
        luoji1_B.a = 1.0;
      } else if (luoji1_B.Constant == 2.0) {
        /* Transition: '<S1>:17' */
        /* Exit 'start': '<S1>:1' */
        /* Entry 'on2': '<S1>:8' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_on2;
        luoji1_B.a = 2.0;
      } else if (luoji1_B.Constant == 3.0) {
        /* Transition: '<S1>:18' */
        /* Exit 'start': '<S1>:1' */
        /* Entry 'on3': '<S1>:9' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_on3;
        luoji1_B.a = 3.0;
      } else if (luoji1_B.Constant == 4.0) {
        /* Transition: '<S1>:19' */
        /* Exit 'start': '<S1>:1' */
        /* Entry 'on4': '<S1>:10' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_on4;
        luoji1_B.a = 4.0;
      } else if (luoji1_B.Constant == 5.0) {
        /* Transition: '<S1>:20' */
        /* Exit 'start': '<S1>:1' */
        /* Entry 'on5': '<S1>:11' */
        luoji1_DWork.is_c1_luoji1 = luoji1_IN_on5;
        luoji1_B.a = 5.0;
      } else {
        if (luoji1_B.Constant == 6.0) {
          /* Transition: '<S1>:21' */
          /* Exit 'start': '<S1>:1' */
          /* Entry 'on6': '<S1>:12' */
          luoji1_DWork.is_c1_luoji1 = luoji1_IN_on6;
          luoji1_B.a = 6.0;
        }
      }
      break;

     default:
      /* Transition: '<S1>:6' */
      /* Entry 'start': '<S1>:1' */
      luoji1_DWork.is_c1_luoji1 = luoji1_IN_start;
      luoji1_B.a = 0.0;
      break;
    }
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void luoji1_update(int_T tid)
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
  if (!(++luoji1_rtM->Timing.clockTick0)) {
    ++luoji1_rtM->Timing.clockTickH0;
  }

  luoji1_rtM->Timing.t[0] = luoji1_rtM->Timing.clockTick0 *
    luoji1_rtM->Timing.stepSize0 + luoji1_rtM->Timing.clockTickH0 *
    luoji1_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void luoji1_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)luoji1_rtM, 0,
                sizeof(rtModel_luoji1));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = luoji1_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    luoji1_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    luoji1_rtM->Timing.sampleTimes = (&luoji1_rtM->Timing.sampleTimesArray[0]);
    luoji1_rtM->Timing.offsetTimes = (&luoji1_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    luoji1_rtM->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    luoji1_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(luoji1_rtM, &luoji1_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = luoji1_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    luoji1_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(luoji1_rtM, -1);
  luoji1_rtM->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    luoji1_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(luoji1_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(luoji1_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(luoji1_rtM->rtwLogInfo, "tout");
    rtliSetLogX(luoji1_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(luoji1_rtM->rtwLogInfo, "");
    rtliSetSigLog(luoji1_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(luoji1_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(luoji1_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(luoji1_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(luoji1_rtM->rtwLogInfo, 1);
    rtliSetLogY(luoji1_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(luoji1_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(luoji1_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  luoji1_rtM->Sizes.checksums[0] = (2996391686U);
  luoji1_rtM->Sizes.checksums[1] = (2295491702U);
  luoji1_rtM->Sizes.checksums[2] = (130458884U);
  luoji1_rtM->Sizes.checksums[3] = (2048403265U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    luoji1_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(luoji1_rtM->extModeInfo,
      &luoji1_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(luoji1_rtM->extModeInfo, luoji1_rtM->Sizes.checksums);
    rteiSetTPtr(luoji1_rtM->extModeInfo, rtmGetTPtr(luoji1_rtM));
  }

  luoji1_rtM->solverInfoPtr = (&luoji1_rtM->solverInfo);
  luoji1_rtM->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&luoji1_rtM->solverInfo, 0.001);
  rtsiSetSolverMode(&luoji1_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  luoji1_rtM->ModelData.blockIO = ((void *) &luoji1_B);
  (void) memset(((void *) &luoji1_B), 0,
                sizeof(BlockIO_luoji1));

  /* parameters */
  luoji1_rtM->ModelData.defaultParam = ((real_T *)&luoji1_P);

  /* states (dwork) */
  luoji1_rtM->Work.dwork = ((void *) &luoji1_DWork);
  (void) memset((void *)&luoji1_DWork, 0,
                sizeof(D_Work_luoji1));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    luoji1_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    luoji1_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  luoji1_InitializeDataMapInfo(luoji1_rtM);
}

/* Model terminate function */
void luoji1_terminate(void)
{
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  luoji1_output(tid);
}

void MdlUpdate(int_T tid)
{
  luoji1_update(tid);
}

void MdlInitializeSizes(void)
{
  luoji1_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  luoji1_rtM->Sizes.numY = (0);        /* Number of model outputs */
  luoji1_rtM->Sizes.numU = (0);        /* Number of model inputs */
  luoji1_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  luoji1_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  luoji1_rtM->Sizes.numBlocks = (10);  /* Number of blocks */
  luoji1_rtM->Sizes.numBlockIO = (14); /* Number of block outputs */
  luoji1_rtM->Sizes.numBlockPrms = (7);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for Stateflow: '<Root>/Chart' */
  luoji1_DWork.is_active_c1_luoji1 = 0U;
  luoji1_DWork.is_c1_luoji1 = 0U;
  luoji1_B.a = 0.0;
  luoji1_B.shengqidaowei = 0.0;
  luoji1_B.huiluodaowei = 0.0;
  luoji1_B.fanzhuanfudaowei = 0.0;
  luoji1_B.fanzhuanyangdaowei = 0.0;
  luoji1_B.dangbanzhangkaidaowei = 0.0;
  luoji1_B.dangbanhelongdaowei = 0.0;
}

void MdlStart(void)
{
  /* Start for Constant: '<Root>/Constant' */
  luoji1_B.Constant = luoji1_P.Constant_Value;

  /* Start for Constant: '<Root>/Constant1' */
  luoji1_B.Constant1 = luoji1_P.Constant1_Value;

  /* Start for Constant: '<Root>/Constant2' */
  luoji1_B.Constant2 = luoji1_P.Constant2_Value;

  /* Start for Constant: '<Root>/Constant3' */
  luoji1_B.Constant3 = luoji1_P.Constant3_Value;

  /* Start for Constant: '<Root>/Constant4' */
  luoji1_B.Constant4 = luoji1_P.Constant4_Value;

  /* Start for Constant: '<Root>/Constant5' */
  luoji1_B.Constant5 = luoji1_P.Constant5_Value;

  /* Start for Constant: '<Root>/Constant6' */
  luoji1_B.Constant6 = luoji1_P.Constant6_Value;
  MdlInitialize();
}

void MdlTerminate(void)
{
  luoji1_terminate();
}

rtModel_luoji1 *luoji1(void)
{
  luoji1_initialize(1);
  return luoji1_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
