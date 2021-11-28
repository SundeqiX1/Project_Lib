/*
 * simpleCylinder1_pt.c
 *
 * Real-Time Workshop code generation for Simulink model "simpleCylinder1.mdl".
 *
 * Model Version              : 1.34
 * Real-Time Workshop version : 6.5  (R2006b)  03-Aug-2006
 * C source code generated on : Thu Nov 26 15:47:16 2020
 */
#ifndef _PT_INFO_simpleCylinder1_
#define _PT_INFO_simpleCylinder1_
#include "pt_info.h"

/* Tunable block parameters */
static const BlockTuning rtBlockTuning[] = {
  /* blockName, parameterName,
   * class, nRows, nCols, nDims, dimsOffset, source, dataType, numInstances,
   * mapOffset
   */

  /* Constant */
  { "Constant14", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 0 }
  },

  /* Constant */
  { "Constant15", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 1 }
  },

  /* Constant */
  { "Constant16", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 2 }
  },

  /* Constant */
  { "Constant18", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 3 }
  },

  /* Constant */
  { "Constant2", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 4 }
  },

  /* Constant */
  { "a", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 5 }
  },

  /* Constant */
  { "constant11", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 6 }
  },

  /* Constant */
  { "constant12", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 7 }
  },

  /* Constant */
  { "standby_position", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 8 }
  },

  /* Constant */
  { "standby_position1", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 9 }
  },

  /* Constant */
  { "standby_position3", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 10 }
  },

  /* Constant */
  { "standby_position4", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 11 }
  },

  /* Gain */
  { "gain1", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 12 }
  },

  /* Gain */
  { "gain2", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 13 }
  },

  /* Gain */
  { "gain3", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 14 }
  },

  /* Integrator */
  { "Integrator", "InitialCondition",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 15 }
  },

  /* Lookup */
  { "right7", "InputValues",
    { rt_VECTOR, 1, 2, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 16 }
  },

  /* Lookup */
  { "right7", "OutputValues",
    { rt_VECTOR, 1, 2, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 17 }
  },

  /* Saturate */
  { "Saturation4", "UpperLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 18 }
  },

  /* Saturate */
  { "Saturation4", "LowerLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 19 }
  },

  /* S-Function */
  { "DA2", "P1",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 20 }
  },

  /* S-Function */
  { "DA2", "P2",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 21 }
  },

  /* S-Function */
  { "DA2", "P3",
    { rt_VECTOR, 1, 2, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 22 }
  },

  /* S-Function */
  { "PCI-2", "P1",
    { rt_VECTOR, 1, 2, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 23 }
  },

  /* S-Function */
  { "PCI-2", "P2",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 24 }
  },

  /* SignalGenerator */
  { "Signal Generator10", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 25 }
  },

  /* SignalGenerator */
  { "Signal Generator10", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 26 }
  },

  /* SignalGenerator */
  { "Signal Generator11", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 27 }
  },

  /* SignalGenerator */
  { "Signal Generator11", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 28 }
  },

  /* SignalGenerator */
  { "Signal Generator12", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 29 }
  },

  /* SignalGenerator */
  { "Signal Generator12", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 30 }
  },

  /* SignalGenerator */
  { "Signal Generator13", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 31 }
  },

  /* SignalGenerator */
  { "Signal Generator13", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 32 }
  },

  /* SignalGenerator */
  { "Signal Generator14", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 33 }
  },

  /* SignalGenerator */
  { "Signal Generator14", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 34 }
  },

  /* SignalGenerator */
  { "Signal Generator15", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 35 }
  },

  /* SignalGenerator */
  { "Signal Generator15", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 36 }
  },

  /* SignalGenerator */
  { "Signal Generator16", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 37 }
  },

  /* SignalGenerator */
  { "Signal Generator16", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 38 }
  },

  /* SignalGenerator */
  { "Signal Generator17", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 39 }
  },

  /* SignalGenerator */
  { "Signal Generator17", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 40 }
  },

  /* SignalGenerator */
  { "Signal Generator2", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 41 }
  },

  /* SignalGenerator */
  { "Signal Generator2", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 42 }
  },

  /* SignalGenerator */
  { "Signal Generator3", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 43 }
  },

  /* SignalGenerator */
  { "Signal Generator3", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 44 }
  },

  /* SignalGenerator */
  { "Signal Generator4", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 45 }
  },

  /* SignalGenerator */
  { "Signal Generator4", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 46 }
  },

  /* SignalGenerator */
  { "Signal Generator5", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 47 }
  },

  /* SignalGenerator */
  { "Signal Generator5", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 48 }
  },

  /* SignalGenerator */
  { "Signal Generator6", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 49 }
  },

  /* SignalGenerator */
  { "Signal Generator6", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 50 }
  },

  /* SignalGenerator */
  { "Signal Generator7", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 51 }
  },

  /* SignalGenerator */
  { "Signal Generator7", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 52 }
  },

  /* SignalGenerator */
  { "Signal Generator8", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 53 }
  },

  /* SignalGenerator */
  { "Signal Generator8", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 54 }
  },

  /* SignalGenerator */
  { "Signal Generator9", "Amplitude",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 55 }
  },

  /* SignalGenerator */
  { "Signal Generator9", "Frequency",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 56 }
  },

  /* Constant */
  { "DataSentHost/Constant1", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 57 }
  },

  /* Constant */
  { "DataSentHost/Constant2", "Value",
    { rt_VECTOR, 1, 6, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 58 }
  },

  /* Constant */
  { "DataSentHost/Constant3", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 59 }
  },

  /* Gain */
  { "DataSentHost/Encoded_data", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 60 }
  },

  /* Gain */
  { "DataSentHost/Gain", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 61 }
  },

  /* Constant */
  { "Equal To Constant/Constant", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 62 }
  },

  /* Constant */
  { "Equal To Constant1/Constant", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 63 }
  },

  /* Constant */
  { "Manual Switch10/Constant", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_UINT8, 1, 64 }
  },

  /* Switch */
  { "Manual Switch10/SwitchControl", "Threshold",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_UINT8, 1, 65 }
  },

  /* Constant */
  { "Manual Switch3/Constant", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_UINT8, 1, 66 }
  },

  /* Switch */
  { "Manual Switch3/SwitchControl", "Threshold",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_UINT8, 1, 67 }
  },

  /* Lookup */
  { "Nomal Motion Logic1/fade_in_fade_out", "InputValues",
    { rt_VECTOR, 1, 1001, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 68 }
  },

  /* Lookup */
  { "Nomal Motion Logic1/fade_in_fade_out", "OutputValues",
    { rt_VECTOR, 1, 1001, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 69 }
  },

  /* Memory */
  { "Nomal Motion Logic1/Memory", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 70 }
  },

  /* Memory */
  { "Nomal Motion Logic1/Memory1", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 71 }
  },

  /* RateLimiter */
  { "Nomal Motion Logic1/Ready Limiter", "RisingSlewLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 72 }
  },

  /* RateLimiter */
  { "Nomal Motion Logic1/Ready Limiter", "FallingSlewLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 73 }
  },

  /* RateLimiter */
  { "Nomal Motion Logic1/Start Limiter", "RisingSlewLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 74 }
  },

  /* RateLimiter */
  { "Nomal Motion Logic1/Start Limiter", "FallingSlewLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 75 }
  },

  /* Constant */
  { "Signal_generator/Sin_bias", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 76 }
  },

  /* Constant */
  { "Signal_generator/Sin_fuzhi", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 77 }
  },

  /* Constant */
  { "Signal_generator/Sin_pinlv", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 78 }
  },

  /* Constant */
  { "Signal_generator/Sin_xiangwei", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 79 }
  },

  /* Constant */
  { "Signal_generator/Square_bias", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 80 }
  },

  /* Constant */
  { "Signal_generator/Square_fuzhi", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 81 }
  },

  /* Constant */
  { "Signal_generator/Square_zhouqi", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 82 }
  },

  /* Constant */
  { "Signal_generator/rand_freq_sel", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 83 }
  },

  /* Gain */
  { "Signal_generator/Gain", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 84 }
  },

  /* Gain */
  { "Signal_generator/Gain1", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 85 }
  },

  /* Gain */
  { "Signal_generator/Gain2", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 86 }
  },

  /* Gain */
  { "Signal_generator/Gain3", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 87 }
  },

  /* Gain */
  { "Signal_generator/Gain4", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 88 }
  },

  /* Gain */
  { "Signal_generator/Gain5", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 89 }
  },

  /* Gain */
  { "Signal_generator/Gain6", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 90 }
  },

  /* Gain */
  { "Signal_generator/random_gain", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 91 }
  },

  /* UniformRandomNumber */
  { "Signal_generator/random", "Minimum",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 92 }
  },

  /* UniformRandomNumber */
  { "Signal_generator/random", "Maximum",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 93 }
  },

  /* UniformRandomNumber */
  { "Signal_generator/random", "Seed",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 94 }
  },

  /* Constant */
  { "pos_acc_sel/internal_sig_acc_gain", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 95 }
  },

  /* Constant */
  { "pos_acc_sel/internal_sig_pos_gain", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 96 }
  },

  /* Constant */
  { "pos_acc_sel/sel ", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 97 }
  },

  /* Gain */
  { "zero_position_tune/Gain1", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 98 }
  },

  /* Gain */
  { "zero_position_tune/Gain2", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 99 }
  },

  /* Saturate */
  { "zero_position_tune/Saturation1", "UpperLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 100 }
  },

  /* Saturate */
  { "zero_position_tune/Saturation1", "LowerLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 101 }
  },

  /* Saturate */
  { "zero_position_tune/Saturation2", "UpperLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 102 }
  },

  /* Saturate */
  { "zero_position_tune/Saturation2", "LowerLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 103 }
  },

  /* UnitDelay */
  { "zero_position_tune/Unit Delay", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 104 }
  },

  /* Constant */
  { "Signal_generator/Subsystem/Constant1", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 105 }
  },

  /* Constant */
  { "Signal_generator/Subsystem/Constant3", "Value",
    { rt_VECTOR, 1, 5, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 106 }
  },

  /* Constant */
  { "Signal_generator/Subsystem/Constant4", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 107 }
  },

  /* Memory */
  { "Signal_generator/Subsystem/Memory", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 108 }
  },

  /* RateLimiter */
  { "Signal_generator/Subsystem/Rate Limiter", "RisingSlewLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 109 }
  },

  /* RateLimiter */
  { "Signal_generator/Subsystem/Rate Limiter", "FallingSlewLimit",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 110 }
  },

  /* Constant */
  { "Signal_generator/chirp_enable/sweep_mode", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 111 }
  },

  /* Gain */
  { "Signal_generator/chirp_enable/Chirp_Gain", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 112 }
  },

  /* Gain */
  { "Signal_generator/random_filter/scale_gain", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 113 }
  },

  /* Gain */
  { "Signal_generator/random_filter/scale_gain1", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 114 }
  },

  /* Gain */
  { "Signal_generator/random_filter/scale_gain2", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 115 }
  },

  /* Gain */
  { "Signal_generator/random_filter/scale_gain3", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 116 }
  },

  /* Gain */
  { "Signal_generator/random_filter/scale_gain4", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 117 }
  },

  /* StateSpace */
  { "Signal_generator/random_filter/2-10", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 118 }
  },

  /* StateSpace */
  { "Signal_generator/random_filter/2-20", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 119 }
  },

  /* StateSpace */
  { "Signal_generator/random_filter/2-30", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 120 }
  },

  /* StateSpace */
  { "Signal_generator/random_filter/2-5", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 121 }
  },

  /* StateSpace */
  { "Signal_generator/random_filter/2-60", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 122 }
  },

  /* Constant */
  { "Signal_generator/sine/Constant2", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 123 }
  },

  /* Constant */
  { "Signal_generator/sine/Constant3", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 124 }
  },

  /* Constant */
  { "Signal_generator/sine/mod", "Value",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 125 }
  },

  /* Gain */
  { "Signal_generator/sine/Gain1", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 126 }
  },

  /* Gain */
  { "Signal_generator/sine/Gain2", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 127 }
  },

  /* Memory */
  { "Signal_generator/sine/Memory", "X0",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 128 }
  },

  /* Gain */
  { "Signal_generator/square/Square Gain", "Gain",
    { rt_SCALAR, 1, 1, 2, -1, rt_SL_PARAM, SS_DOUBLE, 1, 129 }
  },

  { NULL, NULL,
    { 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  }
};

