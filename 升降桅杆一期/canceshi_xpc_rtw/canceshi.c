/*
 * canceshi.c
 *
 * Real-Time Workshop code generation for Simulink model "canceshi.mdl".
 *
 * Model version              : 1.59
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Fri May 22 16:20:42 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "canceshi_capi.h"
#include "canceshi.h"
#include "canceshi_private.h"
#include <stdio.h>
#include "canceshi_dt.h"

const real_T canceshi_RGND = 0.0;      /* real_T ground */

/* Block signals (auto storage) */
BlockIO_canceshi canceshi_B;

/* Block states (auto storage) */
D_Work_canceshi canceshi_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_canceshi canceshi_PrevZCSigState;

/* Real-time model */
rtModel_canceshi canceshi_rtM_;
rtModel_canceshi *canceshi_rtM = &canceshi_rtM_;

/*********************************************************************
 * Lookup Binary Search Utility BINARYSEARCH_real_T
 */
void BINARYSEARCH_real_T( uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* end macro BINARYSEARCH_real_T
 *********************************************************************/

/*********************************************************************
 * Lookup Utility LookUp_real_T_real_T_SAT
 */
void LookUp_real_T_real_T_SAT( real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den = den - pUData[iLeft];
      num = u;
      num = num - pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

/* end function LookUp_real_T_real_T_SAT
 *********************************************************************/

/* Model output function */
void canceshi_output(int_T tid)
{
  real_T tmp;

  /* Reset subsysRan breadcrumbs */
  srClearBC(canceshi_DWork.Subsystem6_SubsysRanBC);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtPCL731Inport1' incorporates:
   *  Constant: '<Root>/77'
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant11'
   *  Constant: '<Root>/Constant12'
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant15'
   *  Constant: '<Root>/Constant16'
   *  Constant: '<Root>/Constant17'
   *  Constant: '<Root>/Constant19'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant20'
   *  Constant: '<Root>/Constant21'
   *  Constant: '<Root>/Constant23'
   *  Constant: '<Root>/Constant24'
   *  Constant: '<Root>/Constant25'
   *  Constant: '<Root>/Constant26'
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant5'
   *  Constant: '<Root>/Constant6'
   *  Constant: '<Root>/Constant7'
   *  Constant: '<Root>/Constant8'
   *  Constant: '<Root>/Constant9'
   */
  canceshi_B.TmpSignalConversionAtPCL731Inpo[0] = canceshi_P.u_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[1] = canceshi_P.Constant2_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[2] = canceshi_P.Constant3_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[3] = canceshi_P.Constant4_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[4] = canceshi_P.Constant5_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[5] = canceshi_P.Constant6_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[6] = canceshi_P.Constant7_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[7] = canceshi_P.Constant8_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[8] = canceshi_P.Constant9_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[9] = canceshi_P.Constant10_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[10] = canceshi_P.Constant12_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[11] = canceshi_P.Constant13_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[12] = canceshi_P.Constant14_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[13] = canceshi_P.Constant15_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[14] = canceshi_P.Constant11_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[15] = canceshi_P.Constant17_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[16] = canceshi_P.Constant19_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[17] = canceshi_P.Constant20_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[18] = canceshi_P.Constant21_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[19] = canceshi_P.Constant16_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[20] = canceshi_P.Constant23_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[21] = canceshi_P.Constant24_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[22] = canceshi_P.Constant25_Value;
  canceshi_B.TmpSignalConversionAtPCL731Inpo[23] = canceshi_P.Constant26_Value;

  /* Level2 S-Function Block: '<Root>/PCL731' (pcl731) */
  {
    SimStruct *rts = canceshi_rtM->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<Root>/baozhuaa' incorporates:
   *  Constant: '<Root>/constant1'
   */
  canceshi_B.baozhuaa = canceshi_P.constant1_Value;

  /* Memory: '<S4>/Memory' */
  canceshi_B.Memory = canceshi_DWork.Memory_PreviousInput;

  /* Sum: '<S4>/Subtract' */
  canceshi_B.Subtract = canceshi_B.baozhuaa - canceshi_B.Memory;

  /* RelationalOperator: '<S4>/Relational Operator' incorporates:
   *  Constant: '<S4>/constant2'
   */
  canceshi_B.RelationalOperator = (canceshi_B.Subtract !=
    canceshi_P.constant2_Value_e);

  /* DataTypeConversion: '<S11>/Data Type Conversion7' incorporates:
   *  Constant: '<S11>/constant'
   */
  tmp = canceshi_P.constant_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion7 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* MultiPortSwitch: '<S19>/Multiport Switch' incorporates:
   *  Constant: '<S19>/baojin'
   *  Constant: '<S19>/dakai'
   *  Constant: '<S19>/tingzhi'
   */
  switch ((int32_T)canceshi_B.baozhuaa) {
   case 1:
    canceshi_B.MultiportSwitch = canceshi_P.dakai_Value;
    break;

   case 2:
    canceshi_B.MultiportSwitch = canceshi_P.baojin_Value;
    break;

   default:
    canceshi_B.MultiportSwitch = canceshi_P.tingzhi_Value;
    break;
  }

  /* DataTypeConversion: '<S11>/Data Type Conversion1' */
  tmp = canceshi_B.MultiportSwitch;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion1 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S11>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking3;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion7 & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion1 & 0xff) << 8));
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch4' */
  if ((int32_T)canceshi_B.RelationalOperator == 1) {
    canceshi_B.MultiportSwitch4 = canceshi_B.CANbitpacking3;
  } else {
    canceshi_B.MultiportSwitch4 = 0.0;
  }

  /* S-Function (canac2objsend): '<Root>/Send' */
  {
    /*------------ S-Function Block: <Root>/Send ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mb1(0, 8, (uint8_T *)
        &canceshi_B.MultiportSwitch4);
      restoreInterrupts(flags);
      ;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mb1(1, 8, (uint8_T *)(real_T*)&canceshi_RGND);
      restoreInterrupts(flags);
      ;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mb1(2, 8, (uint8_T *)(real_T*)&canceshi_RGND);
      restoreInterrupts(flags);
      ;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mb1(3, 8, (uint8_T *)(real_T*)&canceshi_RGND);
      restoreInterrupts(flags);
      ;
    }
  }

  /* DataTypeConversion: '<Root>/baozhuab' incorporates:
   *  Constant: '<Root>/constant1'
   */
  canceshi_B.baozhuab = canceshi_P.constant1_Value;

  /* Memory: '<S5>/Memory' */
  canceshi_B.Memory_o = canceshi_DWork.Memory_PreviousInput_b;

  /* Sum: '<S5>/Subtract' */
  canceshi_B.Subtract_l = canceshi_B.baozhuab - canceshi_B.Memory_o;

  /* RelationalOperator: '<S5>/Relational Operator' incorporates:
   *  Constant: '<S5>/constant2'
   */
  canceshi_B.RelationalOperator_h = (canceshi_B.Subtract_l !=
    canceshi_P.constant2_Value_b);

  /* DataTypeConversion: '<S12>/Data Type Conversion7' incorporates:
   *  Constant: '<S12>/constant'
   */
  tmp = canceshi_P.constant_Value_k;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion7_c = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* MultiPortSwitch: '<S20>/Multiport Switch' incorporates:
   *  Constant: '<S20>/baojin'
   *  Constant: '<S20>/dakai'
   *  Constant: '<S20>/tingzhi'
   */
  switch ((int32_T)canceshi_B.baozhuab) {
   case 1:
    canceshi_B.MultiportSwitch_j = canceshi_P.dakai_Value_c;
    break;

   case 2:
    canceshi_B.MultiportSwitch_j = canceshi_P.baojin_Value_k;
    break;

   default:
    canceshi_B.MultiportSwitch_j = canceshi_P.tingzhi_Value_c;
    break;
  }

  /* DataTypeConversion: '<S12>/Data Type Conversion1' */
  tmp = canceshi_B.MultiportSwitch_j;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion1_a = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S12>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking3_p;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion7_c & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion1_a & 0xff) << 8));
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch1' */
  if ((int32_T)canceshi_B.RelationalOperator_h == 1) {
    canceshi_B.MultiportSwitch1 = canceshi_B.CANbitpacking3_p;
  } else {
    canceshi_B.MultiportSwitch1 = 0.0;
  }

  /* DataTypeConversion: '<S12>/Data Type Conversion2' incorporates:
   *  Constant: '<S12>/constant2'
   */
  tmp = canceshi_P.constant2_Value_f;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion2 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S12>/Data Type Conversion3' incorporates:
   *  Constant: '<S12>/constant1'
   */
  tmp = canceshi_P.constant1_Value_p;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion3 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S12>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking1;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion2 & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion3 & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/xuanzhuana' incorporates:
   *  Constant: '<Root>/constant4'
   */
  canceshi_B.xuanzhuana = canceshi_P.constant4_Value;

  /* Memory: '<S9>/Memory' */
  canceshi_B.Memory_i = canceshi_DWork.Memory_PreviousInput_l;

  /* Sum: '<S9>/Subtract' */
  canceshi_B.Subtract_n = canceshi_B.xuanzhuana - canceshi_B.Memory_i;

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  Constant: '<S9>/constant2'
   */
  canceshi_B.RelationalOperator_o = (canceshi_B.Subtract_n !=
    canceshi_P.constant2_Value_d);

  /* DataTypeConversion: '<S14>/Data Type Conversion7' incorporates:
   *  Constant: '<S14>/constant'
   */
  tmp = canceshi_P.constant_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion7_i = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* MultiPortSwitch: '<S22>/Multiport Switch' incorporates:
   *  Constant: '<S22>/gongzuowei'
   *  Constant: '<S22>/tingzhi'
   *  Constant: '<S22>/yuanshiwei'
   */
  switch ((int32_T)canceshi_B.xuanzhuana) {
   case 1:
    canceshi_B.MultiportSwitch_h = canceshi_P.gongzuowei_Value;
    break;

   case 2:
    canceshi_B.MultiportSwitch_h = canceshi_P.yuanshiwei_Value;
    break;

   default:
    canceshi_B.MultiportSwitch_h = canceshi_P.tingzhi_Value_d;
    break;
  }

  /* DataTypeConversion: '<S14>/Data Type Conversion1' */
  tmp = canceshi_B.MultiportSwitch_h;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion1_p = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S14>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking3_h;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion7_i & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion1_p & 0xff) << 8));
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch3' */
  if ((int32_T)canceshi_B.RelationalOperator_o == 1) {
    canceshi_B.MultiportSwitch3 = canceshi_B.CANbitpacking3_h;
  } else {
    canceshi_B.MultiportSwitch3 = 0.0;
  }

  /* DataTypeConversion: '<S14>/Data Type Conversion2' incorporates:
   *  Constant: '<S14>/constant2'
   */
  tmp = canceshi_P.constant2_Value_ez;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion2_n = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion3' incorporates:
   *  Constant: '<S14>/constant1'
   */
  tmp = canceshi_P.constant1_Value_c;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion3_b = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S14>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking1_e;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion2_n & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion3_b & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/shengjianga' incorporates:
   *  Constant: '<Root>/constant3'
   */
  canceshi_B.shengjianga = canceshi_P.constant3_Value;

  /* Memory: '<S7>/Memory' */
  canceshi_B.Memory_f = canceshi_DWork.Memory_PreviousInput_lj;

  /* Sum: '<S7>/Subtract' */
  canceshi_B.Subtract_i = canceshi_B.shengjianga - canceshi_B.Memory_f;

  /* RelationalOperator: '<S7>/Relational Operator' incorporates:
   *  Constant: '<S7>/constant2'
   */
  canceshi_B.RelationalOperator_g = (canceshi_B.Subtract_i !=
    canceshi_P.constant2_Value_fm);

  /* DataTypeConversion: '<S13>/Data Type Conversion7' incorporates:
   *  Constant: '<S13>/constant'
   */
  tmp = canceshi_P.constant_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion7_h = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* MultiPortSwitch: '<S21>/Multiport Switch' incorporates:
   *  Constant: '<S21>/diwei'
   *  Constant: '<S21>/gaowei'
   *  Constant: '<S21>/tingzhi'
   */
  switch ((int32_T)canceshi_B.shengjianga) {
   case 1:
    canceshi_B.MultiportSwitch_e = canceshi_P.diwei_Value;
    break;

   case 2:
    canceshi_B.MultiportSwitch_e = canceshi_P.gaowei_Value;
    break;

   default:
    canceshi_B.MultiportSwitch_e = canceshi_P.tingzhi_Value_ca;
    break;
  }

  /* DataTypeConversion: '<S13>/Data Type Conversion1' */
  tmp = canceshi_B.MultiportSwitch_e;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion1_k = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S13>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking3_d;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion7_h & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion1_k & 0xff) << 8));
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch2' */
  if ((int32_T)canceshi_B.RelationalOperator_g == 1) {
    canceshi_B.MultiportSwitch2 = canceshi_B.CANbitpacking3_d;
  } else {
    canceshi_B.MultiportSwitch2 = 0.0;
  }

  /* DataTypeConversion: '<S13>/Data Type Conversion2' incorporates:
   *  Constant: '<S13>/constant2'
   */
  tmp = canceshi_P.constant2_Value_p;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion2_k = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S13>/Data Type Conversion3' incorporates:
   *  Constant: '<S13>/constant1'
   */
  tmp = canceshi_P.constant1_Value_n;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion3_n = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S13>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking1_i;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion2_k & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion3_n & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/sifufa' incorporates:
   *  Constant: '<Root>/99'
   */
  canceshi_B.sifufa = canceshi_P.u_Value_o;

  /* MultiPortSwitch: '<S18>/Multiport Switch' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Constant: '<S18>/Constant28'
   *  Constant: '<S18>/Constant29'
   *  Constant: '<S18>/Constant30'
   *  Constant: '<S18>/Constant31'
   *  Constant: '<S18>/Constant32'
   *  Constant: '<S18>/Constant33'
   */
  switch ((int32_T)canceshi_B.sifufa) {
   case 1:
    canceshi_B.MultiportSwitch_m = canceshi_P.Constant28_Value;
    break;

   case 2:
    canceshi_B.MultiportSwitch_m = canceshi_P.Constant29_Value;
    break;

   case 3:
    canceshi_B.MultiportSwitch_m = canceshi_P.Constant30_Value;
    break;

   case 4:
    canceshi_B.MultiportSwitch_m = canceshi_P.Constant31_Value;
    break;

   case 5:
    canceshi_B.MultiportSwitch_m = canceshi_P.Constant32_Value;
    break;

   case 6:
    canceshi_B.MultiportSwitch_m = canceshi_P.Constant33_Value;
    break;

   default:
    canceshi_B.MultiportSwitch_m = canceshi_P.Constant1_Value;
    break;
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion17' */
  tmp = canceshi_B.MultiportSwitch_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion17 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S6>/Data Type Conversion18' incorporates:
   *  Constant: '<S6>/Constant18'
   */
  tmp = canceshi_P.Constant18_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion18 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S6>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking3_a;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion17 & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion18 & 0xff) << 8));
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion7' incorporates:
   *  Constant: '<S2>/Constant7'
   */
  tmp = canceshi_P.Constant7_Value_a;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion7_m = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion16' incorporates:
   *  Constant: '<S2>/Constant16'
   */
  tmp = canceshi_P.Constant16_Value_i;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion16 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  tmp = canceshi_P.Constant1_Value_f;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion1_i = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  tmp = canceshi_P.Constant2_Value_n;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion2_f = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  Constant: '<S2>/Constant3'
   */
  tmp = canceshi_P.Constant3_Value_o;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion3_d = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion4' incorporates:
   *  Constant: '<S2>/Constant4'
   */
  tmp = canceshi_P.Constant4_Value_o;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion4 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion5' incorporates:
   *  Constant: '<S2>/Constant5'
   */
  tmp = canceshi_P.Constant5_Value_b;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion5 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion6' incorporates:
   *  Constant: '<S2>/Constant6'
   */
  tmp = canceshi_P.Constant6_Value_p;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion6 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S2>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking2;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion7_m & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion16 & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion1_i & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion2_f & 0xff) << 24));
    y[1] =
      ((uint32_T)(canceshi_B.DataTypeConversion3_d & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion4 & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion5 & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion6 & 0xff) << 24));
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion7' incorporates:
   *  Constant: '<S8>/Constant8'
   */
  tmp = canceshi_P.Constant8_Value_n;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion7_k = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S8>/Data Type Conversion16' incorporates:
   *  Constant: '<S8>/Constant16'
   */
  tmp = canceshi_P.Constant16_Value_c;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion16_e = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  tmp = canceshi_P.Constant2_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion1_e = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  tmp = canceshi_P.Constant3_Value_e;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion2_np = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
   *  Constant: '<S8>/Constant4'
   */
  tmp = canceshi_P.Constant4_Value_g;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion3_m = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S8>/Data Type Conversion4' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  tmp = canceshi_P.Constant5_Value_f;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion4_l = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S8>/Data Type Conversion5' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  tmp = canceshi_P.Constant6_Value_k;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion5_m = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S8>/Data Type Conversion6' incorporates:
   *  Constant: '<S8>/Constant7'
   */
  tmp = canceshi_P.Constant7_Value_o;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion6_i = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S8>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking2_j;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion7_k & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion16_e & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion1_e & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion2_np & 0xff) << 24));
    y[1] =
      ((uint32_T)(canceshi_B.DataTypeConversion3_m & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion4_l & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion5_m & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion6_i & 0xff) << 24));
  }

  /* Switch: '<S3>/SwitchControl' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (canceshi_P.Constant_Value_j > canceshi_P.SwitchControl_Threshold_g) {
    canceshi_B.SwitchControl = canceshi_B.CANbitpacking2;
  } else {
    canceshi_B.SwitchControl = canceshi_B.CANbitpacking2_j;
  }

  /* S-Function (canac2objsend): '<Root>/1808Send' */
  {
    /*------------ S-Function Block: <Root>/1808Send ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mb1(4, 8, (uint8_T *)
        &canceshi_B.CANbitpacking3_a);
      restoreInterrupts(flags);
      ;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mb1(5, 8, (uint8_T *)&canceshi_B.SwitchControl);
      restoreInterrupts(flags);
      ;
    }
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion24' incorporates:
   *  Constant: '<S17>/Constant24'
   */
  tmp = canceshi_P.Constant24_Value_b;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion24 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S17>/Data Type Conversion18' incorporates:
   *  Constant: '<S17>/Constant18'
   */
  tmp = canceshi_P.Constant18_Value_o;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion18_i = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S17>/Data Type Conversion17' incorporates:
   *  Constant: '<S17>/Constant17'
   */
  tmp = canceshi_P.Constant17_Value_g;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion17_b = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S17>/Data Type Conversion19' incorporates:
   *  Constant: '<S17>/Constant19'
   */
  tmp = canceshi_P.Constant19_Value_p;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion19 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S17>/Data Type Conversion20' incorporates:
   *  Constant: '<S17>/Constant20'
   */
  tmp = canceshi_P.Constant20_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion20 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S17>/Data Type Conversion21' incorporates:
   *  Constant: '<S17>/Constant21'
   */
  tmp = canceshi_P.Constant21_Value_c;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion21 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S17>/Data Type Conversion22' incorporates:
   *  Constant: '<S17>/Constant22'
   */
  tmp = canceshi_P.Constant22_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion22 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S17>/Data Type Conversion23' incorporates:
   *  Constant: '<S17>/Constant23'
   */
  tmp = canceshi_P.Constant23_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion23 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S17>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking3_c;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion24 & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion18_i & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion17_b & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion19 & 0xff) << 24));
    y[1] =
      ((uint32_T)(canceshi_B.DataTypeConversion20 & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion21 & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion22 & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion23 & 0xff) << 24));
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion7' incorporates:
   *  Constant: '<S1>/Constant7'
   */
  tmp = canceshi_P.Constant7_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion7_e = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion16' incorporates:
   *  Constant: '<S1>/Constant16'
   */
  tmp = canceshi_P.Constant16_Value_k;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion16_n = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  tmp = canceshi_P.Constant1_Value_g;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion1_o = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  tmp = canceshi_P.Constant2_Value_j;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion2_j = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  tmp = canceshi_P.Constant3_Value_p;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion3_j = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' incorporates:
   *  Constant: '<S1>/Constant4'
   */
  tmp = canceshi_P.Constant4_Value_a;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion4_p = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' incorporates:
   *  Constant: '<S1>/Constant5'
   */
  tmp = canceshi_P.Constant5_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion5_o = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion6' incorporates:
   *  Constant: '<S1>/Constant6'
   */
  tmp = canceshi_P.Constant6_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion6_e = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S1>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking2_o;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion7_e & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion16_n & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion1_o & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion2_j & 0xff) << 24));
    y[1] =
      ((uint32_T)(canceshi_B.DataTypeConversion3_j & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion4_p & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion5_o & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion6_e & 0xff) << 24));
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion15' incorporates:
   *  Constant: '<S1>/Constant15'
   */
  tmp = canceshi_P.Constant15_Value_k;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion15 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion9' incorporates:
   *  Constant: '<S1>/Constant9'
   */
  tmp = canceshi_P.Constant9_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion9 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion8' incorporates:
   *  Constant: '<S1>/Constant8'
   */
  tmp = canceshi_P.Constant8_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion8 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion10' incorporates:
   *  Constant: '<S1>/Constant10'
   */
  tmp = canceshi_P.Constant10_Value_i;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion10 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion11' incorporates:
   *  Constant: '<S1>/Constant11'
   */
  tmp = canceshi_P.Constant11_Value_b;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion11 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion12' incorporates:
   *  Constant: '<S1>/Constant12'
   */
  tmp = canceshi_P.Constant12_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion12 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion13' incorporates:
   *  Constant: '<S1>/Constant13'
   */
  tmp = canceshi_P.Constant13_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion13 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion14' incorporates:
   *  Constant: '<S1>/Constant14'
   */
  tmp = canceshi_P.Constant14_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  canceshi_B.DataTypeConversion14 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S1>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking1_m;
    y[0] =
      ((uint32_T)(canceshi_B.DataTypeConversion15 & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion9 & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion8 & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion10 & 0xff) << 24));
    y[1] =
      ((uint32_T)(canceshi_B.DataTypeConversion11 & 0xff) |
       ((uint32_T)(canceshi_B.DataTypeConversion12 & 0xff) << 8) |
       ((uint32_T)(canceshi_B.DataTypeConversion13 & 0xff) << 16) |
       ((uint32_T)(canceshi_B.DataTypeConversion14 & 0xff) << 24));
  }

  /* Switch: '<S15>/SwitchControl' incorporates:
   *  Constant: '<S15>/Constant'
   */
  if (canceshi_P.Constant_Value_i > canceshi_P.SwitchControl_Threshold_f) {
    /* Switch: '<S16>/SwitchControl' incorporates:
     *  Constant: '<S16>/Constant'
     */
    if (canceshi_P.Constant_Value > canceshi_P.SwitchControl_Threshold) {
      canceshi_B.SwitchControl_j = canceshi_B.CANbitpacking3_c;
    } else {
      canceshi_B.SwitchControl_j = canceshi_B.CANbitpacking2_o;
    }

    canceshi_B.SwitchControl_d = canceshi_B.SwitchControl_j;
  } else {
    canceshi_B.SwitchControl_d = canceshi_B.CANbitpacking1_m;
  }

  /* S-Function (canac2objsend): '<Root>/3402Send' */
  {
    /*------------ S-Function Block: <Root>/3402Send ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mb1(6, 8, (uint8_T *)&canceshi_B.SwitchControl_d);
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
      stat = CANPC_read_rcv_data_mb1(4, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &canceshi_B.u02Receive_o1, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mb1(5, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &canceshi_B.u02Receive_o2, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 1 */
  {
    const uint32_T *y = (const uint32_T *)&canceshi_B.u02Receive_o2;

    /* Output Port 1 */
    canceshi_B.CANbitunpacking1_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    canceshi_B.CANbitunpacking1_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    canceshi_B.CANbitunpacking1_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    canceshi_B.CANbitunpacking1_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    canceshi_B.CANbitunpacking1_o5 = (uint8_T)
      (y[1] & 0xff);

    /* Output Port 6 */
    canceshi_B.CANbitunpacking1_o6 = (uint8_T)
      ((y[1] & (0xff << 8)) >> 8);

    /* Output Port 7 */
    canceshi_B.CANbitunpacking1_o7 = (uint8_T)
      ((y[1] & (0xff << 16)) >> 16);

    /* Output Port 8 */
    canceshi_B.CANbitunpacking1_o8 = (uint8_T)
      ((y[1] & (0xff << 24)) >> 24);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking  */
  {
    const uint32_T *y = (const uint32_T *)&canceshi_B.u02Receive_o1;

    /* Output Port 1 */
    canceshi_B.CANbitunpacking_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    canceshi_B.CANbitunpacking_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    canceshi_B.CANbitunpacking_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    canceshi_B.CANbitunpacking_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<Root>/f' */
  canceshi_B.f[0] = (real_T)canceshi_B.CANbitunpacking_o1;
  canceshi_B.f[1] = (real_T)canceshi_B.CANbitunpacking_o2;
  canceshi_B.f[2] = (real_T)canceshi_B.CANbitunpacking_o3;
  canceshi_B.f[3] = (real_T)canceshi_B.CANbitunpacking_o4;

  /* Lookup: '<Root>/right7'
   * About '<Root>/right7':
   * Input0  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   * Saturation Mode: Saturate
   * Lookup Method: Linear_Endpoint
   *
   * XData parameter uses the same data type and scaling as Input0
   * YData parameter uses the same data type and scaling as Output0
   */
  LookUp_real_T_real_T_SAT( &(canceshi_B.right7), canceshi_P.right7_YData,
    canceshi_B.f[0], canceshi_P.right7_XData, 1U);

  /* S-Function (canac2objreceive): '<Root>/Receive' */
  {
    /*------------ S-Function Block: <Root>/Receive ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mb1(0, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &canceshi_B.Receive_o1, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mb1(1, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &canceshi_B.Receive_o2, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mb1(2, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &canceshi_B.Receive_o3, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mb1(3, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &canceshi_B.Receive_o4, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 2 */
  {
    const uint32_T *y = (const uint32_T *)&canceshi_B.Receive_o1;

    /* Output Port 1 */
    canceshi_B.CANbitunpacking2_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    canceshi_B.CANbitunpacking2_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    canceshi_B.CANbitunpacking2_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    canceshi_B.CANbitunpacking2_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 3 */
  {
    const uint32_T *y = (const uint32_T *)&canceshi_B.Receive_o2;

    /* Output Port 1 */
    canceshi_B.CANbitunpacking3_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    canceshi_B.CANbitunpacking3_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    canceshi_B.CANbitunpacking3_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    canceshi_B.CANbitunpacking3_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 4 */
  {
    const uint32_T *y = (const uint32_T *)&canceshi_B.Receive_o3;

    /* Output Port 1 */
    canceshi_B.CANbitunpacking4_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    canceshi_B.CANbitunpacking4_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    canceshi_B.CANbitunpacking4_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    canceshi_B.CANbitunpacking4_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    canceshi_B.CANbitunpacking4_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 5 */
  {
    const uint32_T *y = (const uint32_T *)&canceshi_B.Receive_o4;

    /* Output Port 1 */
    canceshi_B.CANbitunpacking5_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    canceshi_B.CANbitunpacking5_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    canceshi_B.CANbitunpacking5_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    canceshi_B.CANbitunpacking5_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    canceshi_B.CANbitunpacking5_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* DataTypeConversion: '<Root>/a' */
  canceshi_B.a[0] = (real_T)canceshi_B.CANbitunpacking2_o1;
  canceshi_B.a[1] = (real_T)canceshi_B.CANbitunpacking2_o2;
  canceshi_B.a[2] = (real_T)canceshi_B.CANbitunpacking2_o3;
  canceshi_B.a[3] = (real_T)canceshi_B.CANbitunpacking2_o4;

  /* DataTypeConversion: '<Root>/b' */
  canceshi_B.b[0] = (real_T)canceshi_B.CANbitunpacking3_o1;
  canceshi_B.b[1] = (real_T)canceshi_B.CANbitunpacking3_o2;
  canceshi_B.b[2] = (real_T)canceshi_B.CANbitunpacking3_o3;
  canceshi_B.b[3] = (real_T)canceshi_B.CANbitunpacking3_o4;

  /* DataTypeConversion: '<Root>/c' */
  canceshi_B.c[0] = (real_T)canceshi_B.CANbitunpacking4_o1;
  canceshi_B.c[1] = (real_T)canceshi_B.CANbitunpacking4_o2;
  canceshi_B.c[2] = (real_T)canceshi_B.CANbitunpacking4_o3;
  canceshi_B.c[3] = (real_T)canceshi_B.CANbitunpacking4_o4;
  canceshi_B.c[4] = (real_T)canceshi_B.CANbitunpacking4_o5;

  /* DataTypeConversion: '<Root>/d' */
  canceshi_B.d[0] = (real_T)canceshi_B.CANbitunpacking5_o1;
  canceshi_B.d[1] = (real_T)canceshi_B.CANbitunpacking5_o2;
  canceshi_B.d[2] = (real_T)canceshi_B.CANbitunpacking5_o3;
  canceshi_B.d[3] = (real_T)canceshi_B.CANbitunpacking5_o4;
  canceshi_B.d[4] = (real_T)canceshi_B.CANbitunpacking5_o5;

  /* DataTypeConversion: '<Root>/e' incorporates:
   *  Constant: '<Root>/Constant22'
   *  Constant: '<Root>/Constant27'
   *  Constant: '<Root>/Constant28'
   *  Constant: '<Root>/Constant29'
   */
  tmp = canceshi_P.Constant22_Value_n;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  canceshi_B.e[0] = (uint16_T)(tmp < 0.0 ? (uint16_T)(int16_T)(-((int16_T)
    (uint16_T)(-tmp))) : (uint16_T)tmp);
  tmp = canceshi_P.Constant27_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  canceshi_B.e[1] = (uint16_T)(tmp < 0.0 ? (uint16_T)(int16_T)(-((int16_T)
    (uint16_T)(-tmp))) : (uint16_T)tmp);
  tmp = canceshi_P.Constant28_Value_a;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  canceshi_B.e[2] = (uint16_T)(tmp < 0.0 ? (uint16_T)(int16_T)(-((int16_T)
    (uint16_T)(-tmp))) : (uint16_T)tmp);
  tmp = canceshi_P.Constant29_Value_p;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 65536.0);
  }

  canceshi_B.e[3] = (uint16_T)(tmp < 0.0 ? (uint16_T)(int16_T)(-((int16_T)
    (uint16_T)(-tmp))) : (uint16_T)tmp);

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  canceshi_B.PulseGenerator = ((real_T)canceshi_DWork.clockTickCounter <
    canceshi_P.PulseGenerator_Duty) && (canceshi_DWork.clockTickCounter >= 0) ?
    canceshi_P.PulseGenerator_Amp : 0.0;
  if ((real_T)canceshi_DWork.clockTickCounter >=
      canceshi_P.PulseGenerator_Period - 1.0) {
    canceshi_DWork.clockTickCounter = 0;
  } else {
    canceshi_DWork.clockTickCounter = canceshi_DWork.clockTickCounter + 1;
  }

  /* SignalConversion: '<Root>/HiddenBuf_InsertedFor_Subsystem6_at_inport_0' */
  canceshi_B.HiddenBuf_InsertedFor_Subsystem = canceshi_B.PulseGenerator;

  /* Outputs for trigger SubSystem: '<Root>/Subsystem6' incorporates:
   *  TriggerPort: '<S10>/Trigger'
   */
  if (rt_ZCFcn(RISING_ZERO_CROSSING,&canceshi_PrevZCSigState.Subsystem6_Trig_ZCE,
               (canceshi_B.HiddenBuf_InsertedFor_Subsystem)) != NO_ZCEVENT) {
    /* DataTypeConversion: '<S10>/Data Type Conversion2' incorporates:
     *  Constant: '<S10>/constant5'
     */
    tmp = canceshi_P.constant5_Value;
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(floor(tmp), 256.0);
    }

    canceshi_B.DataTypeConversion2_g = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
      (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

    /* DataTypeConversion: '<S10>/Data Type Conversion3' incorporates:
     *  Constant: '<S10>/constant2'
     */
    tmp = canceshi_P.constant2_Value;
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(floor(tmp), 256.0);
    }

    canceshi_B.DataTypeConversion3_f = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
      (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

    /* Bit Packing: <S10>/CAN bit-packing 1 */
    {
      uint32_T *y = (uint32_T *)&canceshi_B.CANbitpacking1_o;
      y[0] =
        ((uint32_T)(canceshi_B.DataTypeConversion2_g & 0xff) |
         ((uint32_T)(canceshi_B.DataTypeConversion3_f & 0xff) << 8));
    }

    canceshi_DWork.Subsystem6_SubsysRanBC = 4;
  }

  /* end of Outputs for SubSystem: '<Root>/Subsystem6' */

  /* Constant: '<Root>/dongzuo_zhuangtai1' */
  canceshi_B.dongzuo_zhuangtai1 = canceshi_P.dongzuo_zhuangtai1_Value;

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = canceshi_rtM->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void canceshi_update(int_T tid)
{
  /* Update for Memory: '<S4>/Memory' */
  canceshi_DWork.Memory_PreviousInput = canceshi_B.baozhuaa;

  /* Update for Memory: '<S5>/Memory' */
  canceshi_DWork.Memory_PreviousInput_b = canceshi_B.baozhuab;

  /* Update for Memory: '<S9>/Memory' */
  canceshi_DWork.Memory_PreviousInput_l = canceshi_B.xuanzhuana;

  /* Update for Memory: '<S7>/Memory' */
  canceshi_DWork.Memory_PreviousInput_lj = canceshi_B.shengjianga;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++canceshi_rtM->Timing.clockTick0)) {
    ++canceshi_rtM->Timing.clockTickH0;
  }

  canceshi_rtM->Timing.t[0] = canceshi_rtM->Timing.clockTick0 *
    canceshi_rtM->Timing.stepSize0 + canceshi_rtM->Timing.clockTickH0 *
    canceshi_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void canceshi_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)canceshi_rtM, 0,
                sizeof(rtModel_canceshi));
  rtsiSetSolverName(&canceshi_rtM->solverInfo,"FixedStepDiscrete");
  canceshi_rtM->solverInfoPtr = (&canceshi_rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = canceshi_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    canceshi_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    canceshi_rtM->Timing.sampleTimes = (&canceshi_rtM->Timing.sampleTimesArray[0]);
    canceshi_rtM->Timing.offsetTimes = (&canceshi_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    canceshi_rtM->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    canceshi_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(canceshi_rtM, &canceshi_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = canceshi_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    canceshi_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(canceshi_rtM, -1);
  canceshi_rtM->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    canceshi_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(canceshi_rtM->rtwLogInfo, "tout");
    rtliSetLogX(canceshi_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(canceshi_rtM->rtwLogInfo, "");
    rtliSetSigLog(canceshi_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(canceshi_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(canceshi_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(canceshi_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(canceshi_rtM->rtwLogInfo, 1);
    rtliSetLogY(canceshi_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(canceshi_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  canceshi_rtM->Sizes.checksums[0] = (1218366367U);
  canceshi_rtM->Sizes.checksums[1] = (4091892462U);
  canceshi_rtM->Sizes.checksums[2] = (2802648051U);
  canceshi_rtM->Sizes.checksums[3] = (1252586317U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[22];
    canceshi_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = (sysRanDType *)&canceshi_DWork.Subsystem6_SubsysRanBC;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(canceshi_rtM->extModeInfo,
      &canceshi_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(canceshi_rtM->extModeInfo, canceshi_rtM->Sizes.checksums);
    rteiSetTPtr(canceshi_rtM->extModeInfo, rtmGetTPtr(canceshi_rtM));
  }

  canceshi_rtM->solverInfoPtr = (&canceshi_rtM->solverInfo);
  canceshi_rtM->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&canceshi_rtM->solverInfo, 0.002);
  rtsiSetSolverMode(&canceshi_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  canceshi_rtM->ModelData.blockIO = ((void *) &canceshi_B);
  (void) memset(((void *) &canceshi_B), 0,
                sizeof(BlockIO_canceshi));

  /* parameters */
  canceshi_rtM->ModelData.defaultParam = ((real_T *)&canceshi_P);

  /* states (dwork) */
  canceshi_rtM->Work.dwork = ((void *) &canceshi_DWork);
  (void) memset((void *)&canceshi_DWork, 0,
                sizeof(D_Work_canceshi));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    canceshi_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    canceshi_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  canceshi_InitializeDataMapInfo(canceshi_rtM);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &canceshi_rtM->NonInlinedSFcns.sfcnInfo;
    canceshi_rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(canceshi_rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &canceshi_rtM->Sizes.numSampTimes);
    rtssSetTPtrPtr(sfcnInfo, &rtmGetTPtr(canceshi_rtM));
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(canceshi_rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(canceshi_rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(canceshi_rtM));
    rtssSetStepSizePtr(sfcnInfo, &canceshi_rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(canceshi_rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &canceshi_rtM->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &canceshi_rtM->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &canceshi_rtM->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &canceshi_rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &canceshi_rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &canceshi_rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &canceshi_rtM->solverInfoPtr);
  }

  canceshi_rtM->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)&canceshi_rtM->NonInlinedSFcns.childSFunctions[0], 0,
                  2*sizeof(SimStruct));
    canceshi_rtM->childSfunctions =
      (&canceshi_rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    canceshi_rtM->childSfunctions[0] =
      (&canceshi_rtM->NonInlinedSFcns.childSFunctions[0]);
    canceshi_rtM->childSfunctions[1] =
      (&canceshi_rtM->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: canceshi/<Root>/PCL731 (pcl731) */
    {
      SimStruct *rts = canceshi_rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &canceshi_rtM->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, canceshi_rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &canceshi_rtM->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &canceshi_rtM->NonInlinedSFcns.methods3[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &canceshi_rtM->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               canceshi_B.TmpSignalConversionAtPCL731Inpo);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 24);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &canceshi_rtM->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 24);
          ssSetOutputPortSignal(rts, 0, ((real_T *) canceshi_B.PCL731));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCL731");
      ssSetPath(rts, "canceshi/PCL731");
      ssSetRTModel(rts,canceshi_rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &canceshi_rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&canceshi_P.PCL731_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&canceshi_P.PCL731_P2_Size[0]);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &canceshi_DWork.PCL731_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &canceshi_rtM->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &canceshi_rtM->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &canceshi_DWork.PCL731_IWORK[0]);
      }

      /* registration */
      pcl731(rts);
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
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: canceshi/<Root>/Setup  (canac2pcisetup) */
    {
      SimStruct *rts = canceshi_rtM->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = canceshi_rtM->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = canceshi_rtM->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = canceshi_rtM->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &canceshi_rtM->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, canceshi_rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &canceshi_rtM->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &canceshi_rtM->NonInlinedSFcns.methods3[1]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "canceshi/Setup ");
      ssSetRTModel(rts,canceshi_rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &canceshi_rtM->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&canceshi_P.Setup_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&canceshi_P.Setup_P2_Size[0]);
        ssSetSFcnParam(rts, 2, (mxArray*)&canceshi_P.Setup_P3_Size[0]);
        ssSetSFcnParam(rts, 3, (mxArray*)&canceshi_P.Setup_P4_Size[0]);
        ssSetSFcnParam(rts, 4, (mxArray*)&canceshi_P.Setup_P5_Size[0]);
        ssSetSFcnParam(rts, 5, (mxArray*)&canceshi_P.Setup_P6_Size[0]);
        ssSetSFcnParam(rts, 6, (mxArray*)&canceshi_P.Setup_P7_Size[0]);
        ssSetSFcnParam(rts, 7, (mxArray*)&canceshi_P.Setup_P8_Size[0]);
        ssSetSFcnParam(rts, 8, (mxArray*)&canceshi_P.Setup_P9_Size[0]);
        ssSetSFcnParam(rts, 9, (mxArray*)&canceshi_P.Setup_P10_Size[0]);
        ssSetSFcnParam(rts, 10, (mxArray*)&canceshi_P.Setup_P11_Size[0]);
        ssSetSFcnParam(rts, 11, (mxArray*)&canceshi_P.Setup_P12_Size[0]);
        ssSetSFcnParam(rts, 12, (mxArray*)&canceshi_P.Setup_P13_Size[0]);
        ssSetSFcnParam(rts, 13, (mxArray*)&canceshi_P.Setup_P14_Size[0]);
        ssSetSFcnParam(rts, 14, (mxArray*)&canceshi_P.Setup_P15_Size[0]);
        ssSetSFcnParam(rts, 15, (mxArray*)&canceshi_P.Setup_P16_Size[0]);
        ssSetSFcnParam(rts, 16, (mxArray*)&canceshi_P.Setup_P17_Size[0]);
        ssSetSFcnParam(rts, 17, (mxArray*)&canceshi_P.Setup_P18_Size[0]);
        ssSetSFcnParam(rts, 18, (mxArray*)&canceshi_P.Setup_P19_Size[0]);
        ssSetSFcnParam(rts, 19, (mxArray*)&canceshi_P.Setup_P20_Size[0]);
        ssSetSFcnParam(rts, 20, (mxArray*)&canceshi_P.Setup_P21_Size[0]);
        ssSetSFcnParam(rts, 21, (mxArray*)&canceshi_P.Setup_P22_Size[0]);
        ssSetSFcnParam(rts, 22, (mxArray*)&canceshi_P.Setup_P23_Size[0]);
        ssSetSFcnParam(rts, 23, (mxArray*)&canceshi_P.Setup_P24_Size[0]);
      }

      /* registration */
      canac2pcisetup(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }

  canceshi_PrevZCSigState.Subsystem6_Trig_ZCE = UNINITIALIZED_ZCSIG;
}

/* Model terminate function */
void canceshi_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCL731' (pcl731) */
  {
    SimStruct *rts = canceshi_rtM->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = canceshi_rtM->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  canceshi_output(tid);
}

void MdlUpdate(int_T tid)
{
  canceshi_update(tid);
}

void MdlInitializeSizes(void)
{
  canceshi_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  canceshi_rtM->Sizes.numY = (0);      /* Number of model outputs */
  canceshi_rtM->Sizes.numU = (0);      /* Number of model inputs */
  canceshi_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  canceshi_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  canceshi_rtM->Sizes.numBlocks = (265);/* Number of blocks */
  canceshi_rtM->Sizes.numBlockIO = (149);/* Number of block outputs */
  canceshi_rtM->Sizes.numBlockPrms = (219);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for Memory: '<S4>/Memory' */
  canceshi_DWork.Memory_PreviousInput = canceshi_P.Memory_X0;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  canceshi_DWork.Memory_PreviousInput_b = canceshi_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S9>/Memory' */
  canceshi_DWork.Memory_PreviousInput_l = canceshi_P.Memory_X0_f;

  /* InitializeConditions for Memory: '<S7>/Memory' */
  canceshi_DWork.Memory_PreviousInput_lj = canceshi_P.Memory_X0_c;
}

void MdlStart(void)
{
  /* Level2 S-Function Block: '<Root>/PCL731' (pcl731) */
  {
    SimStruct *rts = canceshi_rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Bit Packing: <S11>/CAN bit-packing 3 */
  canceshi_B.CANbitpacking3 = 0.0;

  /* Bit Packing: <S12>/CAN bit-packing 3 */
  canceshi_B.CANbitpacking3_p = 0.0;

  /* Bit Packing: <S12>/CAN bit-packing 1 */
  canceshi_B.CANbitpacking1 = 0.0;

  /* Bit Packing: <S14>/CAN bit-packing 3 */
  canceshi_B.CANbitpacking3_h = 0.0;

  /* Bit Packing: <S14>/CAN bit-packing 1 */
  canceshi_B.CANbitpacking1_e = 0.0;

  /* Bit Packing: <S13>/CAN bit-packing 3 */
  canceshi_B.CANbitpacking3_d = 0.0;

  /* Bit Packing: <S13>/CAN bit-packing 1 */
  canceshi_B.CANbitpacking1_i = 0.0;

  /* Bit Packing: <S6>/CAN bit-packing 3 */
  canceshi_B.CANbitpacking3_a = 0.0;

  /* Bit Packing: <S2>/CAN bit-packing 2 */
  canceshi_B.CANbitpacking2 = 0.0;

  /* Bit Packing: <S8>/CAN bit-packing 2 */
  canceshi_B.CANbitpacking2_j = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing 3 */
  canceshi_B.CANbitpacking3_c = 0.0;

  /* Bit Packing: <S1>/CAN bit-packing 2 */
  canceshi_B.CANbitpacking2_o = 0.0;

  /* Bit Packing: <S1>/CAN bit-packing 1 */
  canceshi_B.CANbitpacking1_m = 0.0;

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  canceshi_DWork.clockTickCounter = 0;

  /* Start for trigger SubSystem: '<Root>/Subsystem6' */

  /* Bit Packing: <S10>/CAN bit-packing 1 */
  canceshi_B.CANbitpacking1_o = 0.0;

  /* end of Start for SubSystem: '<Root>/Subsystem6' */

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = canceshi_rtM->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  canceshi_terminate();
}

rtModel_canceshi *canceshi(void)
{
  canceshi_initialize(1);
  return canceshi_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
