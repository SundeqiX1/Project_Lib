/*
 * pci1756a.c
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

#include "rt_logging_mmi.h"
#include "pci1756a_capi.h"
#include "pci1756a.h"
#include "pci1756a_private.h"

/* Block signals (auto storage) */
B_pci1756a_T pci1756a_B;

/* Block states (auto storage) */
DW_pci1756a_T pci1756a_DW;

/* Real-time model */
RT_MODEL_pci1756a_T pci1756a_M_;
RT_MODEL_pci1756a_T *const pci1756a_M = &pci1756a_M_;

/* Model output function */
static void pci1756a_output(void)
{
  /* SignalConversion: '<Root>/TmpSignal ConversionAtPCI1Inport1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant11'
   *  Constant: '<Root>/Constant12'
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant15'
   *  Constant: '<Root>/Constant16'
   *  Constant: '<Root>/Constant17'
   *  Constant: '<Root>/Constant18'
   *  Constant: '<Root>/Constant19'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant20'
   *  Constant: '<Root>/Constant21'
   *  Constant: '<Root>/Constant22'
   *  Constant: '<Root>/Constant23'
   *  Constant: '<Root>/Constant24'
   *  Constant: '<Root>/Constant25'
   *  Constant: '<Root>/Constant26'
   *  Constant: '<Root>/Constant27'
   *  Constant: '<Root>/Constant28'
   *  Constant: '<Root>/Constant29'
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant30'
   *  Constant: '<Root>/Constant31'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant5'
   *  Constant: '<Root>/Constant6'
   *  Constant: '<Root>/Constant7'
   *  Constant: '<Root>/Constant8'
   *  Constant: '<Root>/Constant9'
   */
  pci1756a_B.TmpSignalConversionAtPCI1Inport[0] = pci1756a_P.Constant_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[1] = pci1756a_P.Constant1_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[2] = pci1756a_P.Constant2_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[3] = pci1756a_P.Constant3_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[4] = pci1756a_P.Constant4_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[5] = pci1756a_P.Constant5_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[6] = pci1756a_P.Constant6_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[7] = pci1756a_P.Constant7_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[8] = pci1756a_P.Constant8_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[9] = pci1756a_P.Constant9_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[10] = pci1756a_P.Constant10_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[11] = pci1756a_P.Constant11_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[12] = pci1756a_P.Constant12_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[13] = pci1756a_P.Constant13_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[14] = pci1756a_P.Constant14_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[15] = pci1756a_P.Constant15_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[16] = pci1756a_P.Constant22_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[17] = pci1756a_P.Constant23_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[18] = pci1756a_P.Constant16_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[19] = pci1756a_P.Constant17_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[20] = pci1756a_P.Constant18_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[21] = pci1756a_P.Constant19_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[22] = pci1756a_P.Constant20_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[23] = pci1756a_P.Constant21_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[24] = pci1756a_P.Constant30_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[25] = pci1756a_P.Constant31_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[26] = pci1756a_P.Constant24_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[27] = pci1756a_P.Constant25_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[28] = pci1756a_P.Constant26_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[29] = pci1756a_P.Constant27_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[30] = pci1756a_P.Constant28_Value;
  pci1756a_B.TmpSignalConversionAtPCI1Inport[31] = pci1756a_P.Constant29_Value;

  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756) */
  {
    SimStruct *rts = pci1756a_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }
}

/* Model update function */
static void pci1756a_update(void)
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
  if (!(++pci1756a_M->Timing.clockTick0)) {
    ++pci1756a_M->Timing.clockTickH0;
  }

  pci1756a_M->Timing.t[0] = pci1756a_M->Timing.clockTick0 *
    pci1756a_M->Timing.stepSize0 + pci1756a_M->Timing.clockTickH0 *
    pci1756a_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void pci1756a_initialize(void)
{
  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756) */
  {
    SimStruct *rts = pci1756a_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void pci1756a_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756) */
  {
    SimStruct *rts = pci1756a_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  pci1756a_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  pci1756a_update();
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
  pci1756a_initialize();
}

void MdlTerminate(void)
{
  pci1756a_terminate();
}

