/*
 * untitled.c
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.0
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Mar 02 16:42:12 2021
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
  /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
  {
    SimStruct *rts = untitled_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<Root>/Constant' */
  untitled_B.Constant = untitled_P.Constant_Value;

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = untitled_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }
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
  /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
  {
    SimStruct *rts = untitled_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant' */
  untitled_B.Constant = untitled_P.Constant_Value;

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = untitled_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void untitled_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
  {
    SimStruct *rts = untitled_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = untitled_M->childSfunctions[1];
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
    untitled_M->Timing.sampleTimes[0] = (0.001);

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
  untitled_M->Timing.stepSize0 = 0.001;

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
  untitled_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&untitled_M->solverInfo, 0.001);
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

  untitled_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)&untitled_M->NonInlinedSFcns.childSFunctions[0], 0,
                  2*sizeof(SimStruct));
    untitled_M->childSfunctions =
      (&untitled_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    untitled_M->childSfunctions[0] =
      (&untitled_M->NonInlinedSFcns.childSFunctions[0]);
    untitled_M->childSfunctions[1] =
      (&untitled_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: untitled/<Root>/PCI-2 (pci1716) */
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

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) untitled_B.PCI2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-2");
      ssSetPath(rts, "untitled/PCI-2");
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
        ssSetSFcnParam(rts, 0, (mxArray*)untitled_P.PCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)untitled_P.PCI2_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &untitled_DW.PCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &untitled_DW.PCI2_IWORK[0]);
      }

      /* registration */
      pci1716(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: untitled/<Root>/PCI-6208A DA  (da6208) */
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
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts,
          &untitled_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &untitled_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &untitled_B.Constant;
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
      }

      /* path info */
      ssSetModelName(rts, "PCI-6208A DA ");
      ssSetPath(rts, "untitled/PCI-6208A DA ");
      ssSetRTModel(rts,untitled_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &untitled_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)untitled_P.PCI6208ADA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)untitled_P.PCI6208ADA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)untitled_P.PCI6208ADA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)untitled_P.PCI6208ADA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)untitled_P.PCI6208ADA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)untitled_P.PCI6208ADA_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &untitled_DW.PCI6208ADA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &untitled_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &untitled_DW.PCI6208ADA_IWORK[0]);
      }

      /* registration */
      da6208(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 0);
      _ssSetInputPortConnected(rts, 2, 0);
      _ssSetInputPortConnected(rts, 3, 0);
      _ssSetInputPortConnected(rts, 4, 0);
      _ssSetInputPortConnected(rts, 5, 0);
      _ssSetInputPortConnected(rts, 6, 0);
      _ssSetInputPortConnected(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
    }
  }

  /* Initialize Sizes */
  untitled_M->Sizes.numContStates = (0);/* Number of continuous states */
  untitled_M->Sizes.numY = (0);        /* Number of model outputs */
  untitled_M->Sizes.numU = (0);        /* Number of model inputs */
  untitled_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled_M->Sizes.numSampTimes = (1);/* Number of sample times */
  untitled_M->Sizes.numBlocks = (4);   /* Number of blocks */
  untitled_M->Sizes.numBlockIO = (2);  /* Number of block outputs */
  untitled_M->Sizes.numBlockPrms = (49);/* Sum of parameter "widths" */
  return untitled_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
