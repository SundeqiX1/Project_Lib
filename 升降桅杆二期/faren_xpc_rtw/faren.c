/*
 * faren.c
 *
 * Real-Time Workshop code generation for Simulink model "faren.mdl".
 *
 * Model version              : 1.1
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Tue May 26 00:27:35 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "faren_capi.h"
#include "faren.h"
#include "faren_private.h"
#include <stdio.h>
#include "faren_dt.h"

/* Block signals (auto storage) */
BlockIO_faren faren_B;

/* Real-time model */
rtModel_faren faren_rtM_;
rtModel_faren *faren_rtM = &faren_rtM_;

/* Model output function */
void faren_output(int_T tid)
{
  real_T tmp;

  /* DataTypeConversion: '<S4>/Data Type Conversion24' incorporates:
   *  Constant: '<S4>/Constant24'
   */
  tmp = faren_P.Constant24_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion24 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion18' incorporates:
   *  Constant: '<S4>/Constant18'
   */
  tmp = faren_P.Constant18_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion18 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion17' incorporates:
   *  Constant: '<S4>/Constant17'
   */
  tmp = faren_P.Constant17_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion17 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion19' incorporates:
   *  Constant: '<S4>/Constant19'
   */
  tmp = faren_P.Constant19_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion19 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion20' incorporates:
   *  Constant: '<S4>/Constant20'
   */
  tmp = faren_P.Constant20_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion20 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion21' incorporates:
   *  Constant: '<S4>/Constant21'
   */
  tmp = faren_P.Constant21_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion21 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion22' incorporates:
   *  Constant: '<S4>/Constant22'
   */
  tmp = faren_P.Constant22_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion22 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion23' incorporates:
   *  Constant: '<S4>/Constant23'
   */
  tmp = faren_P.Constant23_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion23 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S4>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&faren_B.CANbitpacking3;
    y[0] =
      ((uint32_T)(faren_B.DataTypeConversion24 & 0xff) |
       ((uint32_T)(faren_B.DataTypeConversion18 & 0xff) << 8) |
       ((uint32_T)(faren_B.DataTypeConversion17 & 0xff) << 16) |
       ((uint32_T)(faren_B.DataTypeConversion19 & 0xff) << 24));
    y[1] =
      ((uint32_T)(faren_B.DataTypeConversion20 & 0xff) |
       ((uint32_T)(faren_B.DataTypeConversion21 & 0xff) << 8) |
       ((uint32_T)(faren_B.DataTypeConversion22 & 0xff) << 16) |
       ((uint32_T)(faren_B.DataTypeConversion23 & 0xff) << 24));
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion7' incorporates:
   *  Constant: '<S1>/Constant7'
   */
  tmp = faren_P.Constant7_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion7 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion16' incorporates:
   *  Constant: '<S1>/Constant16'
   */
  tmp = faren_P.Constant16_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion16 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  tmp = faren_P.Constant1_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion1 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  tmp = faren_P.Constant2_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion2 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  tmp = faren_P.Constant3_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion3 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' incorporates:
   *  Constant: '<S1>/Constant4'
   */
  tmp = faren_P.Constant4_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion4 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' incorporates:
   *  Constant: '<S1>/Constant5'
   */
  tmp = faren_P.Constant5_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion5 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion6' incorporates:
   *  Constant: '<S1>/Constant6'
   */
  tmp = faren_P.Constant6_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion6 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S1>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&faren_B.CANbitpacking2;
    y[0] =
      ((uint32_T)(faren_B.DataTypeConversion7 & 0xff) |
       ((uint32_T)(faren_B.DataTypeConversion16 & 0xff) << 8) |
       ((uint32_T)(faren_B.DataTypeConversion1 & 0xff) << 16) |
       ((uint32_T)(faren_B.DataTypeConversion2 & 0xff) << 24));
    y[1] =
      ((uint32_T)(faren_B.DataTypeConversion3 & 0xff) |
       ((uint32_T)(faren_B.DataTypeConversion4 & 0xff) << 8) |
       ((uint32_T)(faren_B.DataTypeConversion5 & 0xff) << 16) |
       ((uint32_T)(faren_B.DataTypeConversion6 & 0xff) << 24));
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion15' incorporates:
   *  Constant: '<S1>/Constant15'
   */
  tmp = faren_P.Constant15_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion15 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion9' incorporates:
   *  Constant: '<S1>/Constant9'
   */
  tmp = faren_P.Constant9_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion9 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion8' incorporates:
   *  Constant: '<S1>/Constant8'
   */
  tmp = faren_P.Constant8_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion8 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion10' incorporates:
   *  Constant: '<S1>/Constant10'
   */
  tmp = faren_P.Constant10_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion10 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion11' incorporates:
   *  Constant: '<S1>/Constant11'
   */
  tmp = faren_P.Constant11_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion11 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion12' incorporates:
   *  Constant: '<S1>/Constant12'
   */
  tmp = faren_P.Constant12_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion12 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion13' incorporates:
   *  Constant: '<S1>/Constant13'
   */
  tmp = faren_P.Constant13_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion13 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion14' incorporates:
   *  Constant: '<S1>/Constant14'
   */
  tmp = faren_P.Constant14_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  faren_B.DataTypeConversion14 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S1>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&faren_B.CANbitpacking1;
    y[0] =
      ((uint32_T)(faren_B.DataTypeConversion15 & 0xff) |
       ((uint32_T)(faren_B.DataTypeConversion9 & 0xff) << 8) |
       ((uint32_T)(faren_B.DataTypeConversion8 & 0xff) << 16) |
       ((uint32_T)(faren_B.DataTypeConversion10 & 0xff) << 24));
    y[1] =
      ((uint32_T)(faren_B.DataTypeConversion11 & 0xff) |
       ((uint32_T)(faren_B.DataTypeConversion12 & 0xff) << 8) |
       ((uint32_T)(faren_B.DataTypeConversion13 & 0xff) << 16) |
       ((uint32_T)(faren_B.DataTypeConversion14 & 0xff) << 24));
  }

  /* Switch: '<S2>/SwitchControl' incorporates:
   *  Constant: '<S2>/Constant'
   */
  if (faren_P.Constant_Value_h > faren_P.SwitchControl_Threshold_d) {
    /* Switch: '<S3>/SwitchControl' incorporates:
     *  Constant: '<S3>/Constant'
     */
    if (faren_P.Constant_Value > faren_P.SwitchControl_Threshold) {
      faren_B.SwitchControl_c = faren_B.CANbitpacking3;
    } else {
      faren_B.SwitchControl_c = faren_B.CANbitpacking2;
    }

    faren_B.SwitchControl = faren_B.SwitchControl_c;
  } else {
    faren_B.SwitchControl = faren_B.CANbitpacking1;
  }

  /* S-Function (canac2objsend): '<Root>/3402Send' */
  {
    /*------------ S-Function Block: <Root>/3402Send ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(0, 8, (uint8_T *)&faren_B.SwitchControl);
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
        memcpy( &faren_B.u02Receive, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking  */
  {
    const uint32_T *y = (const uint32_T *)&faren_B.u02Receive;

    /* Output Port 1 */
    faren_B.CANbitunpacking_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    faren_B.CANbitunpacking_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    faren_B.CANbitunpacking_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    faren_B.CANbitunpacking_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<Root>/f' */
  faren_B.f[0] = faren_B.CANbitunpacking_o1;
  faren_B.f[1] = faren_B.CANbitunpacking_o2;
  faren_B.f[2] = faren_B.CANbitunpacking_o3;
  faren_B.f[3] = faren_B.CANbitunpacking_o4;

  /* S-Function (canac2objreceive): '<Root>/3402Receive 2' */
  {
    /*------------ S-Function Block: <Root>/3402Receive 2 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(1, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &faren_B.u02Receive2, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 1 */
  {
    const uint32_T *y = (const uint32_T *)&faren_B.u02Receive2;

    /* Output Port 1 */
    faren_B.CANbitunpacking1_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    faren_B.CANbitunpacking1_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    faren_B.CANbitunpacking1_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    faren_B.CANbitunpacking1_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    faren_B.CANbitunpacking1_o5 = (uint8_T)
      (y[1] & 0xff);

    /* Output Port 6 */
    faren_B.CANbitunpacking1_o6 = (uint8_T)
      ((y[1] & (0xff << 8)) >> 8);

    /* Output Port 7 */
    faren_B.CANbitunpacking1_o7 = (uint8_T)
      ((y[1] & (0xff << 16)) >> 16);

    /* Output Port 8 */
    faren_B.CANbitunpacking1_o8 = (uint8_T)
      ((y[1] & (0xff << 24)) >> 24);
  }

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = faren_rtM->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void faren_update(int_T tid)
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
  if (!(++faren_rtM->Timing.clockTick0)) {
    ++faren_rtM->Timing.clockTickH0;
  }

  faren_rtM->Timing.t[0] = faren_rtM->Timing.clockTick0 *
    faren_rtM->Timing.stepSize0 + faren_rtM->Timing.clockTickH0 *
    faren_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void faren_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)faren_rtM, 0,
                sizeof(rtModel_faren));
  rtsiSetSolverName(&faren_rtM->solverInfo,"FixedStepDiscrete");
  faren_rtM->solverInfoPtr = (&faren_rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = faren_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    faren_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    faren_rtM->Timing.sampleTimes = (&faren_rtM->Timing.sampleTimesArray[0]);
    faren_rtM->Timing.offsetTimes = (&faren_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    faren_rtM->Timing.sampleTimes[0] = (0.5);

    /* task offsets */
    faren_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(faren_rtM, &faren_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = faren_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    faren_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(faren_rtM, -1);
  faren_rtM->Timing.stepSize0 = 0.5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    faren_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(faren_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(faren_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(faren_rtM->rtwLogInfo, "tout");
    rtliSetLogX(faren_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(faren_rtM->rtwLogInfo, "");
    rtliSetSigLog(faren_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(faren_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(faren_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(faren_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(faren_rtM->rtwLogInfo, 1);
    rtliSetLogY(faren_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(faren_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(faren_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  faren_rtM->Sizes.checksums[0] = (449843495U);
  faren_rtM->Sizes.checksums[1] = (144573948U);
  faren_rtM->Sizes.checksums[2] = (2985269037U);
  faren_rtM->Sizes.checksums[3] = (2876042375U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    faren_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(faren_rtM->extModeInfo,
      &faren_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(faren_rtM->extModeInfo, faren_rtM->Sizes.checksums);
    rteiSetTPtr(faren_rtM->extModeInfo, rtmGetTPtr(faren_rtM));
  }

  faren_rtM->solverInfoPtr = (&faren_rtM->solverInfo);
  faren_rtM->Timing.stepSize = (0.5);
  rtsiSetFixedStepSize(&faren_rtM->solverInfo, 0.5);
  rtsiSetSolverMode(&faren_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  faren_rtM->ModelData.blockIO = ((void *) &faren_B);
  (void) memset(((void *) &faren_B), 0,
                sizeof(BlockIO_faren));

  /* parameters */
  faren_rtM->ModelData.defaultParam = ((real_T *)&faren_P);

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    faren_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    faren_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  faren_InitializeDataMapInfo(faren_rtM);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &faren_rtM->NonInlinedSFcns.sfcnInfo;
    faren_rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(faren_rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &faren_rtM->Sizes.numSampTimes);
    rtssSetTPtrPtr(sfcnInfo, &rtmGetTPtr(faren_rtM));
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(faren_rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(faren_rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(faren_rtM));
    rtssSetStepSizePtr(sfcnInfo, &faren_rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(faren_rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &faren_rtM->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &faren_rtM->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &faren_rtM->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &faren_rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &faren_rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &faren_rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &faren_rtM->solverInfoPtr);
  }

  faren_rtM->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&faren_rtM->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    faren_rtM->childSfunctions = (&faren_rtM->
      NonInlinedSFcns.childSFunctionPtrs[0]);
    faren_rtM->childSfunctions[0] = (&faren_rtM->
      NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: faren/<Root>/Setup  (canac2pcisetup) */
    {
      SimStruct *rts = faren_rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = faren_rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = faren_rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = faren_rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &faren_rtM->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, faren_rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &faren_rtM->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &faren_rtM->NonInlinedSFcns.methods3[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "faren/Setup ");
      ssSetRTModel(rts,faren_rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &faren_rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&faren_P.Setup_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&faren_P.Setup_P2_Size[0]);
        ssSetSFcnParam(rts, 2, (mxArray*)&faren_P.Setup_P3_Size[0]);
        ssSetSFcnParam(rts, 3, (mxArray*)&faren_P.Setup_P4_Size[0]);
        ssSetSFcnParam(rts, 4, (mxArray*)&faren_P.Setup_P5_Size[0]);
        ssSetSFcnParam(rts, 5, (mxArray*)&faren_P.Setup_P6_Size[0]);
        ssSetSFcnParam(rts, 6, (mxArray*)&faren_P.Setup_P7_Size[0]);
        ssSetSFcnParam(rts, 7, (mxArray*)&faren_P.Setup_P8_Size[0]);
        ssSetSFcnParam(rts, 8, (mxArray*)&faren_P.Setup_P9_Size[0]);
        ssSetSFcnParam(rts, 9, (mxArray*)&faren_P.Setup_P10_Size[0]);
        ssSetSFcnParam(rts, 10, (mxArray*)&faren_P.Setup_P11_Size[0]);
        ssSetSFcnParam(rts, 11, (mxArray*)&faren_P.Setup_P12_Size[0]);
        ssSetSFcnParam(rts, 12, (mxArray*)&faren_P.Setup_P13_Size[0]);
        ssSetSFcnParam(rts, 13, (mxArray*)&faren_P.Setup_P14_Size[0]);
        ssSetSFcnParam(rts, 14, (mxArray*)&faren_P.Setup_P15_Size[0]);
        ssSetSFcnParam(rts, 15, (mxArray*)&faren_P.Setup_P16_Size[0]);
        ssSetSFcnParam(rts, 16, (mxArray*)&faren_P.Setup_P17_Size[0]);
        ssSetSFcnParam(rts, 17, (mxArray*)&faren_P.Setup_P18_Size[0]);
        ssSetSFcnParam(rts, 18, (mxArray*)&faren_P.Setup_P19_Size[0]);
        ssSetSFcnParam(rts, 19, (mxArray*)&faren_P.Setup_P20_Size[0]);
        ssSetSFcnParam(rts, 20, (mxArray*)&faren_P.Setup_P21_Size[0]);
        ssSetSFcnParam(rts, 21, (mxArray*)&faren_P.Setup_P22_Size[0]);
        ssSetSFcnParam(rts, 22, (mxArray*)&faren_P.Setup_P23_Size[0]);
        ssSetSFcnParam(rts, 23, (mxArray*)&faren_P.Setup_P24_Size[0]);
      }

      /* registration */
      canac2pcisetup(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.5);
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
void faren_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = faren_rtM->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  faren_output(tid);
}

void MdlUpdate(int_T tid)
{
  faren_update(tid);
}

void MdlInitializeSizes(void)
{
  faren_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  faren_rtM->Sizes.numY = (0);         /* Number of model outputs */
  faren_rtM->Sizes.numU = (0);         /* Number of model inputs */
  faren_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  faren_rtM->Sizes.numSampTimes = (1); /* Number of sample times */
  faren_rtM->Sizes.numBlocks = (65);   /* Number of blocks */
  faren_rtM->Sizes.numBlockIO = (44);  /* Number of block outputs */
  faren_rtM->Sizes.numBlockPrms = (99);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  /* Bit Packing: <S4>/CAN bit-packing 3 */
  faren_B.CANbitpacking3 = 0.0;

  /* Bit Packing: <S1>/CAN bit-packing 2 */
  faren_B.CANbitpacking2 = 0.0;

  /* Bit Packing: <S1>/CAN bit-packing 1 */
  faren_B.CANbitpacking1 = 0.0;

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = faren_rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  faren_terminate();
}

rtModel_faren *faren(void)
{
  faren_initialize(1);
  return faren_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
