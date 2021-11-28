/*
 * simpleCylinder1_dt.h
 *
 * Real-Time Workshop code generation for Simulink model "simpleCylinder1.mdl".
 *
 * Model Version              : 1.34
 * Real-Time Workshop version : 6.5  (R2006b)  03-Aug-2006
 * C source code generated on : Thu Nov 26 15:47:16 2020
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
  2*sizeof(uint32_T),
  sizeof(CSc1_simpleCylinder1_ChartStruc)
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
  "timer_uint32_pair_T",
  "CSc1_simpleCylinder1_ChartStruc"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&simpleCylinder1_B.PCI2[0]), 0, 0, 306 },

  { (char_T *)(&simpleCylinder1_B.DataTypeConversion15[0]), 5, 0, 36 },

  { (char_T *)(&simpleCylinder1_B.AND), 3, 0, 76 },

  { (char_T *)(&simpleCylinder1_B.LogicalOperator1[0]), 8, 0, 27 },

  { (char_T *)(&simpleCylinder1_B.EnabledSubsystem2.In1), 0, 0, 1 },

  { (char_T *)(&simpleCylinder1_B.EnabledSubsystem1.In1), 0, 0, 1 },

  { (char_T *)(&simpleCylinder1_DWork.Discreteinversefit_DSTATE[0]), 0, 0, 26 },

  { (char_T *)(&simpleCylinder1_DWork.Derivative_RWORK.TimeStampA), 0, 0, 2 },

  { (char_T *)(&simpleCylinder1_DWork.Scope1_PWORK.LoggedData), 11, 0, 4 },

  { (char_T *)(&simpleCylinder1_DWork.Selector7_DWORK1), 6, 0, 1 },

  { (char_T *)(&simpleCylinder1_DWork.PCI2_IWORK[0]), 10, 0, 6 },

  { (char_T *)(&simpleCylinder1_DWork.sine_MODE), 6, 0, 3 },

  { (char_T *)(&simpleCylinder1_DWork.sine_SubsysRanBC), 2, 0, 3 },

  { (char_T *)(&simpleCylinder1_DWork.EnabledSubsystem2.EnabledSubsystem1_MODE),
    6, 0, 1 },

  { (char_T *)
    (&simpleCylinder1_DWork.EnabledSubsystem2.EnabledSubsystem1_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&simpleCylinder1_DWork.EnabledSubsystem1.EnabledSubsystem1_MODE),
    6, 0, 1 },

  { (char_T *)
    (&simpleCylinder1_DWork.EnabledSubsystem1.EnabledSubsystem1_SubsysRanBC), 2,
    0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  17U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&simpleCylinder1_P.Constant18_Value), 0, 0, 2327 },

  { (char_T *)(&simpleCylinder1_P.Constant_Value_m), 3, 0, 4 },

  { (char_T *)(&simpleCylinder1_P.c_Value), 8, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] simpleCylinder1_dt.h */
