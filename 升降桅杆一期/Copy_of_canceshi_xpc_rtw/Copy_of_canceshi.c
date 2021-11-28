/*
 * Copy_of_canceshi.c
 *
 * Real-Time Workshop code generation for Simulink model "Copy_of_canceshi.mdl".
 *
 * Model version              : 1.12
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Fri May 29 10:29:21 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "Copy_of_canceshi_capi.h"
#include "Copy_of_canceshi.h"
#include "Copy_of_canceshi_private.h"
#include <stdio.h>
#include "Copy_of_canceshi_dt.h"

/* Block signals (auto storage) */
BlockIO_Copy_of_canceshi Copy_of_canceshi_B;

/* Real-time model */
rtModel_Copy_of_canceshi Copy_of_canceshi_rtM_;
rtModel_Copy_of_canceshi *Copy_of_canceshi_rtM = &Copy_of_canceshi_rtM_;

/* Model output function */
void Copy_of_canceshi_output(int_T tid)
{
  real_T tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
   *  Constant: '<Root>/constant6'
   */
  tmp = Copy_of_canceshi_P.constant6_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_of_canceshi_B.DataTypeConversion12 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion13' incorporates:
   *  Constant: '<Root>/constant9'
   */
  tmp = Copy_of_canceshi_P.constant9_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_of_canceshi_B.DataTypeConversion13 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 4 */
  {
    uint32_T *y = (uint32_T *)&Copy_of_canceshi_B.CANbitpacking4;
    y[0] =
      ((uint32_T)(Copy_of_canceshi_B.DataTypeConversion12 & 0xff) |
       ((uint32_T)(Copy_of_canceshi_B.DataTypeConversion13 & 0xff) << 8));
  }

  /* S-Function (canac2objsend): '<Root>/1808Send' */
  {
    /*------------ S-Function Block: <Root>/1808Send ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(0, 8, (uint8_T *)
        &Copy_of_canceshi_B.CANbitpacking4);
      restoreInterrupts(flags);
      ;
    }
  }

  /* S-Function (canac2objreceive): '<Root>/3402Receive ' */
  {
    /*------------ S-Function Block: <Root>/3402Receive  ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(0, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &Copy_of_canceshi_B.u02Receive, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 4 */
  {
    const uint32_T *y = (const uint32_T *)&Copy_of_canceshi_B.u02Receive;

    /* Output Port 1 */
    Copy_of_canceshi_B.CANbitunpacking4_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    Copy_of_canceshi_B.CANbitunpacking4_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    Copy_of_canceshi_B.CANbitunpacking4_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    Copy_of_canceshi_B.CANbitunpacking4_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    Copy_of_canceshi_B.CANbitunpacking4_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = Copy_of_canceshi_rtM->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void Copy_of_canceshi_update(int_T tid)
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
  if (!(++Copy_of_canceshi_rtM->Timing.clockTick0)) {
    ++Copy_of_canceshi_rtM->Timing.clockTickH0;
  }

  Copy_of_canceshi_rtM->Timing.t[0] = Copy_of_canceshi_rtM->Timing.clockTick0 *
    Copy_of_canceshi_rtM->Timing.stepSize0 +
    Copy_of_canceshi_rtM->Timing.clockTickH0 *
    Copy_of_canceshi_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void Copy_of_canceshi_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Copy_of_canceshi_rtM, 0,
                sizeof(rtModel_Copy_of_canceshi));
  rtsiSetSolverName(&Copy_of_canceshi_rtM->solverInfo,"FixedStepDiscrete");
  Copy_of_canceshi_rtM->solverInfoPtr = (&Copy_of_canceshi_rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Copy_of_canceshi_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    Copy_of_canceshi_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Copy_of_canceshi_rtM->Timing.sampleTimes =
      (&Copy_of_canceshi_rtM->Timing.sampleTimesArray[0]);
    Copy_of_canceshi_rtM->Timing.offsetTimes =
      (&Copy_of_canceshi_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    Copy_of_canceshi_rtM->Timing.sampleTimes[0] = (0.1);

    /* task offsets */
    Copy_of_canceshi_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(Copy_of_canceshi_rtM, &Copy_of_canceshi_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Copy_of_canceshi_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    Copy_of_canceshi_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Copy_of_canceshi_rtM, -1);
  Copy_of_canceshi_rtM->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    Copy_of_canceshi_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Copy_of_canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Copy_of_canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(Copy_of_canceshi_rtM->rtwLogInfo, "tout");
    rtliSetLogX(Copy_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(Copy_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetSigLog(Copy_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Copy_of_canceshi_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(Copy_of_canceshi_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(Copy_of_canceshi_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(Copy_of_canceshi_rtM->rtwLogInfo, 1);
    rtliSetLogY(Copy_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Copy_of_canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Copy_of_canceshi_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  Copy_of_canceshi_rtM->Sizes.checksums[0] = (2995335492U);
  Copy_of_canceshi_rtM->Sizes.checksums[1] = (1332239002U);
  Copy_of_canceshi_rtM->Sizes.checksums[2] = (196261650U);
  Copy_of_canceshi_rtM->Sizes.checksums[3] = (778688517U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    Copy_of_canceshi_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Copy_of_canceshi_rtM->extModeInfo,
      &Copy_of_canceshi_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Copy_of_canceshi_rtM->extModeInfo,
                        Copy_of_canceshi_rtM->Sizes.checksums);
    rteiSetTPtr(Copy_of_canceshi_rtM->extModeInfo, rtmGetTPtr
                (Copy_of_canceshi_rtM));
  }

  Copy_of_canceshi_rtM->solverInfoPtr = (&Copy_of_canceshi_rtM->solverInfo);
  Copy_of_canceshi_rtM->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&Copy_of_canceshi_rtM->solverInfo, 0.1);
  rtsiSetSolverMode(&Copy_of_canceshi_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Copy_of_canceshi_rtM->ModelData.blockIO = ((void *) &Copy_of_canceshi_B);
  (void) memset(((void *) &Copy_of_canceshi_B), 0,
                sizeof(BlockIO_Copy_of_canceshi));

  /* parameters */
  Copy_of_canceshi_rtM->ModelData.defaultParam = ((real_T *)&Copy_of_canceshi_P);

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Copy_of_canceshi_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    Copy_of_canceshi_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Copy_of_canceshi_InitializeDataMapInfo(Copy_of_canceshi_rtM);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Copy_of_canceshi_rtM->NonInlinedSFcns.sfcnInfo;
    Copy_of_canceshi_rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Copy_of_canceshi_rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Copy_of_canceshi_rtM->Sizes.numSampTimes);
    rtssSetTPtrPtr(sfcnInfo, &rtmGetTPtr(Copy_of_canceshi_rtM));
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Copy_of_canceshi_rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Copy_of_canceshi_rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Copy_of_canceshi_rtM));
    rtssSetStepSizePtr(sfcnInfo, &Copy_of_canceshi_rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Copy_of_canceshi_rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Copy_of_canceshi_rtM->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Copy_of_canceshi_rtM->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &Copy_of_canceshi_rtM->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Copy_of_canceshi_rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Copy_of_canceshi_rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Copy_of_canceshi_rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Copy_of_canceshi_rtM->solverInfoPtr);
  }

  Copy_of_canceshi_rtM->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&Copy_of_canceshi_rtM->
                  NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    Copy_of_canceshi_rtM->childSfunctions =
      (&Copy_of_canceshi_rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    Copy_of_canceshi_rtM->childSfunctions[0] =
      (&Copy_of_canceshi_rtM->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: Copy_of_canceshi/<Root>/Setup  (canac2pcisetup) */
    {
      SimStruct *rts = Copy_of_canceshi_rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Copy_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Copy_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Copy_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Copy_of_canceshi_rtM->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, Copy_of_canceshi_rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Copy_of_canceshi_rtM->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Copy_of_canceshi_rtM->NonInlinedSFcns.methods3
                           [0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "Copy_of_canceshi/Setup ");
      ssSetRTModel(rts,Copy_of_canceshi_rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Copy_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&Copy_of_canceshi_P.Setup_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&Copy_of_canceshi_P.Setup_P2_Size[0]);
        ssSetSFcnParam(rts, 2, (mxArray*)&Copy_of_canceshi_P.Setup_P3_Size[0]);
        ssSetSFcnParam(rts, 3, (mxArray*)&Copy_of_canceshi_P.Setup_P4_Size[0]);
        ssSetSFcnParam(rts, 4, (mxArray*)&Copy_of_canceshi_P.Setup_P5_Size[0]);
        ssSetSFcnParam(rts, 5, (mxArray*)&Copy_of_canceshi_P.Setup_P6_Size[0]);
        ssSetSFcnParam(rts, 6, (mxArray*)&Copy_of_canceshi_P.Setup_P7_Size[0]);
        ssSetSFcnParam(rts, 7, (mxArray*)&Copy_of_canceshi_P.Setup_P8_Size[0]);
        ssSetSFcnParam(rts, 8, (mxArray*)&Copy_of_canceshi_P.Setup_P9_Size[0]);
        ssSetSFcnParam(rts, 9, (mxArray*)&Copy_of_canceshi_P.Setup_P10_Size[0]);
        ssSetSFcnParam(rts, 10, (mxArray*)&Copy_of_canceshi_P.Setup_P11_Size[0]);
        ssSetSFcnParam(rts, 11, (mxArray*)&Copy_of_canceshi_P.Setup_P12_Size[0]);
        ssSetSFcnParam(rts, 12, (mxArray*)&Copy_of_canceshi_P.Setup_P13_Size[0]);
        ssSetSFcnParam(rts, 13, (mxArray*)&Copy_of_canceshi_P.Setup_P14_Size[0]);
        ssSetSFcnParam(rts, 14, (mxArray*)&Copy_of_canceshi_P.Setup_P15_Size[0]);
        ssSetSFcnParam(rts, 15, (mxArray*)&Copy_of_canceshi_P.Setup_P16_Size[0]);
        ssSetSFcnParam(rts, 16, (mxArray*)&Copy_of_canceshi_P.Setup_P17_Size[0]);
        ssSetSFcnParam(rts, 17, (mxArray*)&Copy_of_canceshi_P.Setup_P18_Size[0]);
        ssSetSFcnParam(rts, 18, (mxArray*)&Copy_of_canceshi_P.Setup_P19_Size[0]);
        ssSetSFcnParam(rts, 19, (mxArray*)&Copy_of_canceshi_P.Setup_P20_Size[0]);
        ssSetSFcnParam(rts, 20, (mxArray*)&Copy_of_canceshi_P.Setup_P21_Size[0]);
        ssSetSFcnParam(rts, 21, (mxArray*)&Copy_of_canceshi_P.Setup_P22_Size[0]);
        ssSetSFcnParam(rts, 22, (mxArray*)&Copy_of_canceshi_P.Setup_P23_Size[0]);
        ssSetSFcnParam(rts, 23, (mxArray*)&Copy_of_canceshi_P.Setup_P24_Size[0]);
      }

      /* registration */
      canac2pcisetup(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }
}

/* Model terminate function */
void Copy_of_canceshi_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = Copy_of_canceshi_rtM->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Copy_of_canceshi_output(tid);
}

void MdlUpdate(int_T tid)
{
  Copy_of_canceshi_update(tid);
}

void MdlInitializeSizes(void)
{
  Copy_of_canceshi_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  Copy_of_canceshi_rtM->Sizes.numY = (0);/* Number of model outputs */
  Copy_of_canceshi_rtM->Sizes.numU = (0);/* Number of model inputs */
  Copy_of_canceshi_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Copy_of_canceshi_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  Copy_of_canceshi_rtM->Sizes.numBlocks = (10);/* Number of blocks */
  Copy_of_canceshi_rtM->Sizes.numBlockIO = (9);/* Number of block outputs */
  Copy_of_canceshi_rtM->Sizes.numBlockPrms = (71);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  /* Bit Packing: <Root>/CAN bit-packing 4 */
  Copy_of_canceshi_B.CANbitpacking4 = 0.0;

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = Copy_of_canceshi_rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  Copy_of_canceshi_terminate();
}

rtModel_Copy_of_canceshi *Copy_of_canceshi(void)
{
  Copy_of_canceshi_initialize(1);
  return Copy_of_canceshi_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
