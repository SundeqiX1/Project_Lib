/*
 * Copy_2_of_canceshi.c
 *
 * Real-Time Workshop code generation for Simulink model "Copy_2_of_canceshi.mdl".
 *
 * Model version              : 1.43
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon May 25 23:21:43 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "Copy_2_of_canceshi_capi.h"
#include "Copy_2_of_canceshi.h"
#include "Copy_2_of_canceshi_private.h"
#include <stdio.h>
#include "Copy_2_of_canceshi_dt.h"

/* Block signals (auto storage) */
BlockIO_Copy_2_of_canceshi Copy_2_of_canceshi_B;

/* Block states (auto storage) */
D_Work_Copy_2_of_canceshi Copy_2_of_canceshi_DWork;

/* Real-time model */
rtModel_Copy_2_of_canceshi Copy_2_of_canceshi_rtM_;
rtModel_Copy_2_of_canceshi *Copy_2_of_canceshi_rtM = &Copy_2_of_canceshi_rtM_;

/*********************************************************************
 * Lookup Binary Search Utility BINARYSEARCH_U16
 */
void BINARYSEARCH_U16( uint32_T *piLeft, uint32_T *piRght, uint16_T u, const
                      uint16_T *pData, uint32_T iHi)
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

/* end macro BINARYSEARCH_U16
 *********************************************************************/

/*********************************************************************
 * Lookup Interpolation INTERPOLATE_U16_U16_SAT
 */
void INTERPOLATE_U16_U16_SAT( uint16_T *pY, uint16_T yL, uint16_T yR, uint16_T x,
  uint16_T xL, uint16_T xR)
{
  uint32_T bigProd;
  uint16_T yDiff;
  uint16_T xNum;
  uint16_T xDen;
  *pY = yL;

  /* If x is not strictly between xR and xL
   * then an interpolation calculation is not necessary x == xL
   * or not valid.  The invalid situation is expected when the input
   * is beyond the left or right end of the table.  The design is
   * that yL holds the correct value for *pY
   * in invalid situations.
   */
  if ((xR > xL) && (x > xL) ) {
    xDen = xR;

    {
      uint32_T rtb_u32_q;
      uint32_T rtb_u32_qY;
      rtb_u32_q = xDen;
      rtb_u32_qY = rtb_u32_q - (uint32_T)xL;
      if (rtb_u32_qY > rtb_u32_q) {
        rtb_u32_qY = 0U;
      }

      if (rtb_u32_qY > 65535U) {
        rtb_u32_qY = 65535U;
      }

      xDen = (uint16_T)rtb_u32_qY;
    }

    xNum = x;

    {
      uint32_T rtb_u32_q;
      uint32_T rtb_u32_qY;
      rtb_u32_q = xNum;
      rtb_u32_qY = rtb_u32_q - (uint32_T)xL;
      if (rtb_u32_qY > rtb_u32_q) {
        rtb_u32_qY = 0U;
      }

      if (rtb_u32_qY > 65535U) {
        rtb_u32_qY = 65535U;
      }

      xNum = (uint16_T)rtb_u32_qY;
    }

    if (yR >= yL ) {
      yDiff = yR;

      {
        uint32_T rtb_u32_q;
        uint32_T rtb_u32_qY;
        rtb_u32_q = yDiff;
        rtb_u32_qY = rtb_u32_q - (uint32_T)yL;
        if (rtb_u32_qY > rtb_u32_q) {
          rtb_u32_qY = 0U;
        }

        if (rtb_u32_qY > 65535U) {
          rtb_u32_qY = 65535U;
        }

        yDiff = (uint16_T)rtb_u32_qY;
      }
    } else {
      yDiff = yL;

      {
        uint32_T rtb_u32_q;
        uint32_T rtb_u32_qY;
        rtb_u32_q = yDiff;
        rtb_u32_qY = rtb_u32_q - (uint32_T)yR;
        if (rtb_u32_qY > rtb_u32_q) {
          rtb_u32_qY = 0U;
        }

        if (rtb_u32_qY > 65535U) {
          rtb_u32_qY = 65535U;
        }

        yDiff = (uint16_T)rtb_u32_qY;
      }
    }

    bigProd = (uint32_T)yDiff * (uint32_T)xNum;

    {
      uint32_T rtb_u32_tmp;
      rtb_u32_tmp = div_u32(bigProd, (uint32_T)xDen);
      if (rtb_u32_tmp > 65535U) {
        rtb_u32_tmp = 65535U;
      }

      yDiff = (uint16_T)rtb_u32_tmp;
    }

    if (yR >= yL ) {
      {
        uint32_T rtb_u32_tmp;
        rtb_u32_tmp = (uint32_T)*pY + (uint32_T)yDiff;
        if (rtb_u32_tmp > 65535U) {
          rtb_u32_tmp = 65535U;
        }

        *pY = (uint16_T)rtb_u32_tmp;
      }
    } else {
      {
        uint32_T rtb_u32_q;
        uint32_T rtb_u32_qY;
        rtb_u32_q = *pY;
        rtb_u32_qY = rtb_u32_q - (uint32_T)yDiff;
        if (rtb_u32_qY > rtb_u32_q) {
          rtb_u32_qY = 0U;
        }

        if (rtb_u32_qY > 65535U) {
          rtb_u32_qY = 65535U;
        }

        *pY = (uint16_T)rtb_u32_qY;
      }
    }
  }
}

/* end INTERPOLATE_U16_U16_SAT
 *********************************************************************/

/*********************************************************************
 * Lookup Utility LookUp_U16_U16_SAT
 */
void LookUp_U16_U16_SAT( uint16_T *pY, const uint16_T *pYData, uint16_T u, const
  uint16_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_U16( &(iLeft), &(iRght), u, pUData, iHi);
  INTERPOLATE_U16_U16_SAT( pY, pYData[iLeft], pYData[iRght], u, pUData[iLeft],
    pUData[iRght]);
}

/* end function LookUp_U16_U16_SAT
 *********************************************************************/