/* Registration function */
RT_MODEL_pci1756a_T *pci1756a(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)pci1756a_M, 0,
                sizeof(RT_MODEL_pci1756a_T));
  rtsiSetSolverName(&pci1756a_M->solverInfo,"FixedStepDiscrete");
  pci1756a_M->solverInfoPtr = (&pci1756a_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = pci1756a_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    pci1756a_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    pci1756a_M->Timing.sampleTimes = (&pci1756a_M->Timing.sampleTimesArray[0]);
    pci1756a_M->Timing.offsetTimes = (&pci1756a_M->Timing.offsetTimesArray[0]);

    /* task periods */
    pci1756a_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    pci1756a_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(pci1756a_M, &pci1756a_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = pci1756a_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    pci1756a_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(pci1756a_M, -1);
  pci1756a_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    pci1756a_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(pci1756a_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(pci1756a_M->rtwLogInfo, (NULL));
    rtliSetLogT(pci1756a_M->rtwLogInfo, "tout");
    rtliSetLogX(pci1756a_M->rtwLogInfo, "");
    rtliSetLogXFinal(pci1756a_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(pci1756a_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(pci1756a_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(pci1756a_M->rtwLogInfo, 0);
    rtliSetLogDecimation(pci1756a_M->rtwLogInfo, 1);
    rtliSetLogY(pci1756a_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(pci1756a_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(pci1756a_M->rtwLogInfo, (NULL));
  }

  pci1756a_M->solverInfoPtr = (&pci1756a_M->solverInfo);
  pci1756a_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&pci1756a_M->solverInfo, 0.002);
  rtsiSetSolverMode(&pci1756a_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  pci1756a_M->blockIO = ((void *) &pci1756a_B);
  (void) memset(((void *) &pci1756a_B), 0,
                sizeof(B_pci1756a_T));

  /* parameters */
  pci1756a_M->defaultParam = ((real_T *)&pci1756a_P);

  /* states (dwork) */
  pci1756a_M->dwork = ((void *) &pci1756a_DW);
  (void) memset((void *)&pci1756a_DW, 0,
                sizeof(DW_pci1756a_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  pci1756a_InitializeDataMapInfo(pci1756a_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &pci1756a_M->NonInlinedSFcns.sfcnInfo;
    pci1756a_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(pci1756a_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &pci1756a_M->Sizes.numSampTimes);
    pci1756a_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(pci1756a_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,pci1756a_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(pci1756a_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(pci1756a_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(pci1756a_M));
    rtssSetStepSizePtr(sfcnInfo, &pci1756a_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(pci1756a_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &pci1756a_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &pci1756a_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &pci1756a_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &pci1756a_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &pci1756a_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &pci1756a_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &pci1756a_M->solverInfoPtr);
  }

  pci1756a_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&pci1756a_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    pci1756a_M->childSfunctions =
      (&pci1756a_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    pci1756a_M->childSfunctions[0] =
      (&pci1756a_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: pci1756a/<Root>/PCI1 (pci1756) */
    {
      SimStruct *rts = pci1756a_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = pci1756a_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = pci1756a_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = pci1756a_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &pci1756a_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, pci1756a_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &pci1756a_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &pci1756a_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &pci1756a_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &pci1756a_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &pci1756a_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &pci1756a_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               pci1756a_B.TmpSignalConversionAtPCI1Inport);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 32);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &pci1756a_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 32);
          ssSetOutputPortSignal(rts, 0, ((real_T *) pci1756a_B.PCI1));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1");
      ssSetPath(rts, "pci1756a/PCI1");
      ssSetRTModel(rts,pci1756a_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &pci1756a_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)pci1756a_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)pci1756a_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &pci1756a_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &pci1756a_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &pci1756a_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &pci1756a_DW.PCI1_IWORK[0]);
      }

      /* registration */
      pci1756(rts);
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
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  pci1756a_M->Sizes.numContStates = (0);/* Number of continuous states */
  pci1756a_M->Sizes.numY = (0);        /* Number of model outputs */
  pci1756a_M->Sizes.numU = (0);        /* Number of model inputs */
  pci1756a_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  pci1756a_M->Sizes.numSampTimes = (1);/* Number of sample times */
  pci1756a_M->Sizes.numBlocks = (35);  /* Number of blocks */
  pci1756a_M->Sizes.numBlockIO = (2);  /* Number of block outputs */
  pci1756a_M->Sizes.numBlockPrms = (39);/* Sum of parameter "widths" */
  return pci1756a_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
