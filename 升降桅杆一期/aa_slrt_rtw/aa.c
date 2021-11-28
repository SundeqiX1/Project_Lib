/*
 * aa.c
 *
 * Code generation for model "aa".
 *
 * Model version              : 1.2
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Sep 14 10:18:53 2020
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "aa_capi.h"
#include "aa.h"
#include "aa_private.h"

/* Block signals (auto storage) */
B_aa_T aa_B;

/* Block states (auto storage) */
DW_aa_T aa_DW;

/* Real-time model */
RT_MODEL_aa_T aa_M_;
RT_MODEL_aa_T *const aa_M = &aa_M_;

/* Model output function */
static void aa_output(void)
{
  /* ok to acquire for <S1>/S-Function */
  aa_DW.SFunction_IWORK.AcquireOK = 1;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  aa_B.DataTypeConversion = aa_P.Constant_Value;
}

/* Model update function */
static void aa_update(void)
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
  if (!(++aa_M->Timing.clockTick0)) {
    ++aa_M->Timing.clockTickH0;
  }

  aa_M->Timing.t[0] = aa_M->Timing.clockTick0 * aa_M->Timing.stepSize0 +
    aa_M->Timing.clockTickH0 * aa_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void aa_initialize(void)
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
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Data Type Conversion"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &aa_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }
}

/* Model terminate function */
static void aa_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  aa_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  aa_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  aa_initialize();
}

void MdlTerminate(void)
{
  aa_terminate();
}

/* Registration function */
RT_MODEL_aa_T *aa(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)aa_M, 0,
                sizeof(RT_MODEL_aa_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = aa_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    aa_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    aa_M->Timing.sampleTimes = (&aa_M->Timing.sampleTimesArray[0]);
    aa_M->Timing.offsetTimes = (&aa_M->Timing.offsetTimesArray[0]);

    /* task periods */
    aa_M->Timing.sampleTimes[0] = (0.2);

    /* task offsets */
    aa_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(aa_M, &aa_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = aa_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    aa_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(aa_M, -1);
  aa_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    aa_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(aa_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(aa_M->rtwLogInfo, (NULL));
    rtliSetLogT(aa_M->rtwLogInfo, "tout");
    rtliSetLogX(aa_M->rtwLogInfo, "");
    rtliSetLogXFinal(aa_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(aa_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(aa_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(aa_M->rtwLogInfo, 0);
    rtliSetLogDecimation(aa_M->rtwLogInfo, 1);
    rtliSetLogY(aa_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(aa_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(aa_M->rtwLogInfo, (NULL));
  }

  aa_M->solverInfoPtr = (&aa_M->solverInfo);
  aa_M->Timing.stepSize = (0.2);
  rtsiSetFixedStepSize(&aa_M->solverInfo, 0.2);
  rtsiSetSolverMode(&aa_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  aa_M->blockIO = ((void *) &aa_B);
  (void) memset(((void *) &aa_B), 0,
                sizeof(B_aa_T));

  /* parameters */
  aa_M->defaultParam = ((real_T *)&aa_P);

  /* states (dwork) */
  aa_M->dwork = ((void *) &aa_DW);
  (void) memset((void *)&aa_DW, 0,
                sizeof(DW_aa_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  aa_InitializeDataMapInfo(aa_M);

  /* Initialize Sizes */
  aa_M->Sizes.numContStates = (0);     /* Number of continuous states */
  aa_M->Sizes.numY = (0);              /* Number of model outputs */
  aa_M->Sizes.numU = (0);              /* Number of model inputs */
  aa_M->Sizes.sysDirFeedThru = (0);    /* The model is not direct feedthrough */
  aa_M->Sizes.numSampTimes = (1);      /* Number of sample times */
  aa_M->Sizes.numBlocks = (3);         /* Number of blocks */
  aa_M->Sizes.numBlockIO = (1);        /* Number of block outputs */
  aa_M->Sizes.numBlockPrms = (1);      /* Sum of parameter "widths" */
  return aa_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
