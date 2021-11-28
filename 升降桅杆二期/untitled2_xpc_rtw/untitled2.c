/*
 * untitled2.c
 *
 * Real-Time Workshop code generation for Simulink model "untitled2.mdl".
 *
 * Model version              : 1.7
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Nov 22 13:10:27 2021
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "untitled2_capi.h"
#include "untitled2.h"
#include "untitled2_private.h"
#include <stdio.h>
#include "untitled2_dt.h"

/* Block signals (auto storage) */
BlockIO_untitled2 untitled2_B;

/* Block states (auto storage) */
D_Work_untitled2 untitled2_DWork;

/* Real-time model */
rtModel_untitled2 untitled2_rtM_;
rtModel_untitled2 *untitled2_rtM = &untitled2_rtM_;

/* Model output function */
void untitled2_output(int_T tid)
{
  real_T tmp;

  /* S-Function (canac2objreceive): '<Root>/3402Receive 1' */
  {
    /*------------ S-Function Block: <Root>/3402Receive 1 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(0, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &untitled2_B.u02Receive1_o1, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(1, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &untitled2_B.u02Receive1_o2, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(2, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &untitled2_B.u02Receive1_o3, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(3, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &untitled2_B.u02Receive1_o4, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 1 */
  {
    const uint32_T *y = (const uint32_T *)&untitled2_B.u02Receive1_o2;

    /* Output Port 1 */
    untitled2_B.CANbitunpacking1_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    untitled2_B.CANbitunpacking1_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    untitled2_B.CANbitunpacking1_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    untitled2_B.CANbitunpacking1_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    untitled2_B.CANbitunpacking1_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 2 */
  {
    const uint32_T *y = (const uint32_T *)&untitled2_B.u02Receive1_o1;

    /* Output Port 1 */
    untitled2_B.CANbitunpacking2_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    untitled2_B.CANbitunpacking2_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    untitled2_B.CANbitunpacking2_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    untitled2_B.CANbitunpacking2_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    untitled2_B.CANbitunpacking2_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 3 */
  {
    const uint32_T *y = (const uint32_T *)&untitled2_B.u02Receive1_o4;

    /* Output Port 1 */
    untitled2_B.CANbitunpacking3_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    untitled2_B.CANbitunpacking3_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    untitled2_B.CANbitunpacking3_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    untitled2_B.CANbitunpacking3_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    untitled2_B.CANbitunpacking3_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 5 */
  {
    const uint32_T *y = (const uint32_T *)&untitled2_B.u02Receive1_o3;

    /* Output Port 1 */
    untitled2_B.CANbitunpacking5_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    untitled2_B.CANbitunpacking5_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    untitled2_B.CANbitunpacking5_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    untitled2_B.CANbitunpacking5_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    untitled2_B.CANbitunpacking5_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* Switch: '<S1>/SwitchControl' incorporates:
   *  Constant: '<Root>/xuanzhuany'
   *  Constant: '<Root>/xuanzhuany1'
   *  Constant: '<S1>/Constant'
   */
  if (untitled2_P.Constant_Value > untitled2_P.SwitchControl_Threshold) {
    untitled2_B.SwitchControl = untitled2_P.xuanzhuany_Value;
  } else {
    untitled2_B.SwitchControl = untitled2_P.xuanzhuany1_Value;
  }

  /* S-Function (sfix_udelay): '<S2>/Integer Delay' */
  untitled2_B.IntegerDelay = untitled2_DWork.IntegerDelay_X[0];

  /* RelationalOperator: '<S2>/Relational Operator' */
  untitled2_B.RelationalOperator = (untitled2_B.SwitchControl ==
    untitled2_B.IntegerDelay);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' incorporates:
   *  Constant: '<Root>/constant7'
   */
  tmp = untitled2_P.constant7_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled2_B.DataTypeConversion10 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/xuanzhuana' */
  untitled2_B.xuanzhuana = untitled2_B.SwitchControl;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  tmp = untitled2_B.xuanzhuana;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled2_B.DataTypeConversion11 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&untitled2_B.CANbitpacking1;
    y[0] =
      ((uint32_T)(untitled2_B.DataTypeConversion10 & 0xff) |
       ((uint32_T)(untitled2_B.DataTypeConversion11 & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Constant: '<Root>/constant3'
   */
  tmp = untitled2_P.constant3_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled2_B.DataTypeConversion8 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion9' incorporates:
   *  Constant: '<Root>/constant5'
   */
  tmp = untitled2_P.constant5_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled2_B.DataTypeConversion9 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 7 */
  {
    uint32_T *y = (uint32_T *)&untitled2_B.CANbitpacking7;
    y[0] =
      ((uint32_T)(untitled2_B.DataTypeConversion8 & 0xff) |
       ((uint32_T)(untitled2_B.DataTypeConversion9 & 0xff) << 8));
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch3' */
  if ((int32_T)untitled2_B.RelationalOperator == 0) {
    untitled2_B.MultiportSwitch3 = untitled2_B.CANbitpacking1;
  } else {
    untitled2_B.MultiportSwitch3 = untitled2_B.CANbitpacking7;
  }

  /* S-Function (canac2objsend): '<Root>/1808Send5' */
  {
    /*------------ S-Function Block: <Root>/1808Send5 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(0, 8, (uint8_T *)
        &untitled2_B.MultiportSwitch3);
      restoreInterrupts(flags);
      ;
    }
  }

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = untitled2_rtM->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void untitled2_update(int_T tid)
{
  /* Update for S-Function (sfix_udelay): '<S2>/Integer Delay' */
  untitled2_DWork.IntegerDelay_X[0] = untitled2_DWork.IntegerDelay_X[1];
  untitled2_DWork.IntegerDelay_X[1] = untitled2_B.SwitchControl;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++untitled2_rtM->Timing.clockTick0)) {
    ++untitled2_rtM->Timing.clockTickH0;
  }

  untitled2_rtM->Timing.t[0] = untitled2_rtM->Timing.clockTick0 *
    untitled2_rtM->Timing.stepSize0 + untitled2_rtM->Timing.clockTickH0 *
    untitled2_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void untitled2_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled2_rtM, 0,
                sizeof(rtModel_untitled2));
  rtsiSetSolverName(&untitled2_rtM->solverInfo,"FixedStepDiscrete");
  untitled2_rtM->solverInfoPtr = (&untitled2_rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = untitled2_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    untitled2_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    untitled2_rtM->Timing.sampleTimes = (&untitled2_rtM->
      Timing.sampleTimesArray[0]);
    untitled2_rtM->Timing.offsetTimes = (&untitled2_rtM->
      Timing.offsetTimesArray[0]);

    /* task periods */
    untitled2_rtM->Timing.sampleTimes[0] = (0.2);

    /* task offsets */
    untitled2_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(untitled2_rtM, &untitled2_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = untitled2_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    untitled2_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(untitled2_rtM, -1);
  untitled2_rtM->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    untitled2_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled2_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled2_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(untitled2_rtM->rtwLogInfo, "tout");
    rtliSetLogX(untitled2_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(untitled2_rtM->rtwLogInfo, "");
    rtliSetSigLog(untitled2_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled2_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled2_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(untitled2_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(untitled2_rtM->rtwLogInfo, 1);
    rtliSetLogY(untitled2_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled2_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled2_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  untitled2_rtM->Sizes.checksums[0] = (2250480595U);
  untitled2_rtM->Sizes.checksums[1] = (3407972909U);
  untitled2_rtM->Sizes.checksums[2] = (1121591116U);
  untitled2_rtM->Sizes.checksums[3] = (3499013172U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    untitled2_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled2_rtM->extModeInfo,
      &untitled2_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled2_rtM->extModeInfo,
                        untitled2_rtM->Sizes.checksums);
    rteiSetTPtr(untitled2_rtM->extModeInfo, rtmGetTPtr(untitled2_rtM));
  }

  untitled2_rtM->solverInfoPtr = (&untitled2_rtM->solverInfo);
  untitled2_rtM->Timing.stepSize = (0.2);
  rtsiSetFixedStepSize(&untitled2_rtM->solverInfo, 0.2);
  rtsiSetSolverMode(&untitled2_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  untitled2_rtM->ModelData.blockIO = ((void *) &untitled2_B);
  (void) memset(((void *) &untitled2_B), 0,
                sizeof(BlockIO_untitled2));

  /* parameters */
  untitled2_rtM->ModelData.defaultParam = ((real_T *)&untitled2_P);

  /* states (dwork) */
  untitled2_rtM->Work.dwork = ((void *) &untitled2_DWork);
  (void) memset((void *)&untitled2_DWork, 0,
                sizeof(D_Work_untitled2));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    untitled2_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    untitled2_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  untitled2_InitializeDataMapInfo(untitled2_rtM);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &untitled2_rtM->NonInlinedSFcns.sfcnInfo;
    untitled2_rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(untitled2_rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &untitled2_rtM->Sizes.numSampTimes);
    rtssSetTPtrPtr(sfcnInfo, &rtmGetTPtr(untitled2_rtM));
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(untitled2_rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(untitled2_rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(untitled2_rtM));
    rtssSetStepSizePtr(sfcnInfo, &untitled2_rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(untitled2_rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &untitled2_rtM->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &untitled2_rtM->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &untitled2_rtM->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &untitled2_rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &untitled2_rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &untitled2_rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &untitled2_rtM->solverInfoPtr);
  }

  untitled2_rtM->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&untitled2_rtM->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    untitled2_rtM->childSfunctions =
      (&untitled2_rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    untitled2_rtM->childSfunctions[0] =
      (&untitled2_rtM->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: untitled2/<Root>/Setup  (canac2pcisetup) */
    {
      SimStruct *rts = untitled2_rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = untitled2_rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = untitled2_rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = untitled2_rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &untitled2_rtM->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, untitled2_rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &untitled2_rtM->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &untitled2_rtM->NonInlinedSFcns.methods3[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "untitled2/Setup ");
      ssSetRTModel(rts,untitled2_rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &untitled2_rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&untitled2_P.Setup_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&untitled2_P.Setup_P2_Size[0]);
        ssSetSFcnParam(rts, 2, (mxArray*)&untitled2_P.Setup_P3_Size[0]);
        ssSetSFcnParam(rts, 3, (mxArray*)&untitled2_P.Setup_P4_Size[0]);
        ssSetSFcnParam(rts, 4, (mxArray*)&untitled2_P.Setup_P5_Size[0]);
        ssSetSFcnParam(rts, 5, (mxArray*)&untitled2_P.Setup_P6_Size[0]);
        ssSetSFcnParam(rts, 6, (mxArray*)&untitled2_P.Setup_P7_Size[0]);
        ssSetSFcnParam(rts, 7, (mxArray*)&untitled2_P.Setup_P8_Size[0]);
        ssSetSFcnParam(rts, 8, (mxArray*)&untitled2_P.Setup_P9_Size[0]);
        ssSetSFcnParam(rts, 9, (mxArray*)&untitled2_P.Setup_P10_Size[0]);
        ssSetSFcnParam(rts, 10, (mxArray*)&untitled2_P.Setup_P11_Size[0]);
        ssSetSFcnParam(rts, 11, (mxArray*)&untitled2_P.Setup_P12_Size[0]);
        ssSetSFcnParam(rts, 12, (mxArray*)&untitled2_P.Setup_P13_Size[0]);
        ssSetSFcnParam(rts, 13, (mxArray*)&untitled2_P.Setup_P14_Size[0]);
        ssSetSFcnParam(rts, 14, (mxArray*)&untitled2_P.Setup_P15_Size[0]);
        ssSetSFcnParam(rts, 15, (mxArray*)&untitled2_P.Setup_P16_Size[0]);
        ssSetSFcnParam(rts, 16, (mxArray*)&untitled2_P.Setup_P17_Size[0]);
        ssSetSFcnParam(rts, 17, (mxArray*)&untitled2_P.Setup_P18_Size[0]);
        ssSetSFcnParam(rts, 18, (mxArray*)&untitled2_P.Setup_P19_Size[0]);
        ssSetSFcnParam(rts, 19, (mxArray*)&untitled2_P.Setup_P20_Size[0]);
        ssSetSFcnParam(rts, 20, (mxArray*)&untitled2_P.Setup_P21_Size[0]);
        ssSetSFcnParam(rts, 21, (mxArray*)&untitled2_P.Setup_P22_Size[0]);
        ssSetSFcnParam(rts, 22, (mxArray*)&untitled2_P.Setup_P23_Size[0]);
        ssSetSFcnParam(rts, 23, (mxArray*)&untitled2_P.Setup_P24_Size[0]);
      }

      /* registration */
      canac2pcisetup(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.2);
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
void untitled2_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = untitled2_rtM->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  untitled2_output(tid);
}

void MdlUpdate(int_T tid)
{
  untitled2_update(tid);
}

void MdlInitializeSizes(void)
{
  untitled2_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  untitled2_rtM->Sizes.numY = (0);     /* Number of model outputs */
  untitled2_rtM->Sizes.numU = (0);     /* Number of model inputs */
  untitled2_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled2_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  untitled2_rtM->Sizes.numBlocks = (30);/* Number of blocks */
  untitled2_rtM->Sizes.numBlockIO = (35);/* Number of block outputs */
  untitled2_rtM->Sizes.numBlockPrms = (83);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for S-Function (sfix_udelay): '<S2>/Integer Delay' */
  untitled2_DWork.IntegerDelay_X[0] = untitled2_P.IntegerDelay_InitialCondition;
  untitled2_DWork.IntegerDelay_X[1] = untitled2_P.IntegerDelay_InitialCondition;
}

void MdlStart(void)
{
  /* Bit Packing: <Root>/CAN bit-packing 1 */
  untitled2_B.CANbitpacking1 = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 7 */
  untitled2_B.CANbitpacking7 = 0.0;

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = untitled2_rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  untitled2_terminate();
}

rtModel_untitled2 *untitled2(void)
{
  untitled2_initialize(1);
  return untitled2_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
