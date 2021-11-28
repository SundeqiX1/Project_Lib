/*
 * simpleCylinder1_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "simpleCylinder1.mdl".
 *
 * Model Version              : 1.34
 * Real-Time Workshop version : 6.5  (R2006b)  03-Aug-2006
 * C source code generated on : Thu Nov 26 15:47:16 2020
 */
#include "simpleCylinder1.h"
#include "rtw_capi.h"
#include "simpleCylinder1_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalLabel, portNumber, dataTypeIndex, dimIndex, fxpIndex, sampTimeIndex */
  { 0, 0, "Derivative",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "gain1",
    "", 0, 0, 0, 0, 0 },

  { 2, 0, "gain2",
    "", 0, 0, 0, 0, 1 },

  { 3, 0, "gain3",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "Integrator",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "Logical Operator",
    "", 0, 1, 0, 0, 0 },

  { 6, 0, "right7",
    "", 0, 0, 0, 0, 1 },

  { 7, 0, "Multiport Switch",
    "", 0, 0, 0, 0, 0 },

  { 8, 2, "Product",
    "", 0, 0, 0, 0, 0 },

  { 9, 2, "Product1",
    "", 0, 0, 0, 0, 0 },

  { 10, 0, "Product3",
    "", 0, 0, 0, 0, 0 },

  { 11, 0, "Product4",
    "", 0, 0, 0, 0, 0 },

  { 12, 0, "Product5",
    "", 0, 0, 0, 0, 0 },

  { 13, 0, "Product6",
    "", 0, 0, 0, 0, 0 },

  { 14, 0, "Saturation4",
    "", 0, 0, 0, 0, 0 },

  { 15, 0, "PCI-2",
    "", 0, 0, 1, 0, 1 },

  { 16, 0, "Signal Generator10",
    "", 0, 0, 0, 0, 0 },

  { 17, 0, "Signal Generator11",
    "", 0, 0, 0, 0, 0 },

  { 18, 0, "Signal Generator12",
    "", 0, 0, 0, 0, 0 },

  { 19, 0, "Signal Generator13",
    "", 0, 0, 0, 0, 0 },

  { 20, 0, "Signal Generator14",
    "", 0, 0, 0, 0, 0 },

  { 21, 0, "Signal Generator15",
    "", 0, 0, 0, 0, 0 },

  { 22, 0, "Signal Generator16",
    "", 0, 0, 0, 0, 0 },

  { 23, 0, "Signal Generator17",
    "", 0, 0, 0, 0, 0 },

  { 24, 0, "Signal Generator2",
    "", 0, 0, 0, 0, 0 },

  { 25, 0, "Signal Generator3",
    "", 0, 0, 0, 0, 0 },

  { 26, 0, "Signal Generator4",
    "", 0, 0, 0, 0, 0 },

  { 27, 0, "Signal Generator5",
    "", 0, 0, 0, 0, 0 },

  { 28, 0, "Signal Generator6",
    "", 0, 0, 0, 0, 0 },

  { 29, 0, "Signal Generator7",
    "", 0, 0, 0, 0, 0 },

  { 30, 0, "Signal Generator8",
    "", 0, 0, 0, 0, 0 },

  { 31, 0, "Signal Generator9",
    "", 0, 0, 0, 0, 0 },

  { 32, 0, "Add",
    "", 0, 0, 0, 0, 0 },

  { 33, 2, "Sum",
    "", 0, 0, 0, 0, 0 },

  { 34, 6, "Sum5",
    "", 0, 0, 0, 0, 0 },

  { 35, 0, "Sum6",
    "", 0, 0, 0, 0, 0 },

  { 36, 0, "Sum7",
    "", 0, 0, 0, 0, 0 },

  { 37, 0, "DataSentHost/Clock",
    "", 0, 0, 0, 0, 0 },

  { 38, 0, "DataSentHost/Data Type Conversion15",
    "", 0, 2, 2, 0, 0 },

  { 39, 0, "DataSentHost/Data Type Conversion8",
    "", 0, 0, 2, 0, 0 },

  { 40, 0, "DataSentHost/Encoded_data",
    "", 0, 0, 3, 0, 0 },

  { 41, 0, "DataSentHost/Gain",
    "", 0, 0, 2, 0, 0 },

  { 42, 0, "DataSentHost/Product",
    "", 0, 0, 4, 0, 0 },

  { 43, 0, "DataSentHost/Product1",
    "", 0, 0, 4, 0, 0 },

  { 44, 0, "DataSentHost/Pack1",
    "", 0, 3, 5, 0, 1 },

  { 45, 0, "DataSentHost/encoded data",
    "", 0, 0, 6, 0, 1 },

  { 46, 0, "DataSentHost/Sum2",
    "", 0, 0, 2, 0, 0 },

  { 47, 0, "Equal To Constant/Compare",
    "", 0, 3, 0, 0, 0 },

  { 48, 0, "Equal To Constant1/Compare",
    "", 0, 3, 0, 0, 0 },

  { 49, 0, "Manual Switch10/SwitchControl",
    "", 0, 0, 0, 0, 1 },

  { 50, 0, "Manual Switch3/SwitchControl",
    "", 0, 0, 0, 0, 0 },

  { 51, 7, "Nomal Motion Logic1/Control Logic/p1",
    "start", 0, 0, 0, 0, 1 },

  { 52, 7, "Nomal Motion Logic1/Control Logic/p2",
    "start_sts", 1, 0, 0, 0, 1 },

  { 53, 7, "Nomal Motion Logic1/Control Logic/p3",
    "ready_sts", 2, 0, 0, 0, 1 },

  { 54, 7, "Nomal Motion Logic1/Control Logic/p4",
    "ready", 3, 0, 0, 0, 1 },

  { 55, 0, "Nomal Motion Logic1/Data Type Conversion",
    "", 0, 0, 0, 0, 1 },

  { 56, 0, "Nomal Motion Logic1/Data Type Conversion1",
    "", 0, 0, 0, 0, 1 },

  { 57, 0, "Nomal Motion Logic1/Data Type Conversion2",
    "", 0, 0, 0, 0, 1 },

  { 58, 0, "Nomal Motion Logic1/Data Type Conversion3",
    "", 0, 0, 0, 0, 1 },

  { 59, 0, "Nomal Motion Logic1/Logical Operator2",
    "", 0, 1, 0, 0, 1 },

  { 60, 0, "Nomal Motion Logic1/OR1",
    "", 0, 1, 0, 0, 1 },

  { 61, 0, "Nomal Motion Logic1/fade_in_fade_out",
    "", 0, 0, 7, 0, 0 },

  { 62, 0, "Nomal Motion Logic1/Memory",
    "", 0, 0, 0, 0, 1 },

  { 63, 0, "Nomal Motion Logic1/Memory1",
    "", 0, 0, 0, 0, 1 },

  { 64, 0, "Nomal Motion Logic1/Ready Limiter",
    "", 0, 0, 8, 0, 0 },

  { 65, 0, "Nomal Motion Logic1/Start Limiter",
    "", 0, 0, 0, 0, 0 },

  { 66, 0, "Signal_generator/Data Type Conversion",
    "", 0, 1, 9, 0, 0 },

  { 67, 0, "Signal_generator/Gain",
    "", 0, 0, 0, 0, 1 },

  { 68, 0, "Signal_generator/Gain1",
    "", 0, 0, 0, 0, 0 },

  { 69, 0, "Signal_generator/Gain2",
    "", 0, 0, 0, 0, 0 },

  { 70, 0, "Signal_generator/Gain3",
    "", 0, 0, 0, 0, 0 },

  { 71, 0, "Signal_generator/Gain4",
    "", 0, 0, 0, 0, 0 },

  { 72, 0, "Signal_generator/Gain5",
    "", 0, 0, 0, 0, 1 },

  { 73, 0, "Signal_generator/Gain6",
    "", 0, 0, 0, 0, 1 },

  { 74, 0, "Signal_generator/random_gain",
    "", 0, 0, 0, 0, 0 },

  { 75, 0, "Signal_generator/AND",
    "", 0, 3, 0, 0, 0 },

  { 76, 0, "Signal_generator/Product1",
    "", 0, 0, 0, 0, 0 },

  { 77, 0, "Signal_generator/Product4",
    "", 0, 0, 0, 0, 0 },

  { 78, 0, "Signal_generator/Product5",
    "", 0, 0, 0, 0, 0 },

  { 79, 0, "Signal_generator/Product6",
    "", 0, 0, 0, 0, 0 },

  { 80, 0, "Signal_generator/Product9",
    "", 0, 0, 0, 0, 0 },

  { 81, 0, "Signal_generator/Selector7",
    "", 0, 0, 0, 0, 0 },

  { 82, 0, "Signal_generator/Sum2",
    "", 0, 0, 0, 0, 0 },

  { 83, 0, "Signal_generator/random",
    "", 0, 0, 0, 0, 1 },

  { 84, 0, "pos_acc_sel/Discrete inverse fit",
    "", 0, 0, 0, 0, 1 },

  { 85, 3, "pos_acc_sel/Multiport Switch",
    "", 0, 0, 0, 0, 0 },

  { 86, 1, "pos_acc_sel/Multiport Switch1",
    "", 0, 0, 0, 0, 0 },

  { 87, 2, "pos_acc_sel/Product",
    "", 0, 0, 0, 0, 0 },

  { 88, 0, "pos_acc_sel/Product1",
    "", 0, 0, 0, 0, 0 },

  { 89, 2, "pos_acc_sel/Sum1",
    "", 0, 0, 0, 0, 0 },

  { 90, 0, "zero_position_tune/Gain1",
    "", 0, 0, 0, 0, 0 },

  { 91, 0, "zero_position_tune/Gain2",
    "", 0, 0, 0, 0, 0 },

  { 92, 0, "zero_position_tune/Relational Operator",
    "", 0, 1, 0, 0, 0 },

  { 93, 6, "zero_position_tune/Saturation1",
    "", 0, 0, 0, 0, 0 },

  { 94, 13, "zero_position_tune/Saturation2",
    "", 0, 0, 0, 0, 0 },

  { 95, 0, "zero_position_tune/Sum11",
    "", 0, 0, 0, 0, 0 },

  { 96, 0, "zero_position_tune/Switch9",
    "", 0, 0, 0, 0, 0 },

  { 97, 0, "zero_position_tune/Unit Delay",
    "", 0, 0, 0, 0, 1 },

  { 98, 8, "Signal_generator/Enabled Subsystem1/In1",
    "", 0, 0, 0, 0, 0 },

  { 99, 9, "Signal_generator/Enabled Subsystem2/In1",
    "", 0, 0, 0, 0, 0 },

  { 100, 0, "Signal_generator/Subsystem/Assignment1",
    "", 0, 0, 9, 0, 1 },

  { 101, 0, "Signal_generator/Subsystem/Logical Operator1",
    "", 0, 1, 9, 0, 1 },

  { 102, 0, "Signal_generator/Subsystem/Logical Operator2",
    "", 0, 1, 9, 0, 1 },

  { 103, 0, "Signal_generator/Subsystem/Memory",
    "", 0, 0, 9, 0, 1 },

  { 104, 0, "Signal_generator/Subsystem/Rate Limiter",
    "", 0, 0, 9, 0, 0 },

  { 105, 0, "Signal_generator/Subsystem/Relational Operator",
    "", 0, 1, 0, 0, 1 },

  { 106, 0, "Signal_generator/Subsystem/Rounding Function1",
    "", 0, 0, 9, 0, 0 },

  { 107, 0, "Signal_generator/Subsystem/Subtract",
    "", 0, 0, 0, 0, 1 },

  { 108, 0, "Signal_generator/Subsystem/Sum of Elements",
    "", 0, 0, 0, 0, 1 },

  { 109, 0, "Signal_generator/Subsystem/Switch",
    "", 0, 0, 9, 0, 1 },

  { 110, 0, "Signal_generator/Subsystem/Width",
    "", 0, 0, 0, 0, 1 },

  { 111, 10, "Signal_generator/chirp_enable/Chirp_Gain",
    "", 0, 0, 0, 0, 1 },

  { 112, 10, "Signal_generator/chirp_enable/Multiport Switch",
    "", 0, 0, 0, 0, 1 },

  { 113, 0, "Signal_generator/random_filter/scale_gain",
    "", 0, 0, 0, 0, 0 },

  { 114, 0, "Signal_generator/random_filter/scale_gain1",
    "", 0, 0, 0, 0, 0 },

  { 115, 0, "Signal_generator/random_filter/scale_gain2",
    "", 0, 0, 0, 0, 0 },

  { 116, 0, "Signal_generator/random_filter/scale_gain3",
    "", 0, 0, 0, 0, 0 },

  { 117, 0, "Signal_generator/random_filter/scale_gain4",
    "", 0, 0, 0, 0, 0 },

  { 118, 0, "Signal_generator/random_filter/2-10",
    "", 0, 0, 0, 0, 0 },

  { 119, 0, "Signal_generator/random_filter/2-20",
    "", 0, 0, 0, 0, 0 },

  { 120, 0, "Signal_generator/random_filter/2-30",
    "", 0, 0, 0, 0, 0 },

  { 121, 0, "Signal_generator/random_filter/2-5",
    "", 0, 0, 0, 0, 0 },

  { 122, 0, "Signal_generator/random_filter/2-60",
    "", 0, 0, 0, 0, 0 },

  { 123, 11, "Signal_generator/sine/Abs",
    "", 0, 0, 0, 0, 0 },

  { 124, 11, "Signal_generator/sine/Clock",
    "", 0, 0, 0, 0, 0 },

  { 125, 11, "Signal_generator/sine/Gain1",
    "", 0, 0, 0, 0, 1 },

  { 126, 11, "Signal_generator/sine/Gain2",
    "", 0, 0, 0, 0, 1 },

  { 127, 11, "Signal_generator/sine/Logical Operator",
    "", 0, 1, 0, 0, 0 },

  { 128, 11, "Signal_generator/sine/Math Function",
    "", 0, 0, 0, 0, 0 },

  { 129, 11, "Signal_generator/sine/Math Function1",
    "", 0, 0, 0, 0, 1 },

  { 130, 11, "Signal_generator/sine/Memory",
    "", 0, 0, 0, 0, 1 },

  { 131, 11, "Signal_generator/sine/Product1",
    "", 0, 0, 0, 0, 0 },

  { 132, 11, "Signal_generator/sine/Product2",
    "", 0, 0, 0, 0, 0 },

  { 133, 11, "Signal_generator/sine/Product3",
    "", 0, 0, 0, 0, 0 },

  { 134, 11, "Signal_generator/sine/Relational Operator1",
    "", 0, 1, 0, 0, 0 },

  { 135, 11, "Signal_generator/sine/Relational Operator2",
    "", 0, 1, 0, 0, 1 },

  { 136, 11, "Signal_generator/sine/Sum1",
    "", 0, 0, 0, 0, 1 },

  { 137, 11, "Signal_generator/sine/Sum2",
    "", 0, 0, 0, 0, 0 },

  { 138, 11, "Signal_generator/sine/Sum3",
    "", 0, 0, 0, 0, 0 },

  { 139, 11, "Signal_generator/sine/Switch",
    "", 0, 0, 0, 0, 0 },

  { 140, 11, "Signal_generator/sine/Trigonometric Function",
    "", 0, 0, 0, 0, 0 },

  { 141, 12, "Signal_generator/square/Clock",
    "", 0, 0, 0, 0, 0 },

  { 142, 12, "Signal_generator/square/Square Gain",
    "", 0, 0, 0, 0, 1 },

  { 143, 12, "Signal_generator/square/Math Function",
    "", 0, 0, 0, 0, 1 },

  { 144, 12, "Signal_generator/square/Product2",
    "", 0, 0, 0, 0, 0 },

  { 145, 12, "Signal_generator/square/Product4",
    "", 0, 0, 0, 0, 0 },

  { 146, 12, "Signal_generator/square/Sign",
    "", 0, 0, 0, 0, 0 },

  { 147, 12, "Signal_generator/square/Sum2",
    "", 0, 0, 0, 0, 0 },

  { 148, 12, "Signal_generator/square/Trigonometric Function",
    "", 0, 0, 0, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 149, "Constant14",
    "Value", 0, 0, 0 },

  { 150, "Constant15",
    "Value", 0, 0, 0 },

  { 151, "Constant16",
    "Value", 0, 0, 0 },

  { 152, "Constant18",
    "Value", 0, 0, 0 },

  { 153, "Constant2",
    "Value", 0, 0, 0 },

  { 154, "a",
    "Value", 0, 0, 0 },

  { 155, "constant11",
    "Value", 0, 0, 0 },

  { 156, "constant12",
    "Value", 0, 0, 0 },

  { 157, "standby_position",
    "Value", 0, 0, 0 },

  { 158, "standby_position1",
    "Value", 0, 0, 0 },

  { 159, "standby_position3",
    "Value", 0, 0, 0 },

  { 160, "standby_position4",
    "Value", 0, 0, 0 },

  { 161, "gain1",
    "Gain", 0, 0, 0 },

  { 162, "gain2",
    "Gain", 0, 0, 0 },

  { 163, "gain3",
    "Gain", 0, 0, 0 },

  { 164, "Integrator",
    "InitialCondition", 0, 0, 0 },

  { 165, "right7",
    "InputValues", 0, 10, 0 },

  { 166, "right7",
    "OutputValues", 0, 10, 0 },

  { 167, "Saturation4",
    "UpperLimit", 0, 0, 0 },

  { 168, "Saturation4",
    "LowerLimit", 0, 0, 0 },

  { 169, "DA2",
    "P1", 0, 0, 0 },

  { 170, "DA2",
    "P2", 0, 0, 0 },

  { 171, "DA2",
    "P3", 0, 10, 0 },

  { 172, "PCI-2",
    "P1", 0, 10, 0 },

  { 173, "PCI-2",
    "P2", 0, 0, 0 },

  { 174, "Signal Generator10",
    "Amplitude", 0, 0, 0 },

  { 175, "Signal Generator10",
    "Frequency", 0, 0, 0 },

  { 176, "Signal Generator11",
    "Amplitude", 0, 0, 0 },

  { 177, "Signal Generator11",
    "Frequency", 0, 0, 0 },

  { 178, "Signal Generator12",
    "Amplitude", 0, 0, 0 },

  { 179, "Signal Generator12",
    "Frequency", 0, 0, 0 },

  { 180, "Signal Generator13",
    "Amplitude", 0, 0, 0 },

  { 181, "Signal Generator13",
    "Frequency", 0, 0, 0 },

  { 182, "Signal Generator14",
    "Amplitude", 0, 0, 0 },

  { 183, "Signal Generator14",
    "Frequency", 0, 0, 0 },

  { 184, "Signal Generator15",
    "Amplitude", 0, 0, 0 },

  { 185, "Signal Generator15",
    "Frequency", 0, 0, 0 },

  { 186, "Signal Generator16",
    "Amplitude", 0, 0, 0 },

  { 187, "Signal Generator16",
    "Frequency", 0, 0, 0 },

  { 188, "Signal Generator17",
    "Amplitude", 0, 0, 0 },

  { 189, "Signal Generator17",
    "Frequency", 0, 0, 0 },

  { 190, "Signal Generator2",
    "Amplitude", 0, 0, 0 },

  { 191, "Signal Generator2",
    "Frequency", 0, 0, 0 },

  { 192, "Signal Generator3",
    "Amplitude", 0, 0, 0 },

  { 193, "Signal Generator3",
    "Frequency", 0, 0, 0 },

  { 194, "Signal Generator4",
    "Amplitude", 0, 0, 0 },

  { 195, "Signal Generator4",
    "Frequency", 0, 0, 0 },

  { 196, "Signal Generator5",
    "Amplitude", 0, 0, 0 },

  { 197, "Signal Generator5",
    "Frequency", 0, 0, 0 },

  { 198, "Signal Generator6",
    "Amplitude", 0, 0, 0 },

  { 199, "Signal Generator6",
    "Frequency", 0, 0, 0 },

  { 200, "Signal Generator7",
    "Amplitude", 0, 0, 0 },

  { 201, "Signal Generator7",
    "Frequency", 0, 0, 0 },

  { 202, "Signal Generator8",
    "Amplitude", 0, 0, 0 },

  { 203, "Signal Generator8",
    "Frequency", 0, 0, 0 },

  { 204, "Signal Generator9",
    "Amplitude", 0, 0, 0 },

  { 205, "Signal Generator9",
    "Frequency", 0, 0, 0 },

  { 206, "DataSentHost/Constant1",
    "Value", 0, 0, 0 },

  { 207, "DataSentHost/Constant2",
    "Value", 0, 11, 0 },

  { 208, "DataSentHost/Constant3",
    "Value", 0, 0, 0 },

  { 209, "DataSentHost/Encoded_data",
    "Gain", 0, 0, 0 },

  { 210, "DataSentHost/Gain",
    "Gain", 0, 0, 0 },

  { 211, "Equal To Constant/Constant",
    "Value", 0, 0, 0 },

  { 212, "Equal To Constant1/Constant",
    "Value", 0, 0, 0 },

  { 213, "Manual Switch10/Constant",
    "Value", 3, 0, 0 },

  { 214, "Manual Switch10/SwitchControl",
    "Threshold", 3, 0, 0 },

  { 215, "Manual Switch3/Constant",
    "Value", 3, 0, 0 },

  { 216, "Manual Switch3/SwitchControl",
    "Threshold", 3, 0, 0 },

  { 217, "Nomal Motion Logic1/fade_in_fade_out",
    "InputValues", 0, 12, 0 },

  { 218, "Nomal Motion Logic1/fade_in_fade_out",
    "OutputValues", 0, 12, 0 },

  { 219, "Nomal Motion Logic1/Memory",
    "X0", 0, 0, 0 },

  { 220, "Nomal Motion Logic1/Memory1",
    "X0", 0, 0, 0 },

  { 221, "Nomal Motion Logic1/Ready Limiter",
    "RisingSlewLimit", 0, 0, 0 },

  { 222, "Nomal Motion Logic1/Ready Limiter",
    "FallingSlewLimit", 0, 0, 0 },

  { 223, "Nomal Motion Logic1/Start Limiter",
    "RisingSlewLimit", 0, 0, 0 },

  { 224, "Nomal Motion Logic1/Start Limiter",
    "FallingSlewLimit", 0, 0, 0 },

  { 225, "Signal_generator/Sin_bias",
    "Value", 0, 0, 0 },

  { 226, "Signal_generator/Sin_fuzhi",
    "Value", 0, 0, 0 },

  { 227, "Signal_generator/Sin_pinlv",
    "Value", 0, 0, 0 },

  { 228, "Signal_generator/Sin_xiangwei",
    "Value", 0, 0, 0 },

  { 229, "Signal_generator/Square_bias",
    "Value", 0, 0, 0 },

  { 230, "Signal_generator/Square_fuzhi",
    "Value", 0, 0, 0 },

  { 231, "Signal_generator/Square_zhouqi",
    "Value", 0, 0, 0 },

  { 232, "Signal_generator/rand_freq_sel",
    "Value", 0, 0, 0 },

  { 233, "Signal_generator/Gain",
    "Gain", 0, 0, 0 },

  { 234, "Signal_generator/Gain1",
    "Gain", 0, 0, 0 },

  { 235, "Signal_generator/Gain2",
    "Gain", 0, 0, 0 },

  { 236, "Signal_generator/Gain3",
    "Gain", 0, 0, 0 },

  { 237, "Signal_generator/Gain4",
    "Gain", 0, 0, 0 },

  { 238, "Signal_generator/Gain5",
    "Gain", 0, 0, 0 },

  { 239, "Signal_generator/Gain6",
    "Gain", 0, 0, 0 },

  { 240, "Signal_generator/random_gain",
    "Gain", 0, 0, 0 },

  { 241, "Signal_generator/random",
    "Minimum", 0, 0, 0 },

  { 242, "Signal_generator/random",
    "Maximum", 0, 0, 0 },

  { 243, "Signal_generator/random",
    "Seed", 0, 0, 0 },

  { 244, "pos_acc_sel/internal_sig_acc_gain",
    "Value", 0, 0, 0 },

  { 245, "pos_acc_sel/internal_sig_pos_gain",
    "Value", 0, 0, 0 },

  { 246, "pos_acc_sel/sel ",
    "Value", 0, 0, 0 },

  { 247, "pos_acc_sel/Discrete inverse fit",
    "A", 0, 4, 0 },

  { 248, "pos_acc_sel/Discrete inverse fit",
    "C", 0, 11, 0 },

  { 249, "pos_acc_sel/Discrete inverse fit",
    "D", 0, 0, 0 },

  { 250, "zero_position_tune/c",
    "Value", 1, 0, 0 },

  { 251, "zero_position_tune/Gain1",
    "Gain", 0, 0, 0 },

  { 252, "zero_position_tune/Gain2",
    "Gain", 0, 0, 0 },

  { 253, "zero_position_tune/Saturation1",
    "UpperLimit", 0, 0, 0 },

  { 254, "zero_position_tune/Saturation1",
    "LowerLimit", 0, 0, 0 },

  { 255, "zero_position_tune/Saturation2",
    "UpperLimit", 0, 0, 0 },

  { 256, "zero_position_tune/Saturation2",
    "LowerLimit", 0, 0, 0 },

  { 257, "zero_position_tune/Unit Delay",
    "X0", 0, 0, 0 },

  { 258, "Signal_generator/Subsystem/Constant1",
    "Value", 0, 0, 0 },

  { 259, "Signal_generator/Subsystem/Constant3",
    "Value", 0, 13, 0 },

  { 260, "Signal_generator/Subsystem/Constant4",
    "Value", 0, 0, 0 },

  { 261, "Signal_generator/Subsystem/Memory",
    "X0", 0, 0, 0 },

  { 262, "Signal_generator/Subsystem/Rate Limiter",
    "RisingSlewLimit", 0, 0, 0 },

  { 263, "Signal_generator/Subsystem/Rate Limiter",
    "FallingSlewLimit", 0, 0, 0 },

  { 264, "Signal_generator/chirp_enable/sweep_mode",
    "Value", 0, 0, 0 },

  { 265, "Signal_generator/chirp_enable/Chirp_Gain",
    "Gain", 0, 0, 0 },

  { 266, "Signal_generator/random_filter/scale_gain",
    "Gain", 0, 0, 0 },

  { 267, "Signal_generator/random_filter/scale_gain1",
    "Gain", 0, 0, 0 },

  { 268, "Signal_generator/random_filter/scale_gain2",
    "Gain", 0, 0, 0 },

  { 269, "Signal_generator/random_filter/scale_gain3",
    "Gain", 0, 0, 0 },

  { 270, "Signal_generator/random_filter/scale_gain4",
    "Gain", 0, 0, 0 },

  { 271, "Signal_generator/random_filter/2-10",
    "A", 0, 14, 0 },

  { 272, "Signal_generator/random_filter/2-10",
    "B", 0, 0, 0 },

  { 273, "Signal_generator/random_filter/2-10",
    "C", 0, 0, 0 },

  { 274, "Signal_generator/random_filter/2-10",
    "X0", 0, 0, 0 },

  { 275, "Signal_generator/random_filter/2-20",
    "A", 0, 14, 0 },

  { 276, "Signal_generator/random_filter/2-20",
    "B", 0, 0, 0 },

  { 277, "Signal_generator/random_filter/2-20",
    "C", 0, 0, 0 },

  { 278, "Signal_generator/random_filter/2-20",
    "X0", 0, 0, 0 },

  { 279, "Signal_generator/random_filter/2-30",
    "A", 0, 14, 0 },

  { 280, "Signal_generator/random_filter/2-30",
    "B", 0, 0, 0 },

  { 281, "Signal_generator/random_filter/2-30",
    "C", 0, 0, 0 },

  { 282, "Signal_generator/random_filter/2-30",
    "X0", 0, 0, 0 },

  { 283, "Signal_generator/random_filter/2-5",
    "A", 0, 14, 0 },

  { 284, "Signal_generator/random_filter/2-5",
    "B", 0, 0, 0 },

  { 285, "Signal_generator/random_filter/2-5",
    "C", 0, 0, 0 },

  { 286, "Signal_generator/random_filter/2-5",
    "X0", 0, 0, 0 },

  { 287, "Signal_generator/random_filter/2-60",
    "A", 0, 14, 0 },

  { 288, "Signal_generator/random_filter/2-60",
    "B", 0, 0, 0 },

  { 289, "Signal_generator/random_filter/2-60",
    "C", 0, 0, 0 },

  { 290, "Signal_generator/random_filter/2-60",
    "X0", 0, 0, 0 },

  { 291, "Signal_generator/sine/Constant2",
    "Value", 0, 0, 0 },

  { 292, "Signal_generator/sine/Constant3",
    "Value", 0, 0, 0 },

  { 293, "Signal_generator/sine/mod",
    "Value", 0, 0, 0 },

  { 294, "Signal_generator/sine/Gain1",
    "Gain", 0, 0, 0 },

  { 295, "Signal_generator/sine/Gain2",
    "Gain", 0, 0, 0 },

  { 296, "Signal_generator/sine/Memory",
    "X0", 0, 0, 0 },

  { 297, "Signal_generator/square/Square Gain",
    "Gain", 0, 0, 0 },

  {
    0, NULL, NULL, 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, NULL, 0, 0, 0 }
};

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &simpleCylinder1_B.Derivative,       /* 0: Signal */
  &simpleCylinder1_B.gain1,            /* 1: Signal */
  &simpleCylinder1_B.gain2,            /* 2: Signal */
  &simpleCylinder1_B.gain3,            /* 3: Signal */
  &simpleCylinder1_B.Integrator,       /* 4: Signal */
  &simpleCylinder1_B.LogicalOperator,  /* 5: Signal */
  &simpleCylinder1_B.right7,           /* 6: Signal */
  &simpleCylinder1_B.MultiportSwitch,  /* 7: Signal */
  &simpleCylinder1_B.Product_a,        /* 8: Signal */
  &simpleCylinder1_B.Product1_h,       /* 9: Signal */
  &simpleCylinder1_B.Product3,         /* 10: Signal */
  &simpleCylinder1_B.Product4_i,       /* 11: Signal */
  &simpleCylinder1_B.Product5_m,       /* 12: Signal */
  &simpleCylinder1_B.Product6_o,       /* 13: Signal */
  &simpleCylinder1_B.Saturation4,      /* 14: Signal */
  &simpleCylinder1_B.PCI2[0],          /* 15: Signal */
  &simpleCylinder1_B.SignalGenerator10,/* 16: Signal */
  &simpleCylinder1_B.SignalGenerator11,/* 17: Signal */
  &simpleCylinder1_B.SignalGenerator12,/* 18: Signal */
  &simpleCylinder1_B.SignalGenerator13,/* 19: Signal */
  &simpleCylinder1_B.SignalGenerator14,/* 20: Signal */
  &simpleCylinder1_B.SignalGenerator15,/* 21: Signal */
  &simpleCylinder1_B.SignalGenerator16,/* 22: Signal */
  &simpleCylinder1_B.SignalGenerator17,/* 23: Signal */
  &simpleCylinder1_B.SignalGenerator2, /* 24: Signal */
  &simpleCylinder1_B.SignalGenerator3, /* 25: Signal */
  &simpleCylinder1_B.SignalGenerator4, /* 26: Signal */
  &simpleCylinder1_B.SignalGenerator5, /* 27: Signal */
  &simpleCylinder1_B.SignalGenerator6, /* 28: Signal */
  &simpleCylinder1_B.SignalGenerator7, /* 29: Signal */
  &simpleCylinder1_B.SignalGenerator8, /* 30: Signal */
  &simpleCylinder1_B.SignalGenerator9, /* 31: Signal */
  &simpleCylinder1_B.Add,              /* 32: Signal */
  &simpleCylinder1_B.Sum,              /* 33: Signal */
  &simpleCylinder1_B.Sum5,             /* 34: Signal */
  &simpleCylinder1_B.Sum6,             /* 35: Signal */
  &simpleCylinder1_B.Sum7,             /* 36: Signal */
  &simpleCylinder1_B.Clock,            /* 37: Signal */
  &simpleCylinder1_B.DataTypeConversion15[0],/* 38: Signal */
  &simpleCylinder1_B.DataTypeConversion8[0],/* 39: Signal */
  &simpleCylinder1_B.Encoded_data[0],  /* 40: Signal */
  &simpleCylinder1_B.Gain_m[0],        /* 41: Signal */
  &simpleCylinder1_B.Product[0],       /* 42: Signal */
  &simpleCylinder1_B.Product1_i[0],    /* 43: Signal */
  &simpleCylinder1_B.Pack1[0],         /* 44: Signal */
  &simpleCylinder1_B.encodeddata[0],   /* 45: Signal */
  &simpleCylinder1_B.Sum2_p[0],        /* 46: Signal */
  &simpleCylinder1_B.Compare,          /* 47: Signal */
  &simpleCylinder1_B.Compare_l,        /* 48: Signal */
  &simpleCylinder1_B.SwitchControl,    /* 49: Signal */
  &simpleCylinder1_B.SwitchControl_l,  /* 50: Signal */
  &simpleCylinder1_B.start,            /* 51: Signal */
  &simpleCylinder1_B.start_sts,        /* 52: Signal */
  &simpleCylinder1_B.ready_sts,        /* 53: Signal */
  &simpleCylinder1_B.ready,            /* 54: Signal */
  &simpleCylinder1_B.DataTypeConversion,/* 55: Signal */
  &simpleCylinder1_B.DataTypeConversion1,/* 56: Signal */
  &simpleCylinder1_B.DataTypeConversion2,/* 57: Signal */
  &simpleCylinder1_B.DataTypeConversion3,/* 58: Signal */
  &simpleCylinder1_B.LogicalOperator2_f,/* 59: Signal */
  &simpleCylinder1_B.OR1,              /* 60: Signal */
  &simpleCylinder1_B.fade_in_fade_out[0],/* 61: Signal */
  &simpleCylinder1_B.Memory_l,         /* 62: Signal */
  &simpleCylinder1_B.Memory1,          /* 63: Signal */
  &simpleCylinder1_B.ReadyLimiter[0],  /* 64: Signal */
  &simpleCylinder1_B.StartLimiter,     /* 65: Signal */
  &simpleCylinder1_B.DataTypeConversion_c[0],/* 66: Signal */
  &simpleCylinder1_B.Gain,             /* 67: Signal */
  &simpleCylinder1_B.Gain1,            /* 68: Signal */
  &simpleCylinder1_B.Gain2,            /* 69: Signal */
  &simpleCylinder1_B.Gain3,            /* 70: Signal */
  &simpleCylinder1_B.Gain4,            /* 71: Signal */
  &simpleCylinder1_B.Gain5,            /* 72: Signal */
  &simpleCylinder1_B.Gain6,            /* 73: Signal */
  &simpleCylinder1_B.random_gain,      /* 74: Signal */
  &simpleCylinder1_B.AND,              /* 75: Signal */
  &simpleCylinder1_B.Product1,         /* 76: Signal */
  &simpleCylinder1_B.Product4,         /* 77: Signal */
  &simpleCylinder1_B.Product5,         /* 78: Signal */
  &simpleCylinder1_B.Product6,         /* 79: Signal */
  &simpleCylinder1_B.Product9,         /* 80: Signal */
  &simpleCylinder1_B.Selector7,        /* 81: Signal */
  &simpleCylinder1_B.Sum2,             /* 82: Signal */
  &simpleCylinder1_B.random,           /* 83: Signal */
  &simpleCylinder1_B.Discreteinversefit,/* 84: Signal */
  &simpleCylinder1_B.MultiportSwitch_e,/* 85: Signal */
  &simpleCylinder1_B.MultiportSwitch1, /* 86: Signal */
  &simpleCylinder1_B.Product_k,        /* 87: Signal */
  &simpleCylinder1_B.Product1_o,       /* 88: Signal */
  &simpleCylinder1_B.Sum1_c,           /* 89: Signal */
  &simpleCylinder1_B.Gain1_h,          /* 90: Signal */
  &simpleCylinder1_B.Gain2_j,          /* 91: Signal */
  &simpleCylinder1_B.RelationalOperator_n,/* 92: Signal */
  &simpleCylinder1_B.Saturation1,      /* 93: Signal */
  &simpleCylinder1_B.Saturation2,      /* 94: Signal */
  &simpleCylinder1_B.Sum11,            /* 95: Signal */
  &simpleCylinder1_B.Switch9,          /* 96: Signal */
  &simpleCylinder1_B.UnitDelay,        /* 97: Signal */
  &simpleCylinder1_B.EnabledSubsystem1.In1,/* 98: Signal */
  &simpleCylinder1_B.EnabledSubsystem2.In1,/* 99: Signal */
  &simpleCylinder1_B.Assignment1[0],   /* 100: Signal */
  &simpleCylinder1_B.LogicalOperator1[0],/* 101: Signal */
  &simpleCylinder1_B.LogicalOperator2[0],/* 102: Signal */
  &simpleCylinder1_B.Memory[0],        /* 103: Signal */
  &simpleCylinder1_B.RateLimiter[0],   /* 104: Signal */
  &simpleCylinder1_B.RelationalOperator,/* 105: Signal */
  &simpleCylinder1_B.RoundingFunction1[0],/* 106: Signal */
  &simpleCylinder1_B.Subtract,         /* 107: Signal */
  &simpleCylinder1_B.SumofElements,    /* 108: Signal */
  &simpleCylinder1_B.Switch[0],        /* 109: Signal */
  &simpleCylinder1_B.Width,            /* 110: Signal */
  &simpleCylinder1_B.Chirp_Gain,       /* 111: Signal */
  &simpleCylinder1_B.MultiportSwitch_p,/* 112: Signal */
  &simpleCylinder1_B.scale_gain,       /* 113: Signal */
  &simpleCylinder1_B.scale_gain1,      /* 114: Signal */
  &simpleCylinder1_B.scale_gain2,      /* 115: Signal */
  &simpleCylinder1_B.scale_gain3,      /* 116: Signal */
  &simpleCylinder1_B.scale_gain4,      /* 117: Signal */
  &simpleCylinder1_B.u0,               /* 118: Signal */
  &simpleCylinder1_B.u0_n,             /* 119: Signal */
  &simpleCylinder1_B.u0_o,             /* 120: Signal */
  &simpleCylinder1_B.u,                /* 121: Signal */
  &simpleCylinder1_B.u0_g,             /* 122: Signal */
  &simpleCylinder1_B.Abs,              /* 123: Signal */
  &simpleCylinder1_B.Clock_n,          /* 124: Signal */
  &simpleCylinder1_B.Gain1_f,          /* 125: Signal */
  &simpleCylinder1_B.Gain2_o,          /* 126: Signal */
  &simpleCylinder1_B.LogicalOperator_e,/* 127: Signal */
  &simpleCylinder1_B.MathFunction_f,   /* 128: Signal */
  &simpleCylinder1_B.MathFunction1,    /* 129: Signal */
  &simpleCylinder1_B.Memory_h,         /* 130: Signal */
  &simpleCylinder1_B.Product1_a,       /* 131: Signal */
  &simpleCylinder1_B.Product2_l,       /* 132: Signal */
  &simpleCylinder1_B.Product3_m,       /* 133: Signal */
  &simpleCylinder1_B.RelationalOperator1,/* 134: Signal */
  &simpleCylinder1_B.RelationalOperator2,/* 135: Signal */
  &simpleCylinder1_B.Sum1,             /* 136: Signal */
  &simpleCylinder1_B.Sum2_i,           /* 137: Signal */
  &simpleCylinder1_B.Sum3,             /* 138: Signal */
  &simpleCylinder1_B.Switch_d,         /* 139: Signal */
  &simpleCylinder1_B.TrigonometricFunction_b,/* 140: Signal */
  &simpleCylinder1_B.Clock_h,          /* 141: Signal */
  &simpleCylinder1_B.SquareGain,       /* 142: Signal */
  &simpleCylinder1_B.MathFunction,     /* 143: Signal */
  &simpleCylinder1_B.Product2,         /* 144: Signal */
  &simpleCylinder1_B.Product4_h,       /* 145: Signal */
  &simpleCylinder1_B.Sign,             /* 146: Signal */
  &simpleCylinder1_B.Sum2_pe,          /* 147: Signal */
  &simpleCylinder1_B.TrigonometricFunction,/* 148: Signal */
  &simpleCylinder1_P.Constant14_Value, /* 149: Block Parameter */
  &simpleCylinder1_P.Constant15_Value, /* 150: Block Parameter */
  &simpleCylinder1_P.Constant16_Value, /* 151: Block Parameter */
  &simpleCylinder1_P.Constant18_Value, /* 152: Block Parameter */
  &simpleCylinder1_P.Constant2_Value,  /* 153: Block Parameter */
  &simpleCylinder1_P.a_Value,          /* 154: Block Parameter */
  &simpleCylinder1_P.constant11_Value, /* 155: Block Parameter */
  &simpleCylinder1_P.constant12_Value, /* 156: Block Parameter */
  &simpleCylinder1_P.standby_position_Value,/* 157: Block Parameter */
  &simpleCylinder1_P.standby_position1_Value,/* 158: Block Parameter */
  &simpleCylinder1_P.standby_position3_Value,/* 159: Block Parameter */
  &simpleCylinder1_P.standby_position4_Value,/* 160: Block Parameter */
  &simpleCylinder1_P.gain1_Gain,       /* 161: Block Parameter */
  &simpleCylinder1_P.gain2_Gain,       /* 162: Block Parameter */
  &simpleCylinder1_P.gain3_Gain,       /* 163: Block Parameter */
  &simpleCylinder1_P.Integrator_IC,    /* 164: Block Parameter */
  &simpleCylinder1_P.right7_XData[0],  /* 165: Block Parameter */
  &simpleCylinder1_P.right7_YData[0],  /* 166: Block Parameter */
  &simpleCylinder1_P.Saturation4_UpperSat,/* 167: Block Parameter */
  &simpleCylinder1_P.Saturation4_LowerSat,/* 168: Block Parameter */
  &simpleCylinder1_P.DA2_P1,           /* 169: Block Parameter */
  &simpleCylinder1_P.DA2_P2,           /* 170: Block Parameter */
  &simpleCylinder1_P.DA2_P3[0],        /* 171: Block Parameter */
  &simpleCylinder1_P.PCI2_P1[0],       /* 172: Block Parameter */
  &simpleCylinder1_P.PCI2_P2,          /* 173: Block Parameter */
  &simpleCylinder1_P.SignalGenerator10_Amplitud,/* 174: Block Parameter */
  &simpleCylinder1_P.SignalGenerator10_Frequenc,/* 175: Block Parameter */
  &simpleCylinder1_P.SignalGenerator11_Amplitud,/* 176: Block Parameter */
  &simpleCylinder1_P.SignalGenerator11_Frequenc,/* 177: Block Parameter */
  &simpleCylinder1_P.SignalGenerator12_Amplitud,/* 178: Block Parameter */
  &simpleCylinder1_P.SignalGenerator12_Frequenc,/* 179: Block Parameter */
  &simpleCylinder1_P.SignalGenerator13_Amplitud,/* 180: Block Parameter */
  &simpleCylinder1_P.SignalGenerator13_Frequenc,/* 181: Block Parameter */
  &simpleCylinder1_P.SignalGenerator14_Amplitud,/* 182: Block Parameter */
  &simpleCylinder1_P.SignalGenerator14_Frequenc,/* 183: Block Parameter */
  &simpleCylinder1_P.SignalGenerator15_Amplitud,/* 184: Block Parameter */
  &simpleCylinder1_P.SignalGenerator15_Frequenc,/* 185: Block Parameter */
  &simpleCylinder1_P.SignalGenerator16_Amplitud,/* 186: Block Parameter */
  &simpleCylinder1_P.SignalGenerator16_Frequenc,/* 187: Block Parameter */
  &simpleCylinder1_P.SignalGenerator17_Amplitud,/* 188: Block Parameter */
  &simpleCylinder1_P.SignalGenerator17_Frequenc,/* 189: Block Parameter */
  &simpleCylinder1_P.SignalGenerator2_Amplitude,/* 190: Block Parameter */
  &simpleCylinder1_P.SignalGenerator2_Frequency,/* 191: Block Parameter */
  &simpleCylinder1_P.SignalGenerator3_Amplitude,/* 192: Block Parameter */
  &simpleCylinder1_P.SignalGenerator3_Frequency,/* 193: Block Parameter */
  &simpleCylinder1_P.SignalGenerator4_Amplitude,/* 194: Block Parameter */
  &simpleCylinder1_P.SignalGenerator4_Frequency,/* 195: Block Parameter */
  &simpleCylinder1_P.SignalGenerator5_Amplitude,/* 196: Block Parameter */
  &simpleCylinder1_P.SignalGenerator5_Frequency,/* 197: Block Parameter */
  &simpleCylinder1_P.SignalGenerator6_Amplitude,/* 198: Block Parameter */
  &simpleCylinder1_P.SignalGenerator6_Frequency,/* 199: Block Parameter */
  &simpleCylinder1_P.SignalGenerator7_Amplitude,/* 200: Block Parameter */
  &simpleCylinder1_P.SignalGenerator7_Frequency,/* 201: Block Parameter */
  &simpleCylinder1_P.SignalGenerator8_Amplitude,/* 202: Block Parameter */
  &simpleCylinder1_P.SignalGenerator8_Frequency,/* 203: Block Parameter */
  &simpleCylinder1_P.SignalGenerator9_Amplitude,/* 204: Block Parameter */
  &simpleCylinder1_P.SignalGenerator9_Frequency,/* 205: Block Parameter */
  &simpleCylinder1_P.Constant1_Value_j,/* 206: Block Parameter */
  &simpleCylinder1_P.Constant2_Value_n[0],/* 207: Block Parameter */
  &simpleCylinder1_P.Constant3_Value_b,/* 208: Block Parameter */
  &simpleCylinder1_P.Encoded_data_Gain,/* 209: Block Parameter */
  &simpleCylinder1_P.Gain_Gain_e,      /* 210: Block Parameter */
  &simpleCylinder1_P.Constant_Value,   /* 211: Block Parameter */
  &simpleCylinder1_P.Constant_Value_e, /* 212: Block Parameter */
  &simpleCylinder1_P.Constant_Value_m, /* 213: Block Parameter */
  &simpleCylinder1_P.SwitchControl_Threshold,/* 214: Block Parameter */
  &simpleCylinder1_P.Constant_Value_d, /* 215: Block Parameter */
  &simpleCylinder1_P.SwitchControl_Threshold_b,/* 216: Block Parameter */
  &simpleCylinder1_P.fade_in_fade_out_XData[0],/* 217: Block Parameter */
  &simpleCylinder1_P.fade_in_fade_out_YData[0],/* 218: Block Parameter */
  &simpleCylinder1_P.Memory_X0_m,      /* 219: Block Parameter */
  &simpleCylinder1_P.Memory1_X0,       /* 220: Block Parameter */
  &simpleCylinder1_P.ReadyLimiter_RisingLim,/* 221: Block Parameter */
  &simpleCylinder1_P.ReadyLimiter_FallingLim,/* 222: Block Parameter */
  &simpleCylinder1_P.StartLimiter_RisingLim,/* 223: Block Parameter */
  &simpleCylinder1_P.StartLimiter_FallingLim,/* 224: Block Parameter */
  &simpleCylinder1_P.Sin_bias_Value,   /* 225: Block Parameter */
  &simpleCylinder1_P.Sin_fuzhi_Value,  /* 226: Block Parameter */
  &simpleCylinder1_P.Sin_pinlv_Value,  /* 227: Block Parameter */
  &simpleCylinder1_P.Sin_xiangwei_Value,/* 228: Block Parameter */
  &simpleCylinder1_P.Square_bias_Value,/* 229: Block Parameter */
  &simpleCylinder1_P.Square_fuzhi_Value,/* 230: Block Parameter */
  &simpleCylinder1_P.Square_zhouqi_Value,/* 231: Block Parameter */
  &simpleCylinder1_P.rand_freq_sel_Value,/* 232: Block Parameter */
  &simpleCylinder1_P.Gain_Gain,        /* 233: Block Parameter */
  &simpleCylinder1_P.Gain1_Gain,       /* 234: Block Parameter */
  &simpleCylinder1_P.Gain2_Gain,       /* 235: Block Parameter */
  &simpleCylinder1_P.Gain3_Gain,       /* 236: Block Parameter */
  &simpleCylinder1_P.Gain4_Gain,       /* 237: Block Parameter */
  &simpleCylinder1_P.Gain5_Gain,       /* 238: Block Parameter */
  &simpleCylinder1_P.Gain6_Gain,       /* 239: Block Parameter */
  &simpleCylinder1_P.random_gain_Gain, /* 240: Block Parameter */
  &simpleCylinder1_P.random_Min,       /* 241: Block Parameter */
  &simpleCylinder1_P.random_Max,       /* 242: Block Parameter */
  &simpleCylinder1_P.random_Seed,      /* 243: Block Parameter */
  &simpleCylinder1_P.internal_sig_acc_gain_Valu,/* 244: Block Parameter */
  &simpleCylinder1_P.internal_sig_pos_gain_Valu,/* 245: Block Parameter */
  &simpleCylinder1_P.sel_Value,        /* 246: Block Parameter */
  &simpleCylinder1_P.Discreteinversefit_A[0],/* 247: Block Parameter */
  &simpleCylinder1_P.Discreteinversefit_C[0],/* 248: Block Parameter */
  &simpleCylinder1_P.Discreteinversefit_D,/* 249: Block Parameter */
  &simpleCylinder1_P.c_Value,          /* 250: Block Parameter */
  &simpleCylinder1_P.Gain1_Gain_p,     /* 251: Block Parameter */
  &simpleCylinder1_P.Gain2_Gain_b,     /* 252: Block Parameter */
  &simpleCylinder1_P.Saturation1_UpperSat,/* 253: Block Parameter */
  &simpleCylinder1_P.Saturation1_LowerSat,/* 254: Block Parameter */
  &simpleCylinder1_P.Saturation2_UpperSat,/* 255: Block Parameter */
  &simpleCylinder1_P.Saturation2_LowerSat,/* 256: Block Parameter */
  &simpleCylinder1_P.UnitDelay_X0,     /* 257: Block Parameter */
  &simpleCylinder1_P.Constant1_Value,  /* 258: Block Parameter */
  &simpleCylinder1_P.Constant3_Value[0],/* 259: Block Parameter */
  &simpleCylinder1_P.Constant4_Value,  /* 260: Block Parameter */
  &simpleCylinder1_P.Memory_X0,        /* 261: Block Parameter */
  &simpleCylinder1_P.RateLimiter_RisingLim,/* 262: Block Parameter */
  &simpleCylinder1_P.RateLimiter_FallingLim,/* 263: Block Parameter */
  &simpleCylinder1_P.sweep_mode_Value, /* 264: Block Parameter */
  &simpleCylinder1_P.Chirp_Gain_Gain,  /* 265: Block Parameter */
  &simpleCylinder1_P.scale_gain_Gain,  /* 266: Block Parameter */
  &simpleCylinder1_P.scale_gain1_Gain, /* 267: Block Parameter */
  &simpleCylinder1_P.scale_gain2_Gain, /* 268: Block Parameter */
  &simpleCylinder1_P.scale_gain3_Gain, /* 269: Block Parameter */
  &simpleCylinder1_P.scale_gain4_Gain, /* 270: Block Parameter */
  &simpleCylinder1_P.u0_A[0],          /* 271: Block Parameter */
  &simpleCylinder1_P.u0_B,             /* 272: Block Parameter */
  &simpleCylinder1_P.u0_C,             /* 273: Block Parameter */
  &simpleCylinder1_P.u0_X0,            /* 274: Block Parameter */
  &simpleCylinder1_P.u0_A_o[0],        /* 275: Block Parameter */
  &simpleCylinder1_P.u0_B_i,           /* 276: Block Parameter */
  &simpleCylinder1_P.u0_C_k,           /* 277: Block Parameter */
  &simpleCylinder1_P.u0_X0_d,          /* 278: Block Parameter */
  &simpleCylinder1_P.u0_A_e[0],        /* 279: Block Parameter */
  &simpleCylinder1_P.u0_B_d,           /* 280: Block Parameter */
  &simpleCylinder1_P.u0_C_b,           /* 281: Block Parameter */
  &simpleCylinder1_P.u0_X0_n,          /* 282: Block Parameter */
  &simpleCylinder1_P.u_A[0],           /* 283: Block Parameter */
  &simpleCylinder1_P.u_B,              /* 284: Block Parameter */
  &simpleCylinder1_P.u_C,              /* 285: Block Parameter */
  &simpleCylinder1_P.u_X0,             /* 286: Block Parameter */
  &simpleCylinder1_P.u0_A_g[0],        /* 287: Block Parameter */
  &simpleCylinder1_P.u0_B_m,           /* 288: Block Parameter */
  &simpleCylinder1_P.u0_C_i,           /* 289: Block Parameter */
  &simpleCylinder1_P.u0_X0_m,          /* 290: Block Parameter */
  &simpleCylinder1_P.Constant2_Value_h,/* 291: Block Parameter */
  &simpleCylinder1_P.Constant3_Value_c,/* 292: Block Parameter */
  &simpleCylinder1_P.mod_Value,        /* 293: Block Parameter */
  &simpleCylinder1_P.Gain1_Gain_i,     /* 294: Block Parameter */
  &simpleCylinder1_P.Gain2_Gain_m,     /* 295: Block Parameter */
  &simpleCylinder1_P.Memory_X0_j,      /* 296: Block Parameter */
  &simpleCylinder1_P.SquareGain_Gain   /* 297: Block Parameter */
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 }
};

