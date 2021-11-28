/*
 * untitled.c
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

#include "rt_logging_mmi.h"
#include "untitled_capi.h"
#include "untitled.h"
#include "untitled_private.h"

const real_T untitled_RGND = 0.0;      /* real_T ground */

/* Block signals (auto storage) */
B_untitled_T untitled_B;

/* Block states (auto storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model output function */
static void untitled_output(void)
{
  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  untitled_B.DataTypeConversion6[0] = 0.0;
  untitled_B.DataTypeConversion6[1] = 0.0;
  untitled_B.DataTypeConversion6[2] = 0.0;
  untitled_B.DataTypeConversion6[3] = 0.0;

  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  memcpy(&untitled_B.DataTypeConversion1[0], &untitled_B.PCI1_o1[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' */
  memcpy(&untitled_B.DataTypeConversion2[0], &untitled_B.PCI1_o2[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  memcpy(&untitled_B.DataTypeConversion3[0], &untitled_B.PCI2_o1[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  memcpy(&untitled_B.DataTypeConversion4[0], &untitled_B.PCI3_o1[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' */
  memcpy(&untitled_B.DataTypeConversion5[0], &untitled_B.PCI3_o2[0], sizeof
         (real_T) << 4U);

  /* Constant: '<S2>/Constant' */
  untitled_B.Constant = untitled_P.Constant_Value;

  /* Constant: '<S2>/Constant1' */
  untitled_B.Constant1 = untitled_P.Constant1_Value;
}

/* Model update function */
static void untitled_update(void)
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
  if (!(++untitled_M->Timing.clockTick0)) {
    ++untitled_M->Timing.clockTickH0;
  }

  untitled_M->Timing.t[0] = untitled_M->Timing.clockTick0 *
    untitled_M->Timing.stepSize0 + untitled_M->Timing.clockTickH0 *
    untitled_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void untitled_initialize(void)
{
  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void untitled_terminate(void)
{
  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = untitled_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  untitled_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  untitled_update();
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
  untitled_initialize();
}

void MdlTerminate(void)
{
  untitled_terminate();
}

/* Registration function */
RT_MODEL_untitled_T *untitled(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled_M, 0,
                sizeof(RT_MODEL_untitled_T));
  rtsiSetSolverName(&untitled_M->solverInfo,"FixedStepDiscrete");
  untitled_M->solverInfoPtr = (&untitled_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = untitled_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    untitled_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    untitled_M->Timing.sampleTimes = (&untitled_M->Timing.sampleTimesArray[0]);
    untitled_M->Timing.offsetTimes = (&untitled_M->Timing.offsetTimesArray[0]);

    /* task periods */
    untitled_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    untitled_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(untitled_M, &untitled_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = untitled_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    untitled_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(untitled_M, -1);
  untitled_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    untitled_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogT(untitled_M->rtwLogInfo, "tout");
    rtliSetLogX(untitled_M->rtwLogInfo, "");
    rtliSetLogXFinal(untitled_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(untitled_M->rtwLogInfo, 0);
    rtliSetLogDecimation(untitled_M->rtwLogInfo, 1);
    rtliSetLogY(untitled_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled_M->rtwLogInfo, (NULL));
  }

  untitled_M->solverInfoPtr = (&untitled_M->solverInfo);
  untitled_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&untitled_M->solverInfo, 0.002);
  rtsiSetSolverMode(&untitled_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  untitled_M->blockIO = ((void *) &untitled_B);
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* parameters */
  untitled_M->defaultParam = ((real_T *)&untitled_P);

  /* states (dwork) */
  untitled_M->dwork = ((void *) &untitled_DW);
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  untitled_InitializeDataMapInfo(untitled_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &untitled_M->NonInlinedSFcns.sfcnInfo;
    untitled_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(untitled_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &untitled_M->Sizes.numSampTimes);
    untitled_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(untitled_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,untitled_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(untitled_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(untitled_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(untitled_M));
    rtssSetStepSizePtr(sfcnInfo, &untitled_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(untitled_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &untitled_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &untitled_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &untitled_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &untitled_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &untitled_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &untitled_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &untitled_M->solverInfoPtr);
  }

  untitled_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&untitled_M->NonInlinedSFcns.childSFunctions[0], 0,
                  3*sizeof(SimStruct));
    untitled_M->childSfunctions =
      (&untitled_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    untitled_M->childSfunctions[0] =
      (&untitled_M->NonInlinedSFcns.childSFunctions[0]);
    untitled_M->childSfunctions[1] =
      (&untitled_M->NonInlinedSFcns.childSFunctions[1]);
    untitled_M->childSfunctions[2] =
      (&untitled_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: untitled/<S1>/PCI1 (pci1756IO) */
    {
      SimStruct *rts = untitled_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = untitled_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = untitled_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = untitled_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &untitled_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, untitled_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &untitled_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &untitled_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &untitled_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &untitled_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &untitled_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &untitled_B.DataTypeConversion6[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &untitled_B.DataTypeConversion6[3];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &untitled_B.DataTypeConversion6[0];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = &untitled_B.DataTypeConversion6[2];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs18;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs19;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs20;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs21;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs22;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs23;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs24;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs25;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs26;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs27;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs28;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs29;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs30;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn0.UPtrs31;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) untitled_B.PCI1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) untitled_B.PCI1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1");
      ssSetPath(rts, "untitled/PCI-1756/PCI1");
      ssSetRTModel(rts,untitled_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &untitled_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)untitled_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)untitled_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &untitled_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &untitled_DW.PCI1_IWORK[0]);
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
      _ssSetInputPortConnected(rts, 4, 0);
      _ssSetInputPortConnected(rts, 5, 0);
      _ssSetInputPortConnected(rts, 6, 0);
      _ssSetInputPortConnected(rts, 7, 0);
      _ssSetInputPortConnected(rts, 8, 0);
      _ssSetInputPortConnected(rts, 9, 0);
      _ssSetInputPortConnected(rts, 10, 0);
      _ssSetInputPortConnected(rts, 11, 0);
      _ssSetInputPortConnected(rts, 12, 0);
      _ssSetInputPortConnected(rts, 13, 0);
      _ssSetInputPortConnected(rts, 14, 0);
      _ssSetInputPortConnected(rts, 15, 0);
      _ssSetInputPortConnected(rts, 16, 0);
      _ssSetInputPortConnected(rts, 17, 0);
      _ssSetInputPortConnected(rts, 18, 0);
      _ssSetInputPortConnected(rts, 19, 0);
      _ssSetInputPortConnected(rts, 20, 0);
      _ssSetInputPortConnected(rts, 21, 0);
      _ssSetInputPortConnected(rts, 22, 0);
      _ssSetInputPortConnected(rts, 23, 0);
      _ssSetInputPortConnected(rts, 24, 0);
      _ssSetInputPortConnected(rts, 25, 0);
      _ssSetInputPortConnected(rts, 26, 0);
      _ssSetInputPortConnected(rts, 27, 0);
      _ssSetInputPortConnected(rts, 28, 0);
      _ssSetInputPortConnected(rts, 29, 0);
      _ssSetInputPortConnected(rts, 30, 0);
      _ssSetInputPortConnected(rts, 31, 0);
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

    /* Level2 S-Function Block: untitled/<S1>/PCI2 (pci1756IO) */
    {
      SimStruct *rts = untitled_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = untitled_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = untitled_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = untitled_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &untitled_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, untitled_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &untitled_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &untitled_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &untitled_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &untitled_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &untitled_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs6;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs7;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs8;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs9;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs10;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs11;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs12;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs13;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs14;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs15;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs16;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs17;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs18;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs19;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs20;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs21;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs22;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs23;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs24;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs25;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs26;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs27;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs28;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs29;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs30;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs31;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) untitled_B.PCI2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) untitled_B.PCI2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI2");
      ssSetPath(rts, "untitled/PCI-1756/PCI2");
      ssSetRTModel(rts,untitled_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &untitled_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)untitled_P.PCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)untitled_P.PCI2_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &untitled_DW.PCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &untitled_DW.PCI2_IWORK[0]);
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
      _ssSetOutputPortConnected(rts, 1, 0);
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

    /* Level2 S-Function Block: untitled/<S1>/PCI3 (pci1756IO) */
    {
      SimStruct *rts = untitled_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = untitled_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = untitled_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = untitled_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &untitled_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, untitled_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &untitled_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &untitled_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &untitled_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &untitled_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &untitled_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs2;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs3;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs4;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs5;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs6;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs7;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs8;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs9;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs10;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs11;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs12;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs13;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs14;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs15;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs16;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs17;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs18;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs19;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs20;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs21;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs22;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs23;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs24;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs25;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs26;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs27;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs28;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs29;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs30;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn2.UPtrs31;
          sfcnUPtrs[0] = (real_T*)&untitled_RGND;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) untitled_B.PCI3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) untitled_B.PCI3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI3");
      ssSetPath(rts, "untitled/PCI-1756/PCI3");
      ssSetRTModel(rts,untitled_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &untitled_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)untitled_P.PCI3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)untitled_P.PCI3_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &untitled_DW.PCI3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &untitled_DW.PCI3_IWORK[0]);
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
      _ssSetInputPortConnected(rts, 0, 0);
      _ssSetInputPortConnected(rts, 1, 0);
      _ssSetInputPortConnected(rts, 2, 0);
      _ssSetInputPortConnected(rts, 3, 0);
      _ssSetInputPortConnected(rts, 4, 0);
      _ssSetInputPortConnected(rts, 5, 0);
      _ssSetInputPortConnected(rts, 6, 0);
      _ssSetInputPortConnected(rts, 7, 0);
      _ssSetInputPortConnected(rts, 8, 0);
      _ssSetInputPortConnected(rts, 9, 0);
      _ssSetInputPortConnected(rts, 10, 0);
      _ssSetInputPortConnected(rts, 11, 0);
      _ssSetInputPortConnected(rts, 12, 0);
      _ssSetInputPortConnected(rts, 13, 0);
      _ssSetInputPortConnected(rts, 14, 0);
      _ssSetInputPortConnected(rts, 15, 0);
      _ssSetInputPortConnected(rts, 16, 0);
      _ssSetInputPortConnected(rts, 17, 0);
      _ssSetInputPortConnected(rts, 18, 0);
      _ssSetInputPortConnected(rts, 19, 0);
      _ssSetInputPortConnected(rts, 20, 0);
      _ssSetInputPortConnected(rts, 21, 0);
      _ssSetInputPortConnected(rts, 22, 0);
      _ssSetInputPortConnected(rts, 23, 0);
      _ssSetInputPortConnected(rts, 24, 0);
      _ssSetInputPortConnected(rts, 25, 0);
      _ssSetInputPortConnected(rts, 26, 0);
      _ssSetInputPortConnected(rts, 27, 0);
      _ssSetInputPortConnected(rts, 28, 0);
      _ssSetInputPortConnected(rts, 29, 0);
      _ssSetInputPortConnected(rts, 30, 0);
      _ssSetInputPortConnected(rts, 31, 0);
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
  untitled_M->Sizes.numContStates = (0);/* Number of continuous states */
  untitled_M->Sizes.numY = (0);        /* Number of model outputs */
  untitled_M->Sizes.numU = (0);        /* Number of model inputs */
  untitled_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled_M->Sizes.numSampTimes = (1);/* Number of sample times */
  untitled_M->Sizes.numBlocks = (21);  /* Number of blocks */
  untitled_M->Sizes.numBlockIO = (14); /* Number of block outputs */
  untitled_M->Sizes.numBlockPrms = (26);/* Sum of parameter "widths" */
  return untitled_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