/* Tunable variable parameters */
static const VariableTuning rtVariableTuning[] = {
  /* variableName,
   * class, nRows, nCols, nDims, dimsOffset, source, dataType, numInstances,
   * mapOffset
   */
  { NULL,
    { 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  }
};

static void * const rtParametersMap[] = {
  &simpleCylinder1_P.Constant14_Value, /* 0 */
  &simpleCylinder1_P.Constant15_Value, /* 1 */
  &simpleCylinder1_P.Constant16_Value, /* 2 */
  &simpleCylinder1_P.Constant18_Value, /* 3 */
  &simpleCylinder1_P.Constant2_Value,  /* 4 */
  &simpleCylinder1_P.a_Value,          /* 5 */
  &simpleCylinder1_P.constant11_Value, /* 6 */
  &simpleCylinder1_P.constant12_Value, /* 7 */
  &simpleCylinder1_P.standby_position_Value,/* 8 */
  &simpleCylinder1_P.standby_position1_Value,/* 9 */
  &simpleCylinder1_P.standby_position3_Value,/* 10 */
  &simpleCylinder1_P.standby_position4_Value,/* 11 */
  &simpleCylinder1_P.gain1_Gain,       /* 12 */
  &simpleCylinder1_P.gain2_Gain,       /* 13 */
  &simpleCylinder1_P.gain3_Gain,       /* 14 */
  &simpleCylinder1_P.Integrator_IC,    /* 15 */
  &simpleCylinder1_P.right7_XData[0],  /* 16 */
  &simpleCylinder1_P.right7_YData[0],  /* 17 */
  &simpleCylinder1_P.Saturation4_UpperSat,/* 18 */
  &simpleCylinder1_P.Saturation4_LowerSat,/* 19 */
  &simpleCylinder1_P.DA2_P1,           /* 20 */
  &simpleCylinder1_P.DA2_P2,           /* 21 */
  &simpleCylinder1_P.DA2_P3[0],        /* 22 */
  &simpleCylinder1_P.PCI2_P1[0],       /* 23 */
  &simpleCylinder1_P.PCI2_P2,          /* 24 */
  &simpleCylinder1_P.SignalGenerator10_Amplitud,/* 25 */
  &simpleCylinder1_P.SignalGenerator10_Frequenc,/* 26 */
  &simpleCylinder1_P.SignalGenerator11_Amplitud,/* 27 */
  &simpleCylinder1_P.SignalGenerator11_Frequenc,/* 28 */
  &simpleCylinder1_P.SignalGenerator12_Amplitud,/* 29 */
  &simpleCylinder1_P.SignalGenerator12_Frequenc,/* 30 */
  &simpleCylinder1_P.SignalGenerator13_Amplitud,/* 31 */
  &simpleCylinder1_P.SignalGenerator13_Frequenc,/* 32 */
  &simpleCylinder1_P.SignalGenerator14_Amplitud,/* 33 */
  &simpleCylinder1_P.SignalGenerator14_Frequenc,/* 34 */
  &simpleCylinder1_P.SignalGenerator15_Amplitud,/* 35 */
  &simpleCylinder1_P.SignalGenerator15_Frequenc,/* 36 */
  &simpleCylinder1_P.SignalGenerator16_Amplitud,/* 37 */
  &simpleCylinder1_P.SignalGenerator16_Frequenc,/* 38 */
  &simpleCylinder1_P.SignalGenerator17_Amplitud,/* 39 */
  &simpleCylinder1_P.SignalGenerator17_Frequenc,/* 40 */
  &simpleCylinder1_P.SignalGenerator2_Amplitude,/* 41 */
  &simpleCylinder1_P.SignalGenerator2_Frequency,/* 42 */
  &simpleCylinder1_P.SignalGenerator3_Amplitude,/* 43 */
  &simpleCylinder1_P.SignalGenerator3_Frequency,/* 44 */
  &simpleCylinder1_P.SignalGenerator4_Amplitude,/* 45 */
  &simpleCylinder1_P.SignalGenerator4_Frequency,/* 46 */
  &simpleCylinder1_P.SignalGenerator5_Amplitude,/* 47 */
  &simpleCylinder1_P.SignalGenerator5_Frequency,/* 48 */
  &simpleCylinder1_P.SignalGenerator6_Amplitude,/* 49 */
  &simpleCylinder1_P.SignalGenerator6_Frequency,/* 50 */
  &simpleCylinder1_P.SignalGenerator7_Amplitude,/* 51 */
  &simpleCylinder1_P.SignalGenerator7_Frequency,/* 52 */
  &simpleCylinder1_P.SignalGenerator8_Amplitude,/* 53 */
  &simpleCylinder1_P.SignalGenerator8_Frequency,/* 54 */
  &simpleCylinder1_P.SignalGenerator9_Amplitude,/* 55 */
  &simpleCylinder1_P.SignalGenerator9_Frequency,/* 56 */
  &simpleCylinder1_P.Constant1_Value_j,/* 57 */
  &simpleCylinder1_P.Constant2_Value_n[0],/* 58 */
  &simpleCylinder1_P.Constant3_Value_b,/* 59 */
  &simpleCylinder1_P.Encoded_data_Gain,/* 60 */
  &simpleCylinder1_P.Gain_Gain_e,      /* 61 */
  &simpleCylinder1_P.Constant_Value,   /* 62 */
  &simpleCylinder1_P.Constant_Value_e, /* 63 */
  &simpleCylinder1_P.Constant_Value_m, /* 64 */
  &simpleCylinder1_P.SwitchControl_Threshold,/* 65 */
  &simpleCylinder1_P.Constant_Value_d, /* 66 */
  &simpleCylinder1_P.SwitchControl_Threshold_b,/* 67 */
  &simpleCylinder1_P.fade_in_fade_out_XData[0],/* 68 */
  &simpleCylinder1_P.fade_in_fade_out_YData[0],/* 69 */
  &simpleCylinder1_P.Memory_X0_m,      /* 70 */
  &simpleCylinder1_P.Memory1_X0,       /* 71 */
  &simpleCylinder1_P.ReadyLimiter_RisingLim,/* 72 */
  &simpleCylinder1_P.ReadyLimiter_FallingLim,/* 73 */
  &simpleCylinder1_P.StartLimiter_RisingLim,/* 74 */
  &simpleCylinder1_P.StartLimiter_FallingLim,/* 75 */
  &simpleCylinder1_P.Sin_bias_Value,   /* 76 */
  &simpleCylinder1_P.Sin_fuzhi_Value,  /* 77 */
  &simpleCylinder1_P.Sin_pinlv_Value,  /* 78 */
  &simpleCylinder1_P.Sin_xiangwei_Value,/* 79 */
  &simpleCylinder1_P.Square_bias_Value,/* 80 */
  &simpleCylinder1_P.Square_fuzhi_Value,/* 81 */
  &simpleCylinder1_P.Square_zhouqi_Value,/* 82 */
  &simpleCylinder1_P.rand_freq_sel_Value,/* 83 */
  &simpleCylinder1_P.Gain_Gain,        /* 84 */
  &simpleCylinder1_P.Gain1_Gain,       /* 85 */
  &simpleCylinder1_P.Gain2_Gain,       /* 86 */
  &simpleCylinder1_P.Gain3_Gain,       /* 87 */
  &simpleCylinder1_P.Gain4_Gain,       /* 88 */
  &simpleCylinder1_P.Gain5_Gain,       /* 89 */
  &simpleCylinder1_P.Gain6_Gain,       /* 90 */
  &simpleCylinder1_P.random_gain_Gain, /* 91 */
  &simpleCylinder1_P.random_Min,       /* 92 */
  &simpleCylinder1_P.random_Max,       /* 93 */
  &simpleCylinder1_P.random_Seed,      /* 94 */
  &simpleCylinder1_P.internal_sig_acc_gain_Valu,/* 95 */
  &simpleCylinder1_P.internal_sig_pos_gain_Valu,/* 96 */
  &simpleCylinder1_P.sel_Value,        /* 97 */
  &simpleCylinder1_P.Gain1_Gain_p,     /* 98 */
  &simpleCylinder1_P.Gain2_Gain_b,     /* 99 */
  &simpleCylinder1_P.Saturation1_UpperSat,/* 100 */
  &simpleCylinder1_P.Saturation1_LowerSat,/* 101 */
  &simpleCylinder1_P.Saturation2_UpperSat,/* 102 */
  &simpleCylinder1_P.Saturation2_LowerSat,/* 103 */
  &simpleCylinder1_P.UnitDelay_X0,     /* 104 */
  &simpleCylinder1_P.Constant1_Value,  /* 105 */
  &simpleCylinder1_P.Constant3_Value[0],/* 106 */
  &simpleCylinder1_P.Constant4_Value,  /* 107 */
  &simpleCylinder1_P.Memory_X0,        /* 108 */
  &simpleCylinder1_P.RateLimiter_RisingLim,/* 109 */
  &simpleCylinder1_P.RateLimiter_FallingLim,/* 110 */
  &simpleCylinder1_P.sweep_mode_Value, /* 111 */
  &simpleCylinder1_P.Chirp_Gain_Gain,  /* 112 */
  &simpleCylinder1_P.scale_gain_Gain,  /* 113 */
  &simpleCylinder1_P.scale_gain1_Gain, /* 114 */
  &simpleCylinder1_P.scale_gain2_Gain, /* 115 */
  &simpleCylinder1_P.scale_gain3_Gain, /* 116 */
  &simpleCylinder1_P.scale_gain4_Gain, /* 117 */
  &simpleCylinder1_P.u0_X0,            /* 118 */
  &simpleCylinder1_P.u0_X0_d,          /* 119 */
  &simpleCylinder1_P.u0_X0_n,          /* 120 */
  &simpleCylinder1_P.u_X0,             /* 121 */
  &simpleCylinder1_P.u0_X0_m,          /* 122 */
  &simpleCylinder1_P.Constant2_Value_h,/* 123 */
  &simpleCylinder1_P.Constant3_Value_c,/* 124 */
  &simpleCylinder1_P.mod_Value,        /* 125 */
  &simpleCylinder1_P.Gain1_Gain_i,     /* 126 */
  &simpleCylinder1_P.Gain2_Gain_m,     /* 127 */
  &simpleCylinder1_P.Memory_X0_j,      /* 128 */
  &simpleCylinder1_P.SquareGain_Gain,  /* 129 */
};

static uint_T const rtDimensionsMap[] = {
  0                                    /* Dummy */
};

#endif                                 /* _PT_INFO_simpleCylinder1_ */
