/*
 * aaa.c
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

#include "rt_logging_mmi.h"
#include "aaa_capi.h"
#include "aaa.h"
#include "aaa_private.h"

/* Block signals (auto storage) */
B_aaa_T aaa_B;

/* Block states (auto storage) */
DW_aaa_T aaa_DW;

/* Real-time model */
RT_MODEL_aaa_T aaa_M_;
RT_MODEL_aaa_T *const aaa_M = &aaa_M_;

/* Model output function */
static void aaa_output(void)
{
  /* Constant: '<Root>/constant1' */
  aaa_B.constant1 = aaa_P.constant1_Value;

  /* Constant: '<Root>/constant2' */
  aaa_B.constant2 = aaa_P.constant2_Value;

  /* Constant: '<Root>/constant3' */
  aaa_B.constant3 = aaa_P.constant3_Value;

  /* Constant: '<Root>/constant4' */
  aaa_B.constant4 = aaa_P.constant4_Value;

  /* Constant: '<Root>/constant5' */
  aaa_B.constant5 = aaa_P.constant5_Value;

  /* Constant: '<Root>/constant6' */
  aaa_B.constant6 = aaa_P.constant6_Value;

  /* Constant: '<Root>/constant7' */
  aaa_B.constant7 = aaa_P.constant7_Value;

  /* Constant: '<Root>/constant8' */
  aaa_B.constant8 = aaa_P.constant8_Value;

  /* Constant: '<Root>/constant9' */
  aaa_B.constant9 = aaa_P.constant9_Value;

  /* Constant: '<Root>/constant10' */
  aaa_B.constant10 = aaa_P.constant10_Value;

  /* Constant: '<Root>/constant11' */
  aaa_B.constant11 = aaa_P.constant11_Value;

  /* Constant: '<Root>/constant12' */
  aaa_B.constant12 = aaa_P.constant12_Value;

  /* Constant: '<Root>/constant13' */
  aaa_B.constant13 = aaa_P.constant13_Value;

  /* Constant: '<Root>/constant14' */
  aaa_B.constant14 = aaa_P.constant14_Value;

  /* Constant: '<Root>/constant15' */
  aaa_B.constant15 = aaa_P.constant15_Value;

  /* Constant: '<Root>/constant16' */
  aaa_B.constant16 = aaa_P.constant16_Value;

  /* Constant: '<Root>/constant17' */
  aaa_B.constant17 = aaa_P.constant17_Value;

  /* Constant: '<Root>/constant25' */
  aaa_B.constant25 = aaa_P.constant25_Value;

  /* Constant: '<Root>/constant26' */
  aaa_B.constant26 = aaa_P.constant26_Value;

  /* Constant: '<Root>/constant27' */
  aaa_B.constant27 = aaa_P.constant27_Value;

  /* Constant: '<Root>/constant28' */
  aaa_B.constant28 = aaa_P.constant28_Value;

  /* Constant: '<Root>/constant29' */
  aaa_B.constant29 = aaa_P.constant29_Value;

  /* Constant: '<Root>/constant30' */
  aaa_B.constant30 = aaa_P.constant30_Value;

  /* Constant: '<Root>/constant31' */
  aaa_B.constant31 = aaa_P.constant31_Value;

  /* Constant: '<Root>/constant32' */
  aaa_B.constant32 = aaa_P.constant32_Value;

  /* Constant: '<Root>/constant18' */
  aaa_B.constant18 = aaa_P.constant18_Value;

  /* Constant: '<Root>/constant19' */
  aaa_B.constant19 = aaa_P.constant19_Value;

  /* Constant: '<Root>/constant20' */
  aaa_B.constant20 = aaa_P.constant20_Value;

  /* Constant: '<Root>/constant21' */
  aaa_B.constant21 = aaa_P.constant21_Value;

  /* Constant: '<Root>/constant22' */
  aaa_B.constant22 = aaa_P.constant22_Value;

  /* Constant: '<Root>/constant23' */
  aaa_B.constant23 = aaa_P.constant23_Value;

  /* Constant: '<Root>/constant24' */
  aaa_B.constant24 = aaa_P.constant24_Value;

  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  memcpy(&aaa_B.DataTypeConversion[0], &aaa_B.PCI1_o1[0], sizeof(real_T) << 4U);
}

