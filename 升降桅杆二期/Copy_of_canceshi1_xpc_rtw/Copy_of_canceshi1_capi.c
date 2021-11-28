/*
 * Copy_of_canceshi1_capi.c
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

#include "Copy_of_canceshi1.h"
#include "rtw_capi.h"
#include "Copy_of_canceshi1_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Data Type Conversion",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 2, 0, "Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 3, 0, "Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 6, 0, "Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 7, 0, "Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 8, 0, "Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 9, 0, "Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 10, 0, "Data Type Conversion19",
    "", 0, 0, 0, 0, 0 },

  { 11, 0, "Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 12, 0, "Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 13, 0, "Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 14, 0, "Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 15, 0, "Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 16, 0, "a",
    "", 0, 1, 1, 0, 0 },

  { 17, 0, "b",
    "", 0, 1, 1, 0, 0 },

  { 18, 0, "baozhuaa",
    "", 0, 1, 0, 0, 0 },

  { 19, 0, "c",
    "", 0, 1, 2, 0, 0 },

  { 20, 0, "d",
    "", 0, 1, 2, 0, 0 },

  { 21, 0, "f1",
    "", 0, 1, 0, 0, 0 },

  { 22, 0, "f2",
    "", 0, 1, 0, 0, 0 },

  { 23, 0, "f3",
    "", 0, 1, 0, 0, 0 },

  { 24, 0, "shengjianga",
    "", 0, 1, 0, 0, 0 },

  { 25, 0, "sifufa",
    "", 0, 1, 0, 0, 0 },

  { 26, 0, "xuanzhuana",
    "", 0, 1, 0, 0, 0 },

  { 27, 0, "right1",
    "", 0, 2, 0, 0, 0 },

  { 28, 0, "right2",
    "", 0, 2, 0, 0, 0 },

  { 29, 0, "right3",
    "", 0, 2, 0, 0, 0 },

  { 30, 0, "Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 31, 0, "Multiport Switch1",
    "", 0, 1, 0, 0, 0 },

  { 32, 0, "Multiport Switch2",
    "", 0, 1, 0, 0, 0 },

  { 33, 0, "Multiport Switch3",
    "", 0, 1, 0, 0, 0 },

  { 34, 0, "3402Receive ",
    "", 0, 1, 0, 0, 0 },

  { 35, 0, "3402Receive 1/p1",
    "", 0, 1, 0, 0, 0 },

  { 36, 0, "3402Receive 1/p2",
    "", 1, 1, 0, 0, 0 },

  { 37, 0, "3402Receive 1/p3",
    "", 2, 1, 0, 0, 0 },

  { 38, 0, "3402Receive 1/p4",
    "", 3, 1, 0, 0, 0 },

  { 39, 0, "3402Receive 2",
    "", 0, 1, 0, 0, 0 },

  { 40, 0, "CAN bit-packing ",
    "", 0, 1, 0, 0, 0 },

  { 41, 0, "CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 42, 0, "CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 43, 0, "CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 44, 0, "CAN bit-packing 4",
    "", 0, 1, 0, 0, 0 },

  { 45, 0, "CAN bit-packing 5",
    "", 0, 1, 0, 0, 0 },

  { 46, 0, "CAN bit-packing 6",
    "", 0, 1, 0, 0, 0 },

  { 47, 0, "CAN bit-packing 7",
    "", 0, 1, 0, 0, 0 },

  { 48, 0, "CAN bit-unpacking /p1",
    "", 0, 2, 0, 0, 0 },

  { 49, 0, "CAN bit-unpacking /p2",
    "", 1, 2, 0, 0, 0 },

  { 50, 0, "CAN bit-unpacking /p3",
    "", 2, 2, 0, 0, 0 },

  { 51, 0, "CAN bit-unpacking /p4",
    "", 3, 2, 0, 0, 0 },

  { 52, 0, "CAN bit-unpacking 1/p1",
    "", 0, 0, 0, 0, 0 },

  { 53, 0, "CAN bit-unpacking 1/p2",
    "", 1, 0, 0, 0, 0 },

  { 54, 0, "CAN bit-unpacking 1/p3",
    "", 2, 0, 0, 0, 0 },

  { 55, 0, "CAN bit-unpacking 1/p4",
    "", 3, 0, 0, 0, 0 },

  { 56, 0, "CAN bit-unpacking 1/p5",
    "", 4, 0, 0, 0, 0 },

  { 57, 0, "CAN bit-unpacking 1/p6",
    "", 5, 0, 0, 0, 0 },

  { 58, 0, "CAN bit-unpacking 1/p7",
    "", 6, 0, 0, 0, 0 },

  { 59, 0, "CAN bit-unpacking 1/p8",
    "", 7, 0, 0, 0, 0 },

  { 60, 0, "CAN bit-unpacking 2/p1",
    "", 0, 0, 0, 0, 0 },

  { 61, 0, "CAN bit-unpacking 2/p2",
    "", 1, 0, 0, 0, 0 },

  { 62, 0, "CAN bit-unpacking 2/p3",
    "", 2, 0, 0, 0, 0 },

  { 63, 0, "CAN bit-unpacking 2/p4",
    "", 3, 0, 0, 0, 0 },

  { 64, 0, "CAN bit-unpacking 3/p1",
    "", 0, 0, 0, 0, 0 },

  { 65, 0, "CAN bit-unpacking 3/p2",
    "", 1, 0, 0, 0, 0 },

  { 66, 0, "CAN bit-unpacking 3/p3",
    "", 2, 0, 0, 0, 0 },

  { 67, 0, "CAN bit-unpacking 3/p4",
    "", 3, 0, 0, 0, 0 },

  { 68, 0, "CAN bit-unpacking 4/p1",
    "", 0, 0, 0, 0, 0 },

  { 69, 0, "CAN bit-unpacking 4/p2",
    "", 1, 0, 0, 0, 0 },

  { 70, 0, "CAN bit-unpacking 4/p3",
    "", 2, 0, 0, 0, 0 },

  { 71, 0, "CAN bit-unpacking 4/p4",
    "", 3, 0, 0, 0, 0 },

  { 72, 0, "CAN bit-unpacking 4/p5",
    "", 4, 0, 0, 0, 0 },

  { 73, 0, "CAN bit-unpacking 5/p1",
    "", 0, 0, 0, 0, 0 },

  { 74, 0, "CAN bit-unpacking 5/p2",
    "", 1, 0, 0, 0, 0 },

  { 75, 0, "CAN bit-unpacking 5/p3",
    "", 2, 0, 0, 0, 0 },

  { 76, 0, "CAN bit-unpacking 5/p4",
    "", 3, 0, 0, 0, 0 },

  { 77, 0, "CAN bit-unpacking 5/p5",
    "", 4, 0, 0, 0, 0 },

  { 78, 0, "PCL731",
    "", 0, 1, 3, 0, 0 },

  { 79, 0, "255_15shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 80, 0, "255_15shineng/Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 81, 0, "255_15shineng/Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 82, 0, "255_15shineng/Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 83, 0, "255_15shineng/Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 84, 0, "255_15shineng/Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 85, 0, "255_15shineng/Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 86, 0, "255_15shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 87, 0, "255_15shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 88, 0, "255_15shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 89, 0, "255_15shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 90, 0, "255_15shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 91, 0, "255_15shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 92, 0, "255_15shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 93, 0, "255_15shineng/Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 94, 0, "255_15shineng/Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 95, 0, "255_15shineng/CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 96, 0, "255_15shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 97, 0, "255shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 98, 0, "255shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 99, 0, "255shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 100, 0, "255shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 101, 0, "255shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 102, 0, "255shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 103, 0, "255shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 104, 0, "255shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 105, 0, "255shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 106, 0, "Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 107, 0, "Subsystem/Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 108, 0, "Subsystem1/Product",
    "", 0, 1, 0, 0, 0 },

  { 109, 0, "Subsystem1/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 110, 0, "Subsystem1/Relational Operator1",
    "", 0, 3, 0, 0, 0 },

  { 111, 0, "Subsystem1/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 112, 0, "Subsystem1/Integer Delay1",
    "", 0, 1, 0, 0, 0 },

  { 113, 0, "Subsystem1/Integer Delay2",
    "", 0, 1, 0, 0, 0 },

  { 114, 0, "Subsystem1/Add",
    "", 0, 1, 0, 0, 0 },

  { 115, 0, "Subsystem2/Product",
    "", 0, 1, 0, 0, 0 },

  { 116, 0, "Subsystem2/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 117, 0, "Subsystem2/Relational Operator1",
    "", 0, 3, 0, 0, 0 },

  { 118, 0, "Subsystem2/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 119, 0, "Subsystem2/Integer Delay1",
    "", 0, 1, 0, 0, 0 },

  { 120, 0, "Subsystem2/Integer Delay2",
    "", 0, 1, 0, 0, 0 },

  { 121, 0, "Subsystem2/Add",
    "", 0, 1, 0, 0, 0 },

  { 122, 0, "Subsystem3/Product",
    "", 0, 1, 0, 0, 0 },

  { 123, 0, "Subsystem3/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 124, 0, "Subsystem3/Relational Operator1",
    "", 0, 3, 0, 0, 0 },

  { 125, 0, "Subsystem3/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 126, 0, "Subsystem3/Integer Delay1",
    "", 0, 1, 0, 0, 0 },

  { 127, 0, "Subsystem3/Integer Delay2",
    "", 0, 1, 0, 0, 0 },

  { 128, 0, "Subsystem3/Add",
    "", 0, 1, 0, 0, 0 },

  { 129, 0, "Subsystem4/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 130, 0, "Subsystem4/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 131, 0, "Subsystem4/CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 132, 0, "Subsystem5/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 133, 0, "Subsystem5/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 134, 0, "Subsystem5/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 135, 0, "Subsystem5/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 136, 0, "Subsystem5/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 137, 0, "Subsystem5/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 138, 0, "Subsystem5/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 139, 0, "Subsystem5/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 140, 0, "Subsystem5/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 141, 0, "255_15shineng/Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 142, 1, "255_15shineng/Manual Switch1/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 143, 0, "255_15shineng/jihuo/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 144, 0, "255_15shineng/jihuo/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 145, 0, "255_15shineng/jihuo/Data Type Conversion19",
    "", 0, 0, 0, 0, 0 },

  { 146, 0, "255_15shineng/jihuo/Data Type Conversion20",
    "", 0, 0, 0, 0, 0 },

  { 147, 0, "255_15shineng/jihuo/Data Type Conversion21",
    "", 0, 0, 0, 0, 0 },

  { 148, 0, "255_15shineng/jihuo/Data Type Conversion22",
    "", 0, 0, 0, 0, 0 },

  { 149, 0, "255_15shineng/jihuo/Data Type Conversion23",
    "", 0, 0, 0, 0, 0 },

  { 150, 0, "255_15shineng/jihuo/Data Type Conversion24",
    "", 0, 0, 0, 0, 0 },

  { 151, 0, "255_15shineng/jihuo/CAN bit-packing 3",
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
  { 152, "88",
    "Value", 1, 0, 0 },

  { 153, "99",
    "Value", 1, 0, 0 },

  { 154, "Constant10",
    "Value", 1, 0, 0 },

  { 155, "Constant11",
    "Value", 1, 0, 0 },

  { 156, "Constant12",
    "Value", 1, 0, 0 },

  { 157, "Constant13",
    "Value", 1, 0, 0 },

  { 158, "Constant14",
    "Value", 1, 0, 0 },

  { 159, "Constant15",
    "Value", 1, 0, 0 },

  { 160, "Constant16",
    "Value", 1, 0, 0 },

  { 161, "Constant17",
    "Value", 1, 0, 0 },

  { 162, "Constant18",
    "Value", 1, 0, 0 },

  { 163, "Constant19",
    "Value", 1, 0, 0 },

  { 164, "Constant2",
    "Value", 1, 0, 0 },

  { 165, "Constant20",
    "Value", 1, 0, 0 },

  { 166, "Constant21",
    "Value", 1, 0, 0 },

  { 167, "Constant23",
    "Value", 1, 0, 0 },

  { 168, "Constant24",
    "Value", 1, 0, 0 },

  { 169, "Constant25",
    "Value", 1, 0, 0 },

  { 170, "Constant26",
    "Value", 1, 0, 0 },

  { 171, "Constant3",
    "Value", 1, 0, 0 },

  { 172, "Constant4",
    "Value", 1, 0, 0 },

  { 173, "Constant5",
    "Value", 1, 0, 0 },

  { 174, "Constant6",
    "Value", 1, 0, 0 },

  { 175, "Constant7",
    "Value", 1, 0, 0 },

  { 176, "Constant8",
    "Value", 1, 0, 0 },

  { 177, "Constant9",
    "Value", 1, 0, 0 },

  { 178, "baozhuay",
    "Value", 1, 0, 0 },

  { 179, "constant1",
    "Value", 1, 0, 0 },

  { 180, "constant10",
    "Value", 1, 0, 0 },

  { 181, "constant11",
    "Value", 1, 0, 0 },

  { 182, "constant12",
    "Value", 1, 0, 0 },

  { 183, "constant13",
    "Value", 1, 0, 0 },

  { 184, "constant14",
    "Value", 1, 0, 0 },

  { 185, "constant15",
    "Value", 1, 0, 0 },

  { 186, "constant2",
    "Value", 1, 0, 0 },

  { 187, "constant4",
    "Value", 1, 0, 0 },

  { 188, "constant5",
    "Value", 1, 0, 0 },

  { 189, "constant6",
    "Value", 1, 0, 0 },

  { 190, "constant9",
    "Value", 1, 0, 0 },

  { 191, "shengjiangy",
    "Value", 1, 0, 0 },

  { 192, "xuanzhuany",
    "Value", 1, 0, 0 },

  { 193, "right1",
    "InputValues", 2, 4, 0 },

  { 194, "right1",
    "Table", 2, 4, 0 },

  { 195, "right2",
    "InputValues", 2, 4, 0 },

  { 196, "right2",
    "Table", 2, 4, 0 },

  { 197, "right3",
    "InputValues", 2, 4, 0 },

  { 198, "right3",
    "Table", 2, 4, 0 },

  { 199, "PCL731",
    "P1", 1, 0, 0 },

  { 200, "PCL731",
    "P2", 1, 4, 0 },

  { 201, "Setup ",
    "P1", 1, 5, 0 },

  { 202, "Setup ",
    "P2", 1, 5, 0 },

  { 203, "Setup ",
    "P3", 1, 0, 0 },

  { 204, "Setup ",
    "P5", 1, 6, 0 },

  { 205, "Setup ",
    "P6", 1, 6, 0 },

  { 206, "Setup ",
    "P13", 1, 6, 0 },

  { 207, "Setup ",
    "P15", 1, 0, 0 },

  { 208, "Setup ",
    "P16", 1, 0, 0 },

  { 209, "Setup ",
    "P17", 1, 0, 0 },

  { 210, "Setup ",
    "P18", 1, 0, 0 },

  { 211, "Setup ",
    "P19", 1, 0, 0 },

  { 212, "Setup ",
    "P20", 1, 0, 0 },

  { 213, "Setup ",
    "P21", 1, 0, 0 },

  { 214, "Setup ",
    "P22", 1, 0, 0 },

  { 215, "Setup ",
    "P23", 1, 0, 0 },

  { 216, "Setup ",
    "P24", 1, 0, 0 },

  { 217, "255_15shineng/Constant1",
    "Value", 1, 0, 0 },

  { 218, "255_15shineng/Constant10",
    "Value", 1, 0, 0 },

  { 219, "255_15shineng/Constant11",
    "Value", 1, 0, 0 },

  { 220, "255_15shineng/Constant12",
    "Value", 1, 0, 0 },

  { 221, "255_15shineng/Constant13",
    "Value", 1, 0, 0 },

  { 222, "255_15shineng/Constant14",
    "Value", 1, 0, 0 },

  { 223, "255_15shineng/Constant15",
    "Value", 1, 0, 0 },

  { 224, "255_15shineng/Constant16",
    "Value", 1, 0, 0 },

  { 225, "255_15shineng/Constant2",
    "Value", 1, 0, 0 },

  { 226, "255_15shineng/Constant3",
    "Value", 1, 0, 0 },

  { 227, "255_15shineng/Constant4",
    "Value", 1, 0, 0 },

  { 228, "255_15shineng/Constant5",
    "Value", 1, 0, 0 },

  { 229, "255_15shineng/Constant6",
    "Value", 1, 0, 0 },

  { 230, "255_15shineng/Constant7",
    "Value", 1, 0, 0 },

  { 231, "255_15shineng/Constant8",
    "Value", 1, 0, 0 },

  { 232, "255_15shineng/Constant9",
    "Value", 1, 0, 0 },

  { 233, "255shineng/Constant1",
    "Value", 1, 0, 0 },

  { 234, "255shineng/Constant16",
    "Value", 1, 0, 0 },

  { 235, "255shineng/Constant2",
    "Value", 1, 0, 0 },

  { 236, "255shineng/Constant3",
    "Value", 1, 0, 0 },

  { 237, "255shineng/Constant4",
    "Value", 1, 0, 0 },

  { 238, "255shineng/Constant5",
    "Value", 1, 0, 0 },

  { 239, "255shineng/Constant6",
    "Value", 1, 0, 0 },

  { 240, "255shineng/Constant7",
    "Value", 1, 0, 0 },

  { 241, "Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 242, "Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 243, "Subsystem/Constant1",
    "Value", 1, 0, 0 },

  { 244, "Subsystem/Constant28",
    "Value", 1, 0, 0 },

  { 245, "Subsystem/Constant29",
    "Value", 1, 0, 0 },

  { 246, "Subsystem/Constant30",
    "Value", 1, 0, 0 },

  { 247, "Subsystem/Constant31",
    "Value", 1, 0, 0 },

  { 248, "Subsystem/Constant32",
    "Value", 1, 0, 0 },

  { 249, "Subsystem/Constant33",
    "Value", 1, 0, 0 },

  { 250, "Subsystem1/Constant",
    "Value", 1, 0, 0 },

  { 251, "Subsystem1/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 252, "Subsystem1/Integer Delay1",
    "InitialCondition", 1, 0, 0 },

  { 253, "Subsystem1/Integer Delay2",
    "InitialCondition", 1, 0, 0 },

  { 254, "Subsystem2/Constant",
    "Value", 1, 0, 0 },

  { 255, "Subsystem2/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 256, "Subsystem2/Integer Delay1",
    "InitialCondition", 1, 0, 0 },

  { 257, "Subsystem2/Integer Delay2",
    "InitialCondition", 1, 0, 0 },

  { 258, "Subsystem3/Constant",
    "Value", 1, 0, 0 },

  { 259, "Subsystem3/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 260, "Subsystem3/Integer Delay1",
    "InitialCondition", 1, 0, 0 },

  { 261, "Subsystem3/Integer Delay2",
    "InitialCondition", 1, 0, 0 },

  { 262, "Subsystem5/Constant16",
    "Value", 1, 0, 0 },

  { 263, "Subsystem5/Constant2",
    "Value", 1, 0, 0 },

  { 264, "Subsystem5/Constant3",
    "Value", 1, 0, 0 },

  { 265, "Subsystem5/Constant4",
    "Value", 1, 0, 0 },

  { 266, "Subsystem5/Constant5",
    "Value", 1, 0, 0 },

  { 267, "Subsystem5/Constant6",
    "Value", 1, 0, 0 },

  { 268, "Subsystem5/Constant7",
    "Value", 1, 0, 0 },

  { 269, "Subsystem5/Constant8",
    "Value", 1, 0, 0 },

  { 270, "255_15shineng/Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 271, "255_15shineng/Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 272, "255_15shineng/Manual Switch1/Constant",
    "Value", 0, 0, 0 },

  { 273, "255_15shineng/Manual Switch1/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 274, "255_15shineng/jihuo/Constant17",
    "Value", 1, 0, 0 },

  { 275, "255_15shineng/jihuo/Constant18",
    "Value", 1, 0, 0 },

  { 276, "255_15shineng/jihuo/Constant19",
    "Value", 1, 0, 0 },

  { 277, "255_15shineng/jihuo/Constant20",
    "Value", 1, 0, 0 },

  { 278, "255_15shineng/jihuo/Constant21",
    "Value", 1, 0, 0 },

  { 279, "255_15shineng/jihuo/Constant22",
    "Value", 1, 0, 0 },

  { 280, "255_15shineng/jihuo/Constant23",
    "Value", 1, 0, 0 },

  { 281, "255_15shineng/jihuo/Constant24",
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
  &Copy_of_canceshi1_B.DataTypeConversion,/* 0: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion10,/* 1: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion11,/* 2: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion12,/* 3: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion13,/* 4: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion14,/* 5: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion15,/* 6: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion16,/* 7: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion17,/* 8: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion18,/* 9: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion19,/* 10: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion5,/* 11: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion6,/* 12: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion7,/* 13: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion8,/* 14: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion9,/* 15: Signal */
  &Copy_of_canceshi1_B.a[0],           /* 16: Signal */
  &Copy_of_canceshi1_B.b[0],           /* 17: Signal */
  &Copy_of_canceshi1_B.baozhuaa,       /* 18: Signal */
  &Copy_of_canceshi1_B.c[0],           /* 19: Signal */
  &Copy_of_canceshi1_B.d[0],           /* 20: Signal */
  &Copy_of_canceshi1_B.f1,             /* 21: Signal */
  &Copy_of_canceshi1_B.f2,             /* 22: Signal */
  &Copy_of_canceshi1_B.f3,             /* 23: Signal */
  &Copy_of_canceshi1_B.shengjianga,    /* 24: Signal */
  &Copy_of_canceshi1_B.sifufa,         /* 25: Signal */
  &Copy_of_canceshi1_B.xuanzhuana,     /* 26: Signal */
  &Copy_of_canceshi1_B.right1,         /* 27: Signal */
  &Copy_of_canceshi1_B.right2,         /* 28: Signal */
  &Copy_of_canceshi1_B.right3,         /* 29: Signal */
  &Copy_of_canceshi1_B.MultiportSwitch,/* 30: Signal */
  &Copy_of_canceshi1_B.MultiportSwitch1,/* 31: Signal */
  &Copy_of_canceshi1_B.MultiportSwitch2,/* 32: Signal */
  &Copy_of_canceshi1_B.MultiportSwitch3,/* 33: Signal */
  &Copy_of_canceshi1_B.u02Receive,     /* 34: Signal */
  &Copy_of_canceshi1_B.u02Receive1_o1, /* 35: Signal */
  &Copy_of_canceshi1_B.u02Receive1_o2, /* 36: Signal */
  &Copy_of_canceshi1_B.u02Receive1_o3, /* 37: Signal */
  &Copy_of_canceshi1_B.u02Receive1_o4, /* 38: Signal */
  &Copy_of_canceshi1_B.u02Receive2,    /* 39: Signal */
  &Copy_of_canceshi1_B.CANbitpacking,  /* 40: Signal */
  &Copy_of_canceshi1_B.CANbitpacking1, /* 41: Signal */
  &Copy_of_canceshi1_B.CANbitpacking2, /* 42: Signal */
  &Copy_of_canceshi1_B.CANbitpacking3, /* 43: Signal */
  &Copy_of_canceshi1_B.CANbitpacking4, /* 44: Signal */
  &Copy_of_canceshi1_B.CANbitpacking5, /* 45: Signal */
  &Copy_of_canceshi1_B.CANbitpacking6, /* 46: Signal */
  &Copy_of_canceshi1_B.CANbitpacking7, /* 47: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking_o1,/* 48: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking_o2,/* 49: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking_o3,/* 50: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking_o4,/* 51: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o1,/* 52: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o2,/* 53: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o3,/* 54: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o4,/* 55: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o5,/* 56: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o6,/* 57: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o7,/* 58: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking1_o8,/* 59: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking2_o1,/* 60: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking2_o2,/* 61: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking2_o3,/* 62: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking2_o4,/* 63: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking3_o1,/* 64: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking3_o2,/* 65: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking3_o3,/* 66: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking3_o4,/* 67: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking4_o1,/* 68: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking4_o2,/* 69: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking4_o3,/* 70: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking4_o4,/* 71: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking4_o5,/* 72: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking5_o1,/* 73: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking5_o2,/* 74: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking5_o3,/* 75: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking5_o4,/* 76: Signal */
  &Copy_of_canceshi1_B.CANbitunpacking5_o5,/* 77: Signal */
  &Copy_of_canceshi1_B.PCL731[0],      /* 78: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion1_n,/* 79: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion10_f,/* 80: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion11_f,/* 81: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion12_n,/* 82: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion13_o,/* 83: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion14_i,/* 84: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion15_a,/* 85: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion16_p,/* 86: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion2_oi,/* 87: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion3_a,/* 88: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion4_i,/* 89: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion5_k,/* 90: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion6_b,/* 91: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion7_f,/* 92: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion8_n,/* 93: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion9_l,/* 94: Signal */
  &Copy_of_canceshi1_B.CANbitpacking1_i,/* 95: Signal */
  &Copy_of_canceshi1_B.CANbitpacking2_h,/* 96: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion1,/* 97: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion16_k,/* 98: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion2,/* 99: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion3,/* 100: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion4,/* 101: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion5_m,/* 102: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion6_o,/* 103: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion7_g,/* 104: Signal */
  &Copy_of_canceshi1_B.CANbitpacking2_l,/* 105: Signal */
  &Copy_of_canceshi1_B.SwitchControl,  /* 106: Signal */
  &Copy_of_canceshi1_B.MultiportSwitch_h,/* 107: Signal */
  &Copy_of_canceshi1_B.Product,        /* 108: Signal */
  &Copy_of_canceshi1_B.RelationalOperator,/* 109: Signal */
  &Copy_of_canceshi1_B.RelationalOperator1,/* 110: Signal */
  &Copy_of_canceshi1_B.IntegerDelay,   /* 111: Signal */
  &Copy_of_canceshi1_B.IntegerDelay1,  /* 112: Signal */
  &Copy_of_canceshi1_B.IntegerDelay2,  /* 113: Signal */
  &Copy_of_canceshi1_B.Add,            /* 114: Signal */
  &Copy_of_canceshi1_B.Product_g,      /* 115: Signal */
  &Copy_of_canceshi1_B.RelationalOperator_b,/* 116: Signal */
  &Copy_of_canceshi1_B.RelationalOperator1_o,/* 117: Signal */
  &Copy_of_canceshi1_B.IntegerDelay_g, /* 118: Signal */
  &Copy_of_canceshi1_B.IntegerDelay1_d,/* 119: Signal */
  &Copy_of_canceshi1_B.IntegerDelay2_i,/* 120: Signal */
  &Copy_of_canceshi1_B.Add_e,          /* 121: Signal */
  &Copy_of_canceshi1_B.Product_d,      /* 122: Signal */
  &Copy_of_canceshi1_B.RelationalOperator_f,/* 123: Signal */
  &Copy_of_canceshi1_B.RelationalOperator1_i,/* 124: Signal */
  &Copy_of_canceshi1_B.IntegerDelay_h, /* 125: Signal */
  &Copy_of_canceshi1_B.IntegerDelay1_k,/* 126: Signal */
  &Copy_of_canceshi1_B.IntegerDelay2_e,/* 127: Signal */
  &Copy_of_canceshi1_B.Add_b,          /* 128: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion17_g,/* 129: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion18_j,/* 130: Signal */
  &Copy_of_canceshi1_B.CANbitpacking3_o,/* 131: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion1_h,/* 132: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion16_f,/* 133: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion2_o,/* 134: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion3_k,/* 135: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion4_h,/* 136: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion5_c,/* 137: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion6_g,/* 138: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion7_d,/* 139: Signal */
  &Copy_of_canceshi1_B.CANbitpacking2_o,/* 140: Signal */
  &Copy_of_canceshi1_B.SwitchControl_i,/* 141: Signal */
  &Copy_of_canceshi1_B.SwitchControl_b,/* 142: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion17_c,/* 143: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion18_g,/* 144: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion19_k,/* 145: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion20,/* 146: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion21,/* 147: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion22,/* 148: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion23,/* 149: Signal */
  &Copy_of_canceshi1_B.DataTypeConversion24,/* 150: Signal */
  &Copy_of_canceshi1_B.CANbitpacking3_g,/* 151: Signal */
  &Copy_of_canceshi1_P.u_Value,        /* 152: Block Parameter */
  &Copy_of_canceshi1_P.u_Value_h,      /* 153: Block Parameter */
  &Copy_of_canceshi1_P.Constant10_Value,/* 154: Block Parameter */
  &Copy_of_canceshi1_P.Constant11_Value,/* 155: Block Parameter */
  &Copy_of_canceshi1_P.Constant12_Value,/* 156: Block Parameter */
  &Copy_of_canceshi1_P.Constant13_Value,/* 157: Block Parameter */
  &Copy_of_canceshi1_P.Constant14_Value,/* 158: Block Parameter */
  &Copy_of_canceshi1_P.Constant15_Value,/* 159: Block Parameter */
  &Copy_of_canceshi1_P.Constant16_Value,/* 160: Block Parameter */
  &Copy_of_canceshi1_P.Constant17_Value,/* 161: Block Parameter */
  &Copy_of_canceshi1_P.Constant18_Value,/* 162: Block Parameter */
  &Copy_of_canceshi1_P.Constant19_Value,/* 163: Block Parameter */
  &Copy_of_canceshi1_P.Constant2_Value,/* 164: Block Parameter */
  &Copy_of_canceshi1_P.Constant20_Value,/* 165: Block Parameter */
  &Copy_of_canceshi1_P.Constant21_Value,/* 166: Block Parameter */
  &Copy_of_canceshi1_P.Constant23_Value,/* 167: Block Parameter */
  &Copy_of_canceshi1_P.Constant24_Value,/* 168: Block Parameter */
  &Copy_of_canceshi1_P.Constant25_Value,/* 169: Block Parameter */
  &Copy_of_canceshi1_P.Constant26_Value,/* 170: Block Parameter */
  &Copy_of_canceshi1_P.Constant3_Value,/* 171: Block Parameter */
  &Copy_of_canceshi1_P.Constant4_Value,/* 172: Block Parameter */
  &Copy_of_canceshi1_P.Constant5_Value,/* 173: Block Parameter */
  &Copy_of_canceshi1_P.Constant6_Value,/* 174: Block Parameter */
  &Copy_of_canceshi1_P.Constant7_Value,/* 175: Block Parameter */
  &Copy_of_canceshi1_P.Constant8_Value,/* 176: Block Parameter */
  &Copy_of_canceshi1_P.Constant9_Value,/* 177: Block Parameter */
  &Copy_of_canceshi1_P.baozhuay_Value, /* 178: Block Parameter */
  &Copy_of_canceshi1_P.constant1_Value,/* 179: Block Parameter */
  &Copy_of_canceshi1_P.constant10_Value,/* 180: Block Parameter */
  &Copy_of_canceshi1_P.constant11_Value,/* 181: Block Parameter */
  &Copy_of_canceshi1_P.constant12_Value,/* 182: Block Parameter */
  &Copy_of_canceshi1_P.constant13_Value,/* 183: Block Parameter */
  &Copy_of_canceshi1_P.constant14_Value,/* 184: Block Parameter */
  &Copy_of_canceshi1_P.constant15_Value,/* 185: Block Parameter */
  &Copy_of_canceshi1_P.constant2_Value,/* 186: Block Parameter */
  &Copy_of_canceshi1_P.constant4_Value,/* 187: Block Parameter */
  &Copy_of_canceshi1_P.constant5_Value,/* 188: Block Parameter */
  &Copy_of_canceshi1_P.constant6_Value,/* 189: Block Parameter */
  &Copy_of_canceshi1_P.constant9_Value,/* 190: Block Parameter */
  &Copy_of_canceshi1_P.shengjiangy_Value,/* 191: Block Parameter */
  &Copy_of_canceshi1_P.xuanzhuany_Value,/* 192: Block Parameter */
  &Copy_of_canceshi1_P.right1_XData[0],/* 193: Block Parameter */
  &Copy_of_canceshi1_P.right1_YData[0],/* 194: Block Parameter */
  &Copy_of_canceshi1_P.right2_XData[0],/* 195: Block Parameter */
  &Copy_of_canceshi1_P.right2_YData[0],/* 196: Block Parameter */
  &Copy_of_canceshi1_P.right3_XData[0],/* 197: Block Parameter */
  &Copy_of_canceshi1_P.right3_YData[0],/* 198: Block Parameter */
  &Copy_of_canceshi1_P.PCL731_P1,      /* 199: Block Parameter */
  &Copy_of_canceshi1_P.PCL731_P2[0],   /* 200: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P1[0],    /* 201: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P2[0],    /* 202: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P3,       /* 203: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P5[0],    /* 204: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P6[0],    /* 205: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P13[0],   /* 206: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P15,      /* 207: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P16,      /* 208: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P17,      /* 209: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P18,      /* 210: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P19,      /* 211: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P20,      /* 212: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P21,      /* 213: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P22,      /* 214: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P23,      /* 215: Block Parameter */
  &Copy_of_canceshi1_P.Setup_P24,      /* 216: Block Parameter */
  &Copy_of_canceshi1_P.Constant1_Value_fj,/* 217: Block Parameter */
  &Copy_of_canceshi1_P.Constant10_Value_f,/* 218: Block Parameter */
  &Copy_of_canceshi1_P.Constant11_Value_h,/* 219: Block Parameter */
  &Copy_of_canceshi1_P.Constant12_Value_a,/* 220: Block Parameter */
  &Copy_of_canceshi1_P.Constant13_Value_k,/* 221: Block Parameter */
  &Copy_of_canceshi1_P.Constant14_Value_g,/* 222: Block Parameter */
  &Copy_of_canceshi1_P.Constant15_Value_o,/* 223: Block Parameter */
  &Copy_of_canceshi1_P.Constant16_Value_e,/* 224: Block Parameter */
  &Copy_of_canceshi1_P.Constant2_Value_i,/* 225: Block Parameter */
  &Copy_of_canceshi1_P.Constant3_Value_j,/* 226: Block Parameter */
  &Copy_of_canceshi1_P.Constant4_Value_i3,/* 227: Block Parameter */
  &Copy_of_canceshi1_P.Constant5_Value_l,/* 228: Block Parameter */
  &Copy_of_canceshi1_P.Constant6_Value_l,/* 229: Block Parameter */
  &Copy_of_canceshi1_P.Constant7_Value_d,/* 230: Block Parameter */
  &Copy_of_canceshi1_P.Constant8_Value_a,/* 231: Block Parameter */
  &Copy_of_canceshi1_P.Constant9_Value_d,/* 232: Block Parameter */
  &Copy_of_canceshi1_P.Constant1_Value_f,/* 233: Block Parameter */
  &Copy_of_canceshi1_P.Constant16_Value_h,/* 234: Block Parameter */
  &Copy_of_canceshi1_P.Constant2_Value_f,/* 235: Block Parameter */
  &Copy_of_canceshi1_P.Constant3_Value_i,/* 236: Block Parameter */
  &Copy_of_canceshi1_P.Constant4_Value_g,/* 237: Block Parameter */
  &Copy_of_canceshi1_P.Constant5_Value_n,/* 238: Block Parameter */
  &Copy_of_canceshi1_P.Constant6_Value_b,/* 239: Block Parameter */
  &Copy_of_canceshi1_P.Constant7_Value_a,/* 240: Block Parameter */
  &Copy_of_canceshi1_P.Constant_Value_i,/* 241: Block Parameter */
  &Copy_of_canceshi1_P.SwitchControl_Threshold_i,/* 242: Block Parameter */
  &Copy_of_canceshi1_P.Constant1_Value,/* 243: Block Parameter */
  &Copy_of_canceshi1_P.Constant28_Value,/* 244: Block Parameter */
  &Copy_of_canceshi1_P.Constant29_Value,/* 245: Block Parameter */
  &Copy_of_canceshi1_P.Constant30_Value,/* 246: Block Parameter */
  &Copy_of_canceshi1_P.Constant31_Value,/* 247: Block Parameter */
  &Copy_of_canceshi1_P.Constant32_Value,/* 248: Block Parameter */
  &Copy_of_canceshi1_P.Constant33_Value,/* 249: Block Parameter */
  &Copy_of_canceshi1_P.Constant_Value, /* 250: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay_InitialCondition,/* 251: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay1_InitialCondition,/* 252: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay2_InitialCondition,/* 253: Block Parameter */
  &Copy_of_canceshi1_P.Constant_Value_j,/* 254: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay_InitialCondition_h,/* 255: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay1_InitialConditio_m,/* 256: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay2_InitialConditio_h,/* 257: Block Parameter */
  &Copy_of_canceshi1_P.Constant_Value_h,/* 258: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay_InitialCondition_n,/* 259: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay1_InitialConditio_k,/* 260: Block Parameter */
  &Copy_of_canceshi1_P.IntegerDelay2_InitialConditio_f,/* 261: Block Parameter */
  &Copy_of_canceshi1_P.Constant16_Value_c,/* 262: Block Parameter */
  &Copy_of_canceshi1_P.Constant2_Value_l,/* 263: Block Parameter */
  &Copy_of_canceshi1_P.Constant3_Value_g,/* 264: Block Parameter */
  &Copy_of_canceshi1_P.Constant4_Value_i,/* 265: Block Parameter */
  &Copy_of_canceshi1_P.Constant5_Value_h,/* 266: Block Parameter */
  &Copy_of_canceshi1_P.Constant6_Value_k,/* 267: Block Parameter */
  &Copy_of_canceshi1_P.Constant7_Value_n,/* 268: Block Parameter */
  &Copy_of_canceshi1_P.Constant8_Value_e,/* 269: Block Parameter */
  &Copy_of_canceshi1_P.Constant_Value_k,/* 270: Block Parameter */
  &Copy_of_canceshi1_P.SwitchControl_Threshold_k,/* 271: Block Parameter */
  &Copy_of_canceshi1_P.Constant_Value_c,/* 272: Block Parameter */
  &Copy_of_canceshi1_P.SwitchControl_Threshold,/* 273: Block Parameter */
  &Copy_of_canceshi1_P.Constant17_Value_h,/* 274: Block Parameter */
  &Copy_of_canceshi1_P.Constant18_Value_p,/* 275: Block Parameter */
  &Copy_of_canceshi1_P.Constant19_Value_f,/* 276: Block Parameter */
  &Copy_of_canceshi1_P.Constant20_Value_o,/* 277: Block Parameter */
  &Copy_of_canceshi1_P.Constant21_Value_k,/* 278: Block Parameter */
  &Copy_of_canceshi1_P.Constant22_Value,/* 279: Block Parameter */
  &Copy_of_canceshi1_P.Constant23_Value_h,/* 280: Block Parameter */
  &Copy_of_canceshi1_P.Constant24_Value_m/* 281: Block Parameter */
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

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 }
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

  { rtwCAPI_VECTOR, 12, 2, 0 }
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
  6                                    /* 13 */
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
  { rtBlockSignals, 152 },

  { rtBlockParameters, 130,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void Copy_of_canceshi1_InitializeDataMapInfo(rtModel_Copy_of_canceshi1
  *Copy_of_canceshi1_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Copy_of_canceshi1_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Copy_of_canceshi1_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Copy_of_canceshi1_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Copy_of_canceshi1_rtM->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Copy_of_canceshi1_rtM->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Copy_of_canceshi1_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(Copy_of_canceshi1_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(Copy_of_canceshi1_rtM->DataMapInfo.mmi, 0);
}

/* EOF: Copy_of_canceshi1_capi.c */
