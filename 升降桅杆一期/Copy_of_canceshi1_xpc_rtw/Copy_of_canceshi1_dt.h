/*
 * Copy_of_canceshi1_dt.h
 *
 * Real-Time Workshop code generation for Simulink model "Copy_of_canceshi1.mdl".
 *
 * Model version              : 1.9
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Thu May 28 15:13:46 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Copy_of_canceshi1_B.TmpSignalConversionAtPCL731Inpo[0]), 0, 0,
    116 },

  { (char_T *)(&Copy_of_canceshi1_B.CANbitunpacking_o1), 5, 0, 7 },

  { (char_T *)(&Copy_of_canceshi1_B.DataTypeConversion10), 3, 0, 84 },

  { (char_T *)(&Copy_of_canceshi1_B.RelationalOperator), 8, 0, 6 }
  ,

  { (char_T *)(&Copy_of_canceshi1_DWork.IntegerDelay_X[0]), 0, 0, 34 },

  { (char_T *)(&Copy_of_canceshi1_DWork.PCL731_IWORK[0]), 10, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  6U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Copy_of_canceshi1_P.Constant1_Value), 0, 0, 192 },

  { (char_T *)(&Copy_of_canceshi1_P.right3_XData[0]), 5, 0, 12 },

  { (char_T *)(&Copy_of_canceshi1_P.Constant_Value_c), 3, 0, 6 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] Copy_of_canceshi1_dt.h */
