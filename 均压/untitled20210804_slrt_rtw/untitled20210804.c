/*
 * untitled20210804.c
 *
 * Code generation for model "untitled20210804".
 *
 * Model version              : 1.3
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Aug 05 10:14:40 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "untitled20210804_capi.h"
#include "untitled20210804.h"
#include "untitled20210804_private.h"

/* Block signals (auto storage) */
B_untitled20210804_T untitled20210804_B;

/* Block states (auto storage) */
DW_untitled20210804_T untitled20210804_DW;

/* Real-time model */
RT_MODEL_untitled20210804_T untitled20210804_M_;
RT_MODEL_untitled20210804_T *const untitled20210804_M = &untitled20210804_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/* Model output function */
static void untitled20210804_output(void)
{
  real_T tmp;

  /* S-Function (canac2objreceivex): '<Root>/tonggai3402Receive' */
  {
    /*------------ S-Function Block: <Root>/tonggai3402Receive ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 0, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&untitled20210804_B.tonggai3402Receive), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 3 */
  {
    const uint32_T *y = (const uint32_T *)&untitled20210804_B.tonggai3402Receive;

    /* Output Port 1 */
    untitled20210804_B.CANbitunpacking3_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    untitled20210804_B.CANbitunpacking3_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    untitled20210804_B.CANbitunpacking3_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    untitled20210804_B.CANbitunpacking3_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion48' */
  untitled20210804_B.DataTypeConversion48[0] =
    untitled20210804_B.CANbitunpacking3_o1;
  untitled20210804_B.DataTypeConversion48[1] =
    untitled20210804_B.CANbitunpacking3_o2;
  untitled20210804_B.DataTypeConversion48[2] =
    untitled20210804_B.CANbitunpacking3_o3;
  untitled20210804_B.DataTypeConversion48[3] =
    untitled20210804_B.CANbitunpacking3_o4;

  /* Lookup_n-D: '<Root>/1-D Lookup Table' */
  tmp = untitled20210804_B.DataTypeConversion48[0];
  untitled20210804_B.uDLookupTable[0] = look1_binlxpw(tmp,
    untitled20210804_P.uDLookupTable_bp01Data,
    untitled20210804_P.uDLookupTable_tableData, 1U);
  tmp = untitled20210804_B.DataTypeConversion48[1];
  untitled20210804_B.uDLookupTable[1] = look1_binlxpw(tmp,
    untitled20210804_P.uDLookupTable_bp01Data,
    untitled20210804_P.uDLookupTable_tableData, 1U);
  tmp = untitled20210804_B.DataTypeConversion48[2];
  untitled20210804_B.uDLookupTable[2] = look1_binlxpw(tmp,
    untitled20210804_P.uDLookupTable_bp01Data,
    untitled20210804_P.uDLookupTable_tableData, 1U);
  tmp = untitled20210804_B.DataTypeConversion48[3];
  untitled20210804_B.uDLookupTable[3] = look1_binlxpw(tmp,
    untitled20210804_P.uDLookupTable_bp01Data,
    untitled20210804_P.uDLookupTable_tableData, 1U);

  /* Gain: '<Root>/Gain' */
  untitled20210804_B.Gain = untitled20210804_P.Gain_Gain *
    untitled20210804_B.uDLookupTable[0];

  /* ok to acquire for <S1>/S-Function */
  untitled20210804_DW.SFunction_IWORK.AcquireOK = 1;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp = floor(untitled20210804_P.Constant_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp = floor(untitled20210804_P.Constant1_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion1 = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  tmp = floor(untitled20210804_P.Constant2_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion2 = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  tmp = floor(untitled20210804_P.Constant3_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion3 = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion3' */

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  tmp = floor(untitled20210804_P.Constant4_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion4 = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion4' */

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  tmp = floor(untitled20210804_P.Constant5_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion5 = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion5' */

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  tmp = floor(untitled20210804_P.Constant6_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion6 = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion6' */

  /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  tmp = floor(untitled20210804_P.Constant7_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  untitled20210804_B.DataTypeConversion7 = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion7' */

  /* ManualSwitch: '<Root>/Manual Switch' */
  if (untitled20210804_P.ManualSwitch_CurrentSetting == 1) {
    untitled20210804_B.ManualSwitch[0] = untitled20210804_B.DataTypeConversion;
    untitled20210804_B.ManualSwitch[1] = untitled20210804_B.DataTypeConversion1;
    untitled20210804_B.ManualSwitch[2] = untitled20210804_B.DataTypeConversion2;
    untitled20210804_B.ManualSwitch[3] = untitled20210804_B.DataTypeConversion3;
    untitled20210804_B.ManualSwitch[4] = untitled20210804_B.DataTypeConversion4;
    untitled20210804_B.ManualSwitch[5] = untitled20210804_B.DataTypeConversion5;
    untitled20210804_B.ManualSwitch[6] = untitled20210804_B.DataTypeConversion6;
    untitled20210804_B.ManualSwitch[7] = untitled20210804_B.DataTypeConversion7;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
     *  Constant: '<Root>/Constant8'
     */
    tmp = floor(untitled20210804_P.Constant8_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion8 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion8' */

    /* DataTypeConversion: '<Root>/Data Type Conversion9' incorporates:
     *  Constant: '<Root>/Constant9'
     */
    tmp = floor(untitled20210804_P.Constant9_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion9 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion9' */

    /* DataTypeConversion: '<Root>/Data Type Conversion10' incorporates:
     *  Constant: '<Root>/Constant10'
     */
    tmp = floor(untitled20210804_P.Constant10_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion10 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion10' */

    /* DataTypeConversion: '<Root>/Data Type Conversion11' incorporates:
     *  Constant: '<Root>/Constant11'
     */
    tmp = floor(untitled20210804_P.Constant11_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion11 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion11' */

    /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
     *  Constant: '<Root>/Constant12'
     */
    tmp = floor(untitled20210804_P.Constant12_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion12 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion12' */

    /* DataTypeConversion: '<Root>/Data Type Conversion13' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    tmp = floor(untitled20210804_P.Constant13_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion13 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion13' */

    /* DataTypeConversion: '<Root>/Data Type Conversion14' incorporates:
     *  Constant: '<Root>/Constant14'
     */
    tmp = floor(untitled20210804_P.Constant14_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion14 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion14' */

    /* DataTypeConversion: '<Root>/Data Type Conversion15' incorporates:
     *  Constant: '<Root>/Constant15'
     */
    tmp = floor(untitled20210804_P.Constant15_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion15 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion15' */
    untitled20210804_B.ManualSwitch[0] = untitled20210804_B.DataTypeConversion8;
    untitled20210804_B.ManualSwitch[1] = untitled20210804_B.DataTypeConversion9;
    untitled20210804_B.ManualSwitch[2] = untitled20210804_B.DataTypeConversion10;
    untitled20210804_B.ManualSwitch[3] = untitled20210804_B.DataTypeConversion11;
    untitled20210804_B.ManualSwitch[4] = untitled20210804_B.DataTypeConversion12;
    untitled20210804_B.ManualSwitch[5] = untitled20210804_B.DataTypeConversion13;
    untitled20210804_B.ManualSwitch[6] = untitled20210804_B.DataTypeConversion14;
    untitled20210804_B.ManualSwitch[7] = untitled20210804_B.DataTypeConversion15;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */
  /* Bit Packing: <Root>/CAN bit-packing  */
  {
    uint32_T *y = (uint32_T *)&untitled20210804_B.CANbitpacking;
    y[0] =
      ((uint32_T)(untitled20210804_B.ManualSwitch[0] & 0xff) |
       ((uint32_T)(untitled20210804_B.ManualSwitch[1] & 0xff) << 8) |
       ((uint32_T)(untitled20210804_B.ManualSwitch[2] & 0xff) << 16) |
       ((uint32_T)(untitled20210804_B.ManualSwitch[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(untitled20210804_B.ManualSwitch[4] & 0xff) |
       ((uint32_T)(untitled20210804_B.ManualSwitch[5] & 0xff) << 8) |
       ((uint32_T)(untitled20210804_B.ManualSwitch[6] & 0xff) << 16) |
       ((uint32_T)(untitled20210804_B.ManualSwitch[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<Root>/tonggai1808Send' */
  {
    /*------------ S-Function Block: <Root>/tonggai1808Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mbx( 1, 1, 8, (uint8_T *)
        &untitled20210804_B.CANbitpacking);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<Root>/Manual Switch1' */
  if (untitled20210804_P.ManualSwitch1_CurrentSetting == 1) {
    untitled20210804_B.ManualSwitch1[0] = untitled20210804_B.DataTypeConversion;
    untitled20210804_B.ManualSwitch1[1] = untitled20210804_B.DataTypeConversion1;
    untitled20210804_B.ManualSwitch1[2] = untitled20210804_B.DataTypeConversion2;
    untitled20210804_B.ManualSwitch1[3] = untitled20210804_B.DataTypeConversion3;
    untitled20210804_B.ManualSwitch1[4] = untitled20210804_B.DataTypeConversion4;
    untitled20210804_B.ManualSwitch1[5] = untitled20210804_B.DataTypeConversion5;
    untitled20210804_B.ManualSwitch1[6] = untitled20210804_B.DataTypeConversion6;
    untitled20210804_B.ManualSwitch1[7] = untitled20210804_B.DataTypeConversion7;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion22' incorporates:
     *  Constant: '<Root>/Constant22'
     */
    tmp = floor(untitled20210804_P.Constant22_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion22 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion22' */

    /* DataTypeConversion: '<Root>/Data Type Conversion23' incorporates:
     *  Constant: '<Root>/Constant23'
     */
    tmp = floor(untitled20210804_P.Constant23_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion23 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion23' */

    /* DataTypeConversion: '<Root>/Data Type Conversion16' incorporates:
     *  Constant: '<Root>/Constant16'
     */
    tmp = floor(untitled20210804_P.Constant16_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion16 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion16' */

    /* DataTypeConversion: '<Root>/Data Type Conversion17' incorporates:
     *  Constant: '<Root>/Constant17'
     */
    tmp = floor(untitled20210804_P.Constant17_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion17 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion17' */

    /* DataTypeConversion: '<Root>/Data Type Conversion18' incorporates:
     *  Constant: '<Root>/Constant18'
     */
    tmp = floor(untitled20210804_P.Constant18_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion18 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion18' */

    /* DataTypeConversion: '<Root>/Data Type Conversion19' incorporates:
     *  Constant: '<Root>/Constant19'
     */
    tmp = floor(untitled20210804_P.Constant19_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion19 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion19' */

    /* DataTypeConversion: '<Root>/Data Type Conversion20' incorporates:
     *  Constant: '<Root>/Constant20'
     */
    tmp = floor(untitled20210804_P.Constant20_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion20 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion20' */

    /* DataTypeConversion: '<Root>/Data Type Conversion21' incorporates:
     *  Constant: '<Root>/Constant21'
     */
    tmp = floor(untitled20210804_P.Constant21_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    untitled20210804_B.DataTypeConversion21 = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion21' */
    untitled20210804_B.ManualSwitch1[0] =
      untitled20210804_B.DataTypeConversion22;
    untitled20210804_B.ManualSwitch1[1] =
      untitled20210804_B.DataTypeConversion23;
    untitled20210804_B.ManualSwitch1[2] =
      untitled20210804_B.DataTypeConversion16;
    untitled20210804_B.ManualSwitch1[3] =
      untitled20210804_B.DataTypeConversion17;
    untitled20210804_B.ManualSwitch1[4] =
      untitled20210804_B.DataTypeConversion18;
    untitled20210804_B.ManualSwitch1[5] =
      untitled20210804_B.DataTypeConversion19;
    untitled20210804_B.ManualSwitch1[6] =
      untitled20210804_B.DataTypeConversion20;
    untitled20210804_B.ManualSwitch1[7] =
      untitled20210804_B.DataTypeConversion21;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch1' */
  /* Bit Packing: <Root>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&untitled20210804_B.CANbitpacking1;
    y[0] =
      ((uint32_T)(untitled20210804_B.ManualSwitch1[0] & 0xff) |
       ((uint32_T)(untitled20210804_B.ManualSwitch1[1] & 0xff) << 8) |
       ((uint32_T)(untitled20210804_B.ManualSwitch1[2] & 0xff) << 16) |
       ((uint32_T)(untitled20210804_B.ManualSwitch1[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(untitled20210804_B.ManualSwitch1[4] & 0xff) |
       ((uint32_T)(untitled20210804_B.ManualSwitch1[5] & 0xff) << 8) |
       ((uint32_T)(untitled20210804_B.ManualSwitch1[6] & 0xff) << 16) |
       ((uint32_T)(untitled20210804_B.ManualSwitch1[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<Root>/tonggai1808Send1' */
  {
    /*------------ S-Function Block: <Root>/tonggai1808Send1 ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mbx( 1, 0, 8, (uint8_T *)
        &untitled20210804_B.CANbitpacking1);
      restoreInterrupts(flags);
      ;
    }
  }

  /* S-Function (canac2objreceivex): '<Root>/tonggai1808Receive1' */
  {
    /*------------ S-Function Block: <Root>/tonggai1808Receive1 ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 1, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&untitled20210804_B.tonggai1808Receive1), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <Root>/CAN bit-unpacking 1 */
  {
    const uint32_T *y = (const uint32_T *)
      &untitled20210804_B.tonggai1808Receive1;

    /* Output Port 1 */
    untitled20210804_B.CANbitunpacking1_o1 = (boolean_T)
      (y[0] & 0x1);

    /* Output Port 2 */
    untitled20210804_B.CANbitunpacking1_o2 = (boolean_T)
      ((y[0] & (0x1 << 1)) >> 1);

    /* Output Port 3 */
    untitled20210804_B.CANbitunpacking1_o3 = (boolean_T)
      ((y[0] & (0x1 << 2)) >> 2);

    /* Output Port 4 */
    untitled20210804_B.CANbitunpacking1_o4 = (boolean_T)
      ((y[0] & (0x1 << 3)) >> 3);

    /* Output Port 5 */
    untitled20210804_B.CANbitunpacking1_o5 = (boolean_T)
      ((y[0] & (0x1 << 4)) >> 4);

    /* Output Port 6 */
    untitled20210804_B.CANbitunpacking1_o6 = (boolean_T)
      ((y[0] & (0x1 << 5)) >> 5);

    /* Output Port 7 */
    untitled20210804_B.CANbitunpacking1_o7 = (boolean_T)
      ((y[0] & (0x1 << 6)) >> 6);

    /* Output Port 8 */
    untitled20210804_B.CANbitunpacking1_o8 = (boolean_T)
      ((y[0] & (0x1 << 7)) >> 7);

    /* Output Port 9 */
    untitled20210804_B.CANbitunpacking1_o9 = (boolean_T)
      ((y[0] & (0x1 << 8)) >> 8);

    /* Output Port 10 */
    untitled20210804_B.CANbitunpacking1_o10 = (boolean_T)
      ((y[0] & (0x1 << 9)) >> 9);

    /* Output Port 11 */
    untitled20210804_B.CANbitunpacking1_o11 = (boolean_T)
      ((y[0] & (0x1 << 10)) >> 10);

    /* Output Port 12 */
    untitled20210804_B.CANbitunpacking1_o12 = (boolean_T)
      ((y[0] & (0x1 << 11)) >> 11);

    /* Output Port 13 */
    untitled20210804_B.CANbitunpacking1_o13 = (boolean_T)
      ((y[0] & (0x1 << 12)) >> 12);

    /* Output Port 14 */
    untitled20210804_B.CANbitunpacking1_o14 = (boolean_T)
      ((y[0] & (0x1 << 13)) >> 13);

    /* Output Port 15 */
    untitled20210804_B.CANbitunpacking1_o15 = (boolean_T)
      ((y[0] & (0x1 << 14)) >> 14);

    /* Output Port 16 */
    untitled20210804_B.CANbitunpacking1_o16 = (boolean_T)
      ((y[0] & (0x1 << 15)) >> 15);
  }

  /* Logic: '<Root>/Logical Operator2' */
  untitled20210804_B.LogicalOperator2[0] =
    !untitled20210804_B.CANbitunpacking1_o1;
  untitled20210804_B.LogicalOperator2[1] =
    !untitled20210804_B.CANbitunpacking1_o2;
  untitled20210804_B.LogicalOperator2[2] =
    !untitled20210804_B.CANbitunpacking1_o3;
  untitled20210804_B.LogicalOperator2[3] =
    !untitled20210804_B.CANbitunpacking1_o4;
  untitled20210804_B.LogicalOperator2[4] =
    !untitled20210804_B.CANbitunpacking1_o5;
  untitled20210804_B.LogicalOperator2[5] =
    !untitled20210804_B.CANbitunpacking1_o6;
  untitled20210804_B.LogicalOperator2[6] =
    !untitled20210804_B.CANbitunpacking1_o7;
  untitled20210804_B.LogicalOperator2[7] =
    !untitled20210804_B.CANbitunpacking1_o8;
  untitled20210804_B.LogicalOperator2[8] =
    !untitled20210804_B.CANbitunpacking1_o9;
  untitled20210804_B.LogicalOperator2[9] =
    !untitled20210804_B.CANbitunpacking1_o10;
  untitled20210804_B.LogicalOperator2[10] =
    !untitled20210804_B.CANbitunpacking1_o11;
  untitled20210804_B.LogicalOperator2[11] =
    !untitled20210804_B.CANbitunpacking1_o12;
  untitled20210804_B.LogicalOperator2[12] =
    !untitled20210804_B.CANbitunpacking1_o13;
  untitled20210804_B.LogicalOperator2[13] =
    !untitled20210804_B.CANbitunpacking1_o14;
  untitled20210804_B.LogicalOperator2[14] =
    !untitled20210804_B.CANbitunpacking1_o15;
  untitled20210804_B.LogicalOperator2[15] =
    !untitled20210804_B.CANbitunpacking1_o16;

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = untitled20210804_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }
}

/* Model update function */
static void untitled20210804_update(void)
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
  if (!(++untitled20210804_M->Timing.clockTick0)) {
    ++untitled20210804_M->Timing.clockTickH0;
  }

  untitled20210804_M->Timing.t[0] = untitled20210804_M->Timing.clockTick0 *
    untitled20210804_M->Timing.stepSize0 +
    untitled20210804_M->Timing.clockTickH0 *
    untitled20210804_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void untitled20210804_initialize(void)
{
  /* S-Function Block: <S1>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("Gain"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Gain"),"%15.6f");
        rl32eSetScope(3, 4, 250);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("Gain"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &untitled20210804_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* Bit Packing: <Root>/CAN bit-packing  */
  untitled20210804_B.CANbitpacking = 0.0;

  /* Bit Packing: <Root>/CAN bit-packing 1 */
  untitled20210804_B.CANbitpacking1 = 0.0;

  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = untitled20210804_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void untitled20210804_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = untitled20210804_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  untitled20210804_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  untitled20210804_update();
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
  untitled20210804_initialize();
}

void MdlTerminate(void)
{
  untitled20210804_terminate();
}

/* Registration function */
RT_MODEL_untitled20210804_T *untitled20210804(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled20210804_M, 0,
                sizeof(RT_MODEL_untitled20210804_T));
  rtsiSetSolverName(&untitled20210804_M->solverInfo,"FixedStepDiscrete");
  untitled20210804_M->solverInfoPtr = (&untitled20210804_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = untitled20210804_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    untitled20210804_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    untitled20210804_M->Timing.sampleTimes =
      (&untitled20210804_M->Timing.sampleTimesArray[0]);
    untitled20210804_M->Timing.offsetTimes =
      (&untitled20210804_M->Timing.offsetTimesArray[0]);

    /* task periods */
    untitled20210804_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    untitled20210804_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(untitled20210804_M, &untitled20210804_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = untitled20210804_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    untitled20210804_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(untitled20210804_M, -1);
  untitled20210804_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    untitled20210804_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled20210804_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled20210804_M->rtwLogInfo, (NULL));
    rtliSetLogT(untitled20210804_M->rtwLogInfo, "tout");
    rtliSetLogX(untitled20210804_M->rtwLogInfo, "");
    rtliSetLogXFinal(untitled20210804_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled20210804_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled20210804_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(untitled20210804_M->rtwLogInfo, 0);
    rtliSetLogDecimation(untitled20210804_M->rtwLogInfo, 1);
    rtliSetLogY(untitled20210804_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled20210804_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled20210804_M->rtwLogInfo, (NULL));
  }

  untitled20210804_M->solverInfoPtr = (&untitled20210804_M->solverInfo);
  untitled20210804_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&untitled20210804_M->solverInfo, 0.002);
  rtsiSetSolverMode(&untitled20210804_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  untitled20210804_M->blockIO = ((void *) &untitled20210804_B);
  (void) memset(((void *) &untitled20210804_B), 0,
                sizeof(B_untitled20210804_T));

  /* parameters */
  untitled20210804_M->defaultParam = ((real_T *)&untitled20210804_P);

  /* states (dwork) */
  untitled20210804_M->dwork = ((void *) &untitled20210804_DW);
  (void) memset((void *)&untitled20210804_DW, 0,
                sizeof(DW_untitled20210804_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  untitled20210804_InitializeDataMapInfo(untitled20210804_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &untitled20210804_M->NonInlinedSFcns.sfcnInfo;
    untitled20210804_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(untitled20210804_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &untitled20210804_M->Sizes.numSampTimes);
    untitled20210804_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (untitled20210804_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,untitled20210804_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(untitled20210804_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(untitled20210804_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (untitled20210804_M));
    rtssSetStepSizePtr(sfcnInfo, &untitled20210804_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(untitled20210804_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &untitled20210804_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &untitled20210804_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &untitled20210804_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &untitled20210804_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &untitled20210804_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &untitled20210804_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &untitled20210804_M->solverInfoPtr);
  }

  untitled20210804_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&untitled20210804_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  1*sizeof(SimStruct));
    untitled20210804_M->childSfunctions =
      (&untitled20210804_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    untitled20210804_M->childSfunctions[0] =
      (&untitled20210804_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: untitled20210804/<Root>/Setup  (canac2pcisetupx) */
    {
      SimStruct *rts = untitled20210804_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = untitled20210804_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = untitled20210804_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = untitled20210804_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &untitled20210804_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, untitled20210804_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &untitled20210804_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &untitled20210804_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &untitled20210804_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &untitled20210804_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &untitled20210804_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "untitled20210804/Setup ");
      ssSetRTModel(rts,untitled20210804_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &untitled20210804_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)untitled20210804_P.Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)untitled20210804_P.Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)untitled20210804_P.Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)untitled20210804_P.Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)untitled20210804_P.Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)untitled20210804_P.Setup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)untitled20210804_P.Setup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)untitled20210804_P.Setup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)untitled20210804_P.Setup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)untitled20210804_P.Setup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)untitled20210804_P.Setup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)untitled20210804_P.Setup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)untitled20210804_P.Setup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)untitled20210804_P.Setup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)untitled20210804_P.Setup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)untitled20210804_P.Setup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)untitled20210804_P.Setup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)untitled20210804_P.Setup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)untitled20210804_P.Setup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)untitled20210804_P.Setup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)untitled20210804_P.Setup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)untitled20210804_P.Setup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)untitled20210804_P.Setup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)untitled20210804_P.Setup_P24_Size);
      }

      /* registration */
      canac2pcisetupx(rts);
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

  /* Initialize Sizes */
  untitled20210804_M->Sizes.numContStates = (0);/* Number of continuous states */
  untitled20210804_M->Sizes.numY = (0);/* Number of model outputs */
  untitled20210804_M->Sizes.numU = (0);/* Number of model inputs */
  untitled20210804_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled20210804_M->Sizes.numSampTimes = (1);/* Number of sample times */
  untitled20210804_M->Sizes.numBlocks = (69);/* Number of blocks */
  untitled20210804_M->Sizes.numBlockIO = (54);/* Number of block outputs */
  untitled20210804_M->Sizes.numBlockPrms = (103);/* Sum of parameter "widths" */
  return untitled20210804_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
