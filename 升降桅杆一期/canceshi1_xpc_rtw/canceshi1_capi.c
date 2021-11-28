/*
 * canceshi1_capi.c
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

  { 28, 0, "right1",
    "", 0, 2, 0, 0, 0 },

  { 29, 0, "right2",
    "", 0, 2, 0, 0, 0 },

  { 30, 0, "right3",
    "", 0, 2, 0, 0, 0 },

  { 31, 0, "Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 32, 0, "Multiport Switch1",
    "", 0, 1, 0, 0, 0 },

  { 33, 0, "Multiport Switch2",
    "", 0, 1, 0, 0, 0 },

  { 34, 0, "Multiport Switch3",
    "", 0, 1, 0, 0, 0 },

  { 35, 0, "3402Receive ",
    "", 0, 1, 0, 0, 0 },

  { 36, 0, "3402Receive 1/p1",
    "", 0, 1, 0, 0, 0 },

  { 37, 0, "3402Receive 1/p2",
    "", 1, 1, 0, 0, 0 },

  { 38, 0, "3402Receive 1/p3",
    "", 2, 1, 0, 0, 0 },

  { 39, 0, "3402Receive 2",
    "", 0, 1, 0, 0, 0 },

  { 40, 0, "3402Receive 3",
    "", 0, 1, 0, 0, 0 },

  { 41, 0, "CAN bit-packing ",
    "", 0, 1, 0, 0, 0 },

  { 42, 0, "CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 43, 0, "CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 44, 0, "CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 45, 0, "CAN bit-packing 4",
    "", 0, 1, 0, 0, 0 },

  { 46, 0, "CAN bit-packing 5",
    "", 0, 1, 0, 0, 0 },

  { 47, 0, "CAN bit-packing 6",
    "", 0, 1, 0, 0, 0 },

  { 48, 0, "CAN bit-packing 7",
    "", 0, 1, 0, 0, 0 },

  { 49, 0, "CAN bit-unpacking /p1",
    "", 0, 2, 0, 0, 0 },

  { 50, 0, "CAN bit-unpacking /p2",
    "", 1, 2, 0, 0, 0 },

  { 51, 0, "CAN bit-unpacking /p3",
    "", 2, 2, 0, 0, 0 },

  { 52, 0, "CAN bit-unpacking /p4",
    "", 3, 2, 0, 0, 0 },

  { 53, 0, "CAN bit-unpacking 1/p1",
    "", 0, 0, 0, 0, 0 },

  { 54, 0, "CAN bit-unpacking 1/p2",
    "", 1, 0, 0, 0, 0 },

  { 55, 0, "CAN bit-unpacking 1/p3",
    "", 2, 0, 0, 0, 0 },

  { 56, 0, "CAN bit-unpacking 1/p4",
    "", 3, 0, 0, 0, 0 },

  { 57, 0, "CAN bit-unpacking 1/p5",
    "", 4, 0, 0, 0, 0 },

  { 58, 0, "CAN bit-unpacking 1/p6",
    "", 5, 0, 0, 0, 0 },

  { 59, 0, "CAN bit-unpacking 1/p7",
    "", 6, 0, 0, 0, 0 },

  { 60, 0, "CAN bit-unpacking 1/p8",
    "", 7, 0, 0, 0, 0 },

  { 61, 0, "CAN bit-unpacking 2/p1",
    "", 0, 0, 0, 0, 0 },

  { 62, 0, "CAN bit-unpacking 2/p2",
    "", 1, 0, 0, 0, 0 },

  { 63, 0, "CAN bit-unpacking 2/p3",
    "", 2, 0, 0, 0, 0 },

  { 64, 0, "CAN bit-unpacking 2/p4",
    "", 3, 0, 0, 0, 0 },

  { 65, 0, "CAN bit-unpacking 3/p1",
    "", 0, 0, 0, 0, 0 },

  { 66, 0, "CAN bit-unpacking 3/p2",
    "", 1, 0, 0, 0, 0 },

  { 67, 0, "CAN bit-unpacking 3/p3",
    "", 2, 0, 0, 0, 0 },

  { 68, 0, "CAN bit-unpacking 3/p4",
    "", 3, 0, 0, 0, 0 },

  { 69, 0, "CAN bit-unpacking 4/p1",
    "", 0, 0, 0, 0, 0 },

  { 70, 0, "CAN bit-unpacking 4/p2",
    "", 1, 0, 0, 0, 0 },

  { 71, 0, "CAN bit-unpacking 4/p3",
    "", 2, 0, 0, 0, 0 },

  { 72, 0, "CAN bit-unpacking 4/p4",
    "", 3, 0, 0, 0, 0 },

  { 73, 0, "CAN bit-unpacking 4/p5",
    "", 4, 0, 0, 0, 0 },

  { 74, 0, "CAN bit-unpacking 5/p1",
    "", 0, 0, 0, 0, 0 },

  { 75, 0, "CAN bit-unpacking 5/p2",
    "", 1, 0, 0, 0, 0 },

  { 76, 0, "CAN bit-unpacking 5/p3",
    "", 2, 0, 0, 0, 0 },

  { 77, 0, "CAN bit-unpacking 5/p4",
    "", 3, 0, 0, 0, 0 },

  { 78, 0, "CAN bit-unpacking 5/p5",
    "", 4, 0, 0, 0, 0 },

  { 79, 0, "PCL731",
    "", 0, 1, 3, 0, 0 },

  { 80, 0, "255_15shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 81, 0, "255_15shineng/Data Type Conversion10",
    "", 0, 0, 0, 0, 0 },

  { 82, 0, "255_15shineng/Data Type Conversion11",
    "", 0, 0, 0, 0, 0 },

  { 83, 0, "255_15shineng/Data Type Conversion12",
    "", 0, 0, 0, 0, 0 },

  { 84, 0, "255_15shineng/Data Type Conversion13",
    "", 0, 0, 0, 0, 0 },

  { 85, 0, "255_15shineng/Data Type Conversion14",
    "", 0, 0, 0, 0, 0 },

  { 86, 0, "255_15shineng/Data Type Conversion15",
    "", 0, 0, 0, 0, 0 },

  { 87, 0, "255_15shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 88, 0, "255_15shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 89, 0, "255_15shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 90, 0, "255_15shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 91, 0, "255_15shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 92, 0, "255_15shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 93, 0, "255_15shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 94, 0, "255_15shineng/Data Type Conversion8",
    "", 0, 0, 0, 0, 0 },

  { 95, 0, "255_15shineng/Data Type Conversion9",
    "", 0, 0, 0, 0, 0 },

  { 96, 0, "255_15shineng/CAN bit-packing 1",
    "", 0, 1, 0, 0, 0 },

  { 97, 0, "255_15shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 98, 0, "255shineng/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 99, 0, "255shineng/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 100, 0, "255shineng/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 101, 0, "255shineng/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 102, 0, "255shineng/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 103, 0, "255shineng/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 104, 0, "255shineng/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 105, 0, "255shineng/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 106, 0, "255shineng/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 107, 0, "Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 108, 0, "Subsystem/Multiport Switch",
    "", 0, 1, 0, 0, 0 },

  { 109, 0, "Subsystem1/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 110, 0, "Subsystem1/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 111, 0, "Subsystem2/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 112, 0, "Subsystem2/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 113, 0, "Subsystem3/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 114, 0, "Subsystem3/Integer Delay",
    "", 0, 1, 0, 0, 0 },

  { 115, 0, "Subsystem4/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 116, 0, "Subsystem4/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 117, 0, "Subsystem4/CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 118, 0, "Subsystem5/Data Type Conversion1",
    "", 0, 0, 0, 0, 0 },

  { 119, 0, "Subsystem5/Data Type Conversion16",
    "", 0, 0, 0, 0, 0 },

  { 120, 0, "Subsystem5/Data Type Conversion2",
    "", 0, 0, 0, 0, 0 },

  { 121, 0, "Subsystem5/Data Type Conversion3",
    "", 0, 0, 0, 0, 0 },

  { 122, 0, "Subsystem5/Data Type Conversion4",
    "", 0, 0, 0, 0, 0 },

  { 123, 0, "Subsystem5/Data Type Conversion5",
    "", 0, 0, 0, 0, 0 },

  { 124, 0, "Subsystem5/Data Type Conversion6",
    "", 0, 0, 0, 0, 0 },

  { 125, 0, "Subsystem5/Data Type Conversion7",
    "", 0, 0, 0, 0, 0 },

  { 126, 0, "Subsystem5/CAN bit-packing 2",
    "", 0, 1, 0, 0, 0 },

  { 127, 0, "Subsystem6/Add",
    "", 0, 1, 0, 0, 0 },

  { 128, 0, "255_15shineng/Manual Switch/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 129, 1, "255_15shineng/Manual Switch1/SwitchControl",
    "", 0, 1, 0, 0, 0 },

  { 130, 0, "255_15shineng/jihuo/Data Type Conversion17",
    "", 0, 0, 0, 0, 0 },

  { 131, 0, "255_15shineng/jihuo/Data Type Conversion18",
    "", 0, 0, 0, 0, 0 },

  { 132, 0, "255_15shineng/jihuo/Data Type Conversion19",
    "", 0, 0, 0, 0, 0 },

  { 133, 0, "255_15shineng/jihuo/Data Type Conversion20",
    "", 0, 0, 0, 0, 0 },

  { 134, 0, "255_15shineng/jihuo/Data Type Conversion21",
    "", 0, 0, 0, 0, 0 },

  { 135, 0, "255_15shineng/jihuo/Data Type Conversion22",
    "", 0, 0, 0, 0, 0 },

  { 136, 0, "255_15shineng/jihuo/Data Type Conversion23",
    "", 0, 0, 0, 0, 0 },

  { 137, 0, "255_15shineng/jihuo/Data Type Conversion24",
    "", 0, 0, 0, 0, 0 },

  { 138, 0, "255_15shineng/jihuo/CAN bit-packing 3",
    "", 0, 1, 0, 0, 0 },

  { 139, 0, "Subsystem6/Compare To Constant/Compare",
    "", 0, 3, 0, 0, 0 },

  { 140, 0, "Subsystem6/Compare To Constant1/Compare",
    "", 0, 3, 0, 0, 0 },

  { 141, 0, "Subsystem6/Compare To Constant2/Compare",
    "", 0, 3, 0, 0, 0 },

  { 142, 0, "Subsystem6/Compare To Constant3/Compare",
    "", 0, 3, 0, 0, 0 },

  { 143, 0, "Subsystem6/Compare To Constant4/Compare",
    "", 0, 3, 0, 0, 0 },

  { 144, 0, "Subsystem6/Compare To Constant5/Compare",
    "", 0, 3, 0, 0, 0 },

  { 145, 0, "Subsystem6/Subsystem1/Product",
    "", 0, 1, 0, 0, 0 },

  { 146, 0, "Subsystem6/Subsystem2/Logical Operator",
    "", 0, 3, 0, 0, 0 },

  { 147, 0, "Subsystem6/Subsystem2/Product",
    "", 0, 1, 0, 0, 0 },

  { 148, 0, "Subsystem6/Subsystem3/Logical Operator",
    "", 0, 3, 0, 0, 0 },

  { 149, 0, "Subsystem6/Subsystem3/Product",
    "", 0, 1, 0, 0, 0 },

  { 150, 0, "Subsystem6/Subsystem4/Logical Operator",
    "", 0, 3, 0, 0, 0 },

  { 151, 0, "Subsystem6/Subsystem4/Product",
    "", 0, 1, 0, 0, 0 },

  { 152, 0, "Subsystem6/Subsystem5/Logical Operator",
    "", 0, 3, 0, 0, 0 },

  { 153, 0, "Subsystem6/Subsystem5/Product",
    "", 0, 1, 0, 0, 0 },

  { 154, 0, "Subsystem6/Subsystem2/Compare To Constant/Compare",
    "", 0, 3, 0, 0, 0 },

  { 155, 0, "Subsystem6/Subsystem3/Compare To Constant/Compare",
    "", 0, 3, 0, 0, 0 },

  { 156, 0, "Subsystem6/Subsystem4/Compare To Constant/Compare",
    "", 0, 3, 0, 0, 0 },

  { 157, 0, "Subsystem6/Subsystem5/Compare To Constant/Compare",
    "", 0, 3, 0, 0, 0 },

  {
    0, 0, NULL, NULL, 0, 0, 0, 0, 0
  }
};

/* Tunable block parameters */
static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 158, "88",
    "Value", 1, 0, 0 },

  { 159, "99",
    "Value", 1, 0, 0 },

  { 160, "Constant10",
    "Value", 1, 0, 0 },

  { 161, "Constant11",
    "Value", 1, 0, 0 },

  { 162, "Constant12",
    "Value", 1, 0, 0 },

  { 163, "Constant13",
    "Value", 1, 0, 0 },

  { 164, "Constant14",
    "Value", 1, 0, 0 },

  { 165, "Constant15",
    "Value", 1, 0, 0 },

  { 166, "Constant16",
    "Value", 1, 0, 0 },

  { 167, "Constant17",
    "Value", 1, 0, 0 },

  { 168, "Constant18",
    "Value", 1, 0, 0 },

  { 169, "Constant19",
    "Value", 1, 0, 0 },

  { 170, "Constant2",
    "Value", 1, 0, 0 },

  { 171, "Constant20",
    "Value", 1, 0, 0 },

  { 172, "Constant21",
    "Value", 1, 0, 0 },

  { 173, "Constant23",
    "Value", 1, 0, 0 },

  { 174, "Constant24",
    "Value", 1, 0, 0 },

  { 175, "Constant25",
    "Value", 1, 0, 0 },

  { 176, "Constant26",
    "Value", 1, 0, 0 },

  { 177, "Constant3",
    "Value", 1, 0, 0 },

  { 178, "Constant4",
    "Value", 1, 0, 0 },

  { 179, "Constant5",
    "Value", 1, 0, 0 },

  { 180, "Constant6",
    "Value", 1, 0, 0 },

  { 181, "Constant7",
    "Value", 1, 0, 0 },

  { 182, "Constant8",
    "Value", 1, 0, 0 },

  { 183, "Constant9",
    "Value", 1, 0, 0 },

  { 184, "baozhuay",
    "Value", 1, 0, 0 },

  { 185, "constant1",
    "Value", 1, 0, 0 },

  { 186, "constant10",
    "Value", 1, 0, 0 },

  { 187, "constant11",
    "Value", 1, 0, 0 },

  { 188, "constant12",
    "Value", 1, 0, 0 },

  { 189, "constant13",
    "Value", 1, 0, 0 },

  { 190, "constant2",
    "Value", 1, 0, 0 },

  { 191, "constant3",
    "Value", 1, 0, 0 },

  { 192, "constant4",
    "Value", 1, 0, 0 },

  { 193, "constant5",
    "Value", 1, 0, 0 },

  { 194, "constant6",
    "Value", 1, 0, 0 },

  { 195, "constant7",
    "Value", 1, 0, 0 },

  { 196, "constant9",
    "Value", 1, 0, 0 },

  { 197, "shengjiangy",
    "Value", 1, 0, 0 },

  { 198, "xuanzhuany",
    "Value", 1, 0, 0 },

  { 199, "right1",
    "InputValues", 2, 4, 0 },

  { 200, "right1",
    "Table", 2, 4, 0 },

  { 201, "right2",
    "InputValues", 2, 4, 0 },

  { 202, "right2",
    "Table", 2, 4, 0 },

  { 203, "right3",
    "InputValues", 2, 4, 0 },

  { 204, "right3",
    "Table", 2, 4, 0 },

  { 205, "PCL731",
    "P1", 1, 0, 0 },

  { 206, "PCL731",
    "P2", 1, 4, 0 },

  { 207, "Setup ",
    "P1", 1, 5, 0 },

  { 208, "Setup ",
    "P2", 1, 5, 0 },

  { 209, "Setup ",
    "P3", 1, 0, 0 },

  { 210, "Setup ",
    "P4", 1, 0, 0 },

  { 211, "Setup ",
    "P5", 1, 6, 0 },

  { 212, "Setup ",
    "P6", 1, 7, 0 },

  { 213, "Setup ",
    "P11", 1, 0, 0 },

  { 214, "Setup ",
    "P13", 1, 7, 0 },

  { 215, "Setup ",
    "P15", 1, 0, 0 },

  { 216, "Setup ",
    "P16", 1, 0, 0 },

  { 217, "Setup ",
    "P17", 1, 0, 0 },

  { 218, "Setup ",
    "P18", 1, 0, 0 },

  { 219, "Setup ",
    "P19", 1, 0, 0 },

  { 220, "Setup ",
    "P20", 1, 0, 0 },

  { 221, "Setup ",
    "P21", 1, 0, 0 },

  { 222, "Setup ",
    "P22", 1, 0, 0 },

  { 223, "Setup ",
    "P23", 1, 0, 0 },

  { 224, "Setup ",
    "P24", 1, 0, 0 },

  { 225, "255_15shineng/Constant1",
    "Value", 1, 0, 0 },

  { 226, "255_15shineng/Constant10",
    "Value", 1, 0, 0 },

  { 227, "255_15shineng/Constant11",
    "Value", 1, 0, 0 },

  { 228, "255_15shineng/Constant12",
    "Value", 1, 0, 0 },

  { 229, "255_15shineng/Constant13",
    "Value", 1, 0, 0 },

  { 230, "255_15shineng/Constant14",
    "Value", 1, 0, 0 },

  { 231, "255_15shineng/Constant15",
    "Value", 1, 0, 0 },

  { 232, "255_15shineng/Constant16",
    "Value", 1, 0, 0 },

  { 233, "255_15shineng/Constant2",
    "Value", 1, 0, 0 },

  { 234, "255_15shineng/Constant3",
    "Value", 1, 0, 0 },

  { 235, "255_15shineng/Constant4",
    "Value", 1, 0, 0 },

  { 236, "255_15shineng/Constant5",
    "Value", 1, 0, 0 },

  { 237, "255_15shineng/Constant6",
    "Value", 1, 0, 0 },

  { 238, "255_15shineng/Constant7",
    "Value", 1, 0, 0 },

  { 239, "255_15shineng/Constant8",
    "Value", 1, 0, 0 },

  { 240, "255_15shineng/Constant9",
    "Value", 1, 0, 0 },

  { 241, "255shineng/Constant1",
    "Value", 1, 0, 0 },

  { 242, "255shineng/Constant16",
    "Value", 1, 0, 0 },

  { 243, "255shineng/Constant2",
    "Value", 1, 0, 0 },

  { 244, "255shineng/Constant3",
    "Value", 1, 0, 0 },

  { 245, "255shineng/Constant4",
    "Value", 1, 0, 0 },

  { 246, "255shineng/Constant5",
    "Value", 1, 0, 0 },

  { 247, "255shineng/Constant6",
    "Value", 1, 0, 0 },

  { 248, "255shineng/Constant7",
    "Value", 1, 0, 0 },

  { 249, "Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 250, "Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 251, "Subsystem/Constant1",
    "Value", 1, 0, 0 },

  { 252, "Subsystem/Constant28",
    "Value", 1, 0, 0 },

  { 253, "Subsystem/Constant29",
    "Value", 1, 0, 0 },

  { 254, "Subsystem/Constant30",
    "Value", 1, 0, 0 },

  { 255, "Subsystem/Constant31",
    "Value", 1, 0, 0 },

  { 256, "Subsystem/Constant32",
    "Value", 1, 0, 0 },

  { 257, "Subsystem/Constant33",
    "Value", 1, 0, 0 },

  { 258, "Subsystem1/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 259, "Subsystem2/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 260, "Subsystem3/Integer Delay",
    "InitialCondition", 1, 0, 0 },

  { 261, "Subsystem5/Constant16",
    "Value", 1, 0, 0 },

  { 262, "Subsystem5/Constant2",
    "Value", 1, 0, 0 },

  { 263, "Subsystem5/Constant3",
    "Value", 1, 0, 0 },

  { 264, "Subsystem5/Constant4",
    "Value", 1, 0, 0 },

  { 265, "Subsystem5/Constant5",
    "Value", 1, 0, 0 },

  { 266, "Subsystem5/Constant6",
    "Value", 1, 0, 0 },

  { 267, "Subsystem5/Constant7",
    "Value", 1, 0, 0 },

  { 268, "Subsystem5/Constant8",
    "Value", 1, 0, 0 },

  { 269, "255_15shineng/Manual Switch/Constant",
    "Value", 0, 0, 0 },

  { 270, "255_15shineng/Manual Switch/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 271, "255_15shineng/Manual Switch1/Constant",
    "Value", 0, 0, 0 },

  { 272, "255_15shineng/Manual Switch1/SwitchControl",
    "Threshold", 0, 0, 0 },

  { 273, "255_15shineng/jihuo/Constant17",
    "Value", 1, 0, 0 },

  { 274, "255_15shineng/jihuo/Constant18",
    "Value", 1, 0, 0 },

  { 275, "255_15shineng/jihuo/Constant19",
    "Value", 1, 0, 0 },

  { 276, "255_15shineng/jihuo/Constant20",
    "Value", 1, 0, 0 },

  { 277, "255_15shineng/jihuo/Constant21",
    "Value", 1, 0, 0 },

  { 278, "255_15shineng/jihuo/Constant22",
    "Value", 1, 0, 0 },

  { 279, "255_15shineng/jihuo/Constant23",
    "Value", 1, 0, 0 },

  { 280, "255_15shineng/jihuo/Constant24",
    "Value", 1, 0, 0 },

  { 281, "Subsystem6/Compare To Constant/Constant",
    "Value", 1, 0, 0 },

  { 282, "Subsystem6/Compare To Constant1/Constant",
    "Value", 1, 0, 0 },

  { 283, "Subsystem6/Compare To Constant2/Constant",
    "Value", 1, 0, 0 },

  { 284, "Subsystem6/Compare To Constant3/Constant",
    "Value", 1, 0, 0 },

  { 285, "Subsystem6/Compare To Constant4/Constant",
    "Value", 1, 0, 0 },

  { 286, "Subsystem6/Compare To Constant5/Constant",
    "Value", 1, 0, 0 },

  { 287, "Subsystem6/Subsystem1/Constant",
    "Value", 1, 0, 0 },

  { 288, "Subsystem6/Subsystem2/Constant",
    "Value", 1, 0, 0 },

  { 289, "Subsystem6/Subsystem3/Constant",
    "Value", 1, 0, 0 },

  { 290, "Subsystem6/Subsystem4/Constant",
    "Value", 1, 0, 0 },

  { 291, "Subsystem6/Subsystem5/Constant",
    "Value", 1, 0, 0 },

  { 292, "Subsystem6/Subsystem2/Compare To Constant/Constant",
    "Value", 2, 0, 0 },

  { 293, "Subsystem6/Subsystem3/Compare To Constant/Constant",
    "Value", 2, 0, 0 },

  { 294, "Subsystem6/Subsystem4/Compare To Constant/Constant",
    "Value", 2, 0, 0 },

  { 295, "Subsystem6/Subsystem5/Compare To Constant/Constant",
    "Value", 2, 0, 0 },

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
  &canceshi1_B.right1,                 /* 28: Signal */
  &canceshi1_B.right2,                 /* 29: Signal */
  &canceshi1_B.right3,                 /* 30: Signal */
  &canceshi1_B.MultiportSwitch_k,      /* 31: Signal */
  &canceshi1_B.MultiportSwitch1,       /* 32: Signal */
  &canceshi1_B.MultiportSwitch2,       /* 33: Signal */
  &canceshi1_B.MultiportSwitch3,       /* 34: Signal */
  &canceshi1_B.u02Receive,             /* 35: Signal */
  &canceshi1_B.u02Receive1_o1,         /* 36: Signal */
  &canceshi1_B.u02Receive1_o2,         /* 37: Signal */
  &canceshi1_B.u02Receive1_o3,         /* 38: Signal */
  &canceshi1_B.u02Receive2,            /* 39: Signal */
  &canceshi1_B.u02Receive3,            /* 40: Signal */
  &canceshi1_B.CANbitpacking,          /* 41: Signal */
  &canceshi1_B.CANbitpacking1,         /* 42: Signal */
  &canceshi1_B.CANbitpacking2_l,       /* 43: Signal */
  &canceshi1_B.CANbitpacking3_d,       /* 44: Signal */
  &canceshi1_B.CANbitpacking4,         /* 45: Signal */
  &canceshi1_B.CANbitpacking5,         /* 46: Signal */
  &canceshi1_B.CANbitpacking6,         /* 47: Signal */
  &canceshi1_B.CANbitpacking7,         /* 48: Signal */
  &canceshi1_B.CANbitunpacking_o1,     /* 49: Signal */
  &canceshi1_B.CANbitunpacking_o2,     /* 50: Signal */
  &canceshi1_B.CANbitunpacking_o3,     /* 51: Signal */
  &canceshi1_B.CANbitunpacking_o4,     /* 52: Signal */
  &canceshi1_B.CANbitunpacking1_o1,    /* 53: Signal */
  &canceshi1_B.CANbitunpacking1_o2,    /* 54: Signal */
  &canceshi1_B.CANbitunpacking1_o3,    /* 55: Signal */
  &canceshi1_B.CANbitunpacking1_o4,    /* 56: Signal */
  &canceshi1_B.CANbitunpacking1_o5,    /* 57: Signal */
  &canceshi1_B.CANbitunpacking1_o6,    /* 58: Signal */
  &canceshi1_B.CANbitunpacking1_o7,    /* 59: Signal */
  &canceshi1_B.CANbitunpacking1_o8,    /* 60: Signal */
  &canceshi1_B.CANbitunpacking2_o1,    /* 61: Signal */
  &canceshi1_B.CANbitunpacking2_o2,    /* 62: Signal */
  &canceshi1_B.CANbitunpacking2_o3,    /* 63: Signal */
  &canceshi1_B.CANbitunpacking2_o4,    /* 64: Signal */
  &canceshi1_B.CANbitunpacking3_o1,    /* 65: Signal */
  &canceshi1_B.CANbitunpacking3_o2,    /* 66: Signal */
  &canceshi1_B.CANbitunpacking3_o3,    /* 67: Signal */
  &canceshi1_B.CANbitunpacking3_o4,    /* 68: Signal */
  &canceshi1_B.CANbitunpacking4_o1,    /* 69: Signal */
  &canceshi1_B.CANbitunpacking4_o2,    /* 70: Signal */
  &canceshi1_B.CANbitunpacking4_o3,    /* 71: Signal */
  &canceshi1_B.CANbitunpacking4_o4,    /* 72: Signal */
  &canceshi1_B.CANbitunpacking4_o5,    /* 73: Signal */
  &canceshi1_B.CANbitunpacking5_o1,    /* 74: Signal */
  &canceshi1_B.CANbitunpacking5_o2,    /* 75: Signal */
  &canceshi1_B.CANbitunpacking5_o3,    /* 76: Signal */
  &canceshi1_B.CANbitunpacking5_o4,    /* 77: Signal */
  &canceshi1_B.CANbitunpacking5_o5,    /* 78: Signal */
  &canceshi1_B.PCL731[0],              /* 79: Signal */
  &canceshi1_B.DataTypeConversion1_e,  /* 80: Signal */
  &canceshi1_B.DataTypeConversion10,   /* 81: Signal */
  &canceshi1_B.DataTypeConversion11,   /* 82: Signal */
  &canceshi1_B.DataTypeConversion12_e, /* 83: Signal */
  &canceshi1_B.DataTypeConversion13_d, /* 84: Signal */
  &canceshi1_B.DataTypeConversion14_p, /* 85: Signal */
  &canceshi1_B.DataTypeConversion15_g, /* 86: Signal */
  &canceshi1_B.DataTypeConversion16_a, /* 87: Signal */
  &canceshi1_B.DataTypeConversion2_h,  /* 88: Signal */
  &canceshi1_B.DataTypeConversion3_bi, /* 89: Signal */
  &canceshi1_B.DataTypeConversion4_k,  /* 90: Signal */
  &canceshi1_B.DataTypeConversion5_l,  /* 91: Signal */
  &canceshi1_B.DataTypeConversion6_i,  /* 92: Signal */
  &canceshi1_B.DataTypeConversion7_a,  /* 93: Signal */
  &canceshi1_B.DataTypeConversion8_p,  /* 94: Signal */
  &canceshi1_B.DataTypeConversion9_k,  /* 95: Signal */
  &canceshi1_B.CANbitpacking1_j,       /* 96: Signal */
  &canceshi1_B.CANbitpacking2_h,       /* 97: Signal */
  &canceshi1_B.DataTypeConversion1,    /* 98: Signal */
  &canceshi1_B.DataTypeConversion16,   /* 99: Signal */
  &canceshi1_B.DataTypeConversion2,    /* 100: Signal */
  &canceshi1_B.DataTypeConversion3,    /* 101: Signal */
  &canceshi1_B.DataTypeConversion4,    /* 102: Signal */
  &canceshi1_B.DataTypeConversion5_g,  /* 103: Signal */
  &canceshi1_B.DataTypeConversion6_l,  /* 104: Signal */
  &canceshi1_B.DataTypeConversion7_l,  /* 105: Signal */
  &canceshi1_B.CANbitpacking2,         /* 106: Signal */
  &canceshi1_B.SwitchControl,          /* 107: Signal */
  &canceshi1_B.MultiportSwitch,        /* 108: Signal */
  &canceshi1_B.RelationalOperator_o,   /* 109: Signal */
  &canceshi1_B.IntegerDelay_m,         /* 110: Signal */
  &canceshi1_B.RelationalOperator,     /* 111: Signal */
  &canceshi1_B.IntegerDelay,           /* 112: Signal */
  &canceshi1_B.RelationalOperator_m,   /* 113: Signal */
  &canceshi1_B.IntegerDelay_j,         /* 114: Signal */
  &canceshi1_B.DataTypeConversion17,   /* 115: Signal */
  &canceshi1_B.DataTypeConversion18,   /* 116: Signal */
  &canceshi1_B.CANbitpacking3,         /* 117: Signal */
  &canceshi1_B.DataTypeConversion1_i,  /* 118: Signal */
  &canceshi1_B.DataTypeConversion16_c, /* 119: Signal */
  &canceshi1_B.DataTypeConversion2_j,  /* 120: Signal */
  &canceshi1_B.DataTypeConversion3_n,  /* 121: Signal */
  &canceshi1_B.DataTypeConversion4_a,  /* 122: Signal */
  &canceshi1_B.DataTypeConversion5_k,  /* 123: Signal */
  &canceshi1_B.DataTypeConversion6_g,  /* 124: Signal */
  &canceshi1_B.DataTypeConversion7_m,  /* 125: Signal */
  &canceshi1_B.CANbitpacking2_k,       /* 126: Signal */
  &canceshi1_B.Add,                    /* 127: Signal */
  &canceshi1_B.SwitchControl_l,        /* 128: Signal */
  &canceshi1_B.SwitchControl_g,        /* 129: Signal */
  &canceshi1_B.DataTypeConversion17_co,/* 130: Signal */
  &canceshi1_B.DataTypeConversion18_f, /* 131: Signal */
  &canceshi1_B.DataTypeConversion19,   /* 132: Signal */
  &canceshi1_B.DataTypeConversion20,   /* 133: Signal */
  &canceshi1_B.DataTypeConversion21,   /* 134: Signal */
  &canceshi1_B.DataTypeConversion22,   /* 135: Signal */
  &canceshi1_B.DataTypeConversion23,   /* 136: Signal */
  &canceshi1_B.DataTypeConversion24,   /* 137: Signal */
  &canceshi1_B.CANbitpacking3_dd,      /* 138: Signal */
  &canceshi1_B.Compare,                /* 139: Signal */
  &canceshi1_B.Compare_l,              /* 140: Signal */
  &canceshi1_B.Compare_lh,             /* 141: Signal */
  &canceshi1_B.Compare_aq,             /* 142: Signal */
  &canceshi1_B.Compare_f,              /* 143: Signal */
  &canceshi1_B.Compare_li,             /* 144: Signal */
  &canceshi1_B.Product,                /* 145: Signal */
  &canceshi1_B.LogicalOperator,        /* 146: Signal */
  &canceshi1_B.Product_d,              /* 147: Signal */
  &canceshi1_B.LogicalOperator_a,      /* 148: Signal */
  &canceshi1_B.Product_c,              /* 149: Signal */
  &canceshi1_B.LogicalOperator_l,      /* 150: Signal */
  &canceshi1_B.Product_p,              /* 151: Signal */
  &canceshi1_B.LogicalOperator_p,      /* 152: Signal */
  &canceshi1_B.Product_n,              /* 153: Signal */
  &canceshi1_B.Compare_a,              /* 154: Signal */
  &canceshi1_B.Compare_l2,             /* 155: Signal */
  &canceshi1_B.Compare_g,              /* 156: Signal */
  &canceshi1_B.Compare_k,              /* 157: Signal */
  &canceshi1_P.u_Value,                /* 158: Block Parameter */
  &canceshi1_P.u_Value_l,              /* 159: Block Parameter */
  &canceshi1_P.Constant10_Value,       /* 160: Block Parameter */
  &canceshi1_P.Constant11_Value,       /* 161: Block Parameter */
  &canceshi1_P.Constant12_Value,       /* 162: Block Parameter */
  &canceshi1_P.Constant13_Value,       /* 163: Block Parameter */
  &canceshi1_P.Constant14_Value,       /* 164: Block Parameter */
  &canceshi1_P.Constant15_Value,       /* 165: Block Parameter */
  &canceshi1_P.Constant16_Value,       /* 166: Block Parameter */
  &canceshi1_P.Constant17_Value,       /* 167: Block Parameter */
  &canceshi1_P.Constant18_Value,       /* 168: Block Parameter */
  &canceshi1_P.Constant19_Value,       /* 169: Block Parameter */
  &canceshi1_P.Constant2_Value,        /* 170: Block Parameter */
  &canceshi1_P.Constant20_Value,       /* 171: Block Parameter */
  &canceshi1_P.Constant21_Value,       /* 172: Block Parameter */
  &canceshi1_P.Constant23_Value,       /* 173: Block Parameter */
  &canceshi1_P.Constant24_Value,       /* 174: Block Parameter */
  &canceshi1_P.Constant25_Value,       /* 175: Block Parameter */
  &canceshi1_P.Constant26_Value,       /* 176: Block Parameter */
  &canceshi1_P.Constant3_Value,        /* 177: Block Parameter */
  &canceshi1_P.Constant4_Value,        /* 178: Block Parameter */
  &canceshi1_P.Constant5_Value,        /* 179: Block Parameter */
  &canceshi1_P.Constant6_Value,        /* 180: Block Parameter */
  &canceshi1_P.Constant7_Value,        /* 181: Block Parameter */
  &canceshi1_P.Constant8_Value,        /* 182: Block Parameter */
  &canceshi1_P.Constant9_Value,        /* 183: Block Parameter */
  &canceshi1_P.baozhuay_Value,         /* 184: Block Parameter */
  &canceshi1_P.constant1_Value,        /* 185: Block Parameter */
  &canceshi1_P.constant10_Value,       /* 186: Block Parameter */
  &canceshi1_P.constant11_Value,       /* 187: Block Parameter */
  &canceshi1_P.constant12_Value,       /* 188: Block Parameter */
  &canceshi1_P.constant13_Value,       /* 189: Block Parameter */
  &canceshi1_P.constant2_Value,        /* 190: Block Parameter */
  &canceshi1_P.constant3_Value,        /* 191: Block Parameter */
  &canceshi1_P.constant4_Value,        /* 192: Block Parameter */
  &canceshi1_P.constant5_Value,        /* 193: Block Parameter */
  &canceshi1_P.constant6_Value,        /* 194: Block Parameter */
  &canceshi1_P.constant7_Value,        /* 195: Block Parameter */
  &canceshi1_P.constant9_Value,        /* 196: Block Parameter */
  &canceshi1_P.shengjiangy_Value,      /* 197: Block Parameter */
  &canceshi1_P.xuanzhuany_Value,       /* 198: Block Parameter */
  &canceshi1_P.right1_XData[0],        /* 199: Block Parameter */
  &canceshi1_P.right1_YData[0],        /* 200: Block Parameter */
  &canceshi1_P.right2_XData[0],        /* 201: Block Parameter */
  &canceshi1_P.right2_YData[0],        /* 202: Block Parameter */
  &canceshi1_P.right3_XData[0],        /* 203: Block Parameter */
  &canceshi1_P.right3_YData[0],        /* 204: Block Parameter */
  &canceshi1_P.PCL731_P1,              /* 205: Block Parameter */
  &canceshi1_P.PCL731_P2[0],           /* 206: Block Parameter */
  &canceshi1_P.Setup_P1[0],            /* 207: Block Parameter */
  &canceshi1_P.Setup_P2[0],            /* 208: Block Parameter */
  &canceshi1_P.Setup_P3,               /* 209: Block Parameter */
  &canceshi1_P.Setup_P4,               /* 210: Block Parameter */
  &canceshi1_P.Setup_P5[0],            /* 211: Block Parameter */
  &canceshi1_P.Setup_P6[0],            /* 212: Block Parameter */
  &canceshi1_P.Setup_P11,              /* 213: Block Parameter */
  &canceshi1_P.Setup_P13[0],           /* 214: Block Parameter */
  &canceshi1_P.Setup_P15,              /* 215: Block Parameter */
  &canceshi1_P.Setup_P16,              /* 216: Block Parameter */
  &canceshi1_P.Setup_P17,              /* 217: Block Parameter */
  &canceshi1_P.Setup_P18,              /* 218: Block Parameter */
  &canceshi1_P.Setup_P19,              /* 219: Block Parameter */
  &canceshi1_P.Setup_P20,              /* 220: Block Parameter */
  &canceshi1_P.Setup_P21,              /* 221: Block Parameter */
  &canceshi1_P.Setup_P22,              /* 222: Block Parameter */
  &canceshi1_P.Setup_P23,              /* 223: Block Parameter */
  &canceshi1_P.Setup_P24,              /* 224: Block Parameter */
  &canceshi1_P.Constant1_Value_b5,     /* 225: Block Parameter */
  &canceshi1_P.Constant10_Value_j,     /* 226: Block Parameter */
  &canceshi1_P.Constant11_Value_j,     /* 227: Block Parameter */
  &canceshi1_P.Constant12_Value_g,     /* 228: Block Parameter */
  &canceshi1_P.Constant13_Value_d,     /* 229: Block Parameter */
  &canceshi1_P.Constant14_Value_g,     /* 230: Block Parameter */
  &canceshi1_P.Constant15_Value_i,     /* 231: Block Parameter */
  &canceshi1_P.Constant16_Value_p,     /* 232: Block Parameter */
  &canceshi1_P.Constant2_Value_h,      /* 233: Block Parameter */
  &canceshi1_P.Constant3_Value_a,      /* 234: Block Parameter */
  &canceshi1_P.Constant4_Value_m,      /* 235: Block Parameter */
  &canceshi1_P.Constant5_Value_c,      /* 236: Block Parameter */
  &canceshi1_P.Constant6_Value_o,      /* 237: Block Parameter */
  &canceshi1_P.Constant7_Value_e,      /* 238: Block Parameter */
  &canceshi1_P.Constant8_Value_h,      /* 239: Block Parameter */
  &canceshi1_P.Constant9_Value_i,      /* 240: Block Parameter */
  &canceshi1_P.Constant1_Value_b,      /* 241: Block Parameter */
  &canceshi1_P.Constant16_Value_f,     /* 242: Block Parameter */
  &canceshi1_P.Constant2_Value_g,      /* 243: Block Parameter */
  &canceshi1_P.Constant3_Value_c,      /* 244: Block Parameter */
  &canceshi1_P.Constant4_Value_a,      /* 245: Block Parameter */
  &canceshi1_P.Constant5_Value_f,      /* 246: Block Parameter */
  &canceshi1_P.Constant6_Value_p,      /* 247: Block Parameter */
  &canceshi1_P.Constant7_Value_m,      /* 248: Block Parameter */
  &canceshi1_P.Constant_Value_dg,      /* 249: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold_n,/* 250: Block Parameter */
  &canceshi1_P.Constant1_Value,        /* 251: Block Parameter */
  &canceshi1_P.Constant28_Value,       /* 252: Block Parameter */
  &canceshi1_P.Constant29_Value,       /* 253: Block Parameter */
  &canceshi1_P.Constant30_Value,       /* 254: Block Parameter */
  &canceshi1_P.Constant31_Value,       /* 255: Block Parameter */
  &canceshi1_P.Constant32_Value,       /* 256: Block Parameter */
  &canceshi1_P.Constant33_Value,       /* 257: Block Parameter */
  &canceshi1_P.IntegerDelay_InitialCondition_b,/* 258: Block Parameter */
  &canceshi1_P.IntegerDelay_InitialCondition,/* 259: Block Parameter */
  &canceshi1_P.IntegerDelay_InitialCondition_l,/* 260: Block Parameter */
  &canceshi1_P.Constant16_Value_c,     /* 261: Block Parameter */
  &canceshi1_P.Constant2_Value_p,      /* 262: Block Parameter */
  &canceshi1_P.Constant3_Value_b,      /* 263: Block Parameter */
  &canceshi1_P.Constant4_Value_l,      /* 264: Block Parameter */
  &canceshi1_P.Constant5_Value_fj,     /* 265: Block Parameter */
  &canceshi1_P.Constant6_Value_m,      /* 266: Block Parameter */
  &canceshi1_P.Constant7_Value_mk,     /* 267: Block Parameter */
  &canceshi1_P.Constant8_Value_i,      /* 268: Block Parameter */
  &canceshi1_P.Constant_Value_do,      /* 269: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold_a,/* 270: Block Parameter */
  &canceshi1_P.Constant_Value_pw,      /* 271: Block Parameter */
  &canceshi1_P.SwitchControl_Threshold,/* 272: Block Parameter */
  &canceshi1_P.Constant17_Value_k,     /* 273: Block Parameter */
  &canceshi1_P.Constant18_Value_i,     /* 274: Block Parameter */
  &canceshi1_P.Constant19_Value_d,     /* 275: Block Parameter */
  &canceshi1_P.Constant20_Value_b,     /* 276: Block Parameter */
  &canceshi1_P.Constant21_Value_i,     /* 277: Block Parameter */
  &canceshi1_P.Constant22_Value,       /* 278: Block Parameter */
  &canceshi1_P.Constant23_Value_f,     /* 279: Block Parameter */
  &canceshi1_P.Constant24_Value_k,     /* 280: Block Parameter */
  &canceshi1_P.Constant_Value,         /* 281: Block Parameter */
  &canceshi1_P.Constant_Value_k,       /* 282: Block Parameter */
  &canceshi1_P.Constant_Value_m,       /* 283: Block Parameter */
  &canceshi1_P.Constant_Value_a,       /* 284: Block Parameter */
  &canceshi1_P.Constant_Value_b,       /* 285: Block Parameter */
  &canceshi1_P.Constant_Value_d,       /* 286: Block Parameter */
  &canceshi1_P.Constant_Value_o,       /* 287: Block Parameter */
  &canceshi1_P.Constant_Value_h,       /* 288: Block Parameter */
  &canceshi1_P.Constant_Value_f,       /* 289: Block Parameter */
  &canceshi1_P.Constant_Value_ah,      /* 290: Block Parameter */
  &canceshi1_P.Constant_Value_h3,      /* 291: Block Parameter */
  &canceshi1_P.Constant_Value_kv,      /* 292: Block Parameter */
  &canceshi1_P.Constant_Value_ag,      /* 293: Block Parameter */
  &canceshi1_P.Constant_Value_g,       /* 294: Block Parameter */
  &canceshi1_P.Constant_Value_p        /* 295: Block Parameter */
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
  { rtBlockSignals, 158 },

  { rtBlockParameters, 138,
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