/* Structure Element Map - use elemMapIndex to access this structure */
static const rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { NULL, 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2 },

  { rtwCAPI_VECTOR, 2, 2 },

  { rtwCAPI_VECTOR, 4, 2 },

  { rtwCAPI_VECTOR, 6, 2 },

  { rtwCAPI_VECTOR, 8, 2 },

  { rtwCAPI_VECTOR, 10, 2 },

  { rtwCAPI_VECTOR, 12, 2 },

  { rtwCAPI_VECTOR, 14, 2 },

  { rtwCAPI_VECTOR, 16, 2 },

  { rtwCAPI_VECTOR, 18, 2 },

  { rtwCAPI_VECTOR, 20, 2 },

  { rtwCAPI_VECTOR, 22, 2 },

  { rtwCAPI_VECTOR, 24, 2 },

  { rtwCAPI_VECTOR, 26, 2 },

  { rtwCAPI_VECTOR, 28, 2 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  16,                                  /* 2 */
  1,                                   /* 3 */
  36,                                  /* 4 */
  1,                                   /* 5 */
  10,                                  /* 6 */
  1,                                   /* 7 */
  6,                                   /* 8 */
  1,                                   /* 9 */
  72,                                  /* 10 */
  1,                                   /* 11 */
  9,                                   /* 12 */
  1,                                   /* 13 */
  3,                                   /* 14 */
  1,                                   /* 15 */
  2,                                   /* 16 */
  1,                                   /* 17 */
  5,                                   /* 18 */
  1,                                   /* 19 */
  1,                                   /* 20 */
  2,                                   /* 21 */
  1,                                   /* 22 */
  6,                                   /* 23 */
  1,                                   /* 24 */
  1001,                                /* 25 */
  1,                                   /* 26 */
  5,                                   /* 27 */
  31,                                  /* 28 */
  1                                    /* 29 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.001
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sampTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
    1, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 149 },

  { rtBlockParameters, 149,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void simpleCylinder1_InitializeDataMapInfo(rtModel_simpleCylinder1
  *simpleCylinder1_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(simpleCylinder1_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(simpleCylinder1_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(simpleCylinder1_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(simpleCylinder1_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(simpleCylinder1_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(simpleCylinder1_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(simpleCylinder1_rtM->DataMapInfo.mmi, 0);
}

/* EOF: simpleCylinder1_capi.c */
