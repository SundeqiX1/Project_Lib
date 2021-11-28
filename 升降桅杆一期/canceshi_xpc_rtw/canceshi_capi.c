/*
 * canceshi_capi.c
 *
 * Real-Time Workshop code generation for Simulink model "canceshi.mdl".
 *
 * Model version              : 1.59
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Fri May 22 16:20:42 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "canceshi.h"
#include "rtw_capi.h"
#include "canceshi_private.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, "dongzuo_zhuangtai1",
    "", 0, 0, 0, 0, 0 },

  { 1, 0, "a",
    "", 0, 0, 1, 0, 0 },

  { 2, 0, "b",
    "", 0, 0, 1, 0, 0 },

  { 3, 0, "baozhuaa",
    "", 0, 0, 0, 0, 0 },

  { 4, 0, "baozhuab",
    "", 0, 0, 0, 0, 0 },

  { 5, 0, "c",
    "", 0, 0, 2, 0, 0 },

  { 6, 0, "d",
    "", 0, 0, 2, 0, 0 },

  { 7, 0, "e",
    "", 0, 1, 1, 0, 0 },

  { 8, 0, "f",
    "", 0, 0, 1, 0, 0 },

  { 9, 0, "shengjianga",
    "", 0, 0, 0, 0, 0 },

  { 10, 0, "sifufa",
    "", 0, 0, 0, 0, 0 },

  { 11, 0, "xuanzhuana",
    "", 0, 0, 0, 0, 0 },

  { 12, 0, "Pulse Generator",
    "", 0, 0, 0, 0, 0 },

  { 13, 0, "right7",
    "", 0, 0, 0, 0, 0 },

  { 14, 0, "Multiport Switch1",
    "", 0, 0, 0, 0, 0 },

  { 15, 0, "Multiport Switch2",
    "", 0, 0, 0, 0, 0 },

  { 16, 0, "Multiport Switch3",
    "", 0, 0, 0, 0, 0 },

  { 17, 0, "Multiport Switch4",
    "", 0, 0, 0, 0, 0 },

  { 18, 0, "3402Receive /p1",
    "", 0, 0, 0, 0, 0 },

  { 19, 0, "3402Receive /p2",
    "", 1, 0, 0, 0, 0 },

  { 20, 0, "CAN bit-unpacking /p1",
    "", 0, 1, 0, 0, 0 },

  { 21, 0, "CAN bit-unpacking /p2",
    "", 1, 1, 0, 0, 0 },

  { 22, 0, "CAN bit-unpacking /p3",
    "", 2, 1, 0, 0, 0 },

  { 23, 0, "CAN bit-unpacking /p4",
    "", 3, 1, 0, 0, 0 },

  { 24, 0, "CAN bit-unpacking 1/p1",
    "", 0, 2, 0, 0, 0 },

  { 25, 0, "CAN bit-unpacking 1/p2",
    "", 1, 2, 0, 0, 0 },

  { 26, 0, "CAN bit-unpacking 1/p3",
    "", 2, 2, 0, 0, 0 },

  { 27, 0, "CAN bit-unpacking 1/p4",
    "", 3, 2, 0, 0, 0 },

  { 28, 0, "CAN bit-unpacking 1/p5",
    "", 4, 2, 0, 0, 0 },

  { 29, 0, "CAN bit-unpacking 1/p6",
    "", 5, 2, 0, 0, 0 },

  { 30, 0, "CAN bit-unpacking 1/p7",
    "", 6, 2, 0, 0, 0 },

  { 31, 0, "CAN bit-unpacking 1/p8",
    "", 7, 2, 0, 0, 0 },

  { 32, 0, "CAN bit-unpacking 2/p1",
    "", 0, 2, 0, 0, 0 },

  { 33, 0, "CAN bit-unpacking 2/p2",
    "", 1, 2, 0, 0, 0 },

  { 34, 0, "CAN bit-unpacking 2/p3",
    "", 2, 2, 0, 0, 0 },

  { 35, 0, "CAN bit-unpacking 2/p4",
    "", 3, 2, 0, 0, 0 },

  { 36, 0, "CAN bit-unpacking 3/p1",
    "", 0, 2, 0, 0, 0 },

  { 37, 0, "CAN bit-unpacking 3/p2",
    "", 1, 2, 0, 0, 0 },

  { 38, 0, "CAN bit-unpacking 3/p3",
    "", 2, 2, 0, 0, 0 },

  { 39, 0, "CAN bit-unpacking 3/p4",
    "", 3, 2, 0, 0, 0 },

  { 40, 0, "CAN bit-unpacking 4/p1",
    "", 0, 2, 0, 0, 0 },

  { 41, 0, "CAN bit-unpacking 4/p2",
    "", 1, 2, 0, 0, 0 },

  { 42, 0, "CAN bit-unpacking 4/p3",
    "", 2, 2, 0, 0, 0 },

  { 43, 0, "CAN bit-unpacking 4/p4",
    "", 3, 2, 0, 0, 0 },

  { 44, 0, "CAN bit-unpacking 4/p5",
    "", 4, 2, 0, 0, 0 },

  { 45, 0, "CAN bit-unpacking 5/p1",
    "", 0, 2, 0, 0, 0 },

  { 46, 0, "CAN bit-unpacking 5/p2",
    "", 1, 2, 0, 0, 0 },

  { 47, 0, "CAN bit-unpacking 5/p3",
    "", 2, 2, 0, 0, 0 },

  { 48, 0, "CAN bit-unpacking 5/p4",
    "", 3, 2, 0, 0, 0 },

  { 49, 0, "CAN bit-unpacking 5/p5",
    "", 4, 2, 0, 0, 0 },

  { 50, 0, "PCL731",
    "", 0, 0, 3, 0, 0 },

  { 51, 0, "Receive/p1",
    "", 0, 0, 0, 0, 0 },

  { 52, 0, "Receive/p2",
    "", 1, 0, 0, 0, 0 },

  { 53, 0, "Receive/p3",
    "", 2, 0, 0, 0, 0 },

  { 54, 0, "Receive/p4",
    "", 3, 0, 0, 0, 0 },

  { 55, 0, "255_15shineng/Data Type Conversion1",
    "", 0, 2, 0, 0, 0 },

  { 56, 0, "255_15shineng/Data Type Conversion10",
    "", 0, 2, 0, 0, 0 },

  { 57, 0, "255_15shineng/Data Type Conversion11",
    "", 0, 2, 0, 0, 0 },

  { 58, 0, "255_15shineng/Data Type Conversion12",
    "", 0, 2, 0, 0, 0 },

  { 59, 0, "255_15shineng/Data Type Conversion13",
    "", 0, 2, 0, 0, 0 },

  { 60, 0, "255_15shineng/Data Type Conversion14",
    "", 0, 2, 0, 0, 0 },

  { 61, 0, "255_15shineng/Data Type Conversion15",
    "", 0, 2, 0, 0, 0 },

  { 62, 0, "255_15shineng/Data Type Conversion16",
    "", 0, 2, 0, 0, 0 },

  { 63, 0, "255_15shineng/Data Type Conversion2",
    "", 0, 2, 0, 0, 0 },

  { 64, 0, "255_15shineng/Data Type Conversion3",
    "", 0, 2, 0, 0, 0 },

  { 65, 0, "255_15shineng/Data Type Conversion4",
    "", 0, 2, 0, 0, 0 },

  { 66, 0, "255_15shineng/Data Type Conversion5",
    "", 0, 2, 0, 0, 0 },

  { 67, 0, "255_15shineng/Data Type Conversion6",
    "", 0, 2, 0, 0, 0 },

  { 68, 0, "255_15shineng/Data Type Conversion7",
    "", 0, 2, 0, 0, 0 },

  { 69, 0, "255_15shineng/Data Type Conversion8",
    "", 0, 2, 0, 0, 0 },

  { 70, 0, "255_15shineng/Data Type Conversion9",
    "", 0, 2, 0, 0, 0 },

  { 71, 0, "255_15shineng/CAN bit-packing 1",
    "", 0, 0, 0, 0, 0 },

  { 72, 0, "255_15shineng/CAN bit-packing 2",
    "", 0, 0, 0, 0, 0 },

  { 73, 0, "255shineng/Data Type Conversion1",
    "", 0, 2, 0, 0, 0 },

  { 74, 0, "255shineng/Data Type Conversion16",
    "", 0, 2, 0, 0, 0 },

  { 75, 0, "255shineng/Data Type Conversion2",
    "", 0, 2, 0, 0, 0 },

  { 76, 0, "255shineng/Data Type Conversion3",
    "", 0, 2, 0, 0, 0 },

  { 77, 0, "255shineng/Data Type Conversion4",
    "", 0, 2, 0, 0, 0 },

  { 78, 0, "255shineng/Data Type Conversion5",
    "", 0, 2, 0, 0, 0 },

  { 79, 0, "255shineng/Data Type Conversion6",
    "", 0, 2, 0, 0, 0 },

  { 80, 0, "255shineng/Data Type Conversion7",
    "", 0, 2, 0, 0, 0 },

  { 81, 0, "255shineng/CAN bit-packing 2",
    "", 0, 0, 0, 0, 0 },

  { 82, 0, "Manual Switch/SwitchControl",
    "", 0, 0, 0, 0, 0 },

  { 83, 0, "Subsystem/Memory",
    "", 0, 0, 0, 0, 0 },

  { 84, 0, "Subsystem/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 85, 0, "Subsystem/Subtract",
    "", 0, 0, 0, 0, 0 },

  { 86, 0, "Subsystem1/Memory",
    "", 0, 0, 0, 0, 0 },

  { 87, 0, "Subsystem1/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 88, 0, "Subsystem1/Subtract",
    "", 0, 0, 0, 0, 0 },

  { 89, 0, "Subsystem2/Data Type Conversion17",
    "", 0, 2, 0, 0, 0 },

  { 90, 0, "Subsystem2/Data Type Conversion18",
    "", 0, 2, 0, 0, 0 },

  { 91, 0, "Subsystem2/CAN bit-packing 3",
    "", 0, 0, 0, 0, 0 },

  { 92, 0, "Subsystem3/Memory",
    "", 0, 0, 0, 0, 0 },

  { 93, 0, "Subsystem3/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 94, 0, "Subsystem3/Subtract",
    "", 0, 0, 0, 0, 0 },

  { 95, 0, "Subsystem4/Data Type Conversion1",
    "", 0, 2, 0, 0, 0 },

  { 96, 0, "Subsystem4/Data Type Conversion16",
    "", 0, 2, 0, 0, 0 },

  { 97, 0, "Subsystem4/Data Type Conversion2",
    "", 0, 2, 0, 0, 0 },

  { 98, 0, "Subsystem4/Data Type Conversion3",
    "", 0, 2, 0, 0, 0 },

  { 99, 0, "Subsystem4/Data Type Conversion4",
    "", 0, 2, 0, 0, 0 },

  { 100, 0, "Subsystem4/Data Type Conversion5",
    "", 0, 2, 0, 0, 0 },

  { 101, 0, "Subsystem4/Data Type Conversion6",
    "", 0, 2, 0, 0, 0 },

  { 102, 0, "Subsystem4/Data Type Conversion7",
    "", 0, 2, 0, 0, 0 },

  { 103, 0, "Subsystem4/CAN bit-packing 2",
    "", 0, 0, 0, 0, 0 },

  { 104, 0, "Subsystem5/Memory",
    "", 0, 0, 0, 0, 0 },

  { 105, 0, "Subsystem5/Relational Operator",
    "", 0, 3, 0, 0, 0 },

  { 106, 0, "Subsystem5/Subtract",
    "", 0, 0, 0, 0, 0 },

  { 107, 9, "Subsystem6/Data Type Conversion2",
    "", 0, 2, 0, 0, 1 },

  { 108, 9, "Subsystem6/Data Type Conversion3",
    "", 0, 2, 0, 0, 1 },

  { 109, 9, "Subsystem6/CAN bit-packing 1",
    "", 0, 0, 0, 0, 1 },

  { 110, 0, "baozhua1/Data Type Conversion1",
    "", 0, 2, 0, 0, 0 },

  { 111, 0, "baozhua1/Data Type Conversion7",
    "", 0, 2, 0, 0, 0 },

  { 112, 0, "baozhua1/CAN bit-packing 3",
    "", 0, 0, 0, 0, 0 },

  { 113, 0, "baozhua2/Data Type Conversion1",
    "", 0, 2, 0, 0, 0 },

  { 114, 0, "baozhua2/Data Type Conversion2",
    "", 0, 2, 0, 0, 0 },

  { 115, 0, "baozhua2/Data Type Conversion3",
    "", 0, 2, 0, 0, 0 },

  { 116, 0, "baozhua2/Data Type Conversion7",
    "", 0, 2, 0, 0, 0 },

  { 117, 0, "baozhua2/CAN bit-packing 1",
    "", 0, 0, 0, 0, 0 },

  { 118, 0, "baozhua2/CAN bit-packing 3",
    "", 0, 0, 0, 0, 0 },

  { 119, 0, "shengjiang/Data Type Conversion1",
    "", 0, 2, 0, 0, 0 },

  { 120, 0, "shengjiang/Data Type Conversion2",
    "", 0, 2, 0, 0, 0 },

  { 121, 0, "shengjiang/Data Type Conversion3",
    "", 0, 2, 0, 0, 0 },

  { 122, 0, "shengjiang/Data Type Conversion7",
    "", 0, 2, 0, 0, 0 },

  { 123, 0, "shengjiang/CAN bit-packing 1",
    "", 0, 0, 0, 0, 0 },

  { 124, 0, "shengjiang/CAN bit-packing 3",
    "", 0, 0, 0, 0, 0 },

  { 125, 0, "xuanzhuan/Data Type Conversion1",
    "", 0, 2, 0, 0, 0 },

  { 126, 0, "xuanzhuan/Data Type Conversion2",
    "", 0, 2, 0, 0, 0 },

  { 127, 0, "xuanzhuan/Data Type Conversion3",
    "", 0, 2, 0, 0, 0 },

  { 128, 0, "xuanzhuan/Data Type Conversion7",
    "", 0, 2, 0, 0, 0 },

  { 129, 0, "xuanzhuan/CAN bit-packing 1",
    "", 0, 0, 0, 0, 0 },

  { 130, 0, "xuanzhuan/CAN bit-packing 3",
    "", 0, 0, 0, 0, 0 },

  { 131, 0, "255_15shineng/Manual Switch/SwitchControl",
    "", 0, 0, 0, 0, 0 },

  { 132, 1, "255_15shineng/Manual Switch1/SwitchControl",
    "", 0, 0, 0, 0, 0 },

  { 133, 0, "255_15shineng/jihuo/Data Type Conversion17",
    "", 0, 2, 0, 0, 0 },

  { 134, 0, "255_15shineng/jihuo/Data Type Conversion18",
    "", 0, 2, 0, 0, 0 },

  { 135, 0, "255_15shineng/jihuo/Data Type Conversion19",
    "", 0, 2, 0, 0, 0 },

  { 136, 0, "255_15shineng/jihuo/Data Type Conversion20",
    "", 0, 2, 0, 0, 0 },

  { 137, 0, "255_15shineng/jihuo/Data Type Conversion21",
    "", 0, 2, 0, 0, 0 },

  { 138, 0, "255_15shineng/jihuo/Data Type Conversion22",
    "", 0, 2, 0, 0, 0 },

  { 139, 0, "255_15shineng/jihuo/Data Type Conversion23",
    "", 0, 2, 0, 0, 0 },

  { 140, 0, "255_15shineng/jihuo/Data Type Conversion24",
    "", 0, 2, 0, 0, 0 },

  { 141, 0, "255_15shineng/jihuo/CAN bit-packing 3",
    "", 0, 0, 0, 0, 0 },

  { 142, 0, "Subsystem2/Subsystem/Multiport Switch",
    "", 0, 0, 0, 0, 0 },

  { 143, 0, "baozhua1/Subsystem5/Multiport Switch",
    "", 0, 0, 0, 0, 0 },

  { 144, 0, "baozhua2/Subsystem5/Multiport Switch",
    "", 0, 0, 0, 0, 0 },

  { 145, 0, "shengjiang/Subsystem5/Multiport Switch",
    "", 0, 0, 0, 0, 0 },

  { 146, 0, "xuanzhuan/Subsystem5/Multiport Switch",
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
  { 147, "77",
    "Value", 0, 0, 0 },

  { 148, "99",
    "Value", 0, 0, 0 },

  { 149, "Constant10",
    "Value", 0, 0, 0 },

  { 150, "Constant11",
    "Value", 0, 0, 0 },

  { 151, "Constant12",
    "Value", 0, 0, 0 },

  { 152, "Constant13",
    "Value", 0, 0, 0 },

  { 153, "Constant14",
    "Value", 0, 0, 0 },

  { 154, "Constant15",
    "Value", 0, 0, 0 },

  { 155, "Constant16",
    "Value", 0, 0, 0 },

  { 156, "Constant17",
    "Value", 0, 0, 0 },

  { 157, "Constant19",
    "Value", 0, 0, 0 },

  { 158, "Constant2",
    "Value", 0, 0, 0 },

  { 159, "Constant20",
    "Value", 0, 0, 0 },

  { 160, "Constant21",
    "Value", 0, 0, 0 },

  { 161, "Constant22",
    "Value", 0, 0, 0 },

  { 162, "Constant23",
    "Value", 0, 0, 0 },

  { 163, "Constant24",
    "Value", 0, 0, 0 },

  { 164, "Constant25",
    "Value", 0, 0, 0 },

  { 165, "Constant26",
    "Value", 0, 0, 0 },

  { 166, "Constant27",
    "Value", 0, 0, 0 },

  { 167, "Constant28",
    "Value", 0, 0, 0 },

  { 168, "Constant29",
    "Value", 0, 0, 0 },

  { 169, "Constant3",
    "Value", 0, 0, 0 },

  { 170, "Constant4",
    "Value", 0, 0, 0 },

  { 171, "Constant5",
    "Value", 0, 0, 0 },

  { 172, "Constant6",
    "Value", 0, 0, 0 },

  { 173, "Constant7",
    "Value", 0, 0, 0 },

  { 174, "Constant8",
    "Value", 0, 0, 0 },

  { 175, "Constant9",
    "Value", 0, 0, 0 },

  { 176, "constant1",
    "Value", 0, 0, 0 },

  { 177, "constant3",
    "Value", 0, 0, 0 },

  { 178, "constant4",
    "Value", 0, 0, 0 },

  { 179, "dongzuo_zhuangtai1",
    "Value", 0, 0, 0 },

  { 180, "Pulse Generator",
    "Amplitude", 0, 0, 0 },

  { 181, "Pulse Generator",
    "Period", 0, 0, 0 },

  { 182, "Pulse Generator",
    "PulseWidth", 0, 0, 0 },

  { 183, "Pulse Generator",
    "PhaseDelay", 0, 0, 0 },

  { 184, "right7",
    "InputValues", 0, 4, 0 },

  { 185, "right7",
    "Table", 0, 4, 0 },

  { 186, "PCL731",
    "P1", 0, 0, 0 },

  { 187, "PCL731",
    "P2", 0, 4, 0 },

  { 188, "Setup ",
    "P1", 0, 5, 0 },

  { 189, "Setup ",
    "P2", 0, 5, 0 },

  { 190, "Setup ",
    "P3", 0, 6, 0 },

  { 191, "Setup ",
    "P4", 0, 7, 0 },

  { 192, "Setup ",
    "P11", 0, 7, 0 },

  { 193, "Setup ",
    "P15", 0, 0, 0 },

  { 194, "Setup ",
    "P16", 0, 0, 0 },

  { 195, "Setup ",
    "P17", 0, 0, 0 },

  { 196, "Setup ",
    "P18", 0, 0, 0 },

  { 197, "Setup ",
    "P19", 0, 0, 0 },

  { 198, "Setup ",
    "P20", 0, 0, 0 },

  { 199, "Setup ",
    "P21", 0, 0, 0 },

  { 200, "Setup ",
    "P22", 0, 0, 0 },

  { 201, "Setup ",
    "P23", 0, 0, 0 },

  { 202, "Setup ",
    "P24", 0, 0, 0 },

  { 203, "255_15shineng/Constant1",
    "Value", 0, 0, 0 },

  { 204, "255_15shineng/Constant10",
    "Value", 0, 0, 0 },

  { 205, "255_15shineng/Constant11",
    "Value", 0, 0, 0 },

  { 206, "255_15shineng/Constant12",
    "Value", 0, 0, 0 },

  { 207, "255_15shineng/Constant13",
    "Value", 0, 0, 0 },

  { 208, "255_15shineng/Constant14",
    "Value", 0, 0, 0 },

  { 209, "255_15shineng/Constant15",
    "Value", 0, 0, 0 },

  { 210, "255_15shineng/Constant16",
    "Value", 0, 0, 0 },

  { 211, "255_15shineng/Constant2",
    "Value", 0, 0, 0 },

  { 212, "255_15shineng/Constant3",
    "Value", 0, 0, 0 },

  { 213, "255_15shineng/Constant4",
    "Value", 0, 0, 0 },

  { 214, "255_15shineng/Constant5",
    "Value", 0, 0, 0 },

  { 215, "255_15shineng/Constant6",
    "Value", 0, 0, 0 },

  { 216, "255_15shineng/Constant7",
    "Value", 0, 0, 0 },

  { 217, "255_15shineng/Constant8",
    "Value", 0, 0, 0 },

  { 218, "255_15shineng/Constant9",
    "Value", 0, 0, 0 },

  { 219, "255shineng/Constant1",
    "Value", 0, 0, 0 },

  { 220, "255shineng/Constant16",
    "Value", 0, 0, 0 },

  { 221, "255shineng/Constant2",
    "Value", 0, 0, 0 },

  { 222, "255shineng/Constant3",
    "Value", 0, 0, 0 },

  { 223, "255shineng/Constant4",
    "Value", 0, 0, 0 },

  { 224, "255shineng/Constant5",
    "Value", 0, 0, 0 },

  { 225, "255shineng/Constant6",
    "Value", 0, 0, 0 },

  { 226, "255shineng/Constant7",
    "Value", 0, 0, 0 },

  { 227, "Manual Switch/Constant",
    "Value", 2, 0, 0 },

  { 228, "Manual Switch/SwitchControl",
    "Threshold", 2, 0, 0 },

  { 229, "Subsystem/constant2",
    "Value", 0, 0, 0 },

  { 230, "Subsystem/Memory",
    "X0", 0, 0, 0 },

  { 231, "Subsystem1/constant2",
    "Value", 0, 0, 0 },

  { 232, "Subsystem1/Memory",
    "X0", 0, 0, 0 },

  { 233, "Subsystem2/Constant18",
    "Value", 0, 0, 0 },

  { 234, "Subsystem3/constant2",
    "Value", 0, 0, 0 },

  { 235, "Subsystem3/Memory",
    "X0", 0, 0, 0 },

  { 236, "Subsystem4/Constant16",
    "Value", 0, 0, 0 },

  { 237, "Subsystem4/Constant2",
    "Value", 0, 0, 0 },

  { 238, "Subsystem4/Constant3",
    "Value", 0, 0, 0 },

  { 239, "Subsystem4/Constant4",
    "Value", 0, 0, 0 },

  { 240, "Subsystem4/Constant5",
    "Value", 0, 0, 0 },

  { 241, "Subsystem4/Constant6",
    "Value", 0, 0, 0 },

  { 242, "Subsystem4/Constant7",
    "Value", 0, 0, 0 },

  { 243, "Subsystem4/Constant8",
    "Value", 0, 0, 0 },

  { 244, "Subsystem5/constant2",
    "Value", 0, 0, 0 },

  { 245, "Subsystem5/Memory",
    "X0", 0, 0, 0 },

  { 246, "Subsystem6/constant2",
    "Value", 0, 0, 0 },

  { 247, "Subsystem6/constant5",
    "Value", 0, 0, 0 },

  { 248, "baozhua1/constant",
    "Value", 0, 0, 0 },

  { 249, "baozhua2/constant",
    "Value", 0, 0, 0 },

  { 250, "baozhua2/constant1",
    "Value", 0, 0, 0 },

  { 251, "baozhua2/constant2",
    "Value", 0, 0, 0 },

  { 252, "shengjiang/constant",
    "Value", 0, 0, 0 },

  { 253, "shengjiang/constant1",
    "Value", 0, 0, 0 },

  { 254, "shengjiang/constant2",
    "Value", 0, 0, 0 },

  { 255, "xuanzhuan/constant",
    "Value", 0, 0, 0 },

  { 256, "xuanzhuan/constant1",
    "Value", 0, 0, 0 },

  { 257, "xuanzhuan/constant2",
    "Value", 0, 0, 0 },

  { 258, "255_15shineng/Manual Switch/Constant",
    "Value", 2, 0, 0 },

  { 259, "255_15shineng/Manual Switch/SwitchControl",
    "Threshold", 2, 0, 0 },

  { 260, "255_15shineng/Manual Switch1/Constant",
    "Value", 2, 0, 0 },

  { 261, "255_15shineng/Manual Switch1/SwitchControl",
    "Threshold", 2, 0, 0 },

  { 262, "255_15shineng/jihuo/Constant17",
    "Value", 0, 0, 0 },

  { 263, "255_15shineng/jihuo/Constant18",
    "Value", 0, 0, 0 },

  { 264, "255_15shineng/jihuo/Constant19",
    "Value", 0, 0, 0 },

  { 265, "255_15shineng/jihuo/Constant20",
    "Value", 0, 0, 0 },

  { 266, "255_15shineng/jihuo/Constant21",
    "Value", 0, 0, 0 },

  { 267, "255_15shineng/jihuo/Constant22",
    "Value", 0, 0, 0 },

  { 268, "255_15shineng/jihuo/Constant23",
    "Value", 0, 0, 0 },

  { 269, "255_15shineng/jihuo/Constant24",
    "Value", 0, 0, 0 },

  { 270, "Subsystem2/Subsystem/Constant1",
    "Value", 0, 0, 0 },

  { 271, "Subsystem2/Subsystem/Constant28",
    "Value", 0, 0, 0 },

  { 272, "Subsystem2/Subsystem/Constant29",
    "Value", 0, 0, 0 },

  { 273, "Subsystem2/Subsystem/Constant30",
    "Value", 0, 0, 0 },

  { 274, "Subsystem2/Subsystem/Constant31",
    "Value", 0, 0, 0 },

  { 275, "Subsystem2/Subsystem/Constant32",
    "Value", 0, 0, 0 },

  { 276, "Subsystem2/Subsystem/Constant33",
    "Value", 0, 0, 0 },

  { 277, "baozhua1/Subsystem5/baojin",
    "Value", 0, 0, 0 },

  { 278, "baozhua1/Subsystem5/dakai",
    "Value", 0, 0, 0 },

  { 279, "baozhua1/Subsystem5/tingzhi",
    "Value", 0, 0, 0 },

  { 280, "baozhua2/Subsystem5/baojin",
    "Value", 0, 0, 0 },

  { 281, "baozhua2/Subsystem5/dakai",
    "Value", 0, 0, 0 },

  { 282, "baozhua2/Subsystem5/tingzhi",
    "Value", 0, 0, 0 },

  { 283, "shengjiang/Subsystem5/diwei",
    "Value", 0, 0, 0 },

  { 284, "shengjiang/Subsystem5/gaowei",
    "Value", 0, 0, 0 },

  { 285, "shengjiang/Subsystem5/tingzhi",
    "Value", 0, 0, 0 },

  { 286, "xuanzhuan/Subsystem5/gongzuowei",
    "Value", 0, 0, 0 },

  { 287, "xuanzhuan/Subsystem5/tingzhi",
    "Value", 0, 0, 0 },

  { 288, "xuanzhuan/Subsystem5/yuanshiwei",
    "Value", 0, 0, 0 },

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
  &canceshi_B.dongzuo_zhuangtai1,      /* 0: Signal */
  &canceshi_B.a[0],                    /* 1: Signal */
  &canceshi_B.b[0],                    /* 2: Signal */
  &canceshi_B.baozhuaa,                /* 3: Signal */
  &canceshi_B.baozhuab,                /* 4: Signal */
  &canceshi_B.c[0],                    /* 5: Signal */
  &canceshi_B.d[0],                    /* 6: Signal */
  &canceshi_B.e[0],                    /* 7: Signal */
  &canceshi_B.f[0],                    /* 8: Signal */
  &canceshi_B.shengjianga,             /* 9: Signal */
  &canceshi_B.sifufa,                  /* 10: Signal */
  &canceshi_B.xuanzhuana,              /* 11: Signal */
  &canceshi_B.PulseGenerator,          /* 12: Signal */
  &canceshi_B.right7,                  /* 13: Signal */
  &canceshi_B.MultiportSwitch1,        /* 14: Signal */
  &canceshi_B.MultiportSwitch2,        /* 15: Signal */
  &canceshi_B.MultiportSwitch3,        /* 16: Signal */
  &canceshi_B.MultiportSwitch4,        /* 17: Signal */
  &canceshi_B.u02Receive_o1,           /* 18: Signal */
  &canceshi_B.u02Receive_o2,           /* 19: Signal */
  &canceshi_B.CANbitunpacking_o1,      /* 20: Signal */
  &canceshi_B.CANbitunpacking_o2,      /* 21: Signal */
  &canceshi_B.CANbitunpacking_o3,      /* 22: Signal */
  &canceshi_B.CANbitunpacking_o4,      /* 23: Signal */
  &canceshi_B.CANbitunpacking1_o1,     /* 24: Signal */
  &canceshi_B.CANbitunpacking1_o2,     /* 25: Signal */
  &canceshi_B.CANbitunpacking1_o3,     /* 26: Signal */
  &canceshi_B.CANbitunpacking1_o4,     /* 27: Signal */
  &canceshi_B.CANbitunpacking1_o5,     /* 28: Signal */
  &canceshi_B.CANbitunpacking1_o6,     /* 29: Signal */
  &canceshi_B.CANbitunpacking1_o7,     /* 30: Signal */
  &canceshi_B.CANbitunpacking1_o8,     /* 31: Signal */
  &canceshi_B.CANbitunpacking2_o1,     /* 32: Signal */
  &canceshi_B.CANbitunpacking2_o2,     /* 33: Signal */
  &canceshi_B.CANbitunpacking2_o3,     /* 34: Signal */
  &canceshi_B.CANbitunpacking2_o4,     /* 35: Signal */
  &canceshi_B.CANbitunpacking3_o1,     /* 36: Signal */
  &canceshi_B.CANbitunpacking3_o2,     /* 37: Signal */
  &canceshi_B.CANbitunpacking3_o3,     /* 38: Signal */
  &canceshi_B.CANbitunpacking3_o4,     /* 39: Signal */
  &canceshi_B.CANbitunpacking4_o1,     /* 40: Signal */
  &canceshi_B.CANbitunpacking4_o2,     /* 41: Signal */
  &canceshi_B.CANbitunpacking4_o3,     /* 42: Signal */
  &canceshi_B.CANbitunpacking4_o4,     /* 43: Signal */
  &canceshi_B.CANbitunpacking4_o5,     /* 44: Signal */
  &canceshi_B.CANbitunpacking5_o1,     /* 45: Signal */
  &canceshi_B.CANbitunpacking5_o2,     /* 46: Signal */
  &canceshi_B.CANbitunpacking5_o3,     /* 47: Signal */
  &canceshi_B.CANbitunpacking5_o4,     /* 48: Signal */
  &canceshi_B.CANbitunpacking5_o5,     /* 49: Signal */
  &canceshi_B.PCL731[0],               /* 50: Signal */
  &canceshi_B.Receive_o1,              /* 51: Signal */
  &canceshi_B.Receive_o2,              /* 52: Signal */
  &canceshi_B.Receive_o3,              /* 53: Signal */
  &canceshi_B.Receive_o4,              /* 54: Signal */
  &canceshi_B.DataTypeConversion1_o,   /* 55: Signal */
  &canceshi_B.DataTypeConversion10,    /* 56: Signal */
  &canceshi_B.DataTypeConversion11,    /* 57: Signal */
  &canceshi_B.DataTypeConversion12,    /* 58: Signal */
  &canceshi_B.DataTypeConversion13,    /* 59: Signal */
  &canceshi_B.DataTypeConversion14,    /* 60: Signal */
  &canceshi_B.DataTypeConversion15,    /* 61: Signal */
  &canceshi_B.DataTypeConversion16_n,  /* 62: Signal */
  &canceshi_B.DataTypeConversion2_j,   /* 63: Signal */
  &canceshi_B.DataTypeConversion3_j,   /* 64: Signal */
  &canceshi_B.DataTypeConversion4_p,   /* 65: Signal */
  &canceshi_B.DataTypeConversion5_o,   /* 66: Signal */
  &canceshi_B.DataTypeConversion6_e,   /* 67: Signal */
  &canceshi_B.DataTypeConversion7_e,   /* 68: Signal */
  &canceshi_B.DataTypeConversion8,     /* 69: Signal */
  &canceshi_B.DataTypeConversion9,     /* 70: Signal */
  &canceshi_B.CANbitpacking1_m,        /* 71: Signal */
  &canceshi_B.CANbitpacking2_o,        /* 72: Signal */
  &canceshi_B.DataTypeConversion1_i,   /* 73: Signal */
  &canceshi_B.DataTypeConversion16,    /* 74: Signal */
  &canceshi_B.DataTypeConversion2_f,   /* 75: Signal */
  &canceshi_B.DataTypeConversion3_d,   /* 76: Signal */
  &canceshi_B.DataTypeConversion4,     /* 77: Signal */
  &canceshi_B.DataTypeConversion5,     /* 78: Signal */
  &canceshi_B.DataTypeConversion6,     /* 79: Signal */
  &canceshi_B.DataTypeConversion7_m,   /* 80: Signal */
  &canceshi_B.CANbitpacking2,          /* 81: Signal */
  &canceshi_B.SwitchControl,           /* 82: Signal */
  &canceshi_B.Memory,                  /* 83: Signal */
  &canceshi_B.RelationalOperator,      /* 84: Signal */
  &canceshi_B.Subtract,                /* 85: Signal */
  &canceshi_B.Memory_o,                /* 86: Signal */
  &canceshi_B.RelationalOperator_h,    /* 87: Signal */
  &canceshi_B.Subtract_l,              /* 88: Signal */
  &canceshi_B.DataTypeConversion17,    /* 89: Signal */
  &canceshi_B.DataTypeConversion18,    /* 90: Signal */
  &canceshi_B.CANbitpacking3_a,        /* 91: Signal */
  &canceshi_B.Memory_f,                /* 92: Signal */
  &canceshi_B.RelationalOperator_g,    /* 93: Signal */
  &canceshi_B.Subtract_i,              /* 94: Signal */
  &canceshi_B.DataTypeConversion1_e,   /* 95: Signal */
  &canceshi_B.DataTypeConversion16_e,  /* 96: Signal */
  &canceshi_B.DataTypeConversion2_np,  /* 97: Signal */
  &canceshi_B.DataTypeConversion3_m,   /* 98: Signal */
  &canceshi_B.DataTypeConversion4_l,   /* 99: Signal */
  &canceshi_B.DataTypeConversion5_m,   /* 100: Signal */
  &canceshi_B.DataTypeConversion6_i,   /* 101: Signal */
  &canceshi_B.DataTypeConversion7_k,   /* 102: Signal */
  &canceshi_B.CANbitpacking2_j,        /* 103: Signal */
  &canceshi_B.Memory_i,                /* 104: Signal */
  &canceshi_B.RelationalOperator_o,    /* 105: Signal */
  &canceshi_B.Subtract_n,              /* 106: Signal */
  &canceshi_B.DataTypeConversion2_g,   /* 107: Signal */
  &canceshi_B.DataTypeConversion3_f,   /* 108: Signal */
  &canceshi_B.CANbitpacking1_o,        /* 109: Signal */
  &canceshi_B.DataTypeConversion1,     /* 110: Signal */
  &canceshi_B.DataTypeConversion7,     /* 111: Signal */
  &canceshi_B.CANbitpacking3,          /* 112: Signal */
  &canceshi_B.DataTypeConversion1_a,   /* 113: Signal */
  &canceshi_B.DataTypeConversion2,     /* 114: Signal */
  &canceshi_B.DataTypeConversion3,     /* 115: Signal */
  &canceshi_B.DataTypeConversion7_c,   /* 116: Signal */
  &canceshi_B.CANbitpacking1,          /* 117: Signal */
  &canceshi_B.CANbitpacking3_p,        /* 118: Signal */
  &canceshi_B.DataTypeConversion1_k,   /* 119: Signal */
  &canceshi_B.DataTypeConversion2_k,   /* 120: Signal */
  &canceshi_B.DataTypeConversion3_n,   /* 121: Signal */
  &canceshi_B.DataTypeConversion7_h,   /* 122: Signal */
  &canceshi_B.CANbitpacking1_i,        /* 123: Signal */
  &canceshi_B.CANbitpacking3_d,        /* 124: Signal */
  &canceshi_B.DataTypeConversion1_p,   /* 125: Signal */
  &canceshi_B.DataTypeConversion2_n,   /* 126: Signal */
  &canceshi_B.DataTypeConversion3_b,   /* 127: Signal */
  &canceshi_B.DataTypeConversion7_i,   /* 128: Signal */
  &canceshi_B.CANbitpacking1_e,        /* 129: Signal */
  &canceshi_B.CANbitpacking3_h,        /* 130: Signal */
  &canceshi_B.SwitchControl_d,         /* 131: Signal */
  &canceshi_B.SwitchControl_j,         /* 132: Signal */
  &canceshi_B.DataTypeConversion17_b,  /* 133: Signal */
  &canceshi_B.DataTypeConversion18_i,  /* 134: Signal */
  &canceshi_B.DataTypeConversion19,    /* 135: Signal */
  &canceshi_B.DataTypeConversion20,    /* 136: Signal */
  &canceshi_B.DataTypeConversion21,    /* 137: Signal */
  &canceshi_B.DataTypeConversion22,    /* 138: Signal */
  &canceshi_B.DataTypeConversion23,    /* 139: Signal */
  &canceshi_B.DataTypeConversion24,    /* 140: Signal */
  &canceshi_B.CANbitpacking3_c,        /* 141: Signal */
  &canceshi_B.MultiportSwitch_m,       /* 142: Signal */
  &canceshi_B.MultiportSwitch,         /* 143: Signal */
  &canceshi_B.MultiportSwitch_j,       /* 144: Signal */
  &canceshi_B.MultiportSwitch_e,       /* 145: Signal */
  &canceshi_B.MultiportSwitch_h,       /* 146: Signal */
  &canceshi_P.u_Value,                 /* 147: Block Parameter */
  &canceshi_P.u_Value_o,               /* 148: Block Parameter */
  &canceshi_P.Constant10_Value,        /* 149: Block Parameter */
  &canceshi_P.Constant11_Value,        /* 150: Block Parameter */
  &canceshi_P.Constant12_Value,        /* 151: Block Parameter */
  &canceshi_P.Constant13_Value,        /* 152: Block Parameter */
  &canceshi_P.Constant14_Value,        /* 153: Block Parameter */
  &canceshi_P.Constant15_Value,        /* 154: Block Parameter */
  &canceshi_P.Constant16_Value,        /* 155: Block Parameter */
  &canceshi_P.Constant17_Value,        /* 156: Block Parameter */
  &canceshi_P.Constant19_Value,        /* 157: Block Parameter */
  &canceshi_P.Constant2_Value,         /* 158: Block Parameter */
  &canceshi_P.Constant20_Value,        /* 159: Block Parameter */
  &canceshi_P.Constant21_Value,        /* 160: Block Parameter */
  &canceshi_P.Constant22_Value_n,      /* 161: Block Parameter */
  &canceshi_P.Constant23_Value,        /* 162: Block Parameter */
  &canceshi_P.Constant24_Value,        /* 163: Block Parameter */
  &canceshi_P.Constant25_Value,        /* 164: Block Parameter */
  &canceshi_P.Constant26_Value,        /* 165: Block Parameter */
  &canceshi_P.Constant27_Value,        /* 166: Block Parameter */
  &canceshi_P.Constant28_Value_a,      /* 167: Block Parameter */
  &canceshi_P.Constant29_Value_p,      /* 168: Block Parameter */
  &canceshi_P.Constant3_Value,         /* 169: Block Parameter */
  &canceshi_P.Constant4_Value,         /* 170: Block Parameter */
  &canceshi_P.Constant5_Value,         /* 171: Block Parameter */
  &canceshi_P.Constant6_Value,         /* 172: Block Parameter */
  &canceshi_P.Constant7_Value,         /* 173: Block Parameter */
  &canceshi_P.Constant8_Value,         /* 174: Block Parameter */
  &canceshi_P.Constant9_Value,         /* 175: Block Parameter */
  &canceshi_P.constant1_Value,         /* 176: Block Parameter */
  &canceshi_P.constant3_Value,         /* 177: Block Parameter */
  &canceshi_P.constant4_Value,         /* 178: Block Parameter */
  &canceshi_P.dongzuo_zhuangtai1_Value,/* 179: Block Parameter */
  &canceshi_P.PulseGenerator_Amp,      /* 180: Block Parameter */
  &canceshi_P.PulseGenerator_Period,   /* 181: Block Parameter */
  &canceshi_P.PulseGenerator_Duty,     /* 182: Block Parameter */
  &canceshi_P.PulseGenerator_PhaseDelay,/* 183: Block Parameter */
  &canceshi_P.right7_XData[0],         /* 184: Block Parameter */
  &canceshi_P.right7_YData[0],         /* 185: Block Parameter */
  &canceshi_P.PCL731_P1,               /* 186: Block Parameter */
  &canceshi_P.PCL731_P2[0],            /* 187: Block Parameter */
  &canceshi_P.Setup_P1[0],             /* 188: Block Parameter */
  &canceshi_P.Setup_P2[0],             /* 189: Block Parameter */
  &canceshi_P.Setup_P3[0],             /* 190: Block Parameter */
  &canceshi_P.Setup_P4[0],             /* 191: Block Parameter */
  &canceshi_P.Setup_P11[0],            /* 192: Block Parameter */
  &canceshi_P.Setup_P15,               /* 193: Block Parameter */
  &canceshi_P.Setup_P16,               /* 194: Block Parameter */
  &canceshi_P.Setup_P17,               /* 195: Block Parameter */
  &canceshi_P.Setup_P18,               /* 196: Block Parameter */
  &canceshi_P.Setup_P19,               /* 197: Block Parameter */
  &canceshi_P.Setup_P20,               /* 198: Block Parameter */
  &canceshi_P.Setup_P21,               /* 199: Block Parameter */
  &canceshi_P.Setup_P22,               /* 200: Block Parameter */
  &canceshi_P.Setup_P23,               /* 201: Block Parameter */
  &canceshi_P.Setup_P24,               /* 202: Block Parameter */
  &canceshi_P.Constant1_Value_g,       /* 203: Block Parameter */
  &canceshi_P.Constant10_Value_i,      /* 204: Block Parameter */
  &canceshi_P.Constant11_Value_b,      /* 205: Block Parameter */
  &canceshi_P.Constant12_Value_l,      /* 206: Block Parameter */
  &canceshi_P.Constant13_Value_d,      /* 207: Block Parameter */
  &canceshi_P.Constant14_Value_l,      /* 208: Block Parameter */
  &canceshi_P.Constant15_Value_k,      /* 209: Block Parameter */
  &canceshi_P.Constant16_Value_k,      /* 210: Block Parameter */
  &canceshi_P.Constant2_Value_j,       /* 211: Block Parameter */
  &canceshi_P.Constant3_Value_p,       /* 212: Block Parameter */
  &canceshi_P.Constant4_Value_a,       /* 213: Block Parameter */
  &canceshi_P.Constant5_Value_l,       /* 214: Block Parameter */
  &canceshi_P.Constant6_Value_d,       /* 215: Block Parameter */
  &canceshi_P.Constant7_Value_m,       /* 216: Block Parameter */
  &canceshi_P.Constant8_Value_m,       /* 217: Block Parameter */
  &canceshi_P.Constant9_Value_l,       /* 218: Block Parameter */
  &canceshi_P.Constant1_Value_f,       /* 219: Block Parameter */
  &canceshi_P.Constant16_Value_i,      /* 220: Block Parameter */
  &canceshi_P.Constant2_Value_n,       /* 221: Block Parameter */
  &canceshi_P.Constant3_Value_o,       /* 222: Block Parameter */
  &canceshi_P.Constant4_Value_o,       /* 223: Block Parameter */
  &canceshi_P.Constant5_Value_b,       /* 224: Block Parameter */
  &canceshi_P.Constant6_Value_p,       /* 225: Block Parameter */
  &canceshi_P.Constant7_Value_a,       /* 226: Block Parameter */
  &canceshi_P.Constant_Value_j,        /* 227: Block Parameter */
  &canceshi_P.SwitchControl_Threshold_g,/* 228: Block Parameter */
  &canceshi_P.constant2_Value_e,       /* 229: Block Parameter */
  &canceshi_P.Memory_X0,               /* 230: Block Parameter */
  &canceshi_P.constant2_Value_b,       /* 231: Block Parameter */
  &canceshi_P.Memory_X0_m,             /* 232: Block Parameter */
  &canceshi_P.Constant18_Value,        /* 233: Block Parameter */
  &canceshi_P.constant2_Value_fm,      /* 234: Block Parameter */
  &canceshi_P.Memory_X0_c,             /* 235: Block Parameter */
  &canceshi_P.Constant16_Value_c,      /* 236: Block Parameter */
  &canceshi_P.Constant2_Value_d,       /* 237: Block Parameter */
  &canceshi_P.Constant3_Value_e,       /* 238: Block Parameter */
  &canceshi_P.Constant4_Value_g,       /* 239: Block Parameter */
  &canceshi_P.Constant5_Value_f,       /* 240: Block Parameter */
  &canceshi_P.Constant6_Value_k,       /* 241: Block Parameter */
  &canceshi_P.Constant7_Value_o,       /* 242: Block Parameter */
  &canceshi_P.Constant8_Value_n,       /* 243: Block Parameter */
  &canceshi_P.constant2_Value_d,       /* 244: Block Parameter */
  &canceshi_P.Memory_X0_f,             /* 245: Block Parameter */
  &canceshi_P.constant2_Value,         /* 246: Block Parameter */
  &canceshi_P.constant5_Value,         /* 247: Block Parameter */
  &canceshi_P.constant_Value,          /* 248: Block Parameter */
  &canceshi_P.constant_Value_k,        /* 249: Block Parameter */
  &canceshi_P.constant1_Value_p,       /* 250: Block Parameter */
  &canceshi_P.constant2_Value_f,       /* 251: Block Parameter */
  &canceshi_P.constant_Value_m,        /* 252: Block Parameter */
  &canceshi_P.constant1_Value_n,       /* 253: Block Parameter */
  &canceshi_P.constant2_Value_p,       /* 254: Block Parameter */
  &canceshi_P.constant_Value_d,        /* 255: Block Parameter */
  &canceshi_P.constant1_Value_c,       /* 256: Block Parameter */
  &canceshi_P.constant2_Value_ez,      /* 257: Block Parameter */
  &canceshi_P.Constant_Value_i,        /* 258: Block Parameter */
  &canceshi_P.SwitchControl_Threshold_f,/* 259: Block Parameter */
  &canceshi_P.Constant_Value,          /* 260: Block Parameter */
  &canceshi_P.SwitchControl_Threshold, /* 261: Block Parameter */
  &canceshi_P.Constant17_Value_g,      /* 262: Block Parameter */
  &canceshi_P.Constant18_Value_o,      /* 263: Block Parameter */
  &canceshi_P.Constant19_Value_p,      /* 264: Block Parameter */
  &canceshi_P.Constant20_Value_m,      /* 265: Block Parameter */
  &canceshi_P.Constant21_Value_c,      /* 266: Block Parameter */
  &canceshi_P.Constant22_Value,        /* 267: Block Parameter */
  &canceshi_P.Constant23_Value_d,      /* 268: Block Parameter */
  &canceshi_P.Constant24_Value_b,      /* 269: Block Parameter */
  &canceshi_P.Constant1_Value,         /* 270: Block Parameter */
  &canceshi_P.Constant28_Value,        /* 271: Block Parameter */
  &canceshi_P.Constant29_Value,        /* 272: Block Parameter */
  &canceshi_P.Constant30_Value,        /* 273: Block Parameter */
  &canceshi_P.Constant31_Value,        /* 274: Block Parameter */
  &canceshi_P.Constant32_Value,        /* 275: Block Parameter */
  &canceshi_P.Constant33_Value,        /* 276: Block Parameter */
  &canceshi_P.baojin_Value,            /* 277: Block Parameter */
  &canceshi_P.dakai_Value,             /* 278: Block Parameter */
  &canceshi_P.tingzhi_Value,           /* 279: Block Parameter */
  &canceshi_P.baojin_Value_k,          /* 280: Block Parameter */
  &canceshi_P.dakai_Value_c,           /* 281: Block Parameter */
  &canceshi_P.tingzhi_Value_c,         /* 282: Block Parameter */
  &canceshi_P.diwei_Value,             /* 283: Block Parameter */
  &canceshi_P.gaowei_Value,            /* 284: Block Parameter */
  &canceshi_P.tingzhi_Value_ca,        /* 285: Block Parameter */
  &canceshi_P.gongzuowei_Value,        /* 286: Block Parameter */
  &canceshi_P.tingzhi_Value_d,         /* 287: Block Parameter */
  &canceshi_P.yuanshiwei_Value         /* 288: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static const rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

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
  0.002, 0.0
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
    0, 0 },

  { (NULL), (NULL), -1, 0 }
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
  { rtBlockSignals, 147 },

  { rtBlockParameters, 142,
    rtModelParameters, 0 },

  { NULL, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float", NULL
};

/* Cache pointers into DataMapInfo substructure of RTModel */
void canceshi_InitializeDataMapInfo(rtModel_canceshi *canceshi_rtM
  )
{
  /* Set C-API version */
  rtwCAPI_SetVersion(canceshi_rtM->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(canceshi_rtM->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(canceshi_rtM->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(canceshi_rtM->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(canceshi_rtM->DataMapInfo.mmi, NULL);

  /* Set Reference to submodels */
  rtwCAPI_SetChildMMIArray(canceshi_rtM->DataMapInfo.mmi, NULL);
  rtwCAPI_SetChildMMIArrayLen(canceshi_rtM->DataMapInfo.mmi, 0);
}

/* EOF: canceshi_capi.c */