/* Model update function */
static void aaa_update(void)
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
  if (!(++aaa_M->Timing.clockTick0)) {
    ++aaa_M->Timing.clockTickH0;
  }

  aaa_M->Timing.t[0] = aaa_M->Timing.clockTick0 * aaa_M->Timing.stepSize0 +
    aaa_M->Timing.clockTickH0 * aaa_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void aaa_initialize(void)
{
  /* Start for Constant: '<Root>/constant1' */
  aaa_B.constant1 = aaa_P.constant1_Value;

  /* Start for Constant: '<Root>/constant2' */
  aaa_B.constant2 = aaa_P.constant2_Value;

  /* Start for Constant: '<Root>/constant3' */
  aaa_B.constant3 = aaa_P.constant3_Value;

  /* Start for Constant: '<Root>/constant4' */
  aaa_B.constant4 = aaa_P.constant4_Value;

  /* Start for Constant: '<Root>/constant5' */
  aaa_B.constant5 = aaa_P.constant5_Value;

  /* Start for Constant: '<Root>/constant6' */
  aaa_B.constant6 = aaa_P.constant6_Value;

  /* Start for Constant: '<Root>/constant7' */
  aaa_B.constant7 = aaa_P.constant7_Value;

  /* Start for Constant: '<Root>/constant8' */
  aaa_B.constant8 = aaa_P.constant8_Value;

  /* Start for Constant: '<Root>/constant9' */
  aaa_B.constant9 = aaa_P.constant9_Value;

  /* Start for Constant: '<Root>/constant10' */
  aaa_B.constant10 = aaa_P.constant10_Value;

  /* Start for Constant: '<Root>/constant11' */
  aaa_B.constant11 = aaa_P.constant11_Value;

  /* Start for Constant: '<Root>/constant12' */
  aaa_B.constant12 = aaa_P.constant12_Value;

  /* Start for Constant: '<Root>/constant13' */
  aaa_B.constant13 = aaa_P.constant13_Value;

  /* Start for Constant: '<Root>/constant14' */
  aaa_B.constant14 = aaa_P.constant14_Value;

  /* Start for Constant: '<Root>/constant15' */
  aaa_B.constant15 = aaa_P.constant15_Value;

  /* Start for Constant: '<Root>/constant16' */
  aaa_B.constant16 = aaa_P.constant16_Value;

  /* Start for Constant: '<Root>/constant17' */
  aaa_B.constant17 = aaa_P.constant17_Value;

  /* Start for Constant: '<Root>/constant25' */
  aaa_B.constant25 = aaa_P.constant25_Value;

  /* Start for Constant: '<Root>/constant26' */
  aaa_B.constant26 = aaa_P.constant26_Value;

  /* Start for Constant: '<Root>/constant27' */
  aaa_B.constant27 = aaa_P.constant27_Value;

  /* Start for Constant: '<Root>/constant28' */
  aaa_B.constant28 = aaa_P.constant28_Value;

  /* Start for Constant: '<Root>/constant29' */
  aaa_B.constant29 = aaa_P.constant29_Value;

  /* Start for Constant: '<Root>/constant30' */
  aaa_B.constant30 = aaa_P.constant30_Value;

  /* Start for Constant: '<Root>/constant31' */
  aaa_B.constant31 = aaa_P.constant31_Value;

  /* Start for Constant: '<Root>/constant32' */
  aaa_B.constant32 = aaa_P.constant32_Value;

  /* Start for Constant: '<Root>/constant18' */
  aaa_B.constant18 = aaa_P.constant18_Value;

  /* Start for Constant: '<Root>/constant19' */
  aaa_B.constant19 = aaa_P.constant19_Value;

  /* Start for Constant: '<Root>/constant20' */
  aaa_B.constant20 = aaa_P.constant20_Value;

  /* Start for Constant: '<Root>/constant21' */
  aaa_B.constant21 = aaa_P.constant21_Value;

  /* Start for Constant: '<Root>/constant22' */
  aaa_B.constant22 = aaa_P.constant22_Value;

  /* Start for Constant: '<Root>/constant23' */
  aaa_B.constant23 = aaa_P.constant23_Value;

  /* Start for Constant: '<Root>/constant24' */
  aaa_B.constant24 = aaa_P.constant24_Value;

  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void aaa_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  aaa_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  aaa_update();
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
  aaa_initialize();
}

