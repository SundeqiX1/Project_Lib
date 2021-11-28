/*
 * canceshi1_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "canceshi1.mdl".
 *
 * Model version              : 1.128
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Fri Nov 26 15:48:28 2021
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "canceshi1.h"
#include "rtw_capi.h"
#include "canceshi1_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "Data Type Conversion",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 2, 0, "Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 3, 0, "Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 6, 0, "Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 7, 0, "Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 8, 0, "Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 9, 0, "Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 10, 0, "Data Type Conversion4",
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

  { 24, 0, "f4",
    "", 0, 1, 1, 0, 0 },

  { 25, 0, "shengjianga",
    "", 0, 1, 0, 0, 0 },

  { 26, 0, "sifufa",
    "", 0, 1, 0, 0, 0 },

  { 27, 0, "xuanzhuana",
    "", 0, 1, 0, 0, 0 },

  { 28, 0, "Logical Operator",
    "", 0, 2, 0, 0, 0 },

  { 29, 0, "right1",
    "", 0, 3, 0, 0, 0 },

  { 30, 0, "right2",
    "", 0, 3, 0, 0, 0 },

  { 31, 0, "right3",
    "", 0, 3, 0, 0, 0 },

  { 32, 0, "Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 33, 0, "Multiport Switch1",
    "", 0, 1, 0, 0, 0 },

  { 34, 0, "Multiport Switch2",
    "", 0, 1, 0, 0, 0 },

  { 35, 0, "Multiport Switch3",
    "", 0, 1, 0, 0, 0 },

  { 36, 0, "Product",
    "", 0, 3, 0, 0, 0 },

  { 37, 0, "3402Receive ",
    "", 0, 1, 0, 0, 0 },

  { 38, 0, "3402Receive 1/p1",
    "", 0, 1, 0, 0, 0 },

  { 39, 0, "3402Receive 1/p2",
    "", 1, 1, 0, 0, 0 },

  { 40, 0, "3402Receive 1/p3",
    "", 2, 1, 0, 0, 0 },

  { 41, 0, "3402Receive 2",
    "", 0, 1, 0, 0, 0 },

  { 42, 0, "3402Receive 3",
    "", 0, 1, 0, 0, 0 },

  { 43, 0, "CAN bit-packing ",
    "", 0, 1, 0, 0, 0 },

  { 44, 0, "CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 45, 0, "CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 46, 0, "CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 47, 0, "CAN bit-packing 4",
    "", 0, 1, 0, 0, 0 },

  { 48, 0, "CAN bit-packing 5",
    "", 0, 1, 0, 0, 0 },

  { 49, 0, "CAN bit-packing 6",
    "", 0, 1, 0, 0, 0 },

  { 50, 0, "CAN bit-packing 7",
    "", 0, 1, 0, 0, 0 },

  { 51, 0, "CAN bit-unpacking /p1",
    "", 0, 3, 0, 0, 0 },

  { 52, 0, "CAN bit-unpacking /p2",
    "", 1, 3, 0, 0, 0 },

  { 53, 0, "CAN bit-unpacking /p3",
    "", 2, 3, 0, 0, 0 },

  { 54, 0, "CAN bit-unpacking /p4",
    "", 3, 3, 0, 0, 0 },

  { 55, 0, "CAN bit-unpacking 1/p1",
    "", 0, 0, 0, 0, 0 },

  { 56, 0, "CAN bit-unpacking 1/p2",
    "", 1, 0, 0, 0, 0 },

  { 57, 0, "CAN bit-unpacking 1/p3",
    "", 2, 0, 0, 0, 0 },

  { 58, 0, "CAN bit-unpacking 1/p4",
    "", 3, 0, 0, 0, 0 },

  { 59, 0, "CAN bit-unpacking 1/p5",
    "", 4, 0, 0, 0, 0 },

  { 60, 0, "CAN bit-unpacking 1/p6",
    "", 5, 0, 0, 0, 0 },

  { 61, 0, "CAN bit-unpacking 1/p7",
    "", 6, 0, 0, 0, 0 },

  { 62, 0, "CAN bit-unpacking 1/p8",
    "", 7, 0, 0, 0, 0 },

  { 63, 0, "CAN bit-unpacking 2/p1",
    "", 0, 0, 0, 0, 0 },

  { 64, 0, "CAN bit-unpacking 2/p2",
    "", 1, 0, 0, 0, 0 },

  { 65, 0, "CAN bit-unpacking 2/p3",
    "", 2, 0, 0, 0, 0 },

  { 66, 0, "CAN bit-unpacking 2/p4",
    "", 3, 0, 0, 0, 0 },

  { 67, 0, "CAN bit-unpacking 3/p1",
    "", 0, 0, 0, 0, 0 },

  { 68, 0, "CAN bit-unpacking 3/p2",
    "", 1, 0, 0, 0, 0 },

  { 69, 0, "CAN bit-unpacking 3/p3",
    "", 2, 0, 0, 0, 0 },

  { 70, 0, "CAN bit-unpacking 3/p4",
    "", 3, 0, 0, 0, 0 },

  { 71, 0, "CAN bit-unpacking 4/p1",
    "", 0, 0, 0, 0, 0 },

  { 72, 0, "CAN bit-unpacking 4/p2",
    "", 1, 0, 0, 0, 0 },

  { 73, 0, "CAN bit-unpacking 4/p3",
    "", 2, 0, 0, 0, 0 },

  { 74, 0, "CAN bit-unpacking 4/p4",
    "", 3, 0, 0, 0, 0 },

  { 75, 0, "CAN bit-unpacking 4/p5",
    "", 4, 0, 0, 0, 0 },

  { 76, 0, "CAN bit-unpacking 5/p1",
    "", 0, 0, 0, 0, 0 },

  { 77, 0, "CAN bit-unpacking 5/p2",
    "", 1, 0, 0, 0, 0 },

  { 78, 0, "CAN bit-unpacking 5/p3",
    "", 2, 0, 0, 0, 0 },

  { 79, 0, "CAN bit-unpacking 5/p4",
    "", 3, 0, 0, 0, 0 },

  { 80, 0, "CAN bit-unpacking 5/p5",
    "", 4, 0, 0, 0, 0 },

  { 81, 0, "PCL731",
    "", 0, 1, 3, 0, 0 },

  { 82, 0, "Add",
    "", 0, 1, 0, 0, 0 },

  { 83, 0, "255_15shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 84, 0, "255_15shineng/Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 85, 0, "255_15shineng/Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 86, 0, "255_15shineng/Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 87, 0, "255_15shineng/Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 88, 0, "255_15shineng/Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 89, 0, "255_15shineng/Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 90, 0, "255_15shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 91, 0, "255_15shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 92, 0, "255_15shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 93, 0, "255_15shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 94, 0, "255_15shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 95, 0, "255_15shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 96, 0, "255_15shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 97, 0, "255_15shineng/Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 98, 0, "255_15shineng/Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 99, 0, "255_15shineng/CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 100, 0, "255_15shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 101, 0, "255shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 102, 0, "255shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 103, 0, "255shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 104, 0, "255shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 105, 0, "255shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 106, 0, "255shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 107, 0, "255shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 108, 0, "255shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 109, 0, "255shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 110, 0, "Compare To Constant/Compare",
    "", 0, 0, 0, 0, 0 },

  { 111, 0, "Compare To Constant1/Compare",
    "", 0, 0, 0, 0, 0 },

  { 112, 0, "Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 113, 0, "Manual Switch1/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 114, 0, "Manual Switch2/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 115, 0, "Subsystem/Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 116, 0, "Subsystem/Multiport Switch1",
    "", 0, 1, 0, 0, 0 },

  { 117, 0, "Subsystem1/Relational Operator",
    "", 0, 2, 0, 0, 0 },

  { 118, 0, "Subsystem1/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 119, 0, "Subsystem2/Relational Operator",
    "", 0, 2, 0, 0, 0 },

  { 120, 0, "Subsystem2/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 121, 0, "Subsystem3/Relational Operator",
    "", 0, 2, 0, 0, 0 },

  { 122, 0, "Subsystem3/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 123, 0, "Subsystem4/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 124, 0, "Subsystem4/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 125, 0, "Subsystem4/CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 126, 0, "Subsystem5/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 127, 0, "Subsystem5/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 128, 0, "Subsystem5/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 129, 0, "Subsystem5/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 130, 0, "Subsystem5/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 131, 0, "Subsystem5/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 132, 0, "Subsystem5/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 133, 0, "Subsystem5/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 134, 0, "Subsystem5/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 135, 0, "Subsystem6/Add",
    "", 0, 1, 0, 0, 0 },

  { 136, 0, "255_15shineng/Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 137, 1, "255_15shineng/Manual Switch1/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 138, 0, "255_15shineng/jihuo/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 139, 0, "255_15shineng/jihuo/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 140, 0, "255_15shineng/jihuo/Data Type Conversion19",
    "", 0, 0, 0, 0, 0 },

  { 141, 0, "255_15shineng/jihuo/Data Type Conversion20",
    "", 0, 0, 0, 0, 0 },

  { 142, 0, "255_15shineng/jihuo/Data Type Conversion21",
    "", 0, 0, 0, 0, 0 },

  { 143, 0, "255_15shineng/jihuo/Data Type Conversion22",
    "", 0, 0, 0, 0, 0 },

  { 144, 0, "255_15shineng/jihuo/Data Type Conversion23",
    "", 0, 0, 0, 0, 0 },

  { 145, 0, "255_15shineng/jihuo/Data Type Conversion24",
    "", 0, 0, 0, 0, 0 },

  { 146, 0, "255_15shineng/jihuo/CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 147, 0, "Subsystem6/Compare To Constant/Compare",
    "", 0, 2, 0, 0, 0 },

  { 148, 0, "Subsystem6/Compare To Constant1/Compare",
    "", 0, 2, 0, 0, 0 },

  { 149, 0, "Subsystem6/Compare To Constant2/Compare",
    "", 0, 2, 0, 0, 0 },

  { 150, 0, "Subsystem6/Compare To Constant3/Compare",
    "", 0, 2, 0, 0, 0 },

  { 151, 0, "Subsystem6/Compare To Constant4/Compare",
    "", 0, 2, 0, 0, 0 },

  { 152, 0, "Subsystem6/Compare To Constant5/Compare",
    "", 0, 2, 0, 0, 0 },

  { 153, 0, "Subsystem6/Subsystem/Logical Operator",
    "", 0, 2, 0, 0, 0 },

  { 154, 0, "Subsystem6/Subsystem/Product",
    "", 0, 1, 0, 0, 0 },

  { 155, 0, "Subsystem6/Subsystem1/Logical Operator",
    "", 0, 2, 0, 0, 0 },

  { 156, 0, "Subsystem6/Subsystem1/Product1",
    "", 0, 1, 0, 0, 0 },

  { 157, 0, "Subsystem6/Subsystem2/Logical Operator",
    "", 0, 2, 0, 0, 0 },

  { 158, 0, "Subsystem6/Subsystem2/Product",
    "", 0, 1, 0, 0, 0 },

  { 159, 0, "Subsystem6/Subsystem2/Product1",
    "", 0, 1, 0, 0, 0 },

  { 160, 0, "Subsystem6/Subsystem3/Logical Operator",
    "", 0, 2, 0, 0, 0 },

  { 161, 0, "Subsystem6/Subsystem3/Product",
    "", 0, 1, 0, 0, 0 },

  { 162, 0, "Subsystem6/Subsystem3/Product1",
    "", 0, 1, 0, 0, 0 },

  { 163, 0, "Subsystem6/Subsystem4/Logical Operator",
    "", 0, 2, 0, 0, 0 },

  { 164, 0, "Subsystem6/Subsystem4/Product",
    "", 0, 1, 0, 0, 0 },

  { 165, 0, "Subsystem6/Subsystem5/Logical Operator",
    "", 0, 2, 0, 0, 0 },

  { 166, 0, "Subsystem6/Subsystem5/Product",
    "", 0, 1, 0, 0, 0 },

  { 167, 0, "Subsystem6/Subsystem/Compare To Constant/Compare",
    "", 0, 2, 0, 0, 0 },

  { 168, 0, "Subsystem6/Subsystem1/Compare To Constant/Compare",
    "", 0, 2, 0, 0, 0 },

  { 169, 0, "Subsystem6/Subsystem2/Compare To Constant/Compare",
    "", 0, 2, 0, 0, 0 },

  { 170, 0, "Subsystem6/Subsystem2/Compare To Constant1/Compare",
    "", 0, 2, 0, 0, 0 },

  { 171, 0, "Subsystem6/Subsystem3/Compare To Constant/Compare",
    "", 0, 2, 0, 0, 0 },

  { 172, 0, "Subsystem6/Subsystem4/Compare To Constant/Compare",
    "", 0, 2, 0, 0, 0 },

  { 173, 0, "Subsystem6/Subsystem5/Compare To Constant/Compare",
    "", 0, 2, 0, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 174, "88",
    "Value", 1, 0, 0 },

  { 175, "99",
    "Value", 1, 0, 0 },

  { 176, "Constant",
    "Value", 1, 0, 0 },

  { 177, "Constant10",
    "Value", 1, 0, 0 },

  { 178, "Constant11",
    "Value", 1, 0, 0 },

  { 179, "Constant12",
    "Value", 1, 0, 0 },

  { 180, "Constant13",
    "Value", 1, 0, 0 },

  { 181, "Constant14",
    "Value", 1, 0, 0 },

  { 182, "Constant15",
    "Value", 1, 0, 0 },

  { 183, "Constant16",
    "Value", 1, 0, 0 },

  { 184, "Constant17",
    "Value", 1, 0, 0 },

  { 185, "Constant18",
    "Value", 1, 0, 0 },

  { 186, "Constant19",
    "Value", 1, 0, 0 },

  { 187, "Constant2",
    "Value", 1, 0, 0 },

  { 188, "Constant20",
    "Value", 1, 0, 0 },

  { 189, "Constant21",
    "Value", 1, 0, 0 },

  { 190, "Constant23",
    "Value", 1, 0, 0 },

  { 191, "Constant24",
    "Value", 1, 0, 0 },

  { 192, "Constant25",
    "Value", 1, 0, 0 },

  { 193, "Constant26",
    "Value", 1, 0, 0 },

  { 194, "Constant3",
    "Value", 1, 0, 0 },

  { 195, "Constant4",
    "Value", 1, 0, 0 },

  { 196, "Constant5",
    "Value", 1, 0, 0 },

  { 197, "Constant6",
    "Value", 1, 0, 0 },

  { 198, "Constant7",
    "Value", 1, 0, 0 },

  { 199, "Constant8",
    "Value", 1, 0, 0 },

  { 200, "Constant9",
    "Value", 1, 0, 0 },

  { 201, "baozhuay",
    "Value", 1, 0, 0 },

  { 202, "constant1",
    "Value", 1, 0, 0 },

  { 203, "constant10",
    "Value", 1, 0, 0 },

  { 204, "constant11",
    "Value", 1, 0, 0 },

  { 205, "constant12",
    "Value", 1, 0, 0 },

  { 206, "constant13",
    "Value", 1, 0, 0 },

  { 207, "constant2",
    "Value", 1, 0, 0 },

  { 208, "constant3",
    "Value", 1, 0, 0 },

  { 209, "constant4",
    "Value", 1, 0, 0 },

  { 210, "constant5",
    "Value", 1, 0, 0 },

  { 211, "constant6",
    "Value", 1, 0, 0 },

  { 212, "constant7",
    "Value", 1, 0, 0 },

  { 213, "constant9",
    "Value", 1, 0, 0 },

  { 214, "shengjiangy",
    "Value", 1, 0, 0 },

  { 215, "shengjiangy1",
    "Value", 1, 0, 0 },

  { 216, "xuanzhuany",
    "Value", 1, 0, 0 },

  { 217, "xuanzhuany1",
    "Value", 1, 0, 0 },

  { 218, "right1",
    "InputValues", 3, 4, 0 },

  { 219, "right1",
    "Table", 3, 4, 0 },

  { 220, "right2",
    "InputValues", 3, 4, 0 },

  { 221, "right2",
    "Table", 3, 4, 0 },

  { 222, "right3",
    "InputValues", 3, 4, 0 },

  { 223, "right3",
    "Table", 3, 4, 0 },

  { 224, "PCL731",
    "P1", 1, 0, 0 },

  { 225, "PCL731",
    "P2", 1, 4, 0 },

  { 226, "Setup ",
    "P1", 1, 5, 0 },

  { 227, "Setup ",
    "P2", 1, 5, 0 },

  { 228, "Setup ",
    "P3", 1, 6, 0 },

  { 229, "Setup ",
    "P4", 1, 7, 0 },

  { 230, "Setup ",
    "P5", 1, 0, 0 },

  { 231, "Setup ",
    "P6", 1, 0, 0 },

  { 232, "Setup ",
    "P11", 1, 7, 0 },

  { 233, "Setup ",
    "P13", 1, 0, 0 },

  { 234, "Setup ",
    "P15", 1, 0, 0 },

  { 235, "Setup ",
    "P16", 1, 0, 0 },

  { 236, "Setup ",
    "P17", 1, 0, 0 },

  { 237, "Setup ",
    "P18", 1, 0, 0 },

  { 238, "Setup ",
    "P19", 1, 0, 0 },

  { 239, "Setup ",
    "P20", 1, 0, 0 },

  { 240, "Setup ",
    "P21", 1, 0, 0 },

  { 241, "Setup ",
    "P22", 1, 0, 0 },

  { 242, "Setup ",
    "P23", 1, 0, 0 },

  { 243, "Setup ",
    "P24", 1, 0, 0 },

  { 244, "255_15shineng/Constant1",
    "Value", 1, 0, 0 },

  { 245, "255_15shineng/Constant10",
    "Value", 1, 0, 0 },

  { 246, "255_15shineng/Constant11",
    "Value", 1, 0, 0 },

  { 247, "255_15shineng/Constant12",
    "Value", 1, 0, 0 },

  { 248, "255_15shineng/Constant13",
    "Value", 1, 0, 0 },

  { 249, "255_15shineng/Constant14",
    "Value", 1, 0, 0 },

  { 250, "255_15shineng/Constant15",
    "Value", 1, 0, 0 },

  { 251, "255_15shineng/Constant16",
    "Value", 1, 0, 0 },

  { 252, "255_15shineng/Constant2",
    "Value", 1, 0, 0 },

  { 253, "255_15shineng/Constant3",
    "Value", 1, 0, 0 },

  { 254, "255_15shineng/Constant4",
    "Value", 1, 0, 0 },

  { 255, "255_15shineng/Constant5",
    "Value", 1, 0, 0 },

  { 256, "255_15shineng/Constant6",
    "Value", 1, 0, 0 },

  { 257, "255_15shineng/Constant7",
    "Value", 1, 0, 0 },

  { 258, "255_15shineng/Constant8",
    "Value", 1, 0, 0 },

  { 259, "255_15shineng/Constant9",
    "Value", 1, 0, 0 },

  { 260, "255shineng/Constant1",
    "Value", 1, 0, 0 },

  { 261, "255shineng/Constant16",
    "Value", 1, 0, 0 },

  { 262, "255shineng/Constant2",
    "Value", 1, 0, 0 },

  { 263, "255shineng/Constant3",
    "Value", 1, 0, 0 },

  { 264, "255shineng/Constant4",
    "Value", 1, 0, 0 },

  { 265, "255shineng/Constant5",
    "Value", 1, 0, 0 },

  { 266, "255shineng/Constant6",
    "Value", 1, 0, 0 },

  { 267, "255shineng/Constant7",
    "Value", 1, 0, 0 },

  { 268, "Compare To Constant/Constant",
    "Value", 0, 0, 0 },

  { 269, "Compare To Constant1/Constant",
    "Value", 0, 0, 0 },

  { 270, "Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 271, "Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 272, "Manual Switch1/Constant",
    "Value", 0, 0, 0 },

  { 273, "Manual Switch1/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 274, "Manual Switch2/Constant",
    "Value", 0, 0, 0 },

  { 275, "Manual Switch2/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 276, "Subsystem/Constant1",
    "Value", 1, 0, 0 },

  { 277, "Subsystem/Constant2",
    "Value", 1, 0, 0 },

  { 278, "Subsystem/Constant28",
    "Value", 1, 0, 0 },

  { 279, "Subsystem/Constant29",
    "Value", 1, 0, 0 },

  { 280, "Subsystem/Constant3",
    "Value", 1, 0, 0 },

  { 281, "Subsystem/Constant30",
    "Value", 1, 0, 0 },

  { 282, "Subsystem/Constant31",
    "Value", 1, 0, 0 },

  { 283, "Subsystem/Constant32",
    "Value", 1, 0, 0 },

  { 284, "Subsystem/Constant33",
    "Value", 1, 0, 0 },

  { 285, "Subsystem/Constant4",
    "Value", 1, 0, 0 },

  { 286, "Subsystem/Constant5",
    "Value", 1, 0, 0 },

  { 287, "Subsystem/Constant6",
    "Value", 1, 0, 0 },

  { 288, "Subsystem/Constant7",
    "Value", 1, 0, 0 },

  { 289, "Subsystem/Constant8",
    "Value", 1, 0, 0 },

  { 290, "Subsystem1/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 291, "Subsystem2/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 292, "Subsystem3/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 293, "Subsystem5/Constant16",
    "Value", 1, 0, 0 },

  { 294, "Subsystem5/Constant2",
    "Value", 1, 0, 0 },

  { 295, "Subsystem5/Constant3",
    "Value", 1, 0, 0 },

  { 296, "Subsystem5/Constant4",
    "Value", 1, 0, 0 },

  { 297, "Subsystem5/Constant5",
    "Value", 1, 0, 0 },

  { 298, "Subsystem5/Constant6",
    "Value", 1, 0, 0 },

  { 299, "Subsystem5/Constant7",
    "Value", 1, 0, 0 },

  { 300, "Subsystem5/Constant8",
    "Value", 1, 0, 0 },

  { 301, "255_15shineng/Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 302, "255_15shineng/Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 303, "255_15shineng/Manual Switch1/Constant",
    "Value", 0, 0, 0 },

  { 304, "255_15shineng/Manual Switch1/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 305, "255_15shineng/jihuo/Constant17",
    "Value", 1, 0, 0 },

  { 306, "255_15shineng/jihuo/Constant18",
    "Value", 1, 0, 0 },

  { 307, "255_15shineng/jihuo/Constant19",
    "Value", 1, 0, 0 },

  { 308, "255_15shineng/jihuo/Constant20",
    "Value", 1, 0, 0 },

  { 309, "255_15shineng/jihuo/Constant21",
    "Value", 1, 0, 0 },

  { 310, "255_15shineng/jihuo/Constant22",
    "Value", 1, 0, 0 },

  { 311, "255_15shineng/jihuo/Constant23",
    "Value", 1, 0, 0 },

  { 312, "255_15shineng/jihuo/Constant24",
    "Value", 1, 0, 0 },

  { 313, "Subsystem6/Compare To Constant/Constant",
    "Value", 1, 0, 0 },

  { 314, "Subsystem6/Compare To Constant1/Constant",
    "Value", 1, 0, 0 },

  { 315, "Subsystem6/Compare To Constant2/Constant",
    "Value", 1, 0, 0 },

  { 316, "Subsystem6/Compare To Constant3/Constant",
    "Value", 1, 0, 0 },

  { 317, "Subsystem6/Compare To Constant4/Constant",
    "Value", 1, 0, 0 },

  { 318, "Subsystem6/Compare To Constant5/Constant",
    "Value", 1, 0, 0 },

  { 319, "Subsystem6/Subsystem/Constant",
    "Value", 1, 0, 0 },

  { 320, "Subsystem6/Subsystem1/Constant1",
    "Value", 1, 0, 0 },

  { 321, "Subsystem6/Subsystem2/Constant",
    "Value", 1, 0, 0 },

  { 322, "Subsystem6/Subsystem2/Constant1",
    "Value", 1, 0, 0 },

  { 323, "Subsystem6/Subsystem3/Constant",
    "Value", 1, 0, 0 },

  { 324, "Subsystem6/Subsystem3/Constant1",
    "Value", 1, 0, 0 },

  { 325, "Subsystem6/Subsystem4/Constant",
    "Value", 1, 0, 0 },

  { 326, "Subsystem6/Subsystem5/Constant",
    "Value", 1, 0, 0 },

  { 327, "Subsystem6/Subsystem/Compare To Constant/Constant",
    "Value", 3, 0, 0 },

  { 328, "Subsystem6/Subsystem1/Compare To Constant/Constant",
    "Value", 3, 0, 0 },

  { 329, "Subsystem6/Subsystem2/Compare To Constant/Constant",
    "Value", 3, 0, 0 },

  { 330, "Subsystem6/Subsystem2/Compare To Constant1/Constant",
    "Value", 3, 0, 0 },

  { 331, "Subsystem6/Subsystem3/Compare To Constant/Constant",
    "Value", 3, 0, 0 },

  { 332, "Subsystem6/Subsystem4/Compare To Constant/Constant",
    "Value", 3, 0, 0 },

  { 333, "Subsystem6/Subsystem5/Compare To Constant/Constant",
    "Value", 3, 0, 0 },

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
  &canceshi1_B.DataTypeConversion,     /* 0: Signal */
  &canceshi1_B.DataTypeConversion1_d,  /* 1: Signal */
  &canceshi1_B.DataTypeConversion12,   /* 2: Signal */
  &canceshi1_B.DataTypeConversion13,   /* 3: Signal */
  &canceshi1_B.DataTypeConversion14,   /* 4: Signal */
  &canceshi1_B.DataTypeConversion15,   /* 5: Signal */
  &canceshi1_B.DataTypeConversion16_m, /* 6: Signal */
  &canceshi1_B.DataTypeConversion17_c, /* 7: Signal */
  &canceshi1_B.DataTypeConversion2_b,  /* 8: Signal */
  &canceshi1_B.DataTypeConversion3_b,  /* 9: Signal */
  &canceshi1_B.DataTypeConversion4_c,  /* 10: Signal */
  &canceshi1_B.DataTypeConversion5,    /* 11: Signal */
  &canceshi1_B.DataTypeConversion6,    /* 12: Signal */
  &canceshi1_B.DataTypeConversion7,    /* 13: Signal */
  &canceshi1_B.DataTypeConversion8,    /* 14: Signal */
  &canceshi1_B.DataTypeConversion9,    /* 15: Signal */
  &canceshi1_B.a[0],                   /* 16: Signal */
  &canceshi1_B.b[0],                   /* 17: Signal */
  &canceshi1_B.baozhuaa,               /* 18: Signal */
  &canceshi1_B.c[0],                   /* 19: Signal */
  &canceshi1_B.d[0],                   /* 20: Signal */
  &canceshi1_B.f1,                     /* 21: Signal */
  &canceshi1_B.f2,                     /* 22: Signal */
  &canceshi1_B.f3,                     /* 23: Signal */
  &canceshi1_B.f4[0],                  /* 24: Signal */
  &canceshi1_B.shengjianga,            /* 25: Signal */
  &canceshi1_B.sifufa,                 /* 26: Signal */
  &canceshi1_B.xuanzhuana,             /* 27: Signal */
  &canceshi1_B.LogicalOperator,        /* 28: Signal */
  &canceshi1_B.right1,                 /* 29: Signal */
  &canceshi1_B.right2,                 /* 30: Signal */
  &canceshi1_B.right3,                 /* 31: Signal */
  &canceshi1_B.MultiportSwitch_k,      /* 32: Signal */
  &canceshi1_B.MultiportSwitch1_c,     /* 33: Signal */
  &canceshi1_B.MultiportSwitch2,       /* 34: Signal */
  &canceshi1_B.MultiportSwitch3,       /* 35: Signal */
  &canceshi1_B.Product_b,              /* 36: Signal */
  &canceshi1_B.u02Receive,             /* 37: Signal */
  &canceshi1_B.u02Receive1_o1,         /* 38: Signal */
  &canceshi1_B.u02Receive1_o2,         /* 39: Signal */
  &canceshi1_B.u02Receive1_o3,         /* 40: Signal */
  &canceshi1_B.u02Receive2,            /* 41: Signal */
  &canceshi1_B.u02Receive3,            /* 42: Signal */
  &canceshi1_B.CANbitpacking,          /* 43: Signal */
  &canceshi1_B.CANbitpacking1,         /* 44: Signal */
  &canceshi1_B.CANbitpacking2_l,       /* 45: Signal */
  &canceshi1_B.CANbitpacking3_d,       /* 46: Signal */
  &canceshi1_B.CANbitpacking4,         /* 47: Signal */
  &canceshi1_B.CANbitpacking5,         /* 48: Signal */
  &canceshi1_B.CANbitpacking6,         /* 49: Signal */
  &canceshi1_B.CANbitpacking7,         /* 50: Signal */
  &canceshi1_B.CANbitunpacking_o1,     /* 51: Signal */
  &canceshi1_B.CANbitunpacking_o2,     /* 52: Signal */
  &canceshi1_B.CANbitunpacking_o3,     /* 53: Signal */
  &canceshi1_B.CANbitunpacking_o4,     /* 54: Signal */
  &canceshi1_B.CANbitunpacking1_o1,    /* 55: Signal */
  &canceshi1_B.CANbitunpacking1_o2,    /* 56: Signal */
  &canceshi1_B.CANbitunpacking1_o3,    /* 57: Signal */
  &canceshi1_B.CANbitunpacking1_o4,    /* 58: Signal */
  &canceshi1_B.CANbitunpacking1_o5,    /* 59: Signal */
  &canceshi1_B.CANbitunpacking1_o6,    /* 60: Signal */
  &canceshi1_B.CANbitunpacking1_o7,    /* 61: Signal */
  &canceshi1_B.CANbitunpacking1_o8,    /* 62: Signal */
  &canceshi1_B.CANbitunpacking2_o1,    /* 63: Signal */
  &canceshi1_B.CANbitunpacking2_o2,    /* 64: Signal */
  &canceshi1_B.CANbitunpacking2_o3,    /* 65: Signal */
  &canceshi1_B.CANbitunpacking2_o4,    /* 66: Signal */
  &canceshi1_B.CANbitunpacking3_o1,    /* 67: Signal */
  &canceshi1_B.CANbitunpacking3_o2,    /* 68: Signal */
  &canceshi1_B.CANbitunpacking3_o3,    /* 69: Signal */
  &canceshi1_B.CANbitunpacking3_o4,    /* 70: Signal */
  &canceshi1_B.CANbitunpacking4_o1,    /* 71: Signal */
  &canceshi1_B.CANbitunpacking4_o2,    /* 72: Signal */
  &canceshi1_B.CANbitunpacking4_o3,    /* 73: Signal */
  &canceshi1_B.CANbitunpacking4_o4,    /* 74: Signal */
  &canceshi1_B.CANbitunpacking4_o5,    /* 75: Signal */
  &canceshi1_B.CANbitunpacking5_o1,    /* 76: Signal */
  &canceshi1_B.CANbitunpacking5_o2,    /* 77: Signal */
  &canceshi1_B.CANbitunpacking5_o3,    /* 78: Signal */
  &canceshi1_B.CANbitunpacking5_o4,    /* 79: Signal */
  &canceshi1_B.CANbitunpacking5_o5,    /* 80: Signal */
  &canceshi1_B.PCL731[0],              /* 81: Signal */
  &canceshi1_B.Add_c,                  /* 82: Signal */
  &canceshi1_B.DataTypeConversion1_e,  /* 83: Signal */
  &canceshi1_B.DataTypeConversion10,   /* 84: Signal */
  &canceshi1_B.DataTypeConversion11,   /* 85: Signal */
  &canceshi1_B.DataTypeConversion12_e, /* 86: Signal */
  &canceshi1_B.DataTypeConversion13_d, /* 87: Signal */
  &canceshi1_B.DataTypeConversion14_p, /* 88: Signal */
  &canceshi1_B.DataTypeConversion15_g, /* 89: Signal */
  &canceshi1_B.DataTypeConversion16_a, /* 90: Signal */
  &canceshi1_B.DataTypeConversion2_h,  /* 91: Signal */
  &canceshi1_B.DataTypeConversion3_bi, /* 92: Signal */
  &canceshi1_B.DataTypeConversion4_k,  /* 93: Signal */
  &canceshi1_B.DataTypeConversion5_l,  /* 94: Signal */
  &canceshi1_B.DataTypeConversion6_i,  /* 95: Signal */
  &canceshi1_B.DataTypeConversion7_a,  /* 96: Signal */
  &canceshi1_B.DataTypeConversion8_p,  /* 97: Signal */
  &canceshi1_B.DataTypeConversion9_k,  /* 98: Signal */
  &canceshi1_B.CANbitpacking1_j,       /* 99: Signal */
  &canceshi1_B.CANbitpacking2_h,       /* 100: Signal */
  &canceshi1_B.DataTypeConversion1,    /* 101: Signal */
  &canceshi1_B.DataTypeConversion16,   /* 102: Signal */
  &canceshi1_B.DataTypeConversion2,    /* 103: Signal */
  &canceshi1_B.DataTypeConversion3,    /* 104: Signal */
  &canceshi1_B.DataTypeConversion4,    /* 105: Signal */
  &canceshi1_B.DataTypeConversion5_g,  /* 106: Signal */
  &canceshi1_B.DataTypeConversion6_l,  /* 107: Signal */
  &canceshi1_B.DataTypeConversion7_l,  /* 108: Signal */
  &canceshi1_B.CANbitpacking2,         /* 109: Signal */
  &canceshi1_B.Compare,                /* 110: Signal */
  &canceshi1_B.Compare_b,              /* 111: Signal */
  &canceshi1_B.SwitchControl,          /* 112: Signal */
  &canceshi1_B.SwitchControl_o,        /* 113: Signal */
  &canceshi1_B.SwitchControl_c,        /* 114: Signal */
  &canceshi1_B.MultiportSwitch,        /* 115: Signal */
  &canceshi1_B.MultiportSwitch1,       /* 116: Signal */
  &canceshi1_B.RelationalOperator_o,   /* 117: Signal */
  &canceshi1_B.IntegerDelay_m,         /* 118: Signal */
  &canceshi1_B.RelationalOperator,     /* 119: Signal */
  &canceshi1_B.IntegerDelay,           /* 120: Signal */
  &canceshi1_B.RelationalOperator_m,   /* 121: Signal */
  &canceshi1_B.IntegerDelay_j,         /* 122: Signal */
  &canceshi1_B.DataTypeConversion17,   /* 123: Signal */
  &canceshi1_B.DataTypeConversion18,   /* 124: Signal */
  &canceshi1_B.CANbitpacking3,         /* 125: Signal */
  &canceshi1_B.DataTypeConversion1_i,  /* 126: Signal */
  &canceshi1_B.DataTypeConversion16_c, /* 127: Signal */
  &canceshi1_B.DataTypeConversion2_j,  /* 128: Signal */
  &canceshi1_B.DataTypeConversion3_n,  /* 129: Signal */
  &canceshi1_B.DataTypeConversion4_a,  /* 130: Signal */
  &canceshi1_B.DataTypeConversion5_k,  /* 131: Signal */
  &canceshi1_B.DataTypeConversion6_g,  /* 132: Signal */
  &canceshi1_B.DataTypeConversion7_m,  /* 133: Signal */
  &canceshi1_B.CANbitpacking2_k,       /* 134: Signal */
  &canceshi1_B.Add,                    /* 135: Signal */
  &canceshi1_B.SwitchControl_l,        /* 136: Signal */
  &canceshi1_B.SwitchControl_g,        /* 137: Signal */
  &canceshi1_B.DataTypeConversion17_co,/* 138: Signal */
  &canceshi1_B.DataTypeConversion18_f, /* 139: Signal */
  &canceshi1_B.DataTypeConversion19,   /* 140: Signal */
  &canceshi1_B.DataTypeConversion20,   /* 141: Signal */
  &canceshi1_B.DataTypeConversion21,   /* 142: Signal */
  &canceshi1_B.DataTypeConversion22,   /* 143: Signal */
  &canceshi1_B.DataTypeConversion23,   /* 144: Signal */
  &canceshi1_B.DataTypeConversion24,   /* 145: Signal */
  &canceshi1_B.CANbitpacking3_dd,      /* 146: Signal */
  &canceshi1_B.Compare_e,              /* 147: Signal */
  &canceshi1_B.Compare_l,              /* 148: Signal */
  &canceshi1_B.Compare_lh,             /* 149: Signal */
  &canceshi1_B.Compare_aq,             /* 150: Signal */
  &canceshi1_B.Compare_f,              /* 151: Signal */
  &canceshi1_B.Compare_li,             /* 152: Signal */
  &canceshi1_B.LogicalOperator_o,      /* 153: Signal */
  &canceshi1_B.Product_k,              /* 154: Signal */
  &canceshi1_B.LogicalOperator_aj,     /* 155: Signal */
  &canceshi1_B.Product1,               /* 156: Signal */
  &canceshi1_B.LogicalOperator_n,      /* 157: Signal */
  &canceshi1_B.Product,                /* 158: Signal */
  &canceshi1_B.Product1_p,             /* 159: Signal */
  &canceshi1_B.LogicalOperator_a,      /* 160: Signal */
  &canceshi1_B.Product_c,              /* 161: Signal */
  &canceshi1_B.Product1_n,             /* 162: Signal */
  &canceshi1_B.LogicalOperator_l,      /* 163: Signal */
  &canceshi1_B.Product_p,              /* 164: Signal */
  &canceshi1_B.LogicalOperator_p,      /* 165: Signal */
  &canceshi1_B.Product_n,              /* 166: Signal */
  &canceshi1_B.Compare_o,              /* 167: Signal */
  &canceshi1_B.Compare_go,             /* 168: Signal */
  &canceshi1_B.Compare_a,              /* 169: Signal */
  &canceshi1_B.Compare_c,              /* 170: Signal */
  &canceshi1_B.Compare_l2,             /* 171: Signal */
  &canceshi1_B.Compare_g,              /* 172: Signal */
  &canceshi1_B.Compare_k,              /* 173: Signal */
  &canceshi1_P.u_Value,                /* 174: Block Parameter */
  &canceshi1_P.u_Value_l,              /* 175: Block Parameter */
  &canceshi1_P.Constant_Value_bh,      /* 176: Block Parameter */
  &canceshi1_P.Constant10_Value,       /* 177: Block Parameter */
  &canceshi1_P.Constant11_Value,       /* 178: Block Parameter */
  &canceshi1_P.Constant12_Value,       /* 179: Block Parameter */
  &canceshi1_P.Constant13_Value,       /* 180: Block Parameter */
  &canceshi1_P.Constant14_Value,       /* 181: Block Parameter */
  &canceshi1_P.Constant15_Value,       /* 182: Block Parameter */
  &canceshi1_P.Constant16_Value,       /* 183: Block Parameter */
  &canceshi1_P.Constant17_Value,       /* 184: Block Parameter */
  &canceshi1_P.Constant18_Value,       /* 185: Block Parameter */
  &canceshi1_P.Constant19_Value,       /* 186: Block Parameter */
  &canceshi1_P.Constant2_Value_m,      /* 187: Block Parameter */
  &canceshi1_P.Constant20_Value,       /* 188: Block Parameter */
  &canceshi1_P.Constant21_Value,       /* 189: Block Parameter */
  &canceshi1_P.Constant23_Value,       /* 190: Block Parameter */
  &canceshi1_P.Constant24_Value,       /* 191: Block Parameter */
  &canceshi1_P.Constant25_Value,       /* 192: Block Parameter */
  &canceshi1_P.Constant26_Value,       /* 193: Block Parameter */
  &canceshi1_P.Constant3_Value_f,      /* 194: Block Parameter */
  &canceshi1_P.Constant4_Value_m,      /* 195: Block Parameter */
  &canceshi1_P.Constant5_Value_h,      /* 196: Block Parameter */
  &canceshi1_P.Constant6_Value_d,      /* 197: Block Parameter */
  &canceshi1_P.Constant7_Value_m,      /* 198: Block Parameter */
  &canceshi1_P.Constant8_Value_p,      /* 199: Block Parameter */
  &canceshi1_P.Constant9_Value,        /* 200: Block Parameter */
  &canceshi1_P.baozhuay_Value,         /* 201: Block Parameter */
  &canceshi1_P.constant1_Value,        /* 202: Block Parameter */
  &canceshi1_P.constant10_Value,       /* 203: Block Parameter */
  &canceshi1_P.constant11_Value,       /* 204: Block Parameter */
  &canceshi1_P.constant12_Value,       /* 205: Block Parameter */
  &canceshi1_P.constant13_Value,       /* 206: Block Parameter */
  &canceshi1_P.constant2_Value,        /* 207: Block Parameter */
  &canceshi1_P.constant3_Value,        /* 208: Block Parameter */
  &canceshi1_P.constant4_Value,        /* 209: Block Parameter */
  &canceshi1_P.constant5_Value,        /* 210: Block Parameter */
  &canceshi1_P.constant6_Value,        /* 211: Block Parameter */
  &canceshi1_P.constant7_Value,        /* 212: Block Parameter */
  &canceshi1_P.constant9_Value,        /* 213: Block Parameter */
  &canceshi1_P.shengjiangy_Value,      /* 214: Block Parameter */
  &canceshi1_P.shengjiangy1_Value,     /* 215: Block Parameter */
  &canceshi1_P.xuanzhuany_Value,       /* 216: Block Parameter */
  &canceshi1_P.xuanzhuany1_Value,      /* 217: Block Parameter */
  &canceshi1_P.right1_XData[0],        /* 218: Block Parameter */
  &canceshi1_P.right1_YData[0],        /* 219: Block Parameter */
  &canceshi1_P.right2_XData[0],        /* 220: Block Parameter */
  &canceshi1_P.right2_YData[0],        /* 221: Block Parameter */
  &canceshi1_P.right3_XData[0],        /* 222: Block Parameter */
  &canceshi1_P.right3_YData[0],        /* 223: Block Parameter */
  &canceshi1_P.PCL731_P1,              /* 224: Block Parameter */
  &canceshi1_P.PCL731_P2[0],           /* 225: Block Parameter */
  &canceshi1_P.Setup_P1[0],            /* 226: Block Parameter */
  &canceshi1_P.Setup_P2[0],            /* 227: Block Parameter */
  &canceshi1_P.Setup_P3[0],            /* 228: Block Parameter */
  &canceshi1_P.Setup_P4[0],            /* 229: Block Parameter */
  &canceshi1_P.Setup_P5,               /* 230: Block Parameter */
  &canceshi1_P.Setup_P6,               /* 231: Block Parameter */
  &canceshi1_P.Setup_P11[0],           /* 232: Block Parameter */
  &canceshi1_P.Setup_P13,              /* 233: Block Parameter */
  &canceshi1_P.Setup_P15,              /* 234: Block Parameter */
  &canceshi1_P.Setup_P16,              /* 235: Block Parameter */
  &canceshi1_P.Setup_P17,              /* 236: Block Parameter */
  &canceshi1_P.Setup_P18,              /* 237: Block Parameter */
  &canceshi1_P.Setup_P19,              /* 238: Block Parameter */
  &canceshi1_P.Setup_P20,              /* 239: Block Parameter */
  &canceshi1_P.Setup_P21,              /* 240: Block Parameter */
  &canceshi1_P.Setup_P22,              /* 241: Block Parameter */
  &canceshi1_P.Setup_P23,              /* 242: Block Parameter */
  &canceshi1_P.Setup_P24,              /* 243: Block Parameter */
  &canceshi1_P.Constant1_Value_b5,     /* 244: Block Parameter */
  &canceshi1_P.Constant10_Value_j,     /* 245: Block Parameter */
  &canceshi1_P.Constant11_Value_j,     /* 246: Block Parameter */
  &canceshi1_P.Constant12_Value_g,     /* 247: Block Parameter */
  &canceshi1_P.Constant13_Value_d,     /* 248: Block Parameter */
  &canceshi1_P.Constant14_Value_g,     /* 249: Block Parameter */
  &canceshi1_P.Constant15_Value_i,     /* 250: Block Parameter */
  &canceshi1_P.Constant16_Value_p,     /* 251: Block Parameter */
  &canceshi1_P.Constant2_Value_h,      /* 252: Block Parameter */
  &canceshi1_P.Constant3_Value_a,      /* 253: Block Parameter */
  &canceshi1_P.Constant4_Value_my,     /* 254: Block Parameter */
  &canceshi1_P.Constant5_Value_c,      /* 255: Block Parameter */
  &canceshi1_P.Constant6_Value_o,      /* 256: Block Parameter */
  &canceshi1_P.Constant7_Value_e,      /* 257: Block Parameter */
  &canceshi1_P.Constant8_Value_h,      /* 258: Block Parameter */
  &canceshi1_P.Constant9_Value_i,      /* 259: Block Parameter */
  &canceshi1_P.Constant1_Value_b,      /* 260: Block Parameter */
  &canceshi1_P.Constant16_Value_f,     /* 261: Block Parameter */
  &canceshi1_P.Constant2_Value_g,      /* 262: Block Parameter */
  &canceshi1_P.Constant3_Value_c,      /* 263: Block Parameter */
  &canceshi1_P.Constant4_Value_a,      /* 264: Block Parameter */
  &canceshi1_P.Constant5_Value_f,      /* 265: Block Parameter */
  &canceshi1_P.Constant6_Value_p,      /* 266: Block Parameter */
  &canceshi1_P.Constant7_Value_mg,     /* 267: Block Parameter */
  &canceshi1_P.Constant_Value_nf,      /* 268: Block Parameter */
  &canceshi1_P.Constant_Value_k2,      /* 269: Block Parameter */
  &canceshi1_P.Constant_Value_dg,      /* 270: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold_n,/* 271: Block Parameter */
  &canceshi1_P.Constant_Value_iq,      /* 272: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold_m,/* 273: Block Parameter */
  &canceshi1_P.Constant_Value_if,      /* 274: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold_f,/* 275: Block Parameter */
  &canceshi1_P.Constant1_Value,        /* 276: Block Parameter */
  &canceshi1_P.Constant2_Value,        /* 277: Block Parameter */
  &canceshi1_P.Constant28_Value,       /* 278: Block Parameter */
  &canceshi1_P.Constant29_Value,       /* 279: Block Parameter */
  &canceshi1_P.Constant3_Value,        /* 280: Block Parameter */
  &canceshi1_P.Constant30_Value,       /* 281: Block Parameter */
  &canceshi1_P.Constant31_Value,       /* 282: Block Parameter */
  &canceshi1_P.Constant32_Value,       /* 283: Block Parameter */
  &canceshi1_P.Constant33_Value,       /* 284: Block Parameter */
  &canceshi1_P.Constant4_Value,        /* 285: Block Parameter */
  &canceshi1_P.Constant5_Value,        /* 286: Block Parameter */
  &canceshi1_P.Constant6_Value,        /* 287: Block Parameter */
  &canceshi1_P.Constant7_Value,        /* 288: Block Parameter */
  &canceshi1_P.Constant8_Value,        /* 289: Block Parameter */
  &canceshi1_P.IntegerDelay_InitialCondition_b,/* 290: Block Parameter */
  &canceshi1_P.IntegerDelay_InitialCondition,/* 291: Block Parameter */
  &canceshi1_P.IntegerDelay_InitialCondition_l,/* 292: Block Parameter */
  &canceshi1_P.Constant16_Value_c,     /* 293: Block Parameter */
  &canceshi1_P.Constant2_Value_p,      /* 294: Block Parameter */
  &canceshi1_P.Constant3_Value_b,      /* 295: Block Parameter */
  &canceshi1_P.Constant4_Value_l,      /* 296: Block Parameter */
  &canceshi1_P.Constant5_Value_fj,     /* 297: Block Parameter */
  &canceshi1_P.Constant6_Value_m,      /* 298: Block Parameter */
  &canceshi1_P.Constant7_Value_mk,     /* 299: Block Parameter */
  &canceshi1_P.Constant8_Value_i,      /* 300: Block Parameter */
  &canceshi1_P.Constant_Value_do,      /* 301: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold_a,/* 302: Block Parameter */
  &canceshi1_P.Constant_Value_pw,      /* 303: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold,/* 304: Block Parameter */
  &canceshi1_P.Constant17_Value_k,     /* 305: Block Parameter */
  &canceshi1_P.Constant18_Value_i,     /* 306: Block Parameter */
  &canceshi1_P.Constant19_Value_d,     /* 307: Block Parameter */
  &canceshi1_P.Constant20_Value_b,     /* 308: Block Parameter */
  &canceshi1_P.Constant21_Value_i,     /* 309: Block Parameter */
  &canceshi1_P.Constant22_Value,       /* 310: Block Parameter */
  &canceshi1_P.Constant23_Value_f,     /* 311: Block Parameter */
  &canceshi1_P.Constant24_Value_k,     /* 312: Block Parameter */
  &canceshi1_P.Constant_Value_n,       /* 313: Block Parameter */
  &canceshi1_P.Constant_Value_k,       /* 314: Block Parameter */
  &canceshi1_P.Constant_Value_m,       /* 315: Block Parameter */
  &canceshi1_P.Constant_Value_aq,      /* 316: Block Parameter */
  &canceshi1_P.Constant_Value_b,       /* 317: Block Parameter */
  &canceshi1_P.Constant_Value_d,       /* 318: Block Parameter */
  &canceshi1_P.Constant_Value_g,       /* 319: Block Parameter */
  &canceshi1_P.Constant1_Value_p,      /* 320: Block Parameter */
  &canceshi1_P.Constant_Value,         /* 321: Block Parameter */
  &canceshi1_P.Constant1_Value_c,      /* 322: Block Parameter */
  &canceshi1_P.Constant_Value_f,       /* 323: Block Parameter */
  &canceshi1_P.Constant1_Value_j,      /* 324: Block Parameter */
  &canceshi1_P.Constant_Value_a,       /* 325: Block Parameter */
  &canceshi1_P.Constant_Value_h,       /* 326: Block Parameter */
  &canceshi1_P.Constant_Value_c,       /* 327: Block Parameter */
  &canceshi1_P.Constant_Value_ap,      /* 328: Block Parameter */
  &canceshi1_P.Constant_Value_kv,      /* 329: Block Parameter */
  &canceshi1_P.Constant_Value_i,       /* 330: Block Parameter */
  &canceshi1_P.Constant_Value_ag,      /* 331: Block Parameter */
  &canceshi1_P.Constant_Value_gd,      /* 332: Block Parameter */
  &canceshi1_P.Constant_Value_p        /* 333: Block Parameter */
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

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

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
  6,                                   /* 13 */
  1,                                   /* 14 */
  5                                    /* 15 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.2, 0.0
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
  { rtBlockSignals, 174 },

  { rtBlockParameters, 160,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void canceshi1_InitializeDataMapInfo(rtModel_canceshi1 *canceshi1_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(canceshi1_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(canceshi1_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(canceshi1_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(canceshi1_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(canceshi1_rtM->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(canceshi1_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(canceshi1_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(canceshi1_rtM->DataMapInfo.mmi, 0);
}

/* EOF: canceshi1_capi.c */
