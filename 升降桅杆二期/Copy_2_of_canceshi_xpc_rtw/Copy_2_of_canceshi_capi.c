/*
 * Copy_2_of_canceshi_capi.c
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

#include "Copy_2_of_canceshi.h"
#include "rtw_capi.h"
#include "Copy_2_of_canceshi_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Data Type Conversion",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "Data Type Conversion1",
    "", 0, 1, 1, 0, 0 },

  { 2, 0, "Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 3, 0, "Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 6, 0, "Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 7, 0, "Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 8, 0, "Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 9, 0, "Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 10, 0, "Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 11, 0, "Data Type Conversion19",
    "", 0, 0, 0, 0, 0 },

  { 12, 0, "Data Type Conversion2",
    "", 0, 1, 2, 0, 0 },

  { 13, 0, "Data Type Conversion3",
    "", 0, 1, 2, 0, 0 },

  { 14, 0, "Data Type Conversion4",
    "", 0, 1, 1, 0, 0 },

  { 15, 0, "Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 16, 0, "Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 17, 0, "Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 18, 0, "Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 19, 0, "Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 20, 0, "sifufa",
    "", 0, 1, 0, 0, 0 },

  { 21, 0, "yyy",
    "", 0, 1, 0, 0, 0 },

  { 22, 0, "right7",
    "", 0, 2, 0, 0, 0 },

  { 23, 0, "3402Receive ",
    "", 0, 1, 0, 0, 0 },

  { 24, 0, "3402Receive 1/p1",
    "", 0, 1, 0, 0, 0 },

  { 25, 0, "3402Receive 1/p2",
    "", 1, 1, 0, 0, 0 },

  { 26, 0, "3402Receive 1/p3",
    "", 2, 1, 0, 0, 0 },

  { 27, 0, "3402Receive 1/p4",
    "", 3, 1, 0, 0, 0 },

  { 28, 0, "3402Receive 2",
    "", 0, 1, 0, 0, 0 },

  { 29, 0, "CAN bit-packing ",
    "", 0, 1, 0, 0, 0 },

  { 30, 0, "CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 31, 0, "CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 32, 0, "CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 33, 0, "CAN bit-packing 4",
    "", 0, 1, 0, 0, 0 },

  { 34, 0, "CAN bit-packing 5",
    "", 0, 1, 0, 0, 0 },

  { 35, 0, "CAN bit-packing 6",
    "", 0, 1, 0, 0, 0 },

  { 36, 0, "CAN bit-packing 7",
    "", 0, 1, 0, 0, 0 },

  { 37, 0, "CAN bit-unpacking /p1",
    "", 0, 2, 0, 0, 0 },

  { 38, 0, "CAN bit-unpacking /p2",
    "", 1, 2, 0, 0, 0 },

  { 39, 0, "CAN bit-unpacking /p3",
    "", 2, 2, 0, 0, 0 },

  { 40, 0, "CAN bit-unpacking /p4",
    "", 3, 2, 0, 0, 0 },

  { 41, 0, "CAN bit-unpacking 1/p1",
    "", 0, 0, 0, 0, 0 },

  { 42, 0, "CAN bit-unpacking 1/p2",
    "", 1, 0, 0, 0, 0 },

  { 43, 0, "CAN bit-unpacking 1/p3",
    "", 2, 0, 0, 0, 0 },

  { 44, 0, "CAN bit-unpacking 1/p4",
    "", 3, 0, 0, 0, 0 },

  { 45, 0, "CAN bit-unpacking 1/p5",
    "", 4, 0, 0, 0, 0 },

  { 46, 0, "CAN bit-unpacking 1/p6",
    "", 5, 0, 0, 0, 0 },

  { 47, 0, "CAN bit-unpacking 1/p7",
    "", 6, 0, 0, 0, 0 },

  { 48, 0, "CAN bit-unpacking 1/p8",
    "", 7, 0, 0, 0, 0 },

  { 49, 0, "CAN bit-unpacking 2/p1",
    "", 0, 0, 0, 0, 0 },

  { 50, 0, "CAN bit-unpacking 2/p2",
    "", 1, 0, 0, 0, 0 },

  { 51, 0, "CAN bit-unpacking 2/p3",
    "", 2, 0, 0, 0, 0 },

  { 52, 0, "CAN bit-unpacking 2/p4",
    "", 3, 0, 0, 0, 0 },

  { 53, 0, "CAN bit-unpacking 3/p1",
    "", 0, 0, 0, 0, 0 },

  { 54, 0, "CAN bit-unpacking 3/p2",
    "", 1, 0, 0, 0, 0 },

  { 55, 0, "CAN bit-unpacking 3/p3",
    "", 2, 0, 0, 0, 0 },

  { 56, 0, "CAN bit-unpacking 3/p4",
    "", 3, 0, 0, 0, 0 },

  { 57, 0, "CAN bit-unpacking 4/p1",
    "", 0, 0, 0, 0, 0 },

  { 58, 0, "CAN bit-unpacking 4/p2",
    "", 1, 0, 0, 0, 0 },

  { 59, 0, "CAN bit-unpacking 4/p3",
    "", 2, 0, 0, 0, 0 },

  { 60, 0, "CAN bit-unpacking 4/p4",
    "", 3, 0, 0, 0, 0 },

  { 61, 0, "CAN bit-unpacking 4/p5",
    "", 4, 0, 0, 0, 0 },

  { 62, 0, "CAN bit-unpacking 5/p1",
    "", 0, 0, 0, 0, 0 },

  { 63, 0, "CAN bit-unpacking 5/p2",
    "", 1, 0, 0, 0, 0 },

  { 64, 0, "CAN bit-unpacking 5/p3",
    "", 2, 0, 0, 0, 0 },

  { 65, 0, "CAN bit-unpacking 5/p4",
    "", 3, 0, 0, 0, 0 },

  { 66, 0, "CAN bit-unpacking 5/p5",
    "", 4, 0, 0, 0, 0 },

  { 67, 0, "PCL731",
    "", 0, 1, 3, 0, 0 },

  { 68, 0, "255_15shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 69, 0, "255_15shineng/Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 70, 0, "255_15shineng/Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 71, 0, "255_15shineng/Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 72, 0, "255_15shineng/Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 73, 0, "255_15shineng/Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 74, 0, "255_15shineng/Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 75, 0, "255_15shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 76, 0, "255_15shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 77, 0, "255_15shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 78, 0, "255_15shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 79, 0, "255_15shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 80, 0, "255_15shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 81, 0, "255_15shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 82, 0, "255_15shineng/Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 83, 0, "255_15shineng/Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 84, 0, "255_15shineng/CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 85, 0, "255_15shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 86, 0, "255shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 87, 0, "255shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 88, 0, "255shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 89, 0, "255shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 90, 0, "255shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 91, 0, "255shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 92, 0, "255shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 93, 0, "255shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 94, 0, "255shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 95, 0, "Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 96, 0, "Manual Switch1/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 97, 0, "Manual Switch2/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 98, 0, "Manual Switch3/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 99, 0, "Manual Switch4/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 100, 0, "Subsystem/Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 101, 0, "Subsystem1/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 102, 0, "Subsystem1/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 103, 0, "Subsystem1/CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 104, 0, "Subsystem4/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 105, 0, "Subsystem4/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 106, 0, "Subsystem4/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 107, 0, "Subsystem4/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 108, 0, "Subsystem4/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 109, 0, "Subsystem4/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 110, 0, "Subsystem4/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 111, 0, "Subsystem4/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 112, 0, "Subsystem4/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 113, 0, "255_15shineng/Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 114, 1, "255_15shineng/Manual Switch1/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 115, 0, "255_15shineng/jihuo/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 116, 0, "255_15shineng/jihuo/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 117, 0, "255_15shineng/jihuo/Data Type Conversion19",
    "", 0, 0, 0, 0, 0 },

  { 118, 0, "255_15shineng/jihuo/Data Type Conversion20",
    "", 0, 0, 0, 0, 0 },

  { 119, 0, "255_15shineng/jihuo/Data Type Conversion21",
    "", 0, 0, 0, 0, 0 },

  { 120, 0, "255_15shineng/jihuo/Data Type Conversion22",
    "", 0, 0, 0, 0, 0 },

  { 121, 0, "255_15shineng/jihuo/Data Type Conversion23",
    "", 0, 0, 0, 0, 0 },

  { 122, 0, "255_15shineng/jihuo/Data Type Conversion24",
    "", 0, 0, 0, 0, 0 },

  { 123, 0, "255_15shineng/jihuo/CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 124, "88",
    "Value", 1, 0, 0 },

  { 125, "99",
    "Value", 1, 0, 0 },

  { 126, "Constant10",
    "Value", 1, 0, 0 },

  { 127, "Constant11",
    "Value", 1, 0, 0 },

  { 128, "Constant12",
    "Value", 1, 0, 0 },

  { 129, "Constant13",
    "Value", 1, 0, 0 },

  { 130, "Constant14",
    "Value", 1, 0, 0 },

  { 131, "Constant15",
    "Value", 1, 0, 0 },

  { 132, "Constant16",
    "Value", 1, 0, 0 },

  { 133, "Constant17",
    "Value", 1, 0, 0 },

  { 134, "Constant18",
    "Value", 1, 0, 0 },

  { 135, "Constant19",
    "Value", 1, 0, 0 },

  { 136, "Constant2",
    "Value", 1, 0, 0 },

  { 137, "Constant20",
    "Value", 1, 0, 0 },

  { 138, "Constant21",
    "Value", 1, 0, 0 },

  { 139, "Constant23",
    "Value", 1, 0, 0 },

  { 140, "Constant24",
    "Value", 1, 0, 0 },

  { 141, "Constant25",
    "Value", 1, 0, 0 },

  { 142, "Constant26",
    "Value", 1, 0, 0 },

  { 143, "Constant3",
    "Value", 1, 0, 0 },

  { 144, "Constant4",
    "Value", 1, 0, 0 },

  { 145, "Constant5",
    "Value", 1, 0, 0 },

  { 146, "Constant6",
    "Value", 1, 0, 0 },

  { 147, "Constant7",
    "Value", 1, 0, 0 },

  { 148, "Constant8",
    "Value", 1, 0, 0 },

  { 149, "Constant9",
    "Value", 1, 0, 0 },

  { 150, "constant1",
    "Value", 1, 0, 0 },

  { 151, "constant10",
    "Value", 1, 0, 0 },

  { 152, "constant11",
    "Value", 1, 0, 0 },

  { 153, "constant12",
    "Value", 1, 0, 0 },

  { 154, "constant13",
    "Value", 1, 0, 0 },

  { 155, "constant14",
    "Value", 1, 0, 0 },

  { 156, "constant15",
    "Value", 1, 0, 0 },

  { 157, "constant2",
    "Value", 1, 0, 0 },

  { 158, "constant3",
    "Value", 1, 0, 0 },

  { 159, "constant4",
    "Value", 1, 0, 0 },

  { 160, "constant5",
    "Value", 1, 0, 0 },

  { 161, "constant6",
    "Value", 1, 0, 0 },

  { 162, "constant7",
    "Value", 1, 0, 0 },

  { 163, "constant8",
    "Value", 1, 0, 0 },

  { 164, "constant9",
    "Value", 1, 0, 0 },

  { 165, "right7",
    "InputValues", 2, 4, 0 },

  { 166, "right7",
    "Table", 2, 4, 0 },

  { 167, "PCL731",
    "P1", 1, 0, 0 },

  { 168, "PCL731",
    "P2", 1, 4, 0 },

  { 169, "Setup ",
    "P1", 1, 5, 0 },

  { 170, "Setup ",
    "P2", 1, 5, 0 },

  { 171, "Setup ",
    "P5", 1, 6, 0 },

  { 172, "Setup ",
    "P6", 1, 7, 0 },

  { 173, "Setup ",
    "P13", 1, 7, 0 },

  { 174, "Setup ",
    "P15", 1, 0, 0 },

  { 175, "Setup ",
    "P16", 1, 0, 0 },

  { 176, "Setup ",
    "P17", 1, 0, 0 },

  { 177, "Setup ",
    "P18", 1, 0, 0 },

  { 178, "Setup ",
    "P19", 1, 0, 0 },

  { 179, "Setup ",
    "P20", 1, 0, 0 },

  { 180, "Setup ",
    "P21", 1, 0, 0 },

  { 181, "Setup ",
    "P22", 1, 0, 0 },

  { 182, "Setup ",
    "P23", 1, 0, 0 },

  { 183, "Setup ",
    "P24", 1, 0, 0 },

  { 184, "255_15shineng/Constant1",
    "Value", 1, 0, 0 },

  { 185, "255_15shineng/Constant10",
    "Value", 1, 0, 0 },

  { 186, "255_15shineng/Constant11",
    "Value", 1, 0, 0 },

  { 187, "255_15shineng/Constant12",
    "Value", 1, 0, 0 },

  { 188, "255_15shineng/Constant13",
    "Value", 1, 0, 0 },

  { 189, "255_15shineng/Constant14",
    "Value", 1, 0, 0 },

  { 190, "255_15shineng/Constant15",
    "Value", 1, 0, 0 },

  { 191, "255_15shineng/Constant16",
    "Value", 1, 0, 0 },

  { 192, "255_15shineng/Constant2",
    "Value", 1, 0, 0 },

  { 193, "255_15shineng/Constant3",
    "Value", 1, 0, 0 },

  { 194, "255_15shineng/Constant4",
    "Value", 1, 0, 0 },

  { 195, "255_15shineng/Constant5",
    "Value", 1, 0, 0 },

  { 196, "255_15shineng/Constant6",
    "Value", 1, 0, 0 },

  { 197, "255_15shineng/Constant7",
    "Value", 1, 0, 0 },

  { 198, "255_15shineng/Constant8",
    "Value", 1, 0, 0 },

  { 199, "255_15shineng/Constant9",
    "Value", 1, 0, 0 },

  { 200, "255shineng/Constant1",
    "Value", 1, 0, 0 },

  { 201, "255shineng/Constant16",
    "Value", 1, 0, 0 },

  { 202, "255shineng/Constant2",
    "Value", 1, 0, 0 },

  { 203, "255shineng/Constant3",
    "Value", 1, 0, 0 },

  { 204, "255shineng/Constant4",
    "Value", 1, 0, 0 },

  { 205, "255shineng/Constant5",
    "Value", 1, 0, 0 },

  { 206, "255shineng/Constant6",
    "Value", 1, 0, 0 },

  { 207, "255shineng/Constant7",
    "Value", 1, 0, 0 },

  { 208, "Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 209, "Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 210, "Manual Switch1/Constant",
    "Value", 0, 0, 0 },

  { 211, "Manual Switch1/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 212, "Manual Switch2/Constant",
    "Value", 0, 0, 0 },

  { 213, "Manual Switch2/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 214, "Manual Switch3/Constant",
    "Value", 0, 0, 0 },

  { 215, "Manual Switch3/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 216, "Manual Switch4/Constant",
    "Value", 0, 0, 0 },

  { 217, "Manual Switch4/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 218, "Subsystem/Constant28",
    "Value", 1, 0, 0 },

  { 219, "Subsystem/Constant29",
    "Value", 1, 0, 0 },

  { 220, "Subsystem/Constant30",
    "Value", 1, 0, 0 },

  { 221, "Subsystem/Constant31",
    "Value", 1, 0, 0 },

  { 222, "Subsystem/Constant32",
    "Value", 1, 0, 0 },

  { 223, "Subsystem/Constant33",
    "Value", 1, 0, 0 },

  { 224, "Subsystem4/Constant16",
    "Value", 1, 0, 0 },

  { 225, "Subsystem4/Constant2",
    "Value", 1, 0, 0 },

  { 226, "Subsystem4/Constant3",
    "Value", 1, 0, 0 },

  { 227, "Subsystem4/Constant4",
    "Value", 1, 0, 0 },

  { 228, "Subsystem4/Constant5",
    "Value", 1, 0, 0 },

  { 229, "Subsystem4/Constant6",
    "Value", 1, 0, 0 },

  { 230, "Subsystem4/Constant7",
    "Value", 1, 0, 0 },

  { 231, "Subsystem4/Constant8",
    "Value", 1, 0, 0 },

  { 232, "255_15shineng/Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 233, "255_15shineng/Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 234, "255_15shineng/Manual Switch1/Constant",
    "Value", 0, 0, 0 },

  { 235, "255_15shineng/Manual Switch1/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 236, "255_15shineng/jihuo/Constant17",
    "Value", 1, 0, 0 },

  { 237, "255_15shineng/jihuo/Constant18",
    "Value", 1, 0, 0 },

  { 238, "255_15shineng/jihuo/Constant19",
    "Value", 1, 0, 0 },

  { 239, "255_15shineng/jihuo/Constant20",
    "Value", 1, 0, 0 },

  { 240, "255_15shineng/jihuo/Constant21",
    "Value", 1, 0, 0 },

  { 241, "255_15shineng/jihuo/Constant22",
    "Value", 1, 0, 0 },

  { 242, "255_15shineng/jihuo/Constant23",
    "Value", 1, 0, 0 },

  { 243, "255_15shineng/jihuo/Constant24",
    "Value", 1, 0, 0 },

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
  &Copy_2_of_canceshi_B.DataTypeConversion,/* 0: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion1[0],/* 1: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion10_o,/* 2: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion11_i,/* 3: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion12_d,/* 4: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion13_e,/* 5: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion14_c,/* 6: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion15_c,/* 7: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion16_a,/* 8: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion17_o,/* 9: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion18_j,/* 10: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion19_o,/* 11: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion2[0],/* 12: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion3[0],/* 13: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion4[0],/* 14: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion5_b,/* 15: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion6_c,/* 16: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion7_l,/* 17: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion8_g,/* 18: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion9_m,/* 19: Signal */
  &Copy_2_of_canceshi_B.sifufa,        /* 20: Signal */
  &Copy_2_of_canceshi_B.yyy,           /* 21: Signal */
  &Copy_2_of_canceshi_B.right7,        /* 22: Signal */
  &Copy_2_of_canceshi_B.u02Receive,    /* 23: Signal */
  &Copy_2_of_canceshi_B.u02Receive1_o1,/* 24: Signal */
  &Copy_2_of_canceshi_B.u02Receive1_o2,/* 25: Signal */
  &Copy_2_of_canceshi_B.u02Receive1_o3,/* 26: Signal */
  &Copy_2_of_canceshi_B.u02Receive1_o4,/* 27: Signal */
  &Copy_2_of_canceshi_B.u02Receive2,   /* 28: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking, /* 29: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking1_a,/* 30: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking2_i,/* 31: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking3_d,/* 32: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking4,/* 33: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking5,/* 34: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking6,/* 35: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking7,/* 36: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking_o1,/* 37: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking_o2,/* 38: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking_o3,/* 39: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking_o4,/* 40: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o1,/* 41: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o2,/* 42: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o3,/* 43: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o4,/* 44: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o5,/* 45: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o6,/* 46: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o7,/* 47: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking1_o8,/* 48: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking2_o1,/* 49: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking2_o2,/* 50: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking2_o3,/* 51: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking2_o4,/* 52: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking3_o1,/* 53: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking3_o2,/* 54: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking3_o3,/* 55: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking3_o4,/* 56: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking4_o1,/* 57: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking4_o2,/* 58: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking4_o3,/* 59: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking4_o4,/* 60: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking4_o5,/* 61: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking5_o1,/* 62: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking5_o2,/* 63: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking5_o3,/* 64: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking5_o4,/* 65: Signal */
  &Copy_2_of_canceshi_B.CANbitunpacking5_o5,/* 66: Signal */
  &Copy_2_of_canceshi_B.PCL731[0],     /* 67: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion1_o,/* 68: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion10,/* 69: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion11,/* 70: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion12,/* 71: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion13,/* 72: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion14,/* 73: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion15,/* 74: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion16_h,/* 75: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion2_d,/* 76: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion3_j,/* 77: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion4_k,/* 78: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion5_k,/* 79: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion6_g,/* 80: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion7_j,/* 81: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion8,/* 82: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion9,/* 83: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking1,/* 84: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking2_j,/* 85: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion1_k,/* 86: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion16,/* 87: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion2_n,/* 88: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion3_b,/* 89: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion4_a,/* 90: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion5,/* 91: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion6,/* 92: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion7,/* 93: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking2,/* 94: Signal */
  &Copy_2_of_canceshi_B.SwitchControl, /* 95: Signal */
  &Copy_2_of_canceshi_B.SwitchControl_h,/* 96: Signal */
  &Copy_2_of_canceshi_B.SwitchControl_p,/* 97: Signal */
  &Copy_2_of_canceshi_B.SwitchControl_pr,/* 98: Signal */
  &Copy_2_of_canceshi_B.SwitchControl_c,/* 99: Signal */
  &Copy_2_of_canceshi_B.MultiportSwitch,/* 100: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion17,/* 101: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion18,/* 102: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking3,/* 103: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion1_k5,/* 104: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion16_g,/* 105: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion2_a,/* 106: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion3_e,/* 107: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion4_p,/* 108: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion5_a,/* 109: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion6_d,/* 110: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion7_b,/* 111: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking2_p,/* 112: Signal */
  &Copy_2_of_canceshi_B.SwitchControl_b,/* 113: Signal */
  &Copy_2_of_canceshi_B.SwitchControl_m,/* 114: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion17_m,/* 115: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion18_g,/* 116: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion19,/* 117: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion20,/* 118: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion21,/* 119: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion22,/* 120: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion23,/* 121: Signal */
  &Copy_2_of_canceshi_B.DataTypeConversion24,/* 122: Signal */
  &Copy_2_of_canceshi_B.CANbitpacking3_h,/* 123: Signal */
  &Copy_2_of_canceshi_P.u_Value,       /* 124: Block Parameter */
  &Copy_2_of_canceshi_P.u_Value_a,     /* 125: Block Parameter */
  &Copy_2_of_canceshi_P.Constant10_Value,/* 126: Block Parameter */
  &Copy_2_of_canceshi_P.Constant11_Value,/* 127: Block Parameter */
  &Copy_2_of_canceshi_P.Constant12_Value,/* 128: Block Parameter */
  &Copy_2_of_canceshi_P.Constant13_Value,/* 129: Block Parameter */
  &Copy_2_of_canceshi_P.Constant14_Value,/* 130: Block Parameter */
  &Copy_2_of_canceshi_P.Constant15_Value,/* 131: Block Parameter */
  &Copy_2_of_canceshi_P.Constant16_Value,/* 132: Block Parameter */
  &Copy_2_of_canceshi_P.Constant17_Value,/* 133: Block Parameter */
  &Copy_2_of_canceshi_P.Constant18_Value,/* 134: Block Parameter */
  &Copy_2_of_canceshi_P.Constant19_Value,/* 135: Block Parameter */
  &Copy_2_of_canceshi_P.Constant2_Value,/* 136: Block Parameter */
  &Copy_2_of_canceshi_P.Constant20_Value,/* 137: Block Parameter */
  &Copy_2_of_canceshi_P.Constant21_Value,/* 138: Block Parameter */
  &Copy_2_of_canceshi_P.Constant23_Value,/* 139: Block Parameter */
  &Copy_2_of_canceshi_P.Constant24_Value,/* 140: Block Parameter */
  &Copy_2_of_canceshi_P.Constant25_Value,/* 141: Block Parameter */
  &Copy_2_of_canceshi_P.Constant26_Value,/* 142: Block Parameter */
  &Copy_2_of_canceshi_P.Constant3_Value,/* 143: Block Parameter */
  &Copy_2_of_canceshi_P.Constant4_Value,/* 144: Block Parameter */
  &Copy_2_of_canceshi_P.Constant5_Value,/* 145: Block Parameter */
  &Copy_2_of_canceshi_P.Constant6_Value,/* 146: Block Parameter */
  &Copy_2_of_canceshi_P.Constant7_Value,/* 147: Block Parameter */
  &Copy_2_of_canceshi_P.Constant8_Value,/* 148: Block Parameter */
  &Copy_2_of_canceshi_P.Constant9_Value,/* 149: Block Parameter */
  &Copy_2_of_canceshi_P.constant1_Value,/* 150: Block Parameter */
  &Copy_2_of_canceshi_P.constant10_Value,/* 151: Block Parameter */
  &Copy_2_of_canceshi_P.constant11_Value,/* 152: Block Parameter */
  &Copy_2_of_canceshi_P.constant12_Value,/* 153: Block Parameter */
  &Copy_2_of_canceshi_P.constant13_Value,/* 154: Block Parameter */
  &Copy_2_of_canceshi_P.constant14_Value,/* 155: Block Parameter */
  &Copy_2_of_canceshi_P.constant15_Value,/* 156: Block Parameter */
  &Copy_2_of_canceshi_P.constant2_Value,/* 157: Block Parameter */
  &Copy_2_of_canceshi_P.constant3_Value,/* 158: Block Parameter */
  &Copy_2_of_canceshi_P.constant4_Value,/* 159: Block Parameter */
  &Copy_2_of_canceshi_P.constant5_Value,/* 160: Block Parameter */
  &Copy_2_of_canceshi_P.constant6_Value,/* 161: Block Parameter */
  &Copy_2_of_canceshi_P.constant7_Value,/* 162: Block Parameter */
  &Copy_2_of_canceshi_P.constant8_Value,/* 163: Block Parameter */
  &Copy_2_of_canceshi_P.constant9_Value,/* 164: Block Parameter */
  &Copy_2_of_canceshi_P.right7_XData[0],/* 165: Block Parameter */
  &Copy_2_of_canceshi_P.right7_YData[0],/* 166: Block Parameter */
  &Copy_2_of_canceshi_P.PCL731_P1,     /* 167: Block Parameter */
  &Copy_2_of_canceshi_P.PCL731_P2[0],  /* 168: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P1[0],   /* 169: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P2[0],   /* 170: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P5[0],   /* 171: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P6[0],   /* 172: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P13[0],  /* 173: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P15,     /* 174: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P16,     /* 175: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P17,     /* 176: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P18,     /* 177: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P19,     /* 178: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P20,     /* 179: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P21,     /* 180: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P22,     /* 181: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P23,     /* 182: Block Parameter */
  &Copy_2_of_canceshi_P.Setup_P24,     /* 183: Block Parameter */
  &Copy_2_of_canceshi_P.Constant1_Value_a,/* 184: Block Parameter */
  &Copy_2_of_canceshi_P.Constant10_Value_m,/* 185: Block Parameter */
  &Copy_2_of_canceshi_P.Constant11_Value_g,/* 186: Block Parameter */
  &Copy_2_of_canceshi_P.Constant12_Value_f,/* 187: Block Parameter */
  &Copy_2_of_canceshi_P.Constant13_Value_e,/* 188: Block Parameter */
  &Copy_2_of_canceshi_P.Constant14_Value_n,/* 189: Block Parameter */
  &Copy_2_of_canceshi_P.Constant15_Value_k,/* 190: Block Parameter */
  &Copy_2_of_canceshi_P.Constant16_Value_f,/* 191: Block Parameter */
  &Copy_2_of_canceshi_P.Constant2_Value_g,/* 192: Block Parameter */
  &Copy_2_of_canceshi_P.Constant3_Value_c,/* 193: Block Parameter */
  &Copy_2_of_canceshi_P.Constant4_Value_h,/* 194: Block Parameter */
  &Copy_2_of_canceshi_P.Constant5_Value_h,/* 195: Block Parameter */
  &Copy_2_of_canceshi_P.Constant6_Value_d,/* 196: Block Parameter */
  &Copy_2_of_canceshi_P.Constant7_Value_d,/* 197: Block Parameter */
  &Copy_2_of_canceshi_P.Constant8_Value_f,/* 198: Block Parameter */
  &Copy_2_of_canceshi_P.Constant9_Value_j,/* 199: Block Parameter */
  &Copy_2_of_canceshi_P.Constant1_Value,/* 200: Block Parameter */
  &Copy_2_of_canceshi_P.Constant16_Value_o,/* 201: Block Parameter */
  &Copy_2_of_canceshi_P.Constant2_Value_b,/* 202: Block Parameter */
  &Copy_2_of_canceshi_P.Constant3_Value_m,/* 203: Block Parameter */
  &Copy_2_of_canceshi_P.Constant4_Value_c,/* 204: Block Parameter */
  &Copy_2_of_canceshi_P.Constant5_Value_d,/* 205: Block Parameter */
  &Copy_2_of_canceshi_P.Constant6_Value_b,/* 206: Block Parameter */
  &Copy_2_of_canceshi_P.Constant7_Value_b,/* 207: Block Parameter */
  &Copy_2_of_canceshi_P.Constant_Value_i,/* 208: Block Parameter */
  &Copy_2_of_canceshi_P.SwitchControl_Threshold_h,/* 209: Block Parameter */
  &Copy_2_of_canceshi_P.Constant_Value_p,/* 210: Block Parameter */
  &Copy_2_of_canceshi_P.SwitchControl_Threshold_b,/* 211: Block Parameter */
  &Copy_2_of_canceshi_P.Constant_Value_k,/* 212: Block Parameter */
  &Copy_2_of_canceshi_P.SwitchControl_Threshold_g,/* 213: Block Parameter */
  &Copy_2_of_canceshi_P.Constant_Value_g,/* 214: Block Parameter */
  &Copy_2_of_canceshi_P.SwitchControl_Threshold_e,/* 215: Block Parameter */
  &Copy_2_of_canceshi_P.Constant_Value_a,/* 216: Block Parameter */
  &Copy_2_of_canceshi_P.SwitchControl_Threshold_p,/* 217: Block Parameter */
  &Copy_2_of_canceshi_P.Constant28_Value,/* 218: Block Parameter */
  &Copy_2_of_canceshi_P.Constant29_Value,/* 219: Block Parameter */
  &Copy_2_of_canceshi_P.Constant30_Value,/* 220: Block Parameter */
  &Copy_2_of_canceshi_P.Constant31_Value,/* 221: Block Parameter */
  &Copy_2_of_canceshi_P.Constant32_Value,/* 222: Block Parameter */
  &Copy_2_of_canceshi_P.Constant33_Value,/* 223: Block Parameter */
  &Copy_2_of_canceshi_P.Constant16_Value_p,/* 224: Block Parameter */
  &Copy_2_of_canceshi_P.Constant2_Value_m,/* 225: Block Parameter */
  &Copy_2_of_canceshi_P.Constant3_Value_j,/* 226: Block Parameter */
  &Copy_2_of_canceshi_P.Constant4_Value_l,/* 227: Block Parameter */
  &Copy_2_of_canceshi_P.Constant5_Value_l,/* 228: Block Parameter */
  &Copy_2_of_canceshi_P.Constant6_Value_n,/* 229: Block Parameter */
  &Copy_2_of_canceshi_P.Constant7_Value_i,/* 230: Block Parameter */
  &Copy_2_of_canceshi_P.Constant8_Value_e,/* 231: Block Parameter */
  &Copy_2_of_canceshi_P.Constant_Value_l,/* 232: Block Parameter */
  &Copy_2_of_canceshi_P.SwitchControl_Threshold_hn,/* 233: Block Parameter */
  &Copy_2_of_canceshi_P.Constant_Value,/* 234: Block Parameter */
  &Copy_2_of_canceshi_P.SwitchControl_Threshold,/* 235: Block Parameter */
  &Copy_2_of_canceshi_P.Constant17_Value_l,/* 236: Block Parameter */
  &Copy_2_of_canceshi_P.Constant18_Value_e,/* 237: Block Parameter */
  &Copy_2_of_canceshi_P.Constant19_Value_l,/* 238: Block Parameter */
  &Copy_2_of_canceshi_P.Constant20_Value_d,/* 239: Block Parameter */
  &Copy_2_of_canceshi_P.Constant21_Value_l,/* 240: Block Parameter */
  &Copy_2_of_canceshi_P.Constant22_Value,/* 241: Block Parameter */
  &Copy_2_of_canceshi_P.Constant23_Value_m,/* 242: Block Parameter */
  &Copy_2_of_canceshi_P.Constant24_Value_i/* 243: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 }
};

/* Structure Element Map - use elemMapIndex to access this structure */
static const rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { NULL, 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  4,                                   /* 2 */
  1,                                   /* 3 */
  5,                                   /* 4 */
  1,                                   /* 5 */
  24,                                  /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  2,                                   /* 9 */
  1,                                   /* 10 */
  4,                                   /* 11 */
  1,                                   /* 12 */
  7,                                   /* 13 */
  1,                                   /* 14 */
  6                                    /* 15 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.1, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
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
  { rtBlockSignals, 124 },

  { rtBlockParameters, 120,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void Copy_2_of_canceshi_InitializeDataMapInfo(rtModel_Copy_2_of_canceshi
  *Copy_2_of_canceshi_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Copy_2_of_canceshi_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Copy_2_of_canceshi_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Copy_2_of_canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Copy_2_of_canceshi_rtM->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Copy_2_of_canceshi_rtM->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Copy_2_of_canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(Copy_2_of_canceshi_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(Copy_2_of_canceshi_rtM->DataMapInfo.mmi, 0);
}

/* EOF: Copy_2_of_canceshi_capi.c */
