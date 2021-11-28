/*
 * pci1756c.c
 *
 * Code generation for model "pci1756c".
 *
 * Model version              : 1.9
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Jul 12 22:23:00 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "pci1756c_capi.h"
#include "pci1756c.h"
#include "pci1756c_private.h"

const real_T pci1756c_RGND = 0.0;      /* real_T ground */

/* Block signals (auto storage) */
B_pci1756c_T pci1756c_B;

/* Block states (auto storage) */
DW_pci1756c_T pci1756c_DW;

/* Real-time model */
RT_MODEL_pci1756c_T pci1756c_M_;
RT_MODEL_pci1756c_T *const pci1756c_M = &pci1756c_M_;

/* Model output function */
static void pci1756c_output(void)
{
  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756DIO) */
  {
    SimStruct *rts = pci1756c_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<Root>/Constant' */
  pci1756c_B.Constant = pci1756c_P.Constant_Value;

  /* Constant: '<Root>/Constant1' */
  pci1756c_B.Constant1 = pci1756c_P.Constant1_Value;

  /* Constant: '<Root>/Constant10' */
  pci1756c_B.Constant10 = pci1756c_P.Constant10_Value;

  /* Constant: '<Root>/Constant11' */
  pci1756c_B.Constant11 = pci1756c_P.Constant11_Value;

  /* Constant: '<Root>/Constant12' */
  pci1756c_B.Constant12 = pci1756c_P.Constant12_Value;

  /* Constant: '<Root>/Constant13' */
  pci1756c_B.Constant13 = pci1756c_P.Constant13_Value;

  /* Constant: '<Root>/Constant14' */
  pci1756c_B.Constant14 = pci1756c_P.Constant14_Value;

  /* Constant: '<Root>/Constant15' */
  pci1756c_B.Constant15 = pci1756c_P.Constant15_Value;

  /* Constant: '<Root>/Constant2' */
  pci1756c_B.Constant2 = pci1756c_P.Constant2_Value;

  /* Constant: '<Root>/Constant3' */
  pci1756c_B.Constant3 = pci1756c_P.Constant3_Value;

  /* Constant: '<Root>/Constant31' */
  pci1756c_B.Constant31 = pci1756c_P.Constant31_Value;

  /* Constant: '<Root>/Constant4' */
  pci1756c_B.Constant4 = pci1756c_P.Constant4_Value;

  /* Constant: '<Root>/Constant5' */
  pci1756c_B.Constant5 = pci1756c_P.Constant5_Value;

  /* Constant: '<Root>/Constant6' */
  pci1756c_B.Constant6 = pci1756c_P.Constant6_Value;

  /* Constant: '<Root>/Constant7' */
  pci1756c_B.Constant7 = pci1756c_P.Constant7_Value;

  /* Constant: '<Root>/Constant8' */
  pci1756c_B.Constant8 = pci1756c_P.Constant8_Value;

  /* Constant: '<Root>/Constant9' */
  pci1756c_B.Constant9 = pci1756c_P.Constant9_Value;
}

