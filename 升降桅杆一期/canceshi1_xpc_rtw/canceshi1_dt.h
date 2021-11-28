/*
 * canceshi1_dt.h
 *
 * Real-Time Workshop code generation for Simulink model "canceshi1.mdl".
 *
 * Model version              : 1.36
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Jun 01 17:45:50 2020
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
  { (char_T *)(&canceshi1_B.TmpSignalConversionAtPCL731Inpo[0]), 0, 0, 114 },

  { (char_T *)(&canceshi1_B.CANbitunpacking_o1), 5, 0, 7 },

  { (char_T *)(&canceshi1_B.DataTypeConversion17), 3, 0, 84 },

  { (char_T *)(&canceshi1_B.Compare), 8, 0, 17 }
  ,

  { (char_T *)(&canceshi1_DWork.IntegerDelay_X[0]), 0, 0, 7 },

  { (char_T *)(&canceshi1_DWork.PCL731_IWORK[0]), 10, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  6U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&canceshi1_P.Constant1_Value), 0, 0, 194 },

  { (char_T *)(&canceshi1_P.Constant_Value_kv), 5, 0, 16 },

  { (char_T *)(&canceshi1_P.Constant_Value_pw), 3, 0, 6 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] canceshi1_dt.h */