void MdlTerminate(void)
{
  aaa_terminate();
}

/* Registration function */
RT_MODEL_aaa_T *aaa(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)aaa_M, 0,
                sizeof(RT_MODEL_aaa_T));
  rtsiSetSolverName(&aaa_M->solverInfo,"FixedStepDiscrete");
  aaa_M->solverInfoPtr = (&aaa_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = aaa_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    aaa_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    aaa_M->Timing.sampleTimes = (&aaa_M->Timing.sampleTimesArray[0]);
    aaa_M->Timing.offsetTimes = (&aaa_M->Timing.offsetTimesArray[0]);

    /* task periods */
    aaa_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    aaa_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(aaa_M, &aaa_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = aaa_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    aaa_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(aaa_M, -1);
  aaa_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    aaa_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(aaa_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(aaa_M->rtwLogInfo, (NULL));
    rtliSetLogT(aaa_M->rtwLogInfo, "tout");
    rtliSetLogX(aaa_M->rtwLogInfo, "");
    rtliSetLogXFinal(aaa_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(aaa_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(aaa_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(aaa_M->rtwLogInfo, 0);
    rtliSetLogDecimation(aaa_M->rtwLogInfo, 1);
    rtliSetLogY(aaa_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(aaa_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(aaa_M->rtwLogInfo, (NULL));
  }

  aaa_M->solverInfoPtr = (&aaa_M->solverInfo);
  aaa_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&aaa_M->solverInfo, 0.002);
  rtsiSetSolverMode(&aaa_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  aaa_M->blockIO = ((void *) &aaa_B);
  (void) memset(((void *) &aaa_B), 0,
                sizeof(B_aaa_T));

  /* parameters */
  aaa_M->defaultParam = ((real_T *)&aaa_P);

  /* states (dwork) */
  aaa_M->dwork = ((void *) &aaa_DW);
  (void) memset((void *)&aaa_DW, 0,
                sizeof(DW_aaa_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  aaa_InitializeDataMapInfo(aaa_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &aaa_M->NonInlinedSFcns.sfcnInfo;
    aaa_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(aaa_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &aaa_M->Sizes.numSampTimes);
    aaa_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(aaa_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,aaa_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(aaa_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(aaa_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(aaa_M));
    rtssSetStepSizePtr(sfcnInfo, &aaa_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(aaa_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &aaa_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &aaa_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &aaa_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &aaa_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &aaa_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &aaa_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &aaa_M->solverInfoPtr);
  }

  aaa_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&aaa_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    aaa_M->childSfunctions = (&aaa_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    aaa_M->childSfunctions[0] = (&aaa_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: aaa/<Root>/PCI1 (pci1756IO) */
    {
      SimStruct *rts = aaa_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = aaa_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = aaa_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = aaa_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaa_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, aaa_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaa_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaa_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaa_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaa_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &aaa_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts, &aaa_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &aaa_B.constant1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &aaa_B.constant2;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &aaa_B.constant3;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = &aaa_B.constant4;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = &aaa_B.constant5;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = &aaa_B.constant6;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = &aaa_B.constant7;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = &aaa_B.constant8;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = &aaa_B.constant9;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = &aaa_B.constant10;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = &aaa_B.constant11;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = &aaa_B.constant12;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = &aaa_B.constant13;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = &aaa_B.constant14;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = &aaa_B.constant15;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = &aaa_B.constant16;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = &aaa_B.constant17;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = &aaa_B.constant25;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs18;
          sfcnUPtrs[0] = &aaa_B.constant26;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs19;
          sfcnUPtrs[0] = &aaa_B.constant27;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs20;
          sfcnUPtrs[0] = &aaa_B.constant28;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs21;
          sfcnUPtrs[0] = &aaa_B.constant29;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs22;
          sfcnUPtrs[0] = &aaa_B.constant30;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs23;
          sfcnUPtrs[0] = &aaa_B.constant31;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs24;
          sfcnUPtrs[0] = &aaa_B.constant32;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs25;
          sfcnUPtrs[0] = &aaa_B.constant18;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs26;
          sfcnUPtrs[0] = &aaa_B.constant19;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs27;
          sfcnUPtrs[0] = &aaa_B.constant20;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs28;
          sfcnUPtrs[0] = &aaa_B.constant21;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs29;
          sfcnUPtrs[0] = &aaa_B.constant22;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs30;
          sfcnUPtrs[0] = &aaa_B.constant23;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs31;
          sfcnUPtrs[0] = &aaa_B.constant24;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &aaa_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) aaa_B.PCI1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) aaa_B.PCI1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1");
      ssSetPath(rts, "aaa/PCI1");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaa_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaa_DW.PCI1_IWORK[0]);
      }

      /* registration */
      pci1756IO(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);
      _ssSetInputPortConnected(rts, 16, 1);
      _ssSetInputPortConnected(rts, 17, 1);
      _ssSetInputPortConnected(rts, 18, 1);
      _ssSetInputPortConnected(rts, 19, 1);
      _ssSetInputPortConnected(rts, 20, 1);
      _ssSetInputPortConnected(rts, 21, 1);
      _ssSetInputPortConnected(rts, 22, 1);
      _ssSetInputPortConnected(rts, 23, 1);
      _ssSetInputPortConnected(rts, 24, 1);
      _ssSetInputPortConnected(rts, 25, 1);
      _ssSetInputPortConnected(rts, 26, 1);
      _ssSetInputPortConnected(rts, 27, 1);
      _ssSetInputPortConnected(rts, 28, 1);
      _ssSetInputPortConnected(rts, 29, 1);
      _ssSetInputPortConnected(rts, 30, 1);
      _ssSetInputPortConnected(rts, 31, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
      ssSetInputPortBufferDstPort(rts, 16, -1);
      ssSetInputPortBufferDstPort(rts, 17, -1);
      ssSetInputPortBufferDstPort(rts, 18, -1);
      ssSetInputPortBufferDstPort(rts, 19, -1);
      ssSetInputPortBufferDstPort(rts, 20, -1);
      ssSetInputPortBufferDstPort(rts, 21, -1);
      ssSetInputPortBufferDstPort(rts, 22, -1);
      ssSetInputPortBufferDstPort(rts, 23, -1);
      ssSetInputPortBufferDstPort(rts, 24, -1);
      ssSetInputPortBufferDstPort(rts, 25, -1);
      ssSetInputPortBufferDstPort(rts, 26, -1);
      ssSetInputPortBufferDstPort(rts, 27, -1);
      ssSetInputPortBufferDstPort(rts, 28, -1);
      ssSetInputPortBufferDstPort(rts, 29, -1);
      ssSetInputPortBufferDstPort(rts, 30, -1);
      ssSetInputPortBufferDstPort(rts, 31, -1);
    }
  }

  /* Initialize Sizes */
  aaa_M->Sizes.numContStates = (0);    /* Number of continuous states */
  aaa_M->Sizes.numY = (0);             /* Number of model outputs */
  aaa_M->Sizes.numU = (0);             /* Number of model inputs */
  aaa_M->Sizes.sysDirFeedThru = (0);   /* The model is not direct feedthrough */
  aaa_M->Sizes.numSampTimes = (1);     /* Number of sample times */
  aaa_M->Sizes.numBlocks = (36);       /* Number of blocks */
  aaa_M->Sizes.numBlockIO = (35);      /* Number of block outputs */
  aaa_M->Sizes.numBlockPrms = (40);    /* Sum of parameter "widths" */
  return aaa_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