/* Model update function */
static void pci1756c_update(void)
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
  if (!(++pci1756c_M->Timing.clockTick0)) {
    ++pci1756c_M->Timing.clockTickH0;
  }

  pci1756c_M->Timing.t[0] = pci1756c_M->Timing.clockTick0 *
    pci1756c_M->Timing.stepSize0 + pci1756c_M->Timing.clockTickH0 *
    pci1756c_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void pci1756c_initialize(void)
{
  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756DIO) */
  {
    SimStruct *rts = pci1756c_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void pci1756c_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI1' (pci1756DIO) */
  {
    SimStruct *rts = pci1756c_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  pci1756c_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  pci1756c_update();
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
  pci1756c_initialize();
}

void MdlTerminate(void)
{
  pci1756c_terminate();
}

/* Registration function */
RT_MODEL_pci1756c_T *pci1756c(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)pci1756c_M, 0,
                sizeof(RT_MODEL_pci1756c_T));
  rtsiSetSolverName(&pci1756c_M->solverInfo,"FixedStepDiscrete");
  pci1756c_M->solverInfoPtr = (&pci1756c_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = pci1756c_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    pci1756c_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    pci1756c_M->Timing.sampleTimes = (&pci1756c_M->Timing.sampleTimesArray[0]);
    pci1756c_M->Timing.offsetTimes = (&pci1756c_M->Timing.offsetTimesArray[0]);

    /* task periods */
    pci1756c_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    pci1756c_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(pci1756c_M, &pci1756c_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = pci1756c_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    pci1756c_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(pci1756c_M, -1);
  pci1756c_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    pci1756c_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(pci1756c_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(pci1756c_M->rtwLogInfo, (NULL));
    rtliSetLogT(pci1756c_M->rtwLogInfo, "tout");
    rtliSetLogX(pci1756c_M->rtwLogInfo, "");
    rtliSetLogXFinal(pci1756c_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(pci1756c_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(pci1756c_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(pci1756c_M->rtwLogInfo, 0);
    rtliSetLogDecimation(pci1756c_M->rtwLogInfo, 1);
    rtliSetLogY(pci1756c_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(pci1756c_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(pci1756c_M->rtwLogInfo, (NULL));
  }

  pci1756c_M->solverInfoPtr = (&pci1756c_M->solverInfo);
  pci1756c_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&pci1756c_M->solverInfo, 0.002);
  rtsiSetSolverMode(&pci1756c_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  pci1756c_M->blockIO = ((void *) &pci1756c_B);
  (void) memset(((void *) &pci1756c_B), 0,
                sizeof(B_pci1756c_T));

  /* parameters */
  pci1756c_M->defaultParam = ((real_T *)&pci1756c_P);

  /* states (dwork) */
  pci1756c_M->dwork = ((void *) &pci1756c_DW);
  (void) memset((void *)&pci1756c_DW, 0,
                sizeof(DW_pci1756c_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  pci1756c_InitializeDataMapInfo(pci1756c_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &pci1756c_M->NonInlinedSFcns.sfcnInfo;
    pci1756c_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(pci1756c_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &pci1756c_M->Sizes.numSampTimes);
    pci1756c_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(pci1756c_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,pci1756c_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(pci1756c_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(pci1756c_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(pci1756c_M));
    rtssSetStepSizePtr(sfcnInfo, &pci1756c_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(pci1756c_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &pci1756c_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &pci1756c_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &pci1756c_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &pci1756c_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &pci1756c_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &pci1756c_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &pci1756c_M->solverInfoPtr);
  }

  pci1756c_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&pci1756c_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    pci1756c_M->childSfunctions =
      (&pci1756c_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    pci1756c_M->childSfunctions[0] =
      (&pci1756c_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: pci1756c/<Root>/PCI1 (pci1756DIO) */
    {
      SimStruct *rts = pci1756c_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = pci1756c_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = pci1756c_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = pci1756c_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &pci1756c_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, pci1756c_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &pci1756c_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &pci1756c_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &pci1756c_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &pci1756c_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &pci1756c_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &pci1756c_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &pci1756c_M->NonInlinedSFcns.Sfcn0.UPtrs0;

          {
            int_T i1;
            for (i1=0; i1 < 32; i1++) {
              sfcnUPtrs[i1] = (real_T*)&pci1756c_RGND;
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 32);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &pci1756c_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 32);
          ssSetOutputPortSignal(rts, 0, ((real_T *) pci1756c_B.PCI1));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1");
      ssSetPath(rts, "pci1756c/PCI1");
      ssSetRTModel(rts,pci1756c_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &pci1756c_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)pci1756c_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)pci1756c_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &pci1756c_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &pci1756c_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &pci1756c_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &pci1756c_DW.PCI1_IWORK[0]);
      }

      /* registration */
      pci1756DIO(rts);
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
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  pci1756c_M->Sizes.numContStates = (0);/* Number of continuous states */
  pci1756c_M->Sizes.numY = (0);        /* Number of model outputs */
  pci1756c_M->Sizes.numU = (0);        /* Number of model inputs */
  pci1756c_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  pci1756c_M->Sizes.numSampTimes = (1);/* Number of sample times */
  pci1756c_M->Sizes.numBlocks = (19);  /* Number of blocks */
  pci1756c_M->Sizes.numBlockIO = (18); /* Number of block outputs */
  pci1756c_M->Sizes.numBlockPrms = (25);/* Sum of parameter "widths" */
  return pci1756c_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