uint32_T div_u32(uint32_T numerator, uint32_T denominator)
{
  uint32_T quotient;
  if (denominator == (uint32_T)0) {
    quotient = MAX_uint32_T;

    /* divide by zero handler */
  } else {
    quotient = numerator / denominator;
  }

  return quotient;
}

/* Model output function */
void Copy_2_of_canceshi_output(int_T tid)
{
  real_T tmp;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtPCL731Inport1' incorporates:
   *  Constant: '<Root>/88'
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
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[0] =
    Copy_2_of_canceshi_P.u_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[1] =
    Copy_2_of_canceshi_P.Constant2_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[2] =
    Copy_2_of_canceshi_P.Constant3_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[3] =
    Copy_2_of_canceshi_P.Constant4_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[4] =
    Copy_2_of_canceshi_P.Constant5_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[5] =
    Copy_2_of_canceshi_P.Constant6_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[6] =
    Copy_2_of_canceshi_P.Constant7_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[7] =
    Copy_2_of_canceshi_P.Constant8_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[8] =
    Copy_2_of_canceshi_P.Constant9_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[9] =
    Copy_2_of_canceshi_P.Constant10_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[10] =
    Copy_2_of_canceshi_P.Constant12_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[11] =
    Copy_2_of_canceshi_P.Constant13_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[12] =
    Copy_2_of_canceshi_P.Constant14_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[13] =
    Copy_2_of_canceshi_P.Constant15_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[14] =
    Copy_2_of_canceshi_P.Constant11_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[15] =
    Copy_2_of_canceshi_P.Constant17_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[16] =
    Copy_2_of_canceshi_P.Constant19_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[17] =
    Copy_2_of_canceshi_P.Constant20_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[18] =
    Copy_2_of_canceshi_P.Constant21_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[19] =
    Copy_2_of_canceshi_P.Constant16_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[20] =
    Copy_2_of_canceshi_P.Constant23_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[21] =
    Copy_2_of_canceshi_P.Constant24_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[22] =
    Copy_2_of_canceshi_P.Constant25_Value;
  Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo[23] =
    Copy_2_of_canceshi_P.Constant26_Value;

  /* Level2 S-Function Block: '<Root>/PCL731' (pcl731) */
  {
    SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<Root>/sifufa' incorporates:
   *  Constant: '<Root>/99'
   */
  Copy_2_of_canceshi_B.sifufa = Copy_2_of_canceshi_P.u_Value_a;

  /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
   *  Constant: '<S9>/Constant28'
   *  Constant: '<S9>/Constant29'
   *  Constant: '<S9>/Constant30'
   *  Constant: '<S9>/Constant31'
   *  Constant: '<S9>/Constant32'
   *  Constant: '<S9>/Constant33'
   */
  switch ((int32_T)Copy_2_of_canceshi_B.sifufa) {
   case 1:
    Copy_2_of_canceshi_B.MultiportSwitch = Copy_2_of_canceshi_P.Constant28_Value;
    break;

   case 2:
    Copy_2_of_canceshi_B.MultiportSwitch = Copy_2_of_canceshi_P.Constant29_Value;
    break;

   case 3:
    Copy_2_of_canceshi_B.MultiportSwitch = Copy_2_of_canceshi_P.Constant30_Value;
    break;

   case 4:
    Copy_2_of_canceshi_B.MultiportSwitch = Copy_2_of_canceshi_P.Constant31_Value;
    break;

   case 5:
    Copy_2_of_canceshi_B.MultiportSwitch = Copy_2_of_canceshi_P.Constant32_Value;
    break;

   default:
    Copy_2_of_canceshi_B.MultiportSwitch = Copy_2_of_canceshi_P.Constant33_Value;
    break;
  }

  /* DataTypeConversion: '<S10>/Data Type Conversion17' */
  tmp = Copy_2_of_canceshi_B.MultiportSwitch;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion17 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S10>/Data Type Conversion18' incorporates:
   *  Constant: '<Root>/Constant18'
   */
  tmp = Copy_2_of_canceshi_P.Constant18_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion18 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S10>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking3;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion17 & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion18 & 0xff) << 8));
  }

  /* S-Function (canac2objsend): '<Root>/1808Send' */
  {
    /*------------ S-Function Block: <Root>/1808Send ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(4, 8, (uint8_T *)
        &Copy_2_of_canceshi_B.CANbitpacking3);
      restoreInterrupts(flags);
      ;
    }
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion7' incorporates:
   *  Constant: '<S2>/Constant7'
   */
  tmp = Copy_2_of_canceshi_P.Constant7_Value_b;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion7 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion16' incorporates:
   *  Constant: '<S2>/Constant16'
   */
  tmp = Copy_2_of_canceshi_P.Constant16_Value_o;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion16 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  tmp = Copy_2_of_canceshi_P.Constant1_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion1_k = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  tmp = Copy_2_of_canceshi_P.Constant2_Value_b;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion2_n = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  Constant: '<S2>/Constant3'
   */
  tmp = Copy_2_of_canceshi_P.Constant3_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion3_b = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion4' incorporates:
   *  Constant: '<S2>/Constant4'
   */
  tmp = Copy_2_of_canceshi_P.Constant4_Value_c;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion4_a = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion5' incorporates:
   *  Constant: '<S2>/Constant5'
   */
  tmp = Copy_2_of_canceshi_P.Constant5_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion5 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion6' incorporates:
   *  Constant: '<S2>/Constant6'
   */
  tmp = Copy_2_of_canceshi_P.Constant6_Value_b;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion6 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S2>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking2;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion7 & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion16 & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion1_k & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion2_n & 0xff) << 24));
    y[1] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion3_b & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion4_a & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion5 & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion6 & 0xff) << 24));
  }

  /* DataTypeConversion: '<S11>/Data Type Conversion7' incorporates:
   *  Constant: '<S11>/Constant8'
   */
  tmp = Copy_2_of_canceshi_P.Constant8_Value_e;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion7_b = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S11>/Data Type Conversion16' incorporates:
   *  Constant: '<S11>/Constant16'
   */
  tmp = Copy_2_of_canceshi_P.Constant16_Value_p;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion16_g = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S11>/Data Type Conversion1' incorporates:
   *  Constant: '<S11>/Constant2'
   */
  tmp = Copy_2_of_canceshi_P.Constant2_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion1_k5 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S11>/Data Type Conversion2' incorporates:
   *  Constant: '<S11>/Constant3'
   */
  tmp = Copy_2_of_canceshi_P.Constant3_Value_j;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion2_a = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S11>/Data Type Conversion3' incorporates:
   *  Constant: '<S11>/Constant4'
   */
  tmp = Copy_2_of_canceshi_P.Constant4_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion3_e = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S11>/Data Type Conversion4' incorporates:
   *  Constant: '<S11>/Constant5'
   */
  tmp = Copy_2_of_canceshi_P.Constant5_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion4_p = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S11>/Data Type Conversion5' incorporates:
   *  Constant: '<S11>/Constant6'
   */
  tmp = Copy_2_of_canceshi_P.Constant6_Value_n;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion5_a = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S11>/Data Type Conversion6' incorporates:
   *  Constant: '<S11>/Constant7'
   */
  tmp = Copy_2_of_canceshi_P.Constant7_Value_i;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion6_d = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S11>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking2_p;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion7_b & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion16_g & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion1_k5 & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion2_a & 0xff) << 24));
    y[1] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion3_e & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion4_p & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion5_a & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion6_d & 0xff) << 24));
  }

  /* Switch: '<S3>/SwitchControl' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (Copy_2_of_canceshi_P.Constant_Value_i >
      Copy_2_of_canceshi_P.SwitchControl_Threshold_h) {
    Copy_2_of_canceshi_B.SwitchControl = Copy_2_of_canceshi_B.CANbitpacking2;
  } else {
    Copy_2_of_canceshi_B.SwitchControl = Copy_2_of_canceshi_B.CANbitpacking2_p;
  }

  /* S-Function (canac2objsend): '<Root>/1808Send2' */
  {
    /*------------ S-Function Block: <Root>/1808Send2 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(5, 8, (uint8_T *)
        &Copy_2_of_canceshi_B.SwitchControl);
      restoreInterrupts(flags);
      ;
    }
  }

  /* DataTypeConversion: '<S14>/Data Type Conversion24' incorporates:
   *  Constant: '<S14>/Constant24'
   */
  tmp = Copy_2_of_canceshi_P.Constant24_Value_i;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion24 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion18' incorporates:
   *  Constant: '<S14>/Constant18'
   */
  tmp = Copy_2_of_canceshi_P.Constant18_Value_e;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion18_g = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion17' incorporates:
   *  Constant: '<S14>/Constant17'
   */
  tmp = Copy_2_of_canceshi_P.Constant17_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion17_m = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion19' incorporates:
   *  Constant: '<S14>/Constant19'
   */
  tmp = Copy_2_of_canceshi_P.Constant19_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion19 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion20' incorporates:
   *  Constant: '<S14>/Constant20'
   */
  tmp = Copy_2_of_canceshi_P.Constant20_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion20 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion21' incorporates:
   *  Constant: '<S14>/Constant21'
   */
  tmp = Copy_2_of_canceshi_P.Constant21_Value_l;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion21 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion22' incorporates:
   *  Constant: '<S14>/Constant22'
   */
  tmp = Copy_2_of_canceshi_P.Constant22_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion22 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S14>/Data Type Conversion23' incorporates:
   *  Constant: '<S14>/Constant23'
   */
  tmp = Copy_2_of_canceshi_P.Constant23_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion23 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S14>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking3_h;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion24 & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion18_g & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion17_m & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion19 & 0xff) << 24));
    y[1] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion20 & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion21 & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion22 & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion23 & 0xff) << 24));
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion7' incorporates:
   *  Constant: '<S1>/Constant7'
   */
  tmp = Copy_2_of_canceshi_P.Constant7_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion7_j = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion16' incorporates:
   *  Constant: '<S1>/Constant16'
   */
  tmp = Copy_2_of_canceshi_P.Constant16_Value_f;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion16_h = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  tmp = Copy_2_of_canceshi_P.Constant1_Value_a;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion1_o = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  tmp = Copy_2_of_canceshi_P.Constant2_Value_g;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion2_d = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  tmp = Copy_2_of_canceshi_P.Constant3_Value_c;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion3_j = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' incorporates:
   *  Constant: '<S1>/Constant4'
   */
  tmp = Copy_2_of_canceshi_P.Constant4_Value_h;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion4_k = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' incorporates:
   *  Constant: '<S1>/Constant5'
   */
  tmp = Copy_2_of_canceshi_P.Constant5_Value_h;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion5_k = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion6' incorporates:
   *  Constant: '<S1>/Constant6'
   */
  tmp = Copy_2_of_canceshi_P.Constant6_Value_d;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion6_g = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S1>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking2_j;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion7_j & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion16_h & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion1_o & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion2_d & 0xff) << 24));
    y[1] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion3_j & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion4_k & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion5_k & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion6_g & 0xff) << 24));
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion15' incorporates:
   *  Constant: '<S1>/Constant15'
   */
  tmp = Copy_2_of_canceshi_P.Constant15_Value_k;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion15 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion9' incorporates:
   *  Constant: '<S1>/Constant9'
   */
  tmp = Copy_2_of_canceshi_P.Constant9_Value_j;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion9 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion8' incorporates:
   *  Constant: '<S1>/Constant8'
   */
  tmp = Copy_2_of_canceshi_P.Constant8_Value_f;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion8 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion10' incorporates:
   *  Constant: '<S1>/Constant10'
   */
  tmp = Copy_2_of_canceshi_P.Constant10_Value_m;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion10 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion11' incorporates:
   *  Constant: '<S1>/Constant11'
   */
  tmp = Copy_2_of_canceshi_P.Constant11_Value_g;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion11 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion12' incorporates:
   *  Constant: '<S1>/Constant12'
   */
  tmp = Copy_2_of_canceshi_P.Constant12_Value_f;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion12 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion13' incorporates:
   *  Constant: '<S1>/Constant13'
   */
  tmp = Copy_2_of_canceshi_P.Constant13_Value_e;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion13 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion14' incorporates:
   *  Constant: '<S1>/Constant14'
   */
  tmp = Copy_2_of_canceshi_P.Constant14_Value_n;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion14 = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <S1>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking1;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion15 & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion9 & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion8 & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion10 & 0xff) << 24));
    y[1] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion11 & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion12 & 0xff) << 8) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion13 & 0xff) << 16) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion14 & 0xff) << 24));
  }

  /* Switch: '<S12>/SwitchControl' incorporates:
   *  Constant: '<S12>/Constant'
   */
  if (Copy_2_of_canceshi_P.Constant_Value_l >
      Copy_2_of_canceshi_P.SwitchControl_Threshold_hn) {
    /* Switch: '<S13>/SwitchControl' incorporates:
     *  Constant: '<S13>/Constant'
     */
    if (Copy_2_of_canceshi_P.Constant_Value >
        Copy_2_of_canceshi_P.SwitchControl_Threshold) {
      Copy_2_of_canceshi_B.SwitchControl_m =
        Copy_2_of_canceshi_B.CANbitpacking3_h;
    } else {
      Copy_2_of_canceshi_B.SwitchControl_m =
        Copy_2_of_canceshi_B.CANbitpacking2_j;
    }

    Copy_2_of_canceshi_B.SwitchControl_b = Copy_2_of_canceshi_B.SwitchControl_m;
  } else {
    Copy_2_of_canceshi_B.SwitchControl_b = Copy_2_of_canceshi_B.CANbitpacking1;
  }

  /* S-Function (canac2objsend): '<Root>/3402Send' */
  {
    /*------------ S-Function Block: <Root>/3402Send ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(6, 8, (uint8_T *)
        &Copy_2_of_canceshi_B.SwitchControl_b);
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
      stat = CANPC_read_rcv_data2_mb1(4, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &Copy_2_of_canceshi_B.u02Receive, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking  */
  {
    const uint32_T *y = (const uint32_T *)&Copy_2_of_canceshi_B.u02Receive;

    /* Output Port 1 */
    Copy_2_of_canceshi_B.CANbitunpacking_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    Copy_2_of_canceshi_B.CANbitunpacking_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    Copy_2_of_canceshi_B.CANbitunpacking_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    Copy_2_of_canceshi_B.CANbitunpacking_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* Lookup: '<Root>/right7'
   * About '<Root>/right7':
   * Input0  Data Type:  Integer        U16
   * Output0 Data Type:  Integer        U16
   * Saturation Mode: Saturate
   * Lookup Method: Linear_Endpoint
   *
   * XData parameter uses the same data type and scaling as Input0
   * YData parameter uses the same data type and scaling as Output0
   */
  LookUp_U16_U16_SAT( &(Copy_2_of_canceshi_B.right7),
                     Copy_2_of_canceshi_P.right7_YData,
                     Copy_2_of_canceshi_B.CANbitunpacking_o1,
                     Copy_2_of_canceshi_P.right7_XData, 1U);

  /* DataTypeConversion: '<Root>/yyy' */
  Copy_2_of_canceshi_B.yyy = (real_T)Copy_2_of_canceshi_B.right7;

  /* ok to acquire for <S8>/S-Function */
  Copy_2_of_canceshi_DWork.SFunction_IWORK.AcquireOK = 1;

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
        memcpy( &Copy_2_of_canceshi_B.u02Receive1_o1, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(1, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &Copy_2_of_canceshi_B.u02Receive1_o2, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(2, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &Copy_2_of_canceshi_B.u02Receive1_o3, p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(3, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &Copy_2_of_canceshi_B.u02Receive1_o4, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 2 */
  {
    const uint32_T *y = (const uint32_T *)&Copy_2_of_canceshi_B.u02Receive1_o1;

    /* Output Port 1 */
    Copy_2_of_canceshi_B.CANbitunpacking2_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    Copy_2_of_canceshi_B.CANbitunpacking2_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    Copy_2_of_canceshi_B.CANbitunpacking2_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    Copy_2_of_canceshi_B.CANbitunpacking2_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 3 */
  {
    const uint32_T *y = (const uint32_T *)&Copy_2_of_canceshi_B.u02Receive1_o2;

    /* Output Port 1 */
    Copy_2_of_canceshi_B.CANbitunpacking3_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    Copy_2_of_canceshi_B.CANbitunpacking3_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    Copy_2_of_canceshi_B.CANbitunpacking3_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    Copy_2_of_canceshi_B.CANbitunpacking3_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 4 */
  {
    const uint32_T *y = (const uint32_T *)&Copy_2_of_canceshi_B.u02Receive1_o3;

    /* Output Port 1 */
    Copy_2_of_canceshi_B.CANbitunpacking4_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    Copy_2_of_canceshi_B.CANbitunpacking4_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    Copy_2_of_canceshi_B.CANbitunpacking4_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    Copy_2_of_canceshi_B.CANbitunpacking4_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    Copy_2_of_canceshi_B.CANbitunpacking4_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 5 */
  {
    const uint32_T *y = (const uint32_T *)&Copy_2_of_canceshi_B.u02Receive1_o4;

    /* Output Port 1 */
    Copy_2_of_canceshi_B.CANbitunpacking5_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    Copy_2_of_canceshi_B.CANbitunpacking5_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    Copy_2_of_canceshi_B.CANbitunpacking5_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    Copy_2_of_canceshi_B.CANbitunpacking5_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    Copy_2_of_canceshi_B.CANbitunpacking5_o5 = (uint8_T)
      (y[1] & 0xff);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  Copy_2_of_canceshi_B.DataTypeConversion1[0] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking3_o1;
  Copy_2_of_canceshi_B.DataTypeConversion1[1] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking3_o2;
  Copy_2_of_canceshi_B.DataTypeConversion1[2] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking3_o3;
  Copy_2_of_canceshi_B.DataTypeConversion1[3] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking3_o4;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  Copy_2_of_canceshi_B.DataTypeConversion2[0] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking4_o1;
  Copy_2_of_canceshi_B.DataTypeConversion2[1] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking4_o2;
  Copy_2_of_canceshi_B.DataTypeConversion2[2] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking4_o3;
  Copy_2_of_canceshi_B.DataTypeConversion2[3] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking4_o4;
  Copy_2_of_canceshi_B.DataTypeConversion2[4] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking4_o5;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  Copy_2_of_canceshi_B.DataTypeConversion3[0] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking5_o1;
  Copy_2_of_canceshi_B.DataTypeConversion3[1] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking5_o2;
  Copy_2_of_canceshi_B.DataTypeConversion3[2] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking5_o3;
  Copy_2_of_canceshi_B.DataTypeConversion3[3] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking5_o4;
  Copy_2_of_canceshi_B.DataTypeConversion3[4] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking5_o5;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  Copy_2_of_canceshi_B.DataTypeConversion4[0] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking2_o1;
  Copy_2_of_canceshi_B.DataTypeConversion4[1] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking2_o2;
  Copy_2_of_canceshi_B.DataTypeConversion4[2] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking2_o3;
  Copy_2_of_canceshi_B.DataTypeConversion4[3] = (real_T)
    Copy_2_of_canceshi_B.CANbitunpacking2_o4;

  /* S-Function (canac2objreceive): '<Root>/3402Receive 2' */
  {
    /*------------ S-Function Block: <Root>/3402Receive 2 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mb1(5, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( &Copy_2_of_canceshi_B.u02Receive2, p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 1 */
  {
    const uint32_T *y = (const uint32_T *)&Copy_2_of_canceshi_B.u02Receive2;

    /* Output Port 1 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o5 = (uint8_T)
      (y[1] & 0xff);

    /* Output Port 6 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o6 = (uint8_T)
      ((y[1] & (0xff << 8)) >> 8);

    /* Output Port 7 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o7 = (uint8_T)
      ((y[1] & (0xff << 16)) >> 16);

    /* Output Port 8 */
    Copy_2_of_canceshi_B.CANbitunpacking1_o8 = (uint8_T)
      ((y[1] & (0xff << 24)) >> 24);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/constant1'
   */
  tmp = Copy_2_of_canceshi_P.constant1_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Constant: '<Root>/constant3'
   */
  tmp = Copy_2_of_canceshi_P.constant3_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion5_b = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing  */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion5_b & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
   *  Constant: '<Root>/constant6'
   */
  tmp = Copy_2_of_canceshi_P.constant6_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion12_d = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion13' incorporates:
   *  Constant: '<Root>/constant9'
   */
  tmp = Copy_2_of_canceshi_P.constant9_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion13_e = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 4 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking4;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion12_d & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion13_e & 0xff) << 8));
  }

  /* Switch: '<S4>/SwitchControl' incorporates:
   *  Constant: '<S4>/Constant'
   */
  if (Copy_2_of_canceshi_P.Constant_Value_p >
      Copy_2_of_canceshi_P.SwitchControl_Threshold_b) {
    Copy_2_of_canceshi_B.SwitchControl_h = Copy_2_of_canceshi_B.CANbitpacking;
  } else {
    Copy_2_of_canceshi_B.SwitchControl_h = Copy_2_of_canceshi_B.CANbitpacking4;
  }

  /* S-Function (canac2objsend): '<Root>/Send1' */
  {
    /*------------ S-Function Block: <Root>/Send1 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(0, 8, (uint8_T *)
        &Copy_2_of_canceshi_B.SwitchControl_h);
      restoreInterrupts(flags);
      ;
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Constant: '<Root>/constant2'
   */
  tmp = Copy_2_of_canceshi_P.constant2_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion6_c = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
   *  Constant: '<Root>/constant3'
   */
  tmp = Copy_2_of_canceshi_P.constant3_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion7_l = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking1_a;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion6_c & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion7_l & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion14' incorporates:
   *  Constant: '<Root>/constant10'
   */
  tmp = Copy_2_of_canceshi_P.constant10_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion14_c = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion15' incorporates:
   *  Constant: '<Root>/constant11'
   */
  tmp = Copy_2_of_canceshi_P.constant11_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion15_c = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 5 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking5;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion14_c & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion15_c & 0xff) << 8));
  }

  /* Switch: '<S5>/SwitchControl' incorporates:
   *  Constant: '<S5>/Constant'
   */
  if (Copy_2_of_canceshi_P.Constant_Value_k >
      Copy_2_of_canceshi_P.SwitchControl_Threshold_g) {
    Copy_2_of_canceshi_B.SwitchControl_p = Copy_2_of_canceshi_B.CANbitpacking1_a;
  } else {
    Copy_2_of_canceshi_B.SwitchControl_p = Copy_2_of_canceshi_B.CANbitpacking5;
  }

  /* S-Function (canac2objsend): '<Root>/Send2' */
  {
    /*------------ S-Function Block: <Root>/Send2 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(1, 8, (uint8_T *)
        &Copy_2_of_canceshi_B.SwitchControl_p);
      restoreInterrupts(flags);
      ;
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Constant: '<Root>/constant4'
   */
  tmp = Copy_2_of_canceshi_P.constant4_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion8_g = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion9' incorporates:
   *  Constant: '<Root>/constant7'
   */
  tmp = Copy_2_of_canceshi_P.constant7_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion9_m = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking2_i;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion8_g & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion9_m & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion16' incorporates:
   *  Constant: '<Root>/constant12'
   */
  tmp = Copy_2_of_canceshi_P.constant12_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion16_a = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion17' incorporates:
   *  Constant: '<Root>/constant13'
   */
  tmp = Copy_2_of_canceshi_P.constant13_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion17_o = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 6 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking6;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion16_a & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion17_o & 0xff) << 8));
  }

  /* Switch: '<S6>/SwitchControl' incorporates:
   *  Constant: '<S6>/Constant'
   */
  if (Copy_2_of_canceshi_P.Constant_Value_g >
      Copy_2_of_canceshi_P.SwitchControl_Threshold_e) {
    Copy_2_of_canceshi_B.SwitchControl_pr =
      Copy_2_of_canceshi_B.CANbitpacking2_i;
  } else {
    Copy_2_of_canceshi_B.SwitchControl_pr = Copy_2_of_canceshi_B.CANbitpacking6;
  }

  /* S-Function (canac2objsend): '<Root>/Send3' */
  {
    /*------------ S-Function Block: <Root>/Send3 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(2, 8, (uint8_T *)
        &Copy_2_of_canceshi_B.SwitchControl_pr);
      restoreInterrupts(flags);
      ;
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion10' incorporates:
   *  Constant: '<Root>/constant5'
   */
  tmp = Copy_2_of_canceshi_P.constant5_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion10_o = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion11' incorporates:
   *  Constant: '<Root>/constant8'
   */
  tmp = Copy_2_of_canceshi_P.constant8_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion11_i = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking3_d;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion10_o & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion11_i & 0xff) << 8));
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion18' incorporates:
   *  Constant: '<Root>/constant14'
   */
  tmp = Copy_2_of_canceshi_P.constant14_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion18_j = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion19' incorporates:
   *  Constant: '<Root>/constant15'
   */
  tmp = Copy_2_of_canceshi_P.constant15_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  Copy_2_of_canceshi_B.DataTypeConversion19_o = (uint8_T)(tmp < 0.0 ? (uint8_T)
    (int8_T)(-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* Bit Packing: <Root>/CAN bit-packing 7 */
  {
    uint32_T *y = (uint32_T *)&Copy_2_of_canceshi_B.CANbitpacking7;
    y[0] =
      ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion18_j & 0xff) |
       ((uint32_T)(Copy_2_of_canceshi_B.DataTypeConversion19_o & 0xff) << 8));
  }

  /* Switch: '<S7>/SwitchControl' incorporates:
   *  Constant: '<S7>/Constant'
   */
  if (Copy_2_of_canceshi_P.Constant_Value_a >
      Copy_2_of_canceshi_P.SwitchControl_Threshold_p) {
    Copy_2_of_canceshi_B.SwitchControl_c = Copy_2_of_canceshi_B.CANbitpacking3_d;
  } else {
    Copy_2_of_canceshi_B.SwitchControl_c = Copy_2_of_canceshi_B.CANbitpacking7;
  }

  /* S-Function (canac2objsend): '<Root>/Send4' */
  {
    /*------------ S-Function Block: <Root>/Send4 ------------*/
    if (!g_xpccanac2busstatus[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mb1(3, 8, (uint8_T *)
        &Copy_2_of_canceshi_B.SwitchControl_c);
      restoreInterrupts(flags);
      ;
    }
  }

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void Copy_2_of_canceshi_update(int_T tid)
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
  if (!(++Copy_2_of_canceshi_rtM->Timing.clockTick0)) {
    ++Copy_2_of_canceshi_rtM->Timing.clockTickH0;
  }

  Copy_2_of_canceshi_rtM->Timing.t[0] =
    Copy_2_of_canceshi_rtM->Timing.clockTick0 *
    Copy_2_of_canceshi_rtM->Timing.stepSize0 +
    Copy_2_of_canceshi_rtM->Timing.clockTickH0 *
    Copy_2_of_canceshi_rtM->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void Copy_2_of_canceshi_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Copy_2_of_canceshi_rtM, 0,
                sizeof(rtModel_Copy_2_of_canceshi));
  rtsiSetSolverName(&Copy_2_of_canceshi_rtM->solverInfo,"FixedStepDiscrete");
  Copy_2_of_canceshi_rtM->solverInfoPtr = (&Copy_2_of_canceshi_rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Copy_2_of_canceshi_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    Copy_2_of_canceshi_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Copy_2_of_canceshi_rtM->Timing.sampleTimes =
      (&Copy_2_of_canceshi_rtM->Timing.sampleTimesArray[0]);
    Copy_2_of_canceshi_rtM->Timing.offsetTimes =
      (&Copy_2_of_canceshi_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    Copy_2_of_canceshi_rtM->Timing.sampleTimes[0] = (0.1);

    /* task offsets */
    Copy_2_of_canceshi_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(Copy_2_of_canceshi_rtM, &Copy_2_of_canceshi_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Copy_2_of_canceshi_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    Copy_2_of_canceshi_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Copy_2_of_canceshi_rtM, -1);
  Copy_2_of_canceshi_rtM->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    Copy_2_of_canceshi_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Copy_2_of_canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Copy_2_of_canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(Copy_2_of_canceshi_rtM->rtwLogInfo, "tout");
    rtliSetLogX(Copy_2_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(Copy_2_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetSigLog(Copy_2_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Copy_2_of_canceshi_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(Copy_2_of_canceshi_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(Copy_2_of_canceshi_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(Copy_2_of_canceshi_rtM->rtwLogInfo, 1);
    rtliSetLogY(Copy_2_of_canceshi_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Copy_2_of_canceshi_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Copy_2_of_canceshi_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  Copy_2_of_canceshi_rtM->Sizes.checksums[0] = (3927568038U);
  Copy_2_of_canceshi_rtM->Sizes.checksums[1] = (3005633934U);
  Copy_2_of_canceshi_rtM->Sizes.checksums[2] = (3816186302U);
  Copy_2_of_canceshi_rtM->Sizes.checksums[3] = (3120778302U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    Copy_2_of_canceshi_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Copy_2_of_canceshi_rtM->extModeInfo,
      &Copy_2_of_canceshi_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Copy_2_of_canceshi_rtM->extModeInfo,
                        Copy_2_of_canceshi_rtM->Sizes.checksums);
    rteiSetTPtr(Copy_2_of_canceshi_rtM->extModeInfo, rtmGetTPtr
                (Copy_2_of_canceshi_rtM));
  }

  Copy_2_of_canceshi_rtM->solverInfoPtr = (&Copy_2_of_canceshi_rtM->solverInfo);
  Copy_2_of_canceshi_rtM->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&Copy_2_of_canceshi_rtM->solverInfo, 0.1);
  rtsiSetSolverMode(&Copy_2_of_canceshi_rtM->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Copy_2_of_canceshi_rtM->ModelData.blockIO = ((void *) &Copy_2_of_canceshi_B);
  (void) memset(((void *) &Copy_2_of_canceshi_B), 0,
                sizeof(BlockIO_Copy_2_of_canceshi));

  /* parameters */
  Copy_2_of_canceshi_rtM->ModelData.defaultParam = ((real_T *)
    &Copy_2_of_canceshi_P);

  /* states (dwork) */
  Copy_2_of_canceshi_rtM->Work.dwork = ((void *) &Copy_2_of_canceshi_DWork);
  (void) memset((void *)&Copy_2_of_canceshi_DWork, 0,
                sizeof(D_Work_Copy_2_of_canceshi));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Copy_2_of_canceshi_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    Copy_2_of_canceshi_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Copy_2_of_canceshi_InitializeDataMapInfo(Copy_2_of_canceshi_rtM);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Copy_2_of_canceshi_rtM->NonInlinedSFcns.sfcnInfo;
    Copy_2_of_canceshi_rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Copy_2_of_canceshi_rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Copy_2_of_canceshi_rtM->Sizes.numSampTimes);
    rtssSetTPtrPtr(sfcnInfo, &rtmGetTPtr(Copy_2_of_canceshi_rtM));
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Copy_2_of_canceshi_rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Copy_2_of_canceshi_rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Copy_2_of_canceshi_rtM));
    rtssSetStepSizePtr(sfcnInfo, &Copy_2_of_canceshi_rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Copy_2_of_canceshi_rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Copy_2_of_canceshi_rtM->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Copy_2_of_canceshi_rtM->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &Copy_2_of_canceshi_rtM->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Copy_2_of_canceshi_rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Copy_2_of_canceshi_rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Copy_2_of_canceshi_rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Copy_2_of_canceshi_rtM->solverInfoPtr);
  }

  Copy_2_of_canceshi_rtM->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)
                  &Copy_2_of_canceshi_rtM->NonInlinedSFcns.childSFunctions[0], 0,
                  2*sizeof(SimStruct));
    Copy_2_of_canceshi_rtM->childSfunctions =
      (&Copy_2_of_canceshi_rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    Copy_2_of_canceshi_rtM->childSfunctions[0] =
      (&Copy_2_of_canceshi_rtM->NonInlinedSFcns.childSFunctions[0]);
    Copy_2_of_canceshi_rtM->childSfunctions[1] =
      (&Copy_2_of_canceshi_rtM->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: Copy_2_of_canceshi/<Root>/PCL731 (pcl731) */
    {
      SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Copy_2_of_canceshi_rtM->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      ssSetRTWSfcnInfo(rts, Copy_2_of_canceshi_rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Copy_2_of_canceshi_rtM->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Copy_2_of_canceshi_rtM->NonInlinedSFcns.methods3[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 24);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 24);
          ssSetOutputPortSignal(rts, 0, ((real_T *) Copy_2_of_canceshi_B.PCL731));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCL731");
      ssSetPath(rts, "Copy_2_of_canceshi/PCL731");
      ssSetRTModel(rts,Copy_2_of_canceshi_rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&Copy_2_of_canceshi_P.PCL731_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&Copy_2_of_canceshi_P.PCL731_P2_Size[0]);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Copy_2_of_canceshi_DWork.PCL731_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Copy_2_of_canceshi_DWork.PCL731_IWORK[0]);
      }

      /* registration */
      pcl731(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
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

    /* Level2 S-Function Block: Copy_2_of_canceshi/<Root>/Setup  (canac2pcisetup) */
    {
      SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Copy_2_of_canceshi_rtM->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      ssSetRTWSfcnInfo(rts, Copy_2_of_canceshi_rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Copy_2_of_canceshi_rtM->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Copy_2_of_canceshi_rtM->NonInlinedSFcns.methods3[1]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "Copy_2_of_canceshi/Setup ");
      ssSetRTModel(rts,Copy_2_of_canceshi_rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Copy_2_of_canceshi_rtM->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&Copy_2_of_canceshi_P.Setup_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&Copy_2_of_canceshi_P.Setup_P2_Size[0]);
        ssSetSFcnParam(rts, 2, (mxArray*)&Copy_2_of_canceshi_P.Setup_P3_Size[0]);
        ssSetSFcnParam(rts, 3, (mxArray*)&Copy_2_of_canceshi_P.Setup_P4_Size[0]);
        ssSetSFcnParam(rts, 4, (mxArray*)&Copy_2_of_canceshi_P.Setup_P5_Size[0]);
        ssSetSFcnParam(rts, 5, (mxArray*)&Copy_2_of_canceshi_P.Setup_P6_Size[0]);
        ssSetSFcnParam(rts, 6, (mxArray*)&Copy_2_of_canceshi_P.Setup_P7_Size[0]);
        ssSetSFcnParam(rts, 7, (mxArray*)&Copy_2_of_canceshi_P.Setup_P8_Size[0]);
        ssSetSFcnParam(rts, 8, (mxArray*)&Copy_2_of_canceshi_P.Setup_P9_Size[0]);
        ssSetSFcnParam(rts, 9, (mxArray*)&Copy_2_of_canceshi_P.Setup_P10_Size[0]);
        ssSetSFcnParam(rts, 10, (mxArray*)&Copy_2_of_canceshi_P.Setup_P11_Size[0]);
        ssSetSFcnParam(rts, 11, (mxArray*)&Copy_2_of_canceshi_P.Setup_P12_Size[0]);
        ssSetSFcnParam(rts, 12, (mxArray*)&Copy_2_of_canceshi_P.Setup_P13_Size[0]);
        ssSetSFcnParam(rts, 13, (mxArray*)&Copy_2_of_canceshi_P.Setup_P14_Size[0]);
        ssSetSFcnParam(rts, 14, (mxArray*)&Copy_2_of_canceshi_P.Setup_P15_Size[0]);
        ssSetSFcnParam(rts, 15, (mxArray*)&Copy_2_of_canceshi_P.Setup_P16_Size[0]);
        ssSetSFcnParam(rts, 16, (mxArray*)&Copy_2_of_canceshi_P.Setup_P17_Size[0]);
        ssSetSFcnParam(rts, 17, (mxArray*)&Copy_2_of_canceshi_P.Setup_P18_Size[0]);
        ssSetSFcnParam(rts, 18, (mxArray*)&Copy_2_of_canceshi_P.Setup_P19_Size[0]);
        ssSetSFcnParam(rts, 19, (mxArray*)&Copy_2_of_canceshi_P.Setup_P20_Size[0]);
        ssSetSFcnParam(rts, 20, (mxArray*)&Copy_2_of_canceshi_P.Setup_P21_Size[0]);
        ssSetSFcnParam(rts, 21, (mxArray*)&Copy_2_of_canceshi_P.Setup_P22_Size[0]);
        ssSetSFcnParam(rts, 22, (mxArray*)&Copy_2_of_canceshi_P.Setup_P23_Size[0]);
        ssSetSFcnParam(rts, 23, (mxArray*)&Copy_2_of_canceshi_P.Setup_P24_Size[0]);
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
void Copy_2_of_canceshi_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCL731' (pcl731) */
  {
    SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Copy_2_of_canceshi_output(tid);
}

void MdlUpdate(int_T tid)
{
  Copy_2_of_canceshi_update(tid);
}

void MdlInitializeSizes(void)
{
  Copy_2_of_canceshi_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  Copy_2_of_canceshi_rtM->Sizes.numY = (0);/* Number of model outputs */
  Copy_2_of_canceshi_rtM->Sizes.numU = (0);/* Number of model inputs */
  Copy_2_of_canceshi_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Copy_2_of_canceshi_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  Copy_2_of_canceshi_rtM->Sizes.numBlocks = (217);/* Number of blocks */
  Copy_2_of_canceshi_rtM->Sizes.numBlockIO = (125);/* Number of block outputs */
  Copy_2_of_canceshi_rtM->Sizes.numBlockPrms = (197);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  /* Level2 S-Function Block: '<Root>/PCL731' (pcl731) */
  {
    SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Bit Packing: <S10>/CAN bit-packing 3 */
  Copy_2_of_canceshi_B.CANbitpacking3 = 0.0;

  /* Bit Packing: <S2>/CAN bit-packing 2 */
  Copy_2_of_canceshi_B.CANbitpacking2 = 0.0;

  /* Bit Packing: <S11>/CAN bit-packing 2 */
  Copy_2_of_canceshi_B.CANbitpacking2_p = 0.0;

  /* Bit Packing: <S14>/CAN bit-packing 3 */
  Copy_2_of_canceshi_B.CANbitpacking3_h = 0.0;

  /* Bit Packing: <S1>/CAN bit-packing 2 */
  Copy_2_of_canceshi_B.CANbitpacking2_j = 0.0;

  /* Bit Packing: <S1>/CAN bit-packing 1 */
  Copy_2_of_canceshi_B.CANbitpacking1 = 0.0;

  /* S-Function Block: <S8>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("CAN bit-unpacking 2/p1"));
        rl32eAddSignal(1, rl32eGetSignalNo("CAN bit-unpacking 2/p2"));
        rl32eAddSignal(1, rl32eGetSignalNo("CAN bit-unpacking 2/p3"));
        rl32eAddSignal(1, rl32eGetSignalNo("CAN bit-unpacking 2/p4"));
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("CAN bit-unpacking 2/p1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("CAN bit-unpacking 2/p2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("CAN bit-unpacking 2/p3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("CAN bit-unpacking 2/p4"),
          "%15.6f");
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 40, 0);
        rl32eSetScope(1, 7, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("CAN bit-unpacking 2/p1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 10, 0);
        rl32eSetTargetScope(1, 1, 0.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &Copy_2_of_canceshi_DWork.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Bit Packing: <Root>/CAN bit-packing  */
  Copy_2_of_canceshi_B.CANbitpacking = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 4 */
  Copy_2_of_canceshi_B.CANbitpacking4 = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 1 */
  Copy_2_of_canceshi_B.CANbitpacking1_a = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 5 */
  Copy_2_of_canceshi_B.CANbitpacking5 = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 2 */
  Copy_2_of_canceshi_B.CANbitpacking2_i = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 6 */
  Copy_2_of_canceshi_B.CANbitpacking6 = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 3 */
  Copy_2_of_canceshi_B.CANbitpacking3_d = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 7 */
  Copy_2_of_canceshi_B.CANbitpacking7 = 0.0;

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetup) */
  {
    SimStruct *rts = Copy_2_of_canceshi_rtM->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  Copy_2_of_canceshi_terminate();
}

rtModel_Copy_2_of_canceshi *Copy_2_of_canceshi(void)
{
  Copy_2_of_canceshi_initialize(1);
  return Copy_2_of_canceshi_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
