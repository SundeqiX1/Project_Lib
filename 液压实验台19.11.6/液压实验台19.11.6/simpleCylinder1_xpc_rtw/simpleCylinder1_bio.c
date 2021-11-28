/*
 * simpleCylinder1_bio.c
 *
 * Real-Time Workshop code generation for Simulink model "simpleCylinder1.mdl".
 *
 * Model Version              : 1.34
 * Real-Time Workshop version : 6.5  (R2006b)  03-Aug-2006
 * C source code generated on : Thu Nov 26 15:47:16 2020
 */
#ifndef BLOCK_IO_SIGNALS
#define BLOCK_IO_SIGNALS
#include "bio_sig.h"

/* Block output signal information */
const BlockIOSignals rtBIOSignals[] = {
  /* blockName,
   * signalName, portNumber, signalWidth, signalAddr, dtName, dtSize
   */
  {
    "Derivative",
    "NULL", 0, 1, &simpleCylinder1_B.Derivative, "double", sizeof(real_T)
  },

  {
    "gain1",
    "NULL", 0, 1, &simpleCylinder1_B.gain1, "double", sizeof(real_T)
  },

  {
    "gain2",
    "NULL", 0, 1, &simpleCylinder1_B.gain2, "double", sizeof(real_T)
  },

  {
    "gain3",
    "NULL", 0, 1, &simpleCylinder1_B.gain3, "double", sizeof(real_T)
  },

  {
    "Integrator",
    "NULL", 0, 1, &simpleCylinder1_B.Integrator, "double", sizeof(real_T)
  },

  {
    "Logical Operator",
    "NULL", 0, 1, &simpleCylinder1_B.LogicalOperator, "unsigned char", sizeof
    (boolean_T)
  },

  {
    "right7",
    "NULL", 0, 1, &simpleCylinder1_B.right7, "double", sizeof(real_T)
  },

  {
    "Multiport Switch",
    "NULL", 0, 1, &simpleCylinder1_B.MultiportSwitch, "double", sizeof(real_T)
  },

  {
    "Product",
    "NULL", 0, 1, &simpleCylinder1_B.Product_a, "double", sizeof(real_T)
  },

  {
    "Product1",
    "NULL", 0, 1, &simpleCylinder1_B.Product1_h, "double", sizeof(real_T)
  },

  {
    "Product3",
    "NULL", 0, 1, &simpleCylinder1_B.Product3, "double", sizeof(real_T)
  },

  {
    "Product4",
    "NULL", 0, 1, &simpleCylinder1_B.Product4_i, "double", sizeof(real_T)
  },

  {
    "Product5",
    "NULL", 0, 1, &simpleCylinder1_B.Product5_m, "double", sizeof(real_T)
  },

  {
    "Product6",
    "NULL", 0, 1, &simpleCylinder1_B.Product6_o, "double", sizeof(real_T)
  },

  {
    "Saturation4",
    "NULL", 0, 1, &simpleCylinder1_B.Saturation4, "double", sizeof(real_T)
  },

  {
    "PCI-2",
    "NULL", 0, 16, &simpleCylinder1_B.PCI2[0], "double", sizeof(real_T)
  },

  {
    "Signal Generator10",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator10, "double", sizeof(real_T)
  },

  {
    "Signal Generator11",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator11, "double", sizeof(real_T)
  },

  {
    "Signal Generator12",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator12, "double", sizeof(real_T)
  },

  {
    "Signal Generator13",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator13, "double", sizeof(real_T)
  },

  {
    "Signal Generator14",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator14, "double", sizeof(real_T)
  },

  {
    "Signal Generator15",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator15, "double", sizeof(real_T)
  },

  {
    "Signal Generator16",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator16, "double", sizeof(real_T)
  },

  {
    "Signal Generator17",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator17, "double", sizeof(real_T)
  },

  {
    "Signal Generator2",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator2, "double", sizeof(real_T)
  },

  {
    "Signal Generator3",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator3, "double", sizeof(real_T)
  },

  {
    "Signal Generator4",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator4, "double", sizeof(real_T)
  },

  {
    "Signal Generator5",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator5, "double", sizeof(real_T)
  },

  {
    "Signal Generator6",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator6, "double", sizeof(real_T)
  },

  {
    "Signal Generator7",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator7, "double", sizeof(real_T)
  },

  {
    "Signal Generator8",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator8, "double", sizeof(real_T)
  },

  {
    "Signal Generator9",
    "NULL", 0, 1, &simpleCylinder1_B.SignalGenerator9, "double", sizeof(real_T)
  },

  {
    "Add",
    "NULL", 0, 1, &simpleCylinder1_B.Add, "double", sizeof(real_T)
  },

  {
    "Sum",
    "NULL", 0, 1, &simpleCylinder1_B.Sum, "double", sizeof(real_T)
  },

  {
    "Sum5",
    "NULL", 0, 1, &simpleCylinder1_B.Sum5, "double", sizeof(real_T)
  },

  {
    "Sum6",
    "NULL", 0, 1, &simpleCylinder1_B.Sum6, "double", sizeof(real_T)
  },

  {
    "Sum7",
    "NULL", 0, 1, &simpleCylinder1_B.Sum7, "double", sizeof(real_T)
  },

  {
    "DataSentHost/Clock",
    "NULL", 0, 1, &simpleCylinder1_B.Clock, "double", sizeof(real_T)
  },

  {
    "DataSentHost/Data Type Conversion15",
    "NULL", 0, 36, &simpleCylinder1_B.DataTypeConversion15[0], "unsigned short",
    sizeof(uint16_T)
  },

  {
    "DataSentHost/Data Type Conversion8",
    "NULL", 0, 36, &simpleCylinder1_B.DataTypeConversion8[0], "double", sizeof
    (real_T)
  },

  {
    "DataSentHost/Encoded_data",
    "NULL", 0, 10, &simpleCylinder1_B.Encoded_data[0], "double", sizeof(real_T)
  },

  {
    "DataSentHost/Gain",
    "NULL", 0, 36, &simpleCylinder1_B.Gain_m[0], "double", sizeof(real_T)
  },

  {
    "DataSentHost/Product",
    "NULL", 0, 6, &simpleCylinder1_B.Product[0], "double", sizeof(real_T)
  },

  {
    "DataSentHost/Product1",
    "NULL", 0, 6, &simpleCylinder1_B.Product1_i[0], "double", sizeof(real_T)
  },

  {
    "DataSentHost/Pack1",
    "NULL", 0, 72, &simpleCylinder1_B.Pack1[0], "unsigned char", sizeof(uint8_T)
  },

  {
    "DataSentHost/encoded data",
    "NULL", 0, 9, &simpleCylinder1_B.encodeddata[0], "double", sizeof(real_T)
  },

  {
    "DataSentHost/Sum2",
    "NULL", 0, 36, &simpleCylinder1_B.Sum2_p[0], "double", sizeof(real_T)
  },

  {
    "Equal To Constant/Compare",
    "NULL", 0, 1, &simpleCylinder1_B.Compare, "unsigned char", sizeof(uint8_T)
  },

  {
    "Equal To Constant1/Compare",
    "NULL", 0, 1, &simpleCylinder1_B.Compare_l, "unsigned char", sizeof(uint8_T)
  },

  {
    "Manual Switch10/SwitchControl",
    "NULL", 0, 1, &simpleCylinder1_B.SwitchControl, "double", sizeof(real_T)
  },

  {
    "Manual Switch3/SwitchControl",
    "NULL", 0, 1, &simpleCylinder1_B.SwitchControl_l, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Control Logic/p1",
    "NULL", 0, 1, &simpleCylinder1_B.start, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Control Logic/p2",
    "NULL", 1, 1, &simpleCylinder1_B.start_sts, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Control Logic/p3",
    "NULL", 2, 1, &simpleCylinder1_B.ready_sts, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Control Logic/p4",
    "NULL", 3, 1, &simpleCylinder1_B.ready, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Data Type Conversion",
    "NULL", 0, 1, &simpleCylinder1_B.DataTypeConversion, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Data Type Conversion1",
    "NULL", 0, 1, &simpleCylinder1_B.DataTypeConversion1, "double", sizeof
    (real_T)
  },

  {
    "Nomal Motion Logic1/Data Type Conversion2",
    "NULL", 0, 1, &simpleCylinder1_B.DataTypeConversion2, "double", sizeof
    (real_T)
  },

  {
    "Nomal Motion Logic1/Data Type Conversion3",
    "NULL", 0, 1, &simpleCylinder1_B.DataTypeConversion3, "double", sizeof
    (real_T)
  },

  {
    "Nomal Motion Logic1/Logical Operator2",
    "NULL", 0, 1, &simpleCylinder1_B.LogicalOperator2_f, "unsigned char", sizeof
    (boolean_T)
  },

  {
    "Nomal Motion Logic1/OR1",
    "NULL", 0, 1, &simpleCylinder1_B.OR1, "unsigned char", sizeof(boolean_T)
  },

  {
    "Nomal Motion Logic1/fade_in_fade_out",
    "NULL", 0, 3, &simpleCylinder1_B.fade_in_fade_out[0], "double", sizeof
    (real_T)
  },

  {
    "Nomal Motion Logic1/Memory",
    "NULL", 0, 1, &simpleCylinder1_B.Memory_l, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Memory1",
    "NULL", 0, 1, &simpleCylinder1_B.Memory1, "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Ready Limiter",
    "NULL", 0, 2, &simpleCylinder1_B.ReadyLimiter[0], "double", sizeof(real_T)
  },

  {
    "Nomal Motion Logic1/Start Limiter",
    "NULL", 0, 1, &simpleCylinder1_B.StartLimiter, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Data Type Conversion",
    "NULL", 0, 5, &simpleCylinder1_B.DataTypeConversion_c[0], "unsigned char",
    sizeof(boolean_T)
  },

  {
    "Signal_generator/Gain",
    "NULL", 0, 1, &simpleCylinder1_B.Gain, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Gain1",
    "NULL", 0, 1, &simpleCylinder1_B.Gain1, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Gain2",
    "NULL", 0, 1, &simpleCylinder1_B.Gain2, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Gain3",
    "NULL", 0, 1, &simpleCylinder1_B.Gain3, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Gain4",
    "NULL", 0, 1, &simpleCylinder1_B.Gain4, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Gain5",
    "NULL", 0, 1, &simpleCylinder1_B.Gain5, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Gain6",
    "NULL", 0, 1, &simpleCylinder1_B.Gain6, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_gain",
    "NULL", 0, 1, &simpleCylinder1_B.random_gain, "double", sizeof(real_T)
  },

  {
    "Signal_generator/AND",
    "NULL", 0, 1, &simpleCylinder1_B.AND, "unsigned char", sizeof(uint8_T)
  },

  {
    "Signal_generator/Product1",
    "NULL", 0, 1, &simpleCylinder1_B.Product1, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Product4",
    "NULL", 0, 1, &simpleCylinder1_B.Product4, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Product5",
    "NULL", 0, 1, &simpleCylinder1_B.Product5, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Product6",
    "NULL", 0, 1, &simpleCylinder1_B.Product6, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Product9",
    "NULL", 0, 1, &simpleCylinder1_B.Product9, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Selector7",
    "NULL", 0, 1, &simpleCylinder1_B.Selector7, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Sum2",
    "NULL", 0, 1, &simpleCylinder1_B.Sum2, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random",
    "NULL", 0, 1, &simpleCylinder1_B.random, "double", sizeof(real_T)
  },

  {
    "pos_acc_sel/Discrete inverse fit",
    "NULL", 0, 1, &simpleCylinder1_B.Discreteinversefit, "double", sizeof(real_T)
  },

  {
    "pos_acc_sel/Multiport Switch",
    "NULL", 0, 1, &simpleCylinder1_B.MultiportSwitch_e, "double", sizeof(real_T)
  },

  {
    "pos_acc_sel/Multiport Switch1",
    "NULL", 0, 1, &simpleCylinder1_B.MultiportSwitch1, "double", sizeof(real_T)
  },

  {
    "pos_acc_sel/Product",
    "NULL", 0, 1, &simpleCylinder1_B.Product_k, "double", sizeof(real_T)
  },

  {
    "pos_acc_sel/Product1",
    "NULL", 0, 1, &simpleCylinder1_B.Product1_o, "double", sizeof(real_T)
  },

  {
    "pos_acc_sel/Sum1",
    "NULL", 0, 1, &simpleCylinder1_B.Sum1_c, "double", sizeof(real_T)
  },

  {
    "zero_position_tune/Gain1",
    "NULL", 0, 1, &simpleCylinder1_B.Gain1_h, "double", sizeof(real_T)
  },

  {
    "zero_position_tune/Gain2",
    "NULL", 0, 1, &simpleCylinder1_B.Gain2_j, "double", sizeof(real_T)
  },

  {
    "zero_position_tune/Relational Operator",
    "NULL", 0, 1, &simpleCylinder1_B.RelationalOperator_n, "unsigned char",
    sizeof(boolean_T)
  },

  {
    "zero_position_tune/Saturation1",
    "NULL", 0, 1, &simpleCylinder1_B.Saturation1, "double", sizeof(real_T)
  },

  {
    "zero_position_tune/Saturation2",
    "NULL", 0, 1, &simpleCylinder1_B.Saturation2, "double", sizeof(real_T)
  },

  {
    "zero_position_tune/Sum11",
    "NULL", 0, 1, &simpleCylinder1_B.Sum11, "double", sizeof(real_T)
  },

  {
    "zero_position_tune/Switch9",
    "NULL", 0, 1, &simpleCylinder1_B.Switch9, "double", sizeof(real_T)
  },

  {
    "zero_position_tune/Unit Delay",
    "NULL", 0, 1, &simpleCylinder1_B.UnitDelay, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Enabled Subsystem1/In1",
    "NULL", 0, 1, &simpleCylinder1_B.EnabledSubsystem1.In1, "double", sizeof
    (real_T)
  },

  {
    "Signal_generator/Enabled Subsystem2/In1",
    "NULL", 0, 1, &simpleCylinder1_B.EnabledSubsystem2.In1, "double", sizeof
    (real_T)
  },

  {
    "Signal_generator/Subsystem/Assignment1",
    "NULL", 0, 5, &simpleCylinder1_B.Assignment1[0], "double", sizeof(real_T)
  },

  {
    "Signal_generator/Subsystem/Logical Operator1",
    "NULL", 0, 5, &simpleCylinder1_B.LogicalOperator1[0], "unsigned char",
    sizeof(boolean_T)
  },

  {
    "Signal_generator/Subsystem/Logical Operator2",
    "NULL", 0, 5, &simpleCylinder1_B.LogicalOperator2[0], "unsigned char",
    sizeof(boolean_T)
  },

  {
    "Signal_generator/Subsystem/Memory",
    "NULL", 0, 5, &simpleCylinder1_B.Memory[0], "double", sizeof(real_T)
  },

  {
    "Signal_generator/Subsystem/Rate Limiter",
    "NULL", 0, 5, &simpleCylinder1_B.RateLimiter[0], "double", sizeof(real_T)
  },

  {
    "Signal_generator/Subsystem/Relational Operator",
    "NULL", 0, 1, &simpleCylinder1_B.RelationalOperator, "unsigned char", sizeof
    (boolean_T)
  },

  {
    "Signal_generator/Subsystem/Rounding Function1",
    "NULL", 0, 5, &simpleCylinder1_B.RoundingFunction1[0], "double", sizeof
    (real_T)
  },

  {
    "Signal_generator/Subsystem/Subtract",
    "NULL", 0, 1, &simpleCylinder1_B.Subtract, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Subsystem/Sum of Elements",
    "NULL", 0, 1, &simpleCylinder1_B.SumofElements, "double", sizeof(real_T)
  },

  {
    "Signal_generator/Subsystem/Switch",
    "NULL", 0, 5, &simpleCylinder1_B.Switch[0], "double", sizeof(real_T)
  },

  {
    "Signal_generator/Subsystem/Width",
    "NULL", 0, 1, &simpleCylinder1_B.Width, "double", sizeof(real_T)
  },

  {
    "Signal_generator/chirp_enable/Chirp_Gain",
    "NULL", 0, 1, &simpleCylinder1_B.Chirp_Gain, "double", sizeof(real_T)
  },

  {
    "Signal_generator/chirp_enable/Multiport Switch",
    "NULL", 0, 1, &simpleCylinder1_B.MultiportSwitch_p, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/scale_gain",
    "NULL", 0, 1, &simpleCylinder1_B.scale_gain, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/scale_gain1",
    "NULL", 0, 1, &simpleCylinder1_B.scale_gain1, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/scale_gain2",
    "NULL", 0, 1, &simpleCylinder1_B.scale_gain2, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/scale_gain3",
    "NULL", 0, 1, &simpleCylinder1_B.scale_gain3, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/scale_gain4",
    "NULL", 0, 1, &simpleCylinder1_B.scale_gain4, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/2-10",
    "NULL", 0, 1, &simpleCylinder1_B.u0, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/2-20",
    "NULL", 0, 1, &simpleCylinder1_B.u0_n, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/2-30",
    "NULL", 0, 1, &simpleCylinder1_B.u0_o, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/2-5",
    "NULL", 0, 1, &simpleCylinder1_B.u, "double", sizeof(real_T)
  },

  {
    "Signal_generator/random_filter/2-60",
    "NULL", 0, 1, &simpleCylinder1_B.u0_g, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Abs",
    "NULL", 0, 1, &simpleCylinder1_B.Abs, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Clock",
    "NULL", 0, 1, &simpleCylinder1_B.Clock_n, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Gain1",
    "NULL", 0, 1, &simpleCylinder1_B.Gain1_f, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Gain2",
    "NULL", 0, 1, &simpleCylinder1_B.Gain2_o, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Logical Operator",
    "NULL", 0, 1, &simpleCylinder1_B.LogicalOperator_e, "unsigned char", sizeof
    (boolean_T)
  },

  {
    "Signal_generator/sine/Math Function",
    "NULL", 0, 1, &simpleCylinder1_B.MathFunction_f, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Math Function1",
    "NULL", 0, 1, &simpleCylinder1_B.MathFunction1, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Memory",
    "NULL", 0, 1, &simpleCylinder1_B.Memory_h, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Product1",
    "NULL", 0, 1, &simpleCylinder1_B.Product1_a, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Product2",
    "NULL", 0, 1, &simpleCylinder1_B.Product2_l, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Product3",
    "NULL", 0, 1, &simpleCylinder1_B.Product3_m, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Relational Operator1",
    "NULL", 0, 1, &simpleCylinder1_B.RelationalOperator1, "unsigned char",
    sizeof(boolean_T)
  },

  {
    "Signal_generator/sine/Relational Operator2",
    "NULL", 0, 1, &simpleCylinder1_B.RelationalOperator2, "unsigned char",
    sizeof(boolean_T)
  },

  {
    "Signal_generator/sine/Sum1",
    "NULL", 0, 1, &simpleCylinder1_B.Sum1, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Sum2",
    "NULL", 0, 1, &simpleCylinder1_B.Sum2_i, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Sum3",
    "NULL", 0, 1, &simpleCylinder1_B.Sum3, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Switch",
    "NULL", 0, 1, &simpleCylinder1_B.Switch_d, "double", sizeof(real_T)
  },

  {
    "Signal_generator/sine/Trigonometric Function",
    "NULL", 0, 1, &simpleCylinder1_B.TrigonometricFunction_b, "double", sizeof
    (real_T)
  },

  {
    "Signal_generator/square/Clock",
    "NULL", 0, 1, &simpleCylinder1_B.Clock_h, "double", sizeof(real_T)
  },

  {
    "Signal_generator/square/Square Gain",
    "NULL", 0, 1, &simpleCylinder1_B.SquareGain, "double", sizeof(real_T)
  },

  {
    "Signal_generator/square/Math Function",
    "NULL", 0, 1, &simpleCylinder1_B.MathFunction, "double", sizeof(real_T)
  },

  {
    "Signal_generator/square/Product2",
    "NULL", 0, 1, &simpleCylinder1_B.Product2, "double", sizeof(real_T)
  },

  {
    "Signal_generator/square/Product4",
    "NULL", 0, 1, &simpleCylinder1_B.Product4_h, "double", sizeof(real_T)
  },

  {
    "Signal_generator/square/Sign",
    "NULL", 0, 1, &simpleCylinder1_B.Sign, "double", sizeof(real_T)
  },

  {
    "Signal_generator/square/Sum2",
    "NULL", 0, 1, &simpleCylinder1_B.Sum2_pe, "double", sizeof(real_T)
  },

  {
    "Signal_generator/square/Trigonometric Function",
    "NULL", 0, 1, &simpleCylinder1_B.TrigonometricFunction, "double", sizeof
    (real_T)
  },

  {
    NULL, NULL, 0, 0, 0, NULL, 0
  }
};

#endif                                 /* BLOCK_IO_SIGNALS */
