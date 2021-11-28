/*
 * gggg_capi.c
 *
 * Code generation for model "gggg".
 *
 * Model version              : 1.108
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 26 00:09:20 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "gggg_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "gggg.h"
#include "gggg_capi.h"
#include "gggg_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("&#x65CB;&#x677E;1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("&#x65CB;&#x7D27;1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("&#x9884;&#x65CB;&#x677E;1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Product4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Add2"),
    TARGET_STRING("开环"), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Manual Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 15, TARGET_STRING("Subsystem/Chart/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 15, TARGET_STRING("Subsystem/Chart/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 10, 16, TARGET_STRING("Subsystem/Chart1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 16, TARGET_STRING("Subsystem/Chart1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 12, 16, TARGET_STRING("Subsystem/Chart1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 13, 17, TARGET_STRING("Subsystem/DI"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 14, 18, TARGET_STRING("Subsystem/DI1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 15, 21, TARGET_STRING("Subsystem/V_S_1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 21, TARGET_STRING("Subsystem/V_S_1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 17, 22, TARGET_STRING("Subsystem/V_S_2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 18, 22, TARGET_STRING("Subsystem/V_S_2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 19, 23, TARGET_STRING("Subsystem/anti_v/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 23, TARGET_STRING("Subsystem/anti_v/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 21, 23, TARGET_STRING("Subsystem/anti_v/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 22, 23, TARGET_STRING("Subsystem/anti_v/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 23, 24, TARGET_STRING("Subsystem/anti_v1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 24, TARGET_STRING("Subsystem/anti_v1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 25, 24, TARGET_STRING("Subsystem/anti_v1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 26, 24, TARGET_STRING("Subsystem/anti_v1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Subsystem/Data Type Conversion"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 28, 10, TARGET_STRING("Subsystem/Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 29, 11, TARGET_STRING("Subsystem/Data Type Conversion10"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 30, 11, TARGET_STRING("Subsystem/Data Type Conversion11"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 31, 11, TARGET_STRING("Subsystem/Data Type Conversion12"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 32, 12, TARGET_STRING("Subsystem/Data Type Conversion13"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 33, 11, TARGET_STRING("Subsystem/Data Type Conversion14"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 34, 11, TARGET_STRING("Subsystem/Data Type Conversion15"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 35, 10, TARGET_STRING("Subsystem/Data Type Conversion16"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 36, 9, TARGET_STRING("Subsystem/Data Type Conversion17"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 37, 9, TARGET_STRING("Subsystem/Data Type Conversion18"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 38, 9, TARGET_STRING("Subsystem/Data Type Conversion19"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 39, 10, TARGET_STRING("Subsystem/Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 40, 9, TARGET_STRING("Subsystem/Data Type Conversion20"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 41, 9, TARGET_STRING("Subsystem/Data Type Conversion21"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 42, 9, TARGET_STRING("Subsystem/Data Type Conversion22"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 43, 9, TARGET_STRING("Subsystem/Data Type Conversion23"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 44, 9, TARGET_STRING("Subsystem/Data Type Conversion24"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 45, 11, TARGET_STRING("Subsystem/Data Type Conversion25"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 46, 11, TARGET_STRING("Subsystem/Data Type Conversion26"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 47, 11, TARGET_STRING("Subsystem/Data Type Conversion27"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 48, 12, TARGET_STRING("Subsystem/Data Type Conversion28"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 49, 12, TARGET_STRING("Subsystem/Data Type Conversion29"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 50, 10, TARGET_STRING("Subsystem/Data Type Conversion3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 51, 12, TARGET_STRING("Subsystem/Data Type Conversion30"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 52, 12, TARGET_STRING("Subsystem/Data Type Conversion31"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 53, 12, TARGET_STRING("Subsystem/Data Type Conversion32"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 54, 10, TARGET_STRING("Subsystem/Data Type Conversion4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 55, 10, TARGET_STRING("Subsystem/Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 56, 10, TARGET_STRING("Subsystem/Data Type Conversion6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 57, 10, TARGET_STRING("Subsystem/Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 58, 12, TARGET_STRING("Subsystem/Data Type Conversion8"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 59, 12, TARGET_STRING("Subsystem/Data Type Conversion9"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Subsystem/Gain10"),
    TARGET_STRING("位移"), 0, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Subsystem/Gain11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Subsystem/Gain12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 65, 0, TARGET_STRING("Subsystem/Gain13"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 66, 0, TARGET_STRING("Subsystem/Gain2"),
    TARGET_STRING("速度"), 0, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Subsystem/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Subsystem/Gain4"),
    TARGET_STRING("位移"), 0, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Subsystem/Gain5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 70, 0, TARGET_STRING("Subsystem/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 0, TARGET_STRING("Subsystem/Gain7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 0, TARGET_STRING("Subsystem/Gain8"),
    TARGET_STRING("速度"), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Subsystem/Gain9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING("Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Subsystem/Logical Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 76, 0, TARGET_STRING("Subsystem/Logical Operator2"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Subsystem/Logical Operator3"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 78, 0, TARGET_STRING("Subsystem/Logical Operator4"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Subsystem/Logical Operator6"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Subsystem/Multiport Switch1"),
    TARGET_STRING(""), 0, 1, 2, 0, 0 },

  { 81, 0, TARGET_STRING("Subsystem/Multiport Switch4"),
    TARGET_STRING(""), 0, 1, 2, 0, 0 },

  { 82, 0, TARGET_STRING("Subsystem/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 0, TARGET_STRING("Subsystem/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 84, 0, TARGET_STRING("Subsystem/CAN bit-packing 1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 85, 0, TARGET_STRING("Subsystem/CAN bit-packing 2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 0, TARGET_STRING("Subsystem/CAN bit-packing 3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 88, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 89, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 90, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 1 },

  { 91, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 1 },

  { 92, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p5"),
    TARGET_STRING(""), 4, 1, 0, 0, 1 },

  { 93, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p6"),
    TARGET_STRING(""), 5, 1, 0, 0, 1 },

  { 94, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p7"),
    TARGET_STRING(""), 6, 1, 0, 0, 1 },

  { 95, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 2/p8"),
    TARGET_STRING(""), 7, 1, 0, 0, 1 },

  { 96, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 97, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 98, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 1 },

  { 99, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 1 },

  { 100, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p5"),
    TARGET_STRING(""), 4, 1, 0, 0, 1 },

  { 101, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p6"),
    TARGET_STRING(""), 5, 1, 0, 0, 1 },

  { 102, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p7"),
    TARGET_STRING(""), 6, 1, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 3/p8"),
    TARGET_STRING(""), 7, 1, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Subsystem/CAN bit-unpacking 4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 105, 0, TARGET_STRING("Subsystem/receive"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 106, 0, TARGET_STRING("Subsystem/receive1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("Subsystem/receive2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Subsystem/receive3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 0, TARGET_STRING("Subsystem/s1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING("Subsystem/s3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING("Subsystem/s4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING("Subsystem/s5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 113, 0, TARGET_STRING("Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 114, 0, TARGET_STRING("Subsystem/Add2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 115, 0, TARGET_STRING("Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 116, 0, TARGET_STRING("Subsystem/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 117, 0, TARGET_STRING("Subsystem/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 0, TARGET_STRING("Subsystem/Manual Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 119, 7, TARGET_STRING("Subsystem/Manual Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 120, 4, TARGET_STRING("Subsystem/Manual Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 0, TARGET_STRING("Subsystem/Delay"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 122, 0, TARGET_STRING("Subsystem/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 123, 0, TARGET_STRING("husuo/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 124, 0, TARGET_STRING("husuo/Logical Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 125, 0, TARGET_STRING("husuo/Logical Operator2"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 126, 0, TARGET_STRING("husuo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 127, 0, TARGET_STRING("husuo/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING("husuo/Memory2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 0, TARGET_STRING("husuo/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 130, 0, TARGET_STRING("husuo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 131, 0, TARGET_STRING("husuo/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 132, 19, TARGET_STRING("Subsystem/Subsystem1/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 133, 20, TARGET_STRING("Subsystem/Subsystem2/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 134, TARGET_STRING("Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 135, TARGET_STRING("Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 136, TARGET_STRING("Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 137, TARGET_STRING("Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 138, TARGET_STRING("&#x590D;&#x4F4D;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 139, TARGET_STRING("&#x65CB;&#x677E;1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 140, TARGET_STRING("&#x65CB;&#x7D27;1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 141, TARGET_STRING("&#x9884;&#x65CB;&#x677E;1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 142, TARGET_STRING("Manual Switch"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 143, TARGET_STRING("Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 144, TARGET_STRING("Subsystem/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 145, TARGET_STRING("Subsystem/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 146, TARGET_STRING("Subsystem/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 147, TARGET_STRING("Subsystem/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 148, TARGET_STRING("Subsystem/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 149, TARGET_STRING("Subsystem/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 150, TARGET_STRING("Subsystem/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 151, TARGET_STRING("Subsystem/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 152, TARGET_STRING("Subsystem/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 153, TARGET_STRING("Subsystem/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 154, TARGET_STRING("Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 155, TARGET_STRING("Subsystem/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 156, TARGET_STRING("Subsystem/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 157, TARGET_STRING("Subsystem/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 158, TARGET_STRING("Subsystem/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 159, TARGET_STRING("Subsystem/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 160, TARGET_STRING("Subsystem/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 161, TARGET_STRING("Subsystem/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 162, TARGET_STRING("Subsystem/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 163, TARGET_STRING("Subsystem/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 164, TARGET_STRING("Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 165, TARGET_STRING("Subsystem/Constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 166, TARGET_STRING("Subsystem/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 167, TARGET_STRING("Subsystem/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 168, TARGET_STRING("Subsystem/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 169, TARGET_STRING("Subsystem/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 170, TARGET_STRING("Subsystem/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 171, TARGET_STRING("Subsystem/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 172, TARGET_STRING("Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 173, TARGET_STRING("Subsystem/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 174, TARGET_STRING("Subsystem/Gain10"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 175, TARGET_STRING("Subsystem/Gain11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 176, TARGET_STRING("Subsystem/Gain12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 177, TARGET_STRING("Subsystem/Gain13"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 178, TARGET_STRING("Subsystem/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 179, TARGET_STRING("Subsystem/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 180, TARGET_STRING("Subsystem/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 181, TARGET_STRING("Subsystem/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 182, TARGET_STRING("Subsystem/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 183, TARGET_STRING("Subsystem/Gain7"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 184, TARGET_STRING("Subsystem/Gain8"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 185, TARGET_STRING("Subsystem/Gain9"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 186, TARGET_STRING("Subsystem/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 187, TARGET_STRING("Subsystem/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 188, TARGET_STRING("Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 189, TARGET_STRING("Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 190, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 191, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P2"), 0, 3, 0 },

  { 192, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 193, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P6"), 0, 3, 0 },

  { 194, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P13"), 0, 3, 0 },

  { 195, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 196, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 197, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 198, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 199, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 200, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 201, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 202, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 203, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 204, TARGET_STRING("Subsystem/Setup "),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 205, TARGET_STRING("Subsystem/s1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 206, TARGET_STRING("Subsystem/s1"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 207, TARGET_STRING("Subsystem/s1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 208, TARGET_STRING("Subsystem/s1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 209, TARGET_STRING("Subsystem/s3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 210, TARGET_STRING("Subsystem/s3"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 211, TARGET_STRING("Subsystem/s3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 212, TARGET_STRING("Subsystem/s3"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 213, TARGET_STRING("Subsystem/s4"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 214, TARGET_STRING("Subsystem/s4"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 215, TARGET_STRING("Subsystem/s4"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 216, TARGET_STRING("Subsystem/s4"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 217, TARGET_STRING("Subsystem/s5"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 218, TARGET_STRING("Subsystem/s5"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 219, TARGET_STRING("Subsystem/s5"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 220, TARGET_STRING("Subsystem/s5"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 221, TARGET_STRING("Subsystem/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 222, TARGET_STRING("Subsystem/Manual Switch"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 223, TARGET_STRING("Subsystem/Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 224, TARGET_STRING("Subsystem/Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 225, TARGET_STRING("Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 3, 0, 0 },

  { 226, TARGET_STRING("Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 2, 0, 0 },

  { 227, TARGET_STRING("Subsystem/Delay1"),
    TARGET_STRING("DelayLength"), 3, 0, 0 },

  { 228, TARGET_STRING("Subsystem/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 229, TARGET_STRING("husuo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 230, TARGET_STRING("husuo/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 231, TARGET_STRING("husuo/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 232, TARGET_STRING("husuo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 233, TARGET_STRING("husuo/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 234, TARGET_STRING("husuo/Memory2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 235, TARGET_STRING("Subsystem/Subsystem1/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 236, TARGET_STRING("Subsystem/Subsystem1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 237, TARGET_STRING("Subsystem/Subsystem2/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 238, TARGET_STRING("Subsystem/Subsystem2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &gggg_B.u_i,                         /* 0: Signal */
  &gggg_B.u,                           /* 1: Signal */
  &gggg_B.u_k,                         /* 2: Signal */
  &gggg_B.Product2,                    /* 3: Signal */
  &gggg_B.Product3,                    /* 4: Signal */
  &gggg_B.Product4,                    /* 5: Signal */
  &gggg_B.u_g,                         /* 6: Signal */
  &gggg_B.ManualSwitch,                /* 7: Signal */
  &gggg_B.route1,                      /* 8: Signal */
  &gggg_B.route2,                      /* 9: Signal */
  &gggg_B.xuanjin_enable,              /* 10: Signal */
  &gggg_B.yuxuansong_enable,           /* 11: Signal */
  &gggg_B.xuansong_enable,             /* 12: Signal */
  &gggg_B.sf_DI.result[0],             /* 13: Signal */
  &gggg_B.sf_DI1.result[0],            /* 14: Signal */
  &gggg_B.sf_V_S_1.V,                  /* 15: Signal */
  &gggg_B.sf_V_S_1.S,                  /* 16: Signal */
  &gggg_B.sf_V_S_2.V,                  /* 17: Signal */
  &gggg_B.sf_V_S_2.S,                  /* 18: Signal */
  &gggg_B.sf_anti_v.a,                 /* 19: Signal */
  &gggg_B.sf_anti_v.b,                 /* 20: Signal */
  &gggg_B.sf_anti_v.c,                 /* 21: Signal */
  &gggg_B.sf_anti_v.d,                 /* 22: Signal */
  &gggg_B.sf_anti_v1.a,                /* 23: Signal */
  &gggg_B.sf_anti_v1.b,                /* 24: Signal */
  &gggg_B.sf_anti_v1.c,                /* 25: Signal */
  &gggg_B.sf_anti_v1.d,                /* 26: Signal */
  &gggg_B.DataTypeConversion,          /* 27: Signal */
  &gggg_B.DataTypeConversion1,         /* 28: Signal */
  &gggg_B.DataTypeConversion10,        /* 29: Signal */
  &gggg_B.DataTypeConversion11,        /* 30: Signal */
  &gggg_B.DataTypeConversion12,        /* 31: Signal */
  &gggg_B.DataTypeConversion13,        /* 32: Signal */
  &gggg_B.DataTypeConversion14,        /* 33: Signal */
  &gggg_B.DataTypeConversion15,        /* 34: Signal */
  &gggg_B.DataTypeConversion16,        /* 35: Signal */
  &gggg_B.DataTypeConversion17,        /* 36: Signal */
  &gggg_B.DataTypeConversion18,        /* 37: Signal */
  &gggg_B.DataTypeConversion19,        /* 38: Signal */
  &gggg_B.DataTypeConversion2,         /* 39: Signal */
  &gggg_B.DataTypeConversion20,        /* 40: Signal */
  &gggg_B.DataTypeConversion21,        /* 41: Signal */
  &gggg_B.DataTypeConversion22,        /* 42: Signal */
  &gggg_B.DataTypeConversion23,        /* 43: Signal */
  &gggg_B.DataTypeConversion24,        /* 44: Signal */
  &gggg_B.DataTypeConversion25,        /* 45: Signal */
  &gggg_B.DataTypeConversion26,        /* 46: Signal */
  &gggg_B.DataTypeConversion27,        /* 47: Signal */
  &gggg_B.DataTypeConversion28,        /* 48: Signal */
  &gggg_B.DataTypeConversion29,        /* 49: Signal */
  &gggg_B.DataTypeConversion3,         /* 50: Signal */
  &gggg_B.DataTypeConversion30,        /* 51: Signal */
  &gggg_B.DataTypeConversion31,        /* 52: Signal */
  &gggg_B.DataTypeConversion32,        /* 53: Signal */
  &gggg_B.DataTypeConversion4,         /* 54: Signal */
  &gggg_B.DataTypeConversion5,         /* 55: Signal */
  &gggg_B.DataTypeConversion6,         /* 56: Signal */
  &gggg_B.DataTypeConversion7,         /* 57: Signal */
  &gggg_B.DataTypeConversion8,         /* 58: Signal */
  &gggg_B.DataTypeConversion9,         /* 59: Signal */
  &gggg_B.Gain,                        /* 60: Signal */
  &gggg_B.Gain1,                       /* 61: Signal */
  &gggg_B.u_n,                         /* 62: Signal */
  &gggg_B.Gain11,                      /* 63: Signal */
  &gggg_B.Gain12,                      /* 64: Signal */
  &gggg_B.Gain13,                      /* 65: Signal */
  &gggg_B.u_no,                        /* 66: Signal */
  &gggg_B.Gain3,                       /* 67: Signal */
  &gggg_B.u_h,                         /* 68: Signal */
  &gggg_B.Gain5,                       /* 69: Signal */
  &gggg_B.Gain6,                       /* 70: Signal */
  &gggg_B.Gain7,                       /* 71: Signal */
  &gggg_B.u_j,                         /* 72: Signal */
  &gggg_B.Gain9,                       /* 73: Signal */
  &gggg_B.LogicalOperator_b,           /* 74: Signal */
  &gggg_B.LogicalOperator1_c,          /* 75: Signal */
  &gggg_B.LogicalOperator2_a,          /* 76: Signal */
  &gggg_B.LogicalOperator3,            /* 77: Signal */
  &gggg_B.LogicalOperator4,            /* 78: Signal */
  &gggg_B.LogicalOperator6,            /* 79: Signal */
  &gggg_B.MultiportSwitch1[0],         /* 80: Signal */
  &gggg_B.MultiportSwitch4[0],         /* 81: Signal */
  &gggg_B.Saturation,                  /* 82: Signal */
  &gggg_B.Saturation1,                 /* 83: Signal */
  &gggg_B.CANbitpacking1,              /* 84: Signal */
  &gggg_B.CANbitpacking2,              /* 85: Signal */
  &gggg_B.CANbitpacking3,              /* 86: Signal */
  &gggg_B.CANbitunpacking1,            /* 87: Signal */
  &gggg_B.CANbitunpacking2_o1,         /* 88: Signal */
  &gggg_B.CANbitunpacking2_o2,         /* 89: Signal */
  &gggg_B.CANbitunpacking2_o3,         /* 90: Signal */
  &gggg_B.CANbitunpacking2_o4,         /* 91: Signal */
  &gggg_B.CANbitunpacking2_o5,         /* 92: Signal */
  &gggg_B.CANbitunpacking2_o6,         /* 93: Signal */
  &gggg_B.CANbitunpacking2_o7,         /* 94: Signal */
  &gggg_B.CANbitunpacking2_o8,         /* 95: Signal */
  &gggg_B.CANbitunpacking3_o1,         /* 96: Signal */
  &gggg_B.CANbitunpacking3_o2,         /* 97: Signal */
  &gggg_B.CANbitunpacking3_o3,         /* 98: Signal */
  &gggg_B.CANbitunpacking3_o4,         /* 99: Signal */
  &gggg_B.CANbitunpacking3_o5,         /* 100: Signal */
  &gggg_B.CANbitunpacking3_o6,         /* 101: Signal */
  &gggg_B.CANbitunpacking3_o7,         /* 102: Signal */
  &gggg_B.CANbitunpacking3_o8,         /* 103: Signal */
  &gggg_B.CANbitunpacking4,            /* 104: Signal */
  &gggg_B.receive,                     /* 105: Signal */
  &gggg_B.receive1,                    /* 106: Signal */
  &gggg_B.receive2,                    /* 107: Signal */
  &gggg_B.receive3,                    /* 108: Signal */
  &gggg_B.s1,                          /* 109: Signal */
  &gggg_B.s3,                          /* 110: Signal */
  &gggg_B.s4,                          /* 111: Signal */
  &gggg_B.s5,                          /* 112: Signal */
  &gggg_B.Add1,                        /* 113: Signal */
  &gggg_B.Add2,                        /* 114: Signal */
  &gggg_B.Switch_d,                    /* 115: Signal */
  &gggg_B.Switch1_a,                   /* 116: Signal */
  &gggg_B.Switch2_i,                   /* 117: Signal */
  &gggg_B.ManualSwitch_l,              /* 118: Signal */
  &gggg_B.ManualSwitch1,               /* 119: Signal */
  &gggg_B.ManualSwitch3,               /* 120: Signal */
  &gggg_B.Delay,                       /* 121: Signal */
  &gggg_B.Delay1,                      /* 122: Signal */
  &gggg_B.LogicalOperator,             /* 123: Signal */
  &gggg_B.LogicalOperator1,            /* 124: Signal */
  &gggg_B.LogicalOperator2,            /* 125: Signal */
  &gggg_B.Memory,                      /* 126: Signal */
  &gggg_B.Memory1,                     /* 127: Signal */
  &gggg_B.Memory2,                     /* 128: Signal */
  &gggg_B.Switch,                      /* 129: Signal */
  &gggg_B.Switch1,                     /* 130: Signal */
  &gggg_B.Switch2,                     /* 131: Signal */
  &gggg_B.Subsystem1.Add,              /* 132: Signal */
  &gggg_B.Subsystem2.Add,              /* 133: Signal */
  &gggg_P.Constant4_Value,             /* 134: Block Parameter */
  &gggg_P.Constant5_Value_a,           /* 135: Block Parameter */
  &gggg_P.Constant6_Value_e,           /* 136: Block Parameter */
  &gggg_P.Constant7_Value_j,           /* 137: Block Parameter */
  &gggg_P._Value,                      /* 138: Block Parameter */
  &gggg_P.u_Value_n,                   /* 139: Block Parameter */
  &gggg_P.u_Value,                     /* 140: Block Parameter */
  &gggg_P.u_Value_f,                   /* 141: Block Parameter */
  &gggg_P.ManualSwitch_CurrentSetting, /* 142: Block Parameter */
  &gggg_P.Constant1_Value,             /* 143: Block Parameter */
  &gggg_P.Constant10_Value,            /* 144: Block Parameter */
  &gggg_P.Constant11_Value,            /* 145: Block Parameter */
  &gggg_P.Constant12_Value,            /* 146: Block Parameter */
  &gggg_P.Constant13_Value,            /* 147: Block Parameter */
  &gggg_P.Constant14_Value,            /* 148: Block Parameter */
  &gggg_P.Constant15_Value,            /* 149: Block Parameter */
  &gggg_P.Constant16_Value,            /* 150: Block Parameter */
  &gggg_P.Constant17_Value,            /* 151: Block Parameter */
  &gggg_P.Constant18_Value,            /* 152: Block Parameter */
  &gggg_P.Constant19_Value,            /* 153: Block Parameter */
  &gggg_P.Constant2_Value,             /* 154: Block Parameter */
  &gggg_P.Constant21_Value,            /* 155: Block Parameter */
  &gggg_P.Constant22_Value,            /* 156: Block Parameter */
  &gggg_P.Constant23_Value,            /* 157: Block Parameter */
  &gggg_P.Constant24_Value,            /* 158: Block Parameter */
  &gggg_P.Constant25_Value,            /* 159: Block Parameter */
  &gggg_P.Constant26_Value,            /* 160: Block Parameter */
  &gggg_P.Constant27_Value,            /* 161: Block Parameter */
  &gggg_P.Constant28_Value,            /* 162: Block Parameter */
  &gggg_P.Constant29_Value,            /* 163: Block Parameter */
  &gggg_P.Constant3_Value,             /* 164: Block Parameter */
  &gggg_P.Constant31_Value,            /* 165: Block Parameter */
  &gggg_P.Constant4_Value_a,           /* 166: Block Parameter */
  &gggg_P.Constant5_Value,             /* 167: Block Parameter */
  &gggg_P.Constant6_Value,             /* 168: Block Parameter */
  &gggg_P.Constant7_Value,             /* 169: Block Parameter */
  &gggg_P.Constant8_Value,             /* 170: Block Parameter */
  &gggg_P.Constant9_Value,             /* 171: Block Parameter */
  &gggg_P.Gain_Gain,                   /* 172: Block Parameter */
  &gggg_P.Gain1_Gain,                  /* 173: Block Parameter */
  &gggg_P.Gain10_Gain,                 /* 174: Block Parameter */
  &gggg_P.Gain11_Gain,                 /* 175: Block Parameter */
  &gggg_P.Gain12_Gain,                 /* 176: Block Parameter */
  &gggg_P.Gain13_Gain,                 /* 177: Block Parameter */
  &gggg_P.Gain2_Gain,                  /* 178: Block Parameter */
  &gggg_P.Gain3_Gain,                  /* 179: Block Parameter */
  &gggg_P.Gain4_Gain,                  /* 180: Block Parameter */
  &gggg_P.Gain5_Gain,                  /* 181: Block Parameter */
  &gggg_P.Gain6_Gain,                  /* 182: Block Parameter */
  &gggg_P.Gain7_Gain,                  /* 183: Block Parameter */
  &gggg_P.Gain8_Gain,                  /* 184: Block Parameter */
  &gggg_P.Gain9_Gain,                  /* 185: Block Parameter */
  &gggg_P.Saturation_UpperSat,         /* 186: Block Parameter */
  &gggg_P.Saturation_LowerSat,         /* 187: Block Parameter */
  &gggg_P.Saturation1_UpperSat,        /* 188: Block Parameter */
  &gggg_P.Saturation1_LowerSat,        /* 189: Block Parameter */
  &gggg_P.Setup_P1[0],                 /* 190: Block Parameter */
  &gggg_P.Setup_P2[0],                 /* 191: Block Parameter */
  &gggg_P.Setup_P5[0],                 /* 192: Block Parameter */
  &gggg_P.Setup_P6[0],                 /* 193: Block Parameter */
  &gggg_P.Setup_P13[0],                /* 194: Block Parameter */
  &gggg_P.Setup_P15,                   /* 195: Block Parameter */
  &gggg_P.Setup_P16,                   /* 196: Block Parameter */
  &gggg_P.Setup_P17,                   /* 197: Block Parameter */
  &gggg_P.Setup_P18,                   /* 198: Block Parameter */
  &gggg_P.Setup_P19,                   /* 199: Block Parameter */
  &gggg_P.Setup_P20,                   /* 200: Block Parameter */
  &gggg_P.Setup_P21,                   /* 201: Block Parameter */
  &gggg_P.Setup_P22,                   /* 202: Block Parameter */
  &gggg_P.Setup_P23,                   /* 203: Block Parameter */
  &gggg_P.Setup_P24,                   /* 204: Block Parameter */
  &gggg_P.s1_A,                        /* 205: Block Parameter */
  &gggg_P.s1_B,                        /* 206: Block Parameter */
  &gggg_P.s1_C,                        /* 207: Block Parameter */
  &gggg_P.s1_X0,                       /* 208: Block Parameter */
  &gggg_P.s3_A,                        /* 209: Block Parameter */
  &gggg_P.s3_B,                        /* 210: Block Parameter */
  &gggg_P.s3_C,                        /* 211: Block Parameter */
  &gggg_P.s3_X0,                       /* 212: Block Parameter */
  &gggg_P.s4_A,                        /* 213: Block Parameter */
  &gggg_P.s4_B,                        /* 214: Block Parameter */
  &gggg_P.s4_C,                        /* 215: Block Parameter */
  &gggg_P.s4_X0,                       /* 216: Block Parameter */
  &gggg_P.s5_A,                        /* 217: Block Parameter */
  &gggg_P.s5_B,                        /* 218: Block Parameter */
  &gggg_P.s5_C,                        /* 219: Block Parameter */
  &gggg_P.s5_X0,                       /* 220: Block Parameter */
  &gggg_P.Switch2_Threshold,           /* 221: Block Parameter */
  &gggg_P.ManualSwitch_CurrentSetting_c,/* 222: Block Parameter */
  &gggg_P.ManualSwitch1_CurrentSetting,/* 223: Block Parameter */
  &gggg_P.ManualSwitch3_CurrentSetting,/* 224: Block Parameter */
  &gggg_P.Delay_DelayLength,           /* 225: Block Parameter */
  &gggg_P.Delay_InitialCondition,      /* 226: Block Parameter */
  &gggg_P.Delay1_DelayLength,          /* 227: Block Parameter */
  &gggg_P.Delay1_InitialCondition,     /* 228: Block Parameter */
  &gggg_P.Constant_Value,              /* 229: Block Parameter */
  &gggg_P.Constant1_Value_g,           /* 230: Block Parameter */
  &gggg_P.Constant2_Value_j,           /* 231: Block Parameter */
  &gggg_P.Memory_X0,                   /* 232: Block Parameter */
  &gggg_P.Memory1_X0,                  /* 233: Block Parameter */
  &gggg_P.Memory2_X0,                  /* 234: Block Parameter */
  &gggg_P.Subsystem1.Out1_Y0,          /* 235: Block Parameter */
  &gggg_P.Subsystem1.Constant_Value,   /* 236: Block Parameter */
  &gggg_P.Subsystem2.Out1_Y0,          /* 237: Block Parameter */
  &gggg_P.Subsystem2.Constant_Value,   /* 238: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  8,                                   /* 3 */
  8,                                   /* 4 */
  1,                                   /* 5 */
  1,                                   /* 6 */
  4,                                   /* 7 */
  1,                                   /* 8 */
  3                                    /* 9 */
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
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 134,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 105,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1398008849U,
    2343660697U,
    2326462087U,
    3902809340U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  gggg_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void gggg_InitializeDataMapInfo(RT_MODEL_gggg_T *const gggg_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(gggg_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(gggg_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(gggg_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(gggg_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(gggg_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  gggg_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam(gggg_M);
  gggg_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_gggg_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(gggg_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(gggg_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(gggg_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void gggg_host_InitializeDataMapInfo(gggg_host_DataMapInfo_T *dataMap, const
    char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: gggg_capi.c */
