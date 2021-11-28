/*
 * kaiguangai_capi.c
 *
 * Code generation for model "kaiguangai".
 *
 * Model version              : 1.82
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Nov 08 15:15:50 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "kaiguangai_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "kaiguangai.h"
#include "kaiguangai_capi.h"
#include "kaiguangai_private.h"
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
  { 0, 0, TARGET_STRING("jieshu"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("start"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("tiaoshi"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("zidong_shedingcishu"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 5, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 6, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 7, 0, TARGET_STRING("memory"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 8, 0, TARGET_STRING("memory1"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 9, 0, TARGET_STRING("Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 10, 0, TARGET_STRING("Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 11, 0, TARGET_STRING("Multiport Switch2"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 12, 0, TARGET_STRING("Switch3"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 13, 0, TARGET_STRING("PCI-1756/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("PCI-1756/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("PCI-1756/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 16, 0, TARGET_STRING("PCI-1756/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 17, 0, TARGET_STRING("PCI-1756/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 18, 0, TARGET_STRING("PCI-1756/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 19, 0, TARGET_STRING("PCI-1756/Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 20, 0, TARGET_STRING("PCI-1756/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 21, 0, TARGET_STRING("PCI-1756/PCI1/p1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 22, 0, TARGET_STRING("PCI-1756/PCI1/p2"),
    TARGET_STRING(""), 1, 0, 5, 0, 0 },

  { 23, 0, TARGET_STRING("PCI-1756/PCI2/p1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 24, 0, TARGET_STRING("PCI-1756/PCI2/p2"),
    TARGET_STRING(""), 1, 0, 5, 0, 0 },

  { 25, 0, TARGET_STRING("PCI-1756/PCI3/p1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 26, 0, TARGET_STRING("PCI-1756/PCI3/p2"),
    TARGET_STRING(""), 1, 0, 5, 0, 0 },

  { 27, 2, TARGET_STRING("Subsystem1/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 3, TARGET_STRING("Subsystem1/Chart1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Subsystem1/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Subsystem1/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 1, TARGET_STRING("Subsystem1/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 32, 0, TARGET_STRING("Subsystem1/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 33, 0, TARGET_STRING("Subsystem1/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Subsystem1/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Subsystem1/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Subsystem1/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Subsystem1/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 38, 0, TARGET_STRING("Subsystem1/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Subsystem1/Multiport Switch"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 40, 0, TARGET_STRING("Subsystem1/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 41, 0, TARGET_STRING("Subsystem1/Multiport Switch2"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 42, 0, TARGET_STRING("shoudongcaozuo/Product"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 43, 0, TARGET_STRING("shoudongcaozuo/Product1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 44, 0, TARGET_STRING("shoudongcaozuo/Product2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 45, 0, TARGET_STRING("shoudongcaozuo/Product3"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 46, 0, TARGET_STRING("shoudongcaozuo/Product4"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 47, 0, TARGET_STRING("shoudongcaozuo/Product5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 48, 0, TARGET_STRING("shoudongcaozuo/Product6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 49, 0, TARGET_STRING("shoudongcaozuo/Product7"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 50, 0, TARGET_STRING("tiaoshidongzuo/Product"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 51, 0, TARGET_STRING("tiaoshidongzuo/Product1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 52, 0, TARGET_STRING("tiaoshidongzuo/Product2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 53, 0, TARGET_STRING("tiaoshidongzuo/Product3"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 54, 0, TARGET_STRING("tiaoshidongzuo/Product4"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 55, 0, TARGET_STRING("tiaoshidongzuo/Product5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 56, 0, TARGET_STRING("tiaoshidongzuo/Product6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 57, 0, TARGET_STRING("tiaoshidongzuo/Product7"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 58, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 60, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 61, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 62, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 64, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 65, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 66, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 67, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 68, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 69, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 70, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 71, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 72, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 73, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 74, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 75, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 76, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 77, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 78, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 80, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 81, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 82, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 84, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 85, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 86, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 88, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 89, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 90, 54, TARGET_STRING("tiaoshimoshi/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 91, 54, TARGET_STRING("tiaoshimoshi/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 92, 54, TARGET_STRING("tiaoshimoshi/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 93, 54, TARGET_STRING("tiaoshimoshi/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 94, 0, TARGET_STRING("zidong_jiangeshijian/t1"),
    TARGET_STRING("松开至开盖的间隔时间"), 0, 0, 0, 0, 0 },

  { 95, 0, TARGET_STRING("zidong_jiangeshijian/t11"),
    TARGET_STRING("压紧至松开的间隔时间"), 0, 0, 0, 0, 0 },

  { 96, 0, TARGET_STRING("zidong_jiangeshijian/t3"),
    TARGET_STRING("开盖至锁定的间隔时间"), 0, 0, 0, 0, 0 },

  { 97, 0, TARGET_STRING("zidong_jiangeshijian/t5"),
    TARGET_STRING("锁定至解锁的间隔时间"), 0, 0, 0, 0, 0 },

  { 98, 0, TARGET_STRING("zidong_jiangeshijian/t7"),
    TARGET_STRING("解锁至关盖的间隔时间"), 0, 0, 0, 0, 0 },

  { 99, 0, TARGET_STRING("zidong_jiangeshijian/t9"),
    TARGET_STRING("关盖至压紧的间隔时间"), 0, 0, 0, 0, 0 },

  { 100, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 101, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 102, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 103, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 104, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 105, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 106, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 107, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 108, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 109, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 110, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 111, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 112, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 113, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 114, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 115, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 116, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 117, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 118, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 119, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 120, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 122, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 123, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 124, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 125, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 126, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 127, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 128, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 129, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 130, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 131, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 132, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 133, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 134, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 135, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 136, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 137, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 138, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 139, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 140, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 142, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 143, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 144, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 145, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 146, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 147, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 148, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 149, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 150, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 151, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 152, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 153, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 154, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 155, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 156, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 157, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 158, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 159, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 160, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 161, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 162, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 163, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 164, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 165, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 166, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 167, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 168, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 169, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 170, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 171, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 172, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 173, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 174, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 175, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 176, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 177, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 178, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 179, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 180, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 181, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 182, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 183, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 184, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 185, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 186, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 187, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 188, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 189, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 190, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 191, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 192, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 193, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 194, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 195, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 196, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 197, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 198, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 199, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 200, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 201, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 202, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 203, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 204, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 205, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 206, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 207, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 208, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 209, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 210, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 211, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 212, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 213, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 214, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 215, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 216, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 217, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 218, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 219, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 220, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 221, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 222, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 223, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 224, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 225, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 226, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 227, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 228, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 229, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 230, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 231, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 232, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 233, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 234, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 235, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 236, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 237, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 238, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 239, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 240, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 241, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 242, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 243, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 244, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 245, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 246, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 247, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 248, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 249, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 250, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 251, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 252, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 253, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 254, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 255, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 256, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 257, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 258, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 259, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 260, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 261, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion10"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 262, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 263, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 264, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 265, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion7"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 266, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 267, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion9"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 268, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 269, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 270, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 271, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 272, 13, TARGET_STRING("Subsystem1/zidong/1#/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 273, 13, TARGET_STRING("Subsystem1/zidong/1#/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 274, 13, TARGET_STRING("Subsystem1/zidong/1#/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 275, 13, TARGET_STRING("Subsystem1/zidong/1#/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 276, 13, TARGET_STRING("Subsystem1/zidong/1#/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 277, 13, TARGET_STRING("Subsystem1/zidong/1#/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 278, 13, TARGET_STRING("Subsystem1/zidong/1#/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 279, 13, TARGET_STRING("Subsystem1/zidong/1#/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 280, 13, TARGET_STRING("Subsystem1/zidong/1#/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 281, 13, TARGET_STRING("Subsystem1/zidong/1#/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 282, 13, TARGET_STRING("Subsystem1/zidong/1#/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 283, 13, TARGET_STRING("Subsystem1/zidong/1#/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 284, 13, TARGET_STRING("Subsystem1/zidong/1#/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 285, 13, TARGET_STRING("Subsystem1/zidong/1#/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 286, 13, TARGET_STRING("Subsystem1/zidong/1#/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 287, 13, TARGET_STRING("Subsystem1/zidong/1#/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 288, 13, TARGET_STRING("Subsystem1/zidong/1#/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 289, 13, TARGET_STRING("Subsystem1/zidong/1#/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 290, 13, TARGET_STRING("Subsystem1/zidong/1#/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 291, 13, TARGET_STRING("Subsystem1/zidong/1#/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 292, 13, TARGET_STRING("Subsystem1/zidong/1#/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 293, 14, TARGET_STRING("Subsystem1/zidong/1#1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 294, 14, TARGET_STRING("Subsystem1/zidong/1#1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 295, 14, TARGET_STRING("Subsystem1/zidong/1#1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 296, 14, TARGET_STRING("Subsystem1/zidong/1#1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 297, 14, TARGET_STRING("Subsystem1/zidong/1#1/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 298, 14, TARGET_STRING("Subsystem1/zidong/1#1/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 299, 14, TARGET_STRING("Subsystem1/zidong/1#1/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 300, 14, TARGET_STRING("Subsystem1/zidong/1#1/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 301, 14, TARGET_STRING("Subsystem1/zidong/1#1/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 302, 14, TARGET_STRING("Subsystem1/zidong/1#1/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 303, 14, TARGET_STRING("Subsystem1/zidong/1#1/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 304, 14, TARGET_STRING("Subsystem1/zidong/1#1/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 305, 14, TARGET_STRING("Subsystem1/zidong/1#1/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 306, 14, TARGET_STRING("Subsystem1/zidong/1#1/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 307, 14, TARGET_STRING("Subsystem1/zidong/1#1/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 308, 14, TARGET_STRING("Subsystem1/zidong/1#1/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 309, 14, TARGET_STRING("Subsystem1/zidong/1#1/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 310, 14, TARGET_STRING("Subsystem1/zidong/1#1/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 311, 14, TARGET_STRING("Subsystem1/zidong/1#1/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 312, 14, TARGET_STRING("Subsystem1/zidong/1#1/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 313, 14, TARGET_STRING("Subsystem1/zidong/1#1/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 314, 15, TARGET_STRING("Subsystem1/zidong/1#2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 315, 15, TARGET_STRING("Subsystem1/zidong/1#2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 316, 15, TARGET_STRING("Subsystem1/zidong/1#2/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 317, 15, TARGET_STRING("Subsystem1/zidong/1#2/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 318, 15, TARGET_STRING("Subsystem1/zidong/1#2/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 319, 15, TARGET_STRING("Subsystem1/zidong/1#2/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 320, 15, TARGET_STRING("Subsystem1/zidong/1#2/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 321, 15, TARGET_STRING("Subsystem1/zidong/1#2/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 322, 15, TARGET_STRING("Subsystem1/zidong/1#2/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 323, 15, TARGET_STRING("Subsystem1/zidong/1#2/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 324, 15, TARGET_STRING("Subsystem1/zidong/1#2/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 325, 15, TARGET_STRING("Subsystem1/zidong/1#2/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 326, 15, TARGET_STRING("Subsystem1/zidong/1#2/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 327, 15, TARGET_STRING("Subsystem1/zidong/1#2/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 328, 15, TARGET_STRING("Subsystem1/zidong/1#2/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 329, 15, TARGET_STRING("Subsystem1/zidong/1#2/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 330, 15, TARGET_STRING("Subsystem1/zidong/1#2/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 331, 15, TARGET_STRING("Subsystem1/zidong/1#2/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 332, 15, TARGET_STRING("Subsystem1/zidong/1#2/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 333, 15, TARGET_STRING("Subsystem1/zidong/1#2/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 334, 15, TARGET_STRING("Subsystem1/zidong/1#2/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 335, 16, TARGET_STRING("Subsystem1/zidong/1#3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 336, 16, TARGET_STRING("Subsystem1/zidong/1#3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 337, 16, TARGET_STRING("Subsystem1/zidong/1#3/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 338, 16, TARGET_STRING("Subsystem1/zidong/1#3/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 339, 16, TARGET_STRING("Subsystem1/zidong/1#3/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 340, 16, TARGET_STRING("Subsystem1/zidong/1#3/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 341, 16, TARGET_STRING("Subsystem1/zidong/1#3/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 342, 16, TARGET_STRING("Subsystem1/zidong/1#3/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 343, 16, TARGET_STRING("Subsystem1/zidong/1#3/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 344, 16, TARGET_STRING("Subsystem1/zidong/1#3/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 345, 16, TARGET_STRING("Subsystem1/zidong/1#3/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 346, 16, TARGET_STRING("Subsystem1/zidong/1#3/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 347, 16, TARGET_STRING("Subsystem1/zidong/1#3/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 348, 16, TARGET_STRING("Subsystem1/zidong/1#3/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 349, 16, TARGET_STRING("Subsystem1/zidong/1#3/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 350, 16, TARGET_STRING("Subsystem1/zidong/1#3/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 351, 16, TARGET_STRING("Subsystem1/zidong/1#3/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 352, 16, TARGET_STRING("Subsystem1/zidong/1#3/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 353, 16, TARGET_STRING("Subsystem1/zidong/1#3/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 354, 16, TARGET_STRING("Subsystem1/zidong/1#3/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 355, 16, TARGET_STRING("Subsystem1/zidong/1#3/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 356, 17, TARGET_STRING("Subsystem1/zidong/1#4/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 357, 17, TARGET_STRING("Subsystem1/zidong/1#4/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 358, 17, TARGET_STRING("Subsystem1/zidong/1#4/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 359, 17, TARGET_STRING("Subsystem1/zidong/1#4/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 360, 17, TARGET_STRING("Subsystem1/zidong/1#4/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 361, 17, TARGET_STRING("Subsystem1/zidong/1#4/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 362, 17, TARGET_STRING("Subsystem1/zidong/1#4/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 363, 17, TARGET_STRING("Subsystem1/zidong/1#4/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 364, 17, TARGET_STRING("Subsystem1/zidong/1#4/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 365, 17, TARGET_STRING("Subsystem1/zidong/1#4/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 366, 17, TARGET_STRING("Subsystem1/zidong/1#4/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 367, 17, TARGET_STRING("Subsystem1/zidong/1#4/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 368, 17, TARGET_STRING("Subsystem1/zidong/1#4/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 369, 17, TARGET_STRING("Subsystem1/zidong/1#4/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 370, 17, TARGET_STRING("Subsystem1/zidong/1#4/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 371, 17, TARGET_STRING("Subsystem1/zidong/1#4/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 372, 17, TARGET_STRING("Subsystem1/zidong/1#4/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 373, 17, TARGET_STRING("Subsystem1/zidong/1#4/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 374, 17, TARGET_STRING("Subsystem1/zidong/1#4/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 375, 17, TARGET_STRING("Subsystem1/zidong/1#4/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 376, 17, TARGET_STRING("Subsystem1/zidong/1#4/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 377, 18, TARGET_STRING("Subsystem1/zidong/1#5/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 378, 18, TARGET_STRING("Subsystem1/zidong/1#5/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 379, 18, TARGET_STRING("Subsystem1/zidong/1#5/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 380, 18, TARGET_STRING("Subsystem1/zidong/1#5/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 381, 18, TARGET_STRING("Subsystem1/zidong/1#5/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 382, 18, TARGET_STRING("Subsystem1/zidong/1#5/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 383, 18, TARGET_STRING("Subsystem1/zidong/1#5/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 384, 18, TARGET_STRING("Subsystem1/zidong/1#5/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 385, 18, TARGET_STRING("Subsystem1/zidong/1#5/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 386, 18, TARGET_STRING("Subsystem1/zidong/1#5/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 387, 18, TARGET_STRING("Subsystem1/zidong/1#5/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 388, 18, TARGET_STRING("Subsystem1/zidong/1#5/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 389, 18, TARGET_STRING("Subsystem1/zidong/1#5/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 390, 18, TARGET_STRING("Subsystem1/zidong/1#5/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 391, 18, TARGET_STRING("Subsystem1/zidong/1#5/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 392, 18, TARGET_STRING("Subsystem1/zidong/1#5/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 393, 18, TARGET_STRING("Subsystem1/zidong/1#5/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 394, 18, TARGET_STRING("Subsystem1/zidong/1#5/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 395, 18, TARGET_STRING("Subsystem1/zidong/1#5/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 396, 18, TARGET_STRING("Subsystem1/zidong/1#5/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 397, 18, TARGET_STRING("Subsystem1/zidong/1#5/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 398, 19, TARGET_STRING("Subsystem1/zidong/1#6/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 399, 19, TARGET_STRING("Subsystem1/zidong/1#6/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 400, 19, TARGET_STRING("Subsystem1/zidong/1#6/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 401, 19, TARGET_STRING("Subsystem1/zidong/1#6/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 402, 19, TARGET_STRING("Subsystem1/zidong/1#6/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 403, 19, TARGET_STRING("Subsystem1/zidong/1#6/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 404, 19, TARGET_STRING("Subsystem1/zidong/1#6/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 405, 19, TARGET_STRING("Subsystem1/zidong/1#6/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 406, 19, TARGET_STRING("Subsystem1/zidong/1#6/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 407, 19, TARGET_STRING("Subsystem1/zidong/1#6/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 408, 19, TARGET_STRING("Subsystem1/zidong/1#6/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 409, 19, TARGET_STRING("Subsystem1/zidong/1#6/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 410, 19, TARGET_STRING("Subsystem1/zidong/1#6/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 411, 19, TARGET_STRING("Subsystem1/zidong/1#6/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 412, 19, TARGET_STRING("Subsystem1/zidong/1#6/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 413, 19, TARGET_STRING("Subsystem1/zidong/1#6/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 414, 19, TARGET_STRING("Subsystem1/zidong/1#6/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 415, 19, TARGET_STRING("Subsystem1/zidong/1#6/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 416, 19, TARGET_STRING("Subsystem1/zidong/1#6/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 417, 19, TARGET_STRING("Subsystem1/zidong/1#6/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 418, 19, TARGET_STRING("Subsystem1/zidong/1#6/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 419, 20, TARGET_STRING("Subsystem1/zidong/1#7/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 420, 20, TARGET_STRING("Subsystem1/zidong/1#7/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 421, 20, TARGET_STRING("Subsystem1/zidong/1#7/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 422, 20, TARGET_STRING("Subsystem1/zidong/1#7/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 423, 20, TARGET_STRING("Subsystem1/zidong/1#7/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 424, 20, TARGET_STRING("Subsystem1/zidong/1#7/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 425, 20, TARGET_STRING("Subsystem1/zidong/1#7/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 426, 20, TARGET_STRING("Subsystem1/zidong/1#7/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 427, 20, TARGET_STRING("Subsystem1/zidong/1#7/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 428, 20, TARGET_STRING("Subsystem1/zidong/1#7/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 429, 20, TARGET_STRING("Subsystem1/zidong/1#7/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 430, 20, TARGET_STRING("Subsystem1/zidong/1#7/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 431, 20, TARGET_STRING("Subsystem1/zidong/1#7/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 432, 20, TARGET_STRING("Subsystem1/zidong/1#7/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 433, 20, TARGET_STRING("Subsystem1/zidong/1#7/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 434, 20, TARGET_STRING("Subsystem1/zidong/1#7/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 435, 20, TARGET_STRING("Subsystem1/zidong/1#7/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 436, 20, TARGET_STRING("Subsystem1/zidong/1#7/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 437, 20, TARGET_STRING("Subsystem1/zidong/1#7/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 438, 20, TARGET_STRING("Subsystem1/zidong/1#7/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 439, 20, TARGET_STRING("Subsystem1/zidong/1#7/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 440, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 441, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 442, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 443, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 444, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 445, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 446, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion7"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 447, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 448, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 449, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 450, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator10"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 451, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator11"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 452, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 453, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 454, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 455, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 456, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 457, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 458, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator8"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 459, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator9"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 460, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 461, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 462, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 463, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 464, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 465, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 466, 0, TARGET_STRING("shoudongcaozuo/husuo/1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 467, 0, TARGET_STRING("shoudongcaozuo/husuo/2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 468, 0, TARGET_STRING("shoudongcaozuo/husuo/3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 469, 0, TARGET_STRING("shoudongcaozuo/husuo/4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 470, 0, TARGET_STRING("shoudongcaozuo/husuo/5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 471, 0, TARGET_STRING("shoudongcaozuo/husuo/6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 472, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 473, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 474, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 475, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 476, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 477, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 478, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 479, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 480, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 481, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 482, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 483, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 484, 0, TARGET_STRING("tiaoshidongzuo/husuo/1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 485, 0, TARGET_STRING("tiaoshidongzuo/husuo/2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 486, 0, TARGET_STRING("tiaoshidongzuo/husuo/3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 487, 0, TARGET_STRING("tiaoshidongzuo/husuo/4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 488, 0, TARGET_STRING("tiaoshidongzuo/husuo/5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 489, 0, TARGET_STRING("tiaoshidongzuo/husuo/6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 490, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 491, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 492, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 493, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 494, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 495, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 496, TARGET_STRING("Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 497, TARGET_STRING("Switch1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 498, TARGET_STRING("Switch2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 499, TARGET_STRING("jieshu"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 500, TARGET_STRING("qiehuan"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 501, TARGET_STRING("start"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 502, TARGET_STRING("tiaoshi"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 503, TARGET_STRING("zidong_shedingcishu"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 504, TARGET_STRING("memory"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 505, TARGET_STRING("memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 506, TARGET_STRING("Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 507, TARGET_STRING("PCI-1756/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 508, TARGET_STRING("PCI-1756/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 509, TARGET_STRING("PCI-1756/PCI1"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 510, TARGET_STRING("PCI-1756/PCI1"),
    TARGET_STRING("P2"), 0, 8, 0 },

  { 511, TARGET_STRING("PCI-1756/PCI2"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 512, TARGET_STRING("PCI-1756/PCI2"),
    TARGET_STRING("P2"), 0, 8, 0 },

  { 513, TARGET_STRING("PCI-1756/PCI3"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 514, TARGET_STRING("PCI-1756/PCI3"),
    TARGET_STRING("P2"), 0, 8, 0 },

  { 515, TARGET_STRING("shoudongcaozuo/guangai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 516, TARGET_STRING("shoudongcaozuo/jiesuo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 517, TARGET_STRING("shoudongcaozuo/kaigai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 518, TARGET_STRING("shoudongcaozuo/s1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 519, TARGET_STRING("shoudongcaozuo/s2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 520, TARGET_STRING("shoudongcaozuo/s3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 521, TARGET_STRING("shoudongcaozuo/s4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 522, TARGET_STRING("shoudongcaozuo/s5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 523, TARGET_STRING("shoudongcaozuo/s6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 524, TARGET_STRING("shoudongcaozuo/s7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 525, TARGET_STRING("shoudongcaozuo/s8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 526, TARGET_STRING("shoudongcaozuo/songkai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 527, TARGET_STRING("shoudongcaozuo/suoding"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 528, TARGET_STRING("shoudongcaozuo/yajin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 529, TARGET_STRING("tiaoshidongzuo/guangai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 530, TARGET_STRING("tiaoshidongzuo/jiesuo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 531, TARGET_STRING("tiaoshidongzuo/kaigai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 532, TARGET_STRING("tiaoshidongzuo/s1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 533, TARGET_STRING("tiaoshidongzuo/s2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 534, TARGET_STRING("tiaoshidongzuo/s3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 535, TARGET_STRING("tiaoshidongzuo/s4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 536, TARGET_STRING("tiaoshidongzuo/s5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 537, TARGET_STRING("tiaoshidongzuo/s6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 538, TARGET_STRING("tiaoshidongzuo/s7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 539, TARGET_STRING("tiaoshidongzuo/s8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 540, TARGET_STRING("tiaoshidongzuo/songkai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 541, TARGET_STRING("tiaoshidongzuo/suoding"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 542, TARGET_STRING("tiaoshidongzuo/yajin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 543, TARGET_STRING("tiaoshimoshi/tiaoshi_huanxiangxinhao"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 544, TARGET_STRING("zidong_jiangeshijian/t1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 545, TARGET_STRING("zidong_jiangeshijian/t11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 546, TARGET_STRING("zidong_jiangeshijian/t3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 547, TARGET_STRING("zidong_jiangeshijian/t5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 548, TARGET_STRING("zidong_jiangeshijian/t7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 549, TARGET_STRING("zidong_jiangeshijian/t9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 550, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 551, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 552, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 553, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 554, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 555, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 556, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 557, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 558, TARGET_STRING("Subsystem1/shoudong/songkaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 559, TARGET_STRING("Subsystem1/shoudong/kaigaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 560, TARGET_STRING("Subsystem1/shoudong/yajinhuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 561, TARGET_STRING("Subsystem1/shoudong/guangaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 562, TARGET_STRING("Subsystem1/zidong/songkaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 563, TARGET_STRING("Subsystem1/zidong/kaigaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 564, TARGET_STRING("Subsystem1/zidong/yajinhuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 565, TARGET_STRING("Subsystem1/zidong/guangaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 566, TARGET_STRING("shoudongcaozuo/husuo/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 567, TARGET_STRING("shoudongcaozuo/husuo/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 568, TARGET_STRING("shoudongcaozuo/husuo/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("shoudongcaozuo/husuo/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 570, TARGET_STRING("shoudongcaozuo/husuo/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 571, TARGET_STRING("shoudongcaozuo/husuo/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 572, TARGET_STRING("shoudongcaozuo/husuo/1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 573, TARGET_STRING("shoudongcaozuo/husuo/2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 574, TARGET_STRING("shoudongcaozuo/husuo/3"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 575, TARGET_STRING("shoudongcaozuo/husuo/4"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 576, TARGET_STRING("shoudongcaozuo/husuo/5"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 577, TARGET_STRING("shoudongcaozuo/husuo/6"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 578, TARGET_STRING("tiaoshidongzuo/husuo/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 579, TARGET_STRING("tiaoshidongzuo/husuo/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 580, TARGET_STRING("tiaoshidongzuo/husuo/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 581, TARGET_STRING("tiaoshidongzuo/husuo/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 582, TARGET_STRING("tiaoshidongzuo/husuo/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 583, TARGET_STRING("tiaoshidongzuo/husuo/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 584, TARGET_STRING("tiaoshidongzuo/husuo/1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 585, TARGET_STRING("tiaoshidongzuo/husuo/2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 586, TARGET_STRING("tiaoshidongzuo/husuo/3"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 587, TARGET_STRING("tiaoshidongzuo/husuo/4"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 588, TARGET_STRING("tiaoshidongzuo/husuo/5"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 589, TARGET_STRING("tiaoshidongzuo/husuo/6"),
    TARGET_STRING("X0"), 0, 0, 0 },

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
  &kaiguangai_B.jieshu,                /* 0: Signal */
  &kaiguangai_B.start,                 /* 1: Signal */
  &kaiguangai_B.tiaoshi,               /* 2: Signal */
  &kaiguangai_B.zidong_shedingcishu,   /* 3: Signal */
  &kaiguangai_B.DataTypeConversion[0], /* 4: Signal */
  &kaiguangai_B.DataTypeConversion1_j[0],/* 5: Signal */
  &kaiguangai_B.DataTypeConversion2_g[0],/* 6: Signal */
  &kaiguangai_B.memory[0],             /* 7: Signal */
  &kaiguangai_B.memory1[0],            /* 8: Signal */
  &kaiguangai_B.MultiportSwitch[0],    /* 9: Signal */
  &kaiguangai_B.MultiportSwitch1[0],   /* 10: Signal */
  &kaiguangai_B.MultiportSwitch2_o[0], /* 11: Signal */
  &kaiguangai_B.Switch3_g[0],          /* 12: Signal */
  &kaiguangai_B.Constant,              /* 13: Signal */
  &kaiguangai_B.Constant1,             /* 14: Signal */
  &kaiguangai_B.DataTypeConversion1[0],/* 15: Signal */
  &kaiguangai_B.DataTypeConversion2[0],/* 16: Signal */
  &kaiguangai_B.DataTypeConversion3[0],/* 17: Signal */
  &kaiguangai_B.DataTypeConversion4[0],/* 18: Signal */
  &kaiguangai_B.DataTypeConversion5[0],/* 19: Signal */
  &kaiguangai_B.DataTypeConversion6[0],/* 20: Signal */
  &kaiguangai_B.PCI1_o1[0],            /* 21: Signal */
  &kaiguangai_B.PCI1_o2[0],            /* 22: Signal */
  &kaiguangai_B.PCI2_o1[0],            /* 23: Signal */
  &kaiguangai_B.PCI2_o2[0],            /* 24: Signal */
  &kaiguangai_B.PCI3_o1[0],            /* 25: Signal */
  &kaiguangai_B.PCI3_o2[0],            /* 26: Signal */
  &kaiguangai_B.kaigaihuanchongyichang,/* 27: Signal */
  &kaiguangai_B.guangaihuanchongyichang,/* 28: Signal */
  &kaiguangai_B.DataTypeConversion1_i, /* 29: Signal */
  &kaiguangai_B.DataTypeConversion2_a, /* 30: Signal */
  &kaiguangai_B.DataTypeConversion4_d[0],/* 31: Signal */
  &kaiguangai_B.DataTypeConversion6_n[0],/* 32: Signal */
  &kaiguangai_B.LogicalOperator,       /* 33: Signal */
  &kaiguangai_B.LogicalOperator1_h,    /* 34: Signal */
  &kaiguangai_B.LogicalOperator2_e,    /* 35: Signal */
  &kaiguangai_B.LogicalOperator3_e,    /* 36: Signal */
  &kaiguangai_B.LogicalOperator4_i,    /* 37: Signal */
  &kaiguangai_B.LogicalOperator5_av,   /* 38: Signal */
  &kaiguangai_B.MultiportSwitch_k[0],  /* 39: Signal */
  &kaiguangai_B.MultiportSwitch1_i[0], /* 40: Signal */
  &kaiguangai_B.MultiportSwitch2[0],   /* 41: Signal */
  &kaiguangai_B.Product_g[0],          /* 42: Signal */
  &kaiguangai_B.Product1_k[0],         /* 43: Signal */
  &kaiguangai_B.Product2_m[0],         /* 44: Signal */
  &kaiguangai_B.Product3_p[0],         /* 45: Signal */
  &kaiguangai_B.Product4_l[0],         /* 46: Signal */
  &kaiguangai_B.Product5_f[0],         /* 47: Signal */
  &kaiguangai_B.Product6_p[0],         /* 48: Signal */
  &kaiguangai_B.Product7_l[0],         /* 49: Signal */
  &kaiguangai_B.Product[0],            /* 50: Signal */
  &kaiguangai_B.Product1[0],           /* 51: Signal */
  &kaiguangai_B.Product2[0],           /* 52: Signal */
  &kaiguangai_B.Product3[0],           /* 53: Signal */
  &kaiguangai_B.Product4[0],           /* 54: Signal */
  &kaiguangai_B.Product5[0],           /* 55: Signal */
  &kaiguangai_B.Product6[0],           /* 56: Signal */
  &kaiguangai_B.Product7[0],           /* 57: Signal */
  &kaiguangai_B.sf_jinjichuli.skhx,    /* 58: Signal */
  &kaiguangai_B.sf_jinjichuli.kghx,    /* 59: Signal */
  &kaiguangai_B.sf_jinjichuli.yjhx,    /* 60: Signal */
  &kaiguangai_B.sf_jinjichuli.gghx,    /* 61: Signal */
  &kaiguangai_B.sf_jinjichuli1.skhx,   /* 62: Signal */
  &kaiguangai_B.sf_jinjichuli1.kghx,   /* 63: Signal */
  &kaiguangai_B.sf_jinjichuli1.yjhx,   /* 64: Signal */
  &kaiguangai_B.sf_jinjichuli1.gghx,   /* 65: Signal */
  &kaiguangai_B.sf_jinjichuli2.skhx,   /* 66: Signal */
  &kaiguangai_B.sf_jinjichuli2.kghx,   /* 67: Signal */
  &kaiguangai_B.sf_jinjichuli2.yjhx,   /* 68: Signal */
  &kaiguangai_B.sf_jinjichuli2.gghx,   /* 69: Signal */
  &kaiguangai_B.sf_jinjichuli3.skhx,   /* 70: Signal */
  &kaiguangai_B.sf_jinjichuli3.kghx,   /* 71: Signal */
  &kaiguangai_B.sf_jinjichuli3.yjhx,   /* 72: Signal */
  &kaiguangai_B.sf_jinjichuli3.gghx,   /* 73: Signal */
  &kaiguangai_B.sf_jinjichuli4.skhx,   /* 74: Signal */
  &kaiguangai_B.sf_jinjichuli4.kghx,   /* 75: Signal */
  &kaiguangai_B.sf_jinjichuli4.yjhx,   /* 76: Signal */
  &kaiguangai_B.sf_jinjichuli4.gghx,   /* 77: Signal */
  &kaiguangai_B.sf_jinjichuli5.skhx,   /* 78: Signal */
  &kaiguangai_B.sf_jinjichuli5.kghx,   /* 79: Signal */
  &kaiguangai_B.sf_jinjichuli5.yjhx,   /* 80: Signal */
  &kaiguangai_B.sf_jinjichuli5.gghx,   /* 81: Signal */
  &kaiguangai_B.sf_jinjichuli6.skhx,   /* 82: Signal */
  &kaiguangai_B.sf_jinjichuli6.kghx,   /* 83: Signal */
  &kaiguangai_B.sf_jinjichuli6.yjhx,   /* 84: Signal */
  &kaiguangai_B.sf_jinjichuli6.gghx,   /* 85: Signal */
  &kaiguangai_B.sf_jinjichuli7.skhx,   /* 86: Signal */
  &kaiguangai_B.sf_jinjichuli7.kghx,   /* 87: Signal */
  &kaiguangai_B.sf_jinjichuli7.yjhx,   /* 88: Signal */
  &kaiguangai_B.sf_jinjichuli7.gghx,   /* 89: Signal */
  &kaiguangai_B.LogicalOperator_e,     /* 90: Signal */
  &kaiguangai_B.LogicalOperator1_kr,   /* 91: Signal */
  &kaiguangai_B.LogicalOperator4_d,    /* 92: Signal */
  &kaiguangai_B.LogicalOperator5_c,    /* 93: Signal */
  &kaiguangai_B.u_g,                   /* 94: Signal */
  &kaiguangai_B.u_m0,                  /* 95: Signal */
  &kaiguangai_B.u_m,                   /* 96: Signal */
  &kaiguangai_B.u_m5,                  /* 97: Signal */
  &kaiguangai_B.u_gd,                  /* 98: Signal */
  &kaiguangai_B.u_gh,                  /* 99: Signal */
  &kaiguangai_B.skhx,                  /* 100: Signal */
  &kaiguangai_B.kghx,                  /* 101: Signal */
  &kaiguangai_B.yjhx,                  /* 102: Signal */
  &kaiguangai_B.gghx,                  /* 103: Signal */
  &kaiguangai_B.kgzhiling1,            /* 104: Signal */
  &kaiguangai_B.kgzhiling2,            /* 105: Signal */
  &kaiguangai_B.ggzhiling1,            /* 106: Signal */
  &kaiguangai_B.ggzhiling2,            /* 107: Signal */
  &kaiguangai_B.skt,                   /* 108: Signal */
  &kaiguangai_B.kgt,                   /* 109: Signal */
  &kaiguangai_B.sdt,                   /* 110: Signal */
  &kaiguangai_B.jst,                   /* 111: Signal */
  &kaiguangai_B.ggt,                   /* 112: Signal */
  &kaiguangai_B.yjt,                   /* 113: Signal */
  &kaiguangai_B.skyichang,             /* 114: Signal */
  &kaiguangai_B.kgyichang,             /* 115: Signal */
  &kaiguangai_B.sdyichang,             /* 116: Signal */
  &kaiguangai_B.jsyichang,             /* 117: Signal */
  &kaiguangai_B.ggyichang,             /* 118: Signal */
  &kaiguangai_B.yjyichang,             /* 119: Signal */
  &kaiguangai_B.sf_Chart1_c.skhx,      /* 120: Signal */
  &kaiguangai_B.sf_Chart1_c.kghx,      /* 121: Signal */
  &kaiguangai_B.sf_Chart1_c.yjhx,      /* 122: Signal */
  &kaiguangai_B.sf_Chart1_c.gghx,      /* 123: Signal */
  &kaiguangai_B.sf_Chart1_c.kgzhiling1,/* 124: Signal */
  &kaiguangai_B.sf_Chart1_c.kgzhiling2,/* 125: Signal */
  &kaiguangai_B.sf_Chart1_c.ggzhiling1,/* 126: Signal */
  &kaiguangai_B.sf_Chart1_c.ggzhiling2,/* 127: Signal */
  &kaiguangai_B.sf_Chart1_c.skt,       /* 128: Signal */
  &kaiguangai_B.sf_Chart1_c.kgt,       /* 129: Signal */
  &kaiguangai_B.sf_Chart1_c.sdt,       /* 130: Signal */
  &kaiguangai_B.sf_Chart1_c.jst,       /* 131: Signal */
  &kaiguangai_B.sf_Chart1_c.ggt,       /* 132: Signal */
  &kaiguangai_B.sf_Chart1_c.yjt,       /* 133: Signal */
  &kaiguangai_B.sf_Chart1_c.skyichang, /* 134: Signal */
  &kaiguangai_B.sf_Chart1_c.kgyichang, /* 135: Signal */
  &kaiguangai_B.sf_Chart1_c.sdyichang, /* 136: Signal */
  &kaiguangai_B.sf_Chart1_c.jsyichang, /* 137: Signal */
  &kaiguangai_B.sf_Chart1_c.ggyichang, /* 138: Signal */
  &kaiguangai_B.sf_Chart1_c.yjyichang, /* 139: Signal */
  &kaiguangai_B.sf_Chart2.skhx,        /* 140: Signal */
  &kaiguangai_B.sf_Chart2.kghx,        /* 141: Signal */
  &kaiguangai_B.sf_Chart2.yjhx,        /* 142: Signal */
  &kaiguangai_B.sf_Chart2.gghx,        /* 143: Signal */
  &kaiguangai_B.sf_Chart2.kgzhiling1,  /* 144: Signal */
  &kaiguangai_B.sf_Chart2.kgzhiling2,  /* 145: Signal */
  &kaiguangai_B.sf_Chart2.ggzhiling1,  /* 146: Signal */
  &kaiguangai_B.sf_Chart2.ggzhiling2,  /* 147: Signal */
  &kaiguangai_B.sf_Chart2.skt,         /* 148: Signal */
  &kaiguangai_B.sf_Chart2.kgt,         /* 149: Signal */
  &kaiguangai_B.sf_Chart2.sdt,         /* 150: Signal */
  &kaiguangai_B.sf_Chart2.jst,         /* 151: Signal */
  &kaiguangai_B.sf_Chart2.ggt,         /* 152: Signal */
  &kaiguangai_B.sf_Chart2.yjt,         /* 153: Signal */
  &kaiguangai_B.sf_Chart2.skyichang,   /* 154: Signal */
  &kaiguangai_B.sf_Chart2.kgyichang,   /* 155: Signal */
  &kaiguangai_B.sf_Chart2.sdyichang,   /* 156: Signal */
  &kaiguangai_B.sf_Chart2.jsyichang,   /* 157: Signal */
  &kaiguangai_B.sf_Chart2.ggyichang,   /* 158: Signal */
  &kaiguangai_B.sf_Chart2.yjyichang,   /* 159: Signal */
  &kaiguangai_B.sf_Chart3.skhx,        /* 160: Signal */
  &kaiguangai_B.sf_Chart3.kghx,        /* 161: Signal */
  &kaiguangai_B.sf_Chart3.yjhx,        /* 162: Signal */
  &kaiguangai_B.sf_Chart3.gghx,        /* 163: Signal */
  &kaiguangai_B.sf_Chart3.kgzhiling1,  /* 164: Signal */
  &kaiguangai_B.sf_Chart3.kgzhiling2,  /* 165: Signal */
  &kaiguangai_B.sf_Chart3.ggzhiling1,  /* 166: Signal */
  &kaiguangai_B.sf_Chart3.ggzhiling2,  /* 167: Signal */
  &kaiguangai_B.sf_Chart3.skt,         /* 168: Signal */
  &kaiguangai_B.sf_Chart3.kgt,         /* 169: Signal */
  &kaiguangai_B.sf_Chart3.sdt,         /* 170: Signal */
  &kaiguangai_B.sf_Chart3.jst,         /* 171: Signal */
  &kaiguangai_B.sf_Chart3.ggt,         /* 172: Signal */
  &kaiguangai_B.sf_Chart3.yjt,         /* 173: Signal */
  &kaiguangai_B.sf_Chart3.skyichang,   /* 174: Signal */
  &kaiguangai_B.sf_Chart3.kgyichang,   /* 175: Signal */
  &kaiguangai_B.sf_Chart3.sdyichang,   /* 176: Signal */
  &kaiguangai_B.sf_Chart3.jsyichang,   /* 177: Signal */
  &kaiguangai_B.sf_Chart3.ggyichang,   /* 178: Signal */
  &kaiguangai_B.sf_Chart3.yjyichang,   /* 179: Signal */
  &kaiguangai_B.sf_Chart4.skhx,        /* 180: Signal */
  &kaiguangai_B.sf_Chart4.kghx,        /* 181: Signal */
  &kaiguangai_B.sf_Chart4.yjhx,        /* 182: Signal */
  &kaiguangai_B.sf_Chart4.gghx,        /* 183: Signal */
  &kaiguangai_B.sf_Chart4.kgzhiling1,  /* 184: Signal */
  &kaiguangai_B.sf_Chart4.kgzhiling2,  /* 185: Signal */
  &kaiguangai_B.sf_Chart4.ggzhiling1,  /* 186: Signal */
  &kaiguangai_B.sf_Chart4.ggzhiling2,  /* 187: Signal */
  &kaiguangai_B.sf_Chart4.skt,         /* 188: Signal */
  &kaiguangai_B.sf_Chart4.kgt,         /* 189: Signal */
  &kaiguangai_B.sf_Chart4.sdt,         /* 190: Signal */
  &kaiguangai_B.sf_Chart4.jst,         /* 191: Signal */
  &kaiguangai_B.sf_Chart4.ggt,         /* 192: Signal */
  &kaiguangai_B.sf_Chart4.yjt,         /* 193: Signal */
  &kaiguangai_B.sf_Chart4.skyichang,   /* 194: Signal */
  &kaiguangai_B.sf_Chart4.kgyichang,   /* 195: Signal */
  &kaiguangai_B.sf_Chart4.sdyichang,   /* 196: Signal */
  &kaiguangai_B.sf_Chart4.jsyichang,   /* 197: Signal */
  &kaiguangai_B.sf_Chart4.ggyichang,   /* 198: Signal */
  &kaiguangai_B.sf_Chart4.yjyichang,   /* 199: Signal */
  &kaiguangai_B.sf_Chart5.skhx,        /* 200: Signal */
  &kaiguangai_B.sf_Chart5.kghx,        /* 201: Signal */
  &kaiguangai_B.sf_Chart5.yjhx,        /* 202: Signal */
  &kaiguangai_B.sf_Chart5.gghx,        /* 203: Signal */
  &kaiguangai_B.sf_Chart5.kgzhiling1,  /* 204: Signal */
  &kaiguangai_B.sf_Chart5.kgzhiling2,  /* 205: Signal */
  &kaiguangai_B.sf_Chart5.ggzhiling1,  /* 206: Signal */
  &kaiguangai_B.sf_Chart5.ggzhiling2,  /* 207: Signal */
  &kaiguangai_B.sf_Chart5.skt,         /* 208: Signal */
  &kaiguangai_B.sf_Chart5.kgt,         /* 209: Signal */
  &kaiguangai_B.sf_Chart5.sdt,         /* 210: Signal */
  &kaiguangai_B.sf_Chart5.jst,         /* 211: Signal */
  &kaiguangai_B.sf_Chart5.ggt,         /* 212: Signal */
  &kaiguangai_B.sf_Chart5.yjt,         /* 213: Signal */
  &kaiguangai_B.sf_Chart5.skyichang,   /* 214: Signal */
  &kaiguangai_B.sf_Chart5.kgyichang,   /* 215: Signal */
  &kaiguangai_B.sf_Chart5.sdyichang,   /* 216: Signal */
  &kaiguangai_B.sf_Chart5.jsyichang,   /* 217: Signal */
  &kaiguangai_B.sf_Chart5.ggyichang,   /* 218: Signal */
  &kaiguangai_B.sf_Chart5.yjyichang,   /* 219: Signal */
  &kaiguangai_B.sf_Chart6.skhx,        /* 220: Signal */
  &kaiguangai_B.sf_Chart6.kghx,        /* 221: Signal */
  &kaiguangai_B.sf_Chart6.yjhx,        /* 222: Signal */
  &kaiguangai_B.sf_Chart6.gghx,        /* 223: Signal */
  &kaiguangai_B.sf_Chart6.kgzhiling1,  /* 224: Signal */
  &kaiguangai_B.sf_Chart6.kgzhiling2,  /* 225: Signal */
  &kaiguangai_B.sf_Chart6.ggzhiling1,  /* 226: Signal */
  &kaiguangai_B.sf_Chart6.ggzhiling2,  /* 227: Signal */
  &kaiguangai_B.sf_Chart6.skt,         /* 228: Signal */
  &kaiguangai_B.sf_Chart6.kgt,         /* 229: Signal */
  &kaiguangai_B.sf_Chart6.sdt,         /* 230: Signal */
  &kaiguangai_B.sf_Chart6.jst,         /* 231: Signal */
  &kaiguangai_B.sf_Chart6.ggt,         /* 232: Signal */
  &kaiguangai_B.sf_Chart6.yjt,         /* 233: Signal */
  &kaiguangai_B.sf_Chart6.skyichang,   /* 234: Signal */
  &kaiguangai_B.sf_Chart6.kgyichang,   /* 235: Signal */
  &kaiguangai_B.sf_Chart6.sdyichang,   /* 236: Signal */
  &kaiguangai_B.sf_Chart6.jsyichang,   /* 237: Signal */
  &kaiguangai_B.sf_Chart6.ggyichang,   /* 238: Signal */
  &kaiguangai_B.sf_Chart6.yjyichang,   /* 239: Signal */
  &kaiguangai_B.sf_Chart7.skhx,        /* 240: Signal */
  &kaiguangai_B.sf_Chart7.kghx,        /* 241: Signal */
  &kaiguangai_B.sf_Chart7.yjhx,        /* 242: Signal */
  &kaiguangai_B.sf_Chart7.gghx,        /* 243: Signal */
  &kaiguangai_B.sf_Chart7.kgzhiling1,  /* 244: Signal */
  &kaiguangai_B.sf_Chart7.kgzhiling2,  /* 245: Signal */
  &kaiguangai_B.sf_Chart7.ggzhiling1,  /* 246: Signal */
  &kaiguangai_B.sf_Chart7.ggzhiling2,  /* 247: Signal */
  &kaiguangai_B.sf_Chart7.skt,         /* 248: Signal */
  &kaiguangai_B.sf_Chart7.kgt,         /* 249: Signal */
  &kaiguangai_B.sf_Chart7.sdt,         /* 250: Signal */
  &kaiguangai_B.sf_Chart7.jst,         /* 251: Signal */
  &kaiguangai_B.sf_Chart7.ggt,         /* 252: Signal */
  &kaiguangai_B.sf_Chart7.yjt,         /* 253: Signal */
  &kaiguangai_B.sf_Chart7.skyichang,   /* 254: Signal */
  &kaiguangai_B.sf_Chart7.kgyichang,   /* 255: Signal */
  &kaiguangai_B.sf_Chart7.sdyichang,   /* 256: Signal */
  &kaiguangai_B.sf_Chart7.jsyichang,   /* 257: Signal */
  &kaiguangai_B.sf_Chart7.ggyichang,   /* 258: Signal */
  &kaiguangai_B.sf_Chart7.yjyichang,   /* 259: Signal */
  &kaiguangai_B.DataTypeConversion1_a[0],/* 260: Signal */
  &kaiguangai_B.DataTypeConversion10[0],/* 261: Signal */
  &kaiguangai_B.DataTypeConversion2_p[0],/* 262: Signal */
  &kaiguangai_B.DataTypeConversion5_m[0],/* 263: Signal */
  &kaiguangai_B.DataTypeConversion6_nb[0],/* 264: Signal */
  &kaiguangai_B.DataTypeConversion7_d[0],/* 265: Signal */
  &kaiguangai_B.DataTypeConversion8_a[0],/* 266: Signal */
  &kaiguangai_B.DataTypeConversion9[0],/* 267: Signal */
  &kaiguangai_B.LogicalOperator_p,     /* 268: Signal */
  &kaiguangai_B.LogicalOperator1_f,    /* 269: Signal */
  &kaiguangai_B.LogicalOperator2_f,    /* 270: Signal */
  &kaiguangai_B.LogicalOperator3_d,    /* 271: Signal */
  &kaiguangai_B.sf_1.skhx,             /* 272: Signal */
  &kaiguangai_B.sf_1.kghx,             /* 273: Signal */
  &kaiguangai_B.sf_1.kgzhiling1,       /* 274: Signal */
  &kaiguangai_B.sf_1.kgzhiling2,       /* 275: Signal */
  &kaiguangai_B.sf_1.yjhx,             /* 276: Signal */
  &kaiguangai_B.sf_1.gghx,             /* 277: Signal */
  &kaiguangai_B.sf_1.ggzhiling1,       /* 278: Signal */
  &kaiguangai_B.sf_1.ggzhiling2,       /* 279: Signal */
  &kaiguangai_B.sf_1.skt,              /* 280: Signal */
  &kaiguangai_B.sf_1.kgt,              /* 281: Signal */
  &kaiguangai_B.sf_1.sdt,              /* 282: Signal */
  &kaiguangai_B.sf_1.jst,              /* 283: Signal */
  &kaiguangai_B.sf_1.ggt,              /* 284: Signal */
  &kaiguangai_B.sf_1.yjt,              /* 285: Signal */
  &kaiguangai_B.sf_1.yikaicishu,       /* 286: Signal */
  &kaiguangai_B.sf_1.skyichang,        /* 287: Signal */
  &kaiguangai_B.sf_1.kgyichang,        /* 288: Signal */
  &kaiguangai_B.sf_1.sdyichang,        /* 289: Signal */
  &kaiguangai_B.sf_1.jsyichang,        /* 290: Signal */
  &kaiguangai_B.sf_1.ggyichang,        /* 291: Signal */
  &kaiguangai_B.sf_1.yjyichang,        /* 292: Signal */
  &kaiguangai_B.sf_11.skhx,            /* 293: Signal */
  &kaiguangai_B.sf_11.kghx,            /* 294: Signal */
  &kaiguangai_B.sf_11.kgzhiling1,      /* 295: Signal */
  &kaiguangai_B.sf_11.kgzhiling2,      /* 296: Signal */
  &kaiguangai_B.sf_11.yjhx,            /* 297: Signal */
  &kaiguangai_B.sf_11.gghx,            /* 298: Signal */
  &kaiguangai_B.sf_11.ggzhiling1,      /* 299: Signal */
  &kaiguangai_B.sf_11.ggzhiling2,      /* 300: Signal */
  &kaiguangai_B.sf_11.skt,             /* 301: Signal */
  &kaiguangai_B.sf_11.kgt,             /* 302: Signal */
  &kaiguangai_B.sf_11.sdt,             /* 303: Signal */
  &kaiguangai_B.sf_11.jst,             /* 304: Signal */
  &kaiguangai_B.sf_11.ggt,             /* 305: Signal */
  &kaiguangai_B.sf_11.yjt,             /* 306: Signal */
  &kaiguangai_B.sf_11.yikaicishu,      /* 307: Signal */
  &kaiguangai_B.sf_11.skyichang,       /* 308: Signal */
  &kaiguangai_B.sf_11.kgyichang,       /* 309: Signal */
  &kaiguangai_B.sf_11.sdyichang,       /* 310: Signal */
  &kaiguangai_B.sf_11.jsyichang,       /* 311: Signal */
  &kaiguangai_B.sf_11.ggyichang,       /* 312: Signal */
  &kaiguangai_B.sf_11.yjyichang,       /* 313: Signal */
  &kaiguangai_B.sf_12.skhx,            /* 314: Signal */
  &kaiguangai_B.sf_12.kghx,            /* 315: Signal */
  &kaiguangai_B.sf_12.kgzhiling1,      /* 316: Signal */
  &kaiguangai_B.sf_12.kgzhiling2,      /* 317: Signal */
  &kaiguangai_B.sf_12.yjhx,            /* 318: Signal */
  &kaiguangai_B.sf_12.gghx,            /* 319: Signal */
  &kaiguangai_B.sf_12.ggzhiling1,      /* 320: Signal */
  &kaiguangai_B.sf_12.ggzhiling2,      /* 321: Signal */
  &kaiguangai_B.sf_12.skt,             /* 322: Signal */
  &kaiguangai_B.sf_12.kgt,             /* 323: Signal */
  &kaiguangai_B.sf_12.sdt,             /* 324: Signal */
  &kaiguangai_B.sf_12.jst,             /* 325: Signal */
  &kaiguangai_B.sf_12.ggt,             /* 326: Signal */
  &kaiguangai_B.sf_12.yjt,             /* 327: Signal */
  &kaiguangai_B.sf_12.yikaicishu,      /* 328: Signal */
  &kaiguangai_B.sf_12.skyichang,       /* 329: Signal */
  &kaiguangai_B.sf_12.kgyichang,       /* 330: Signal */
  &kaiguangai_B.sf_12.sdyichang,       /* 331: Signal */
  &kaiguangai_B.sf_12.jsyichang,       /* 332: Signal */
  &kaiguangai_B.sf_12.ggyichang,       /* 333: Signal */
  &kaiguangai_B.sf_12.yjyichang,       /* 334: Signal */
  &kaiguangai_B.sf_13.skhx,            /* 335: Signal */
  &kaiguangai_B.sf_13.kghx,            /* 336: Signal */
  &kaiguangai_B.sf_13.kgzhiling1,      /* 337: Signal */
  &kaiguangai_B.sf_13.kgzhiling2,      /* 338: Signal */
  &kaiguangai_B.sf_13.yjhx,            /* 339: Signal */
  &kaiguangai_B.sf_13.gghx,            /* 340: Signal */
  &kaiguangai_B.sf_13.ggzhiling1,      /* 341: Signal */
  &kaiguangai_B.sf_13.ggzhiling2,      /* 342: Signal */
  &kaiguangai_B.sf_13.skt,             /* 343: Signal */
  &kaiguangai_B.sf_13.kgt,             /* 344: Signal */
  &kaiguangai_B.sf_13.sdt,             /* 345: Signal */
  &kaiguangai_B.sf_13.jst,             /* 346: Signal */
  &kaiguangai_B.sf_13.ggt,             /* 347: Signal */
  &kaiguangai_B.sf_13.yjt,             /* 348: Signal */
  &kaiguangai_B.sf_13.yikaicishu,      /* 349: Signal */
  &kaiguangai_B.sf_13.skyichang,       /* 350: Signal */
  &kaiguangai_B.sf_13.kgyichang,       /* 351: Signal */
  &kaiguangai_B.sf_13.sdyichang,       /* 352: Signal */
  &kaiguangai_B.sf_13.jsyichang,       /* 353: Signal */
  &kaiguangai_B.sf_13.ggyichang,       /* 354: Signal */
  &kaiguangai_B.sf_13.yjyichang,       /* 355: Signal */
  &kaiguangai_B.sf_14.skhx,            /* 356: Signal */
  &kaiguangai_B.sf_14.kghx,            /* 357: Signal */
  &kaiguangai_B.sf_14.kgzhiling1,      /* 358: Signal */
  &kaiguangai_B.sf_14.kgzhiling2,      /* 359: Signal */
  &kaiguangai_B.sf_14.yjhx,            /* 360: Signal */
  &kaiguangai_B.sf_14.gghx,            /* 361: Signal */
  &kaiguangai_B.sf_14.ggzhiling1,      /* 362: Signal */
  &kaiguangai_B.sf_14.ggzhiling2,      /* 363: Signal */
  &kaiguangai_B.sf_14.skt,             /* 364: Signal */
  &kaiguangai_B.sf_14.kgt,             /* 365: Signal */
  &kaiguangai_B.sf_14.sdt,             /* 366: Signal */
  &kaiguangai_B.sf_14.jst,             /* 367: Signal */
  &kaiguangai_B.sf_14.ggt,             /* 368: Signal */
  &kaiguangai_B.sf_14.yjt,             /* 369: Signal */
  &kaiguangai_B.sf_14.yikaicishu,      /* 370: Signal */
  &kaiguangai_B.sf_14.skyichang,       /* 371: Signal */
  &kaiguangai_B.sf_14.kgyichang,       /* 372: Signal */
  &kaiguangai_B.sf_14.sdyichang,       /* 373: Signal */
  &kaiguangai_B.sf_14.jsyichang,       /* 374: Signal */
  &kaiguangai_B.sf_14.ggyichang,       /* 375: Signal */
  &kaiguangai_B.sf_14.yjyichang,       /* 376: Signal */
  &kaiguangai_B.sf_15.skhx,            /* 377: Signal */
  &kaiguangai_B.sf_15.kghx,            /* 378: Signal */
  &kaiguangai_B.sf_15.kgzhiling1,      /* 379: Signal */
  &kaiguangai_B.sf_15.kgzhiling2,      /* 380: Signal */
  &kaiguangai_B.sf_15.yjhx,            /* 381: Signal */
  &kaiguangai_B.sf_15.gghx,            /* 382: Signal */
  &kaiguangai_B.sf_15.ggzhiling1,      /* 383: Signal */
  &kaiguangai_B.sf_15.ggzhiling2,      /* 384: Signal */
  &kaiguangai_B.sf_15.skt,             /* 385: Signal */
  &kaiguangai_B.sf_15.kgt,             /* 386: Signal */
  &kaiguangai_B.sf_15.sdt,             /* 387: Signal */
  &kaiguangai_B.sf_15.jst,             /* 388: Signal */
  &kaiguangai_B.sf_15.ggt,             /* 389: Signal */
  &kaiguangai_B.sf_15.yjt,             /* 390: Signal */
  &kaiguangai_B.sf_15.yikaicishu,      /* 391: Signal */
  &kaiguangai_B.sf_15.skyichang,       /* 392: Signal */
  &kaiguangai_B.sf_15.kgyichang,       /* 393: Signal */
  &kaiguangai_B.sf_15.sdyichang,       /* 394: Signal */
  &kaiguangai_B.sf_15.jsyichang,       /* 395: Signal */
  &kaiguangai_B.sf_15.ggyichang,       /* 396: Signal */
  &kaiguangai_B.sf_15.yjyichang,       /* 397: Signal */
  &kaiguangai_B.sf_16.skhx,            /* 398: Signal */
  &kaiguangai_B.sf_16.kghx,            /* 399: Signal */
  &kaiguangai_B.sf_16.kgzhiling1,      /* 400: Signal */
  &kaiguangai_B.sf_16.kgzhiling2,      /* 401: Signal */
  &kaiguangai_B.sf_16.yjhx,            /* 402: Signal */
  &kaiguangai_B.sf_16.gghx,            /* 403: Signal */
  &kaiguangai_B.sf_16.ggzhiling1,      /* 404: Signal */
  &kaiguangai_B.sf_16.ggzhiling2,      /* 405: Signal */
  &kaiguangai_B.sf_16.skt,             /* 406: Signal */
  &kaiguangai_B.sf_16.kgt,             /* 407: Signal */
  &kaiguangai_B.sf_16.sdt,             /* 408: Signal */
  &kaiguangai_B.sf_16.jst,             /* 409: Signal */
  &kaiguangai_B.sf_16.ggt,             /* 410: Signal */
  &kaiguangai_B.sf_16.yjt,             /* 411: Signal */
  &kaiguangai_B.sf_16.yikaicishu,      /* 412: Signal */
  &kaiguangai_B.sf_16.skyichang,       /* 413: Signal */
  &kaiguangai_B.sf_16.kgyichang,       /* 414: Signal */
  &kaiguangai_B.sf_16.sdyichang,       /* 415: Signal */
  &kaiguangai_B.sf_16.jsyichang,       /* 416: Signal */
  &kaiguangai_B.sf_16.ggyichang,       /* 417: Signal */
  &kaiguangai_B.sf_16.yjyichang,       /* 418: Signal */
  &kaiguangai_B.sf_17.skhx,            /* 419: Signal */
  &kaiguangai_B.sf_17.kghx,            /* 420: Signal */
  &kaiguangai_B.sf_17.kgzhiling1,      /* 421: Signal */
  &kaiguangai_B.sf_17.kgzhiling2,      /* 422: Signal */
  &kaiguangai_B.sf_17.yjhx,            /* 423: Signal */
  &kaiguangai_B.sf_17.gghx,            /* 424: Signal */
  &kaiguangai_B.sf_17.ggzhiling1,      /* 425: Signal */
  &kaiguangai_B.sf_17.ggzhiling2,      /* 426: Signal */
  &kaiguangai_B.sf_17.skt,             /* 427: Signal */
  &kaiguangai_B.sf_17.kgt,             /* 428: Signal */
  &kaiguangai_B.sf_17.sdt,             /* 429: Signal */
  &kaiguangai_B.sf_17.jst,             /* 430: Signal */
  &kaiguangai_B.sf_17.ggt,             /* 431: Signal */
  &kaiguangai_B.sf_17.yjt,             /* 432: Signal */
  &kaiguangai_B.sf_17.yikaicishu,      /* 433: Signal */
  &kaiguangai_B.sf_17.skyichang,       /* 434: Signal */
  &kaiguangai_B.sf_17.kgyichang,       /* 435: Signal */
  &kaiguangai_B.sf_17.sdyichang,       /* 436: Signal */
  &kaiguangai_B.sf_17.jsyichang,       /* 437: Signal */
  &kaiguangai_B.sf_17.ggyichang,       /* 438: Signal */
  &kaiguangai_B.sf_17.yjyichang,       /* 439: Signal */
  &kaiguangai_B.DataTypeConversion1_b[0],/* 440: Signal */
  &kaiguangai_B.DataTypeConversion2_j[0],/* 441: Signal */
  &kaiguangai_B.DataTypeConversion3_l[0],/* 442: Signal */
  &kaiguangai_B.DataTypeConversion4_m[0],/* 443: Signal */
  &kaiguangai_B.DataTypeConversion5_n[0],/* 444: Signal */
  &kaiguangai_B.DataTypeConversion6_d[0],/* 445: Signal */
  &kaiguangai_B.DataTypeConversion7[0],/* 446: Signal */
  &kaiguangai_B.DataTypeConversion8[0],/* 447: Signal */
  &kaiguangai_B.LogicalOperator_c,     /* 448: Signal */
  &kaiguangai_B.LogicalOperator1_i,    /* 449: Signal */
  &kaiguangai_B.LogicalOperator10,     /* 450: Signal */
  &kaiguangai_B.LogicalOperator11,     /* 451: Signal */
  &kaiguangai_B.LogicalOperator2_k,    /* 452: Signal */
  &kaiguangai_B.LogicalOperator3_p,    /* 453: Signal */
  &kaiguangai_B.LogicalOperator4_l,    /* 454: Signal */
  &kaiguangai_B.LogicalOperator5_m,    /* 455: Signal */
  &kaiguangai_B.LogicalOperator6_j,    /* 456: Signal */
  &kaiguangai_B.LogicalOperator7,      /* 457: Signal */
  &kaiguangai_B.LogicalOperator8,      /* 458: Signal */
  &kaiguangai_B.LogicalOperator9,      /* 459: Signal */
  &kaiguangai_B.LogicalOperator1_k,    /* 460: Signal */
  &kaiguangai_B.LogicalOperator2_j,    /* 461: Signal */
  &kaiguangai_B.LogicalOperator3_j,    /* 462: Signal */
  &kaiguangai_B.LogicalOperator4_n,    /* 463: Signal */
  &kaiguangai_B.LogicalOperator5_a,    /* 464: Signal */
  &kaiguangai_B.LogicalOperator6_n,    /* 465: Signal */
  &kaiguangai_B.u_dd,                  /* 466: Signal */
  &kaiguangai_B.u_gs,                  /* 467: Signal */
  &kaiguangai_B.u_n,                   /* 468: Signal */
  &kaiguangai_B.u_k,                   /* 469: Signal */
  &kaiguangai_B.u_ni,                  /* 470: Signal */
  &kaiguangai_B.u_l4,                  /* 471: Signal */
  &kaiguangai_B.Switch1_d,             /* 472: Signal */
  &kaiguangai_B.Switch2_d,             /* 473: Signal */
  &kaiguangai_B.Switch3_p,             /* 474: Signal */
  &kaiguangai_B.Switch4_k,             /* 475: Signal */
  &kaiguangai_B.Switch5_h,             /* 476: Signal */
  &kaiguangai_B.Switch6_c,             /* 477: Signal */
  &kaiguangai_B.LogicalOperator1,      /* 478: Signal */
  &kaiguangai_B.LogicalOperator2,      /* 479: Signal */
  &kaiguangai_B.LogicalOperator3,      /* 480: Signal */
  &kaiguangai_B.LogicalOperator4,      /* 481: Signal */
  &kaiguangai_B.LogicalOperator5,      /* 482: Signal */
  &kaiguangai_B.LogicalOperator6,      /* 483: Signal */
  &kaiguangai_B.u_h,                   /* 484: Signal */
  &kaiguangai_B.u,                     /* 485: Signal */
  &kaiguangai_B.u_l,                   /* 486: Signal */
  &kaiguangai_B.u_c,                   /* 487: Signal */
  &kaiguangai_B.u_d,                   /* 488: Signal */
  &kaiguangai_B.u_c4,                  /* 489: Signal */
  &kaiguangai_B.Switch1,               /* 490: Signal */
  &kaiguangai_B.Switch2,               /* 491: Signal */
  &kaiguangai_B.Switch3,               /* 492: Signal */
  &kaiguangai_B.Switch4,               /* 493: Signal */
  &kaiguangai_B.Switch5,               /* 494: Signal */
  &kaiguangai_B.Switch6,               /* 495: Signal */
  &kaiguangai_P.Switch_Value,          /* 496: Block Parameter */
  &kaiguangai_P.Switch1_Value,         /* 497: Block Parameter */
  &kaiguangai_P.Switch2_Value,         /* 498: Block Parameter */
  &kaiguangai_P.jieshu_Value,          /* 499: Block Parameter */
  &kaiguangai_P.qiehuan_Value,         /* 500: Block Parameter */
  &kaiguangai_P.start_Value,           /* 501: Block Parameter */
  &kaiguangai_P.tiaoshi_Value,         /* 502: Block Parameter */
  &kaiguangai_P.zidong_shedingcishu_Value,/* 503: Block Parameter */
  &kaiguangai_P.memory_X0,             /* 504: Block Parameter */
  &kaiguangai_P.memory1_X0,            /* 505: Block Parameter */
  &kaiguangai_P.Switch3_Threshold,     /* 506: Block Parameter */
  &kaiguangai_P.Constant_Value,        /* 507: Block Parameter */
  &kaiguangai_P.Constant1_Value,       /* 508: Block Parameter */
  &kaiguangai_P.PCI1_P1[0],            /* 509: Block Parameter */
  &kaiguangai_P.PCI1_P2[0],            /* 510: Block Parameter */
  &kaiguangai_P.PCI2_P1[0],            /* 511: Block Parameter */
  &kaiguangai_P.PCI2_P2[0],            /* 512: Block Parameter */
  &kaiguangai_P.PCI3_P1[0],            /* 513: Block Parameter */
  &kaiguangai_P.PCI3_P2[0],            /* 514: Block Parameter */
  &kaiguangai_P.guangai_Value,         /* 515: Block Parameter */
  &kaiguangai_P.jiesuo_Value,          /* 516: Block Parameter */
  &kaiguangai_P.kaigai_Value,          /* 517: Block Parameter */
  &kaiguangai_P.s1_Value_d,            /* 518: Block Parameter */
  &kaiguangai_P.s2_Value_o,            /* 519: Block Parameter */
  &kaiguangai_P.s3_Value_d,            /* 520: Block Parameter */
  &kaiguangai_P.s4_Value_n,            /* 521: Block Parameter */
  &kaiguangai_P.s5_Value_j,            /* 522: Block Parameter */
  &kaiguangai_P.s6_Value_i,            /* 523: Block Parameter */
  &kaiguangai_P.s7_Value_m,            /* 524: Block Parameter */
  &kaiguangai_P.s8_Value_p,            /* 525: Block Parameter */
  &kaiguangai_P.songkai_Value,         /* 526: Block Parameter */
  &kaiguangai_P.suoding_Value,         /* 527: Block Parameter */
  &kaiguangai_P.yajin_Value,           /* 528: Block Parameter */
  &kaiguangai_P.guangai_Value_b,       /* 529: Block Parameter */
  &kaiguangai_P.jiesuo_Value_m,        /* 530: Block Parameter */
  &kaiguangai_P.kaigai_Value_n,        /* 531: Block Parameter */
  &kaiguangai_P.s1_Value,              /* 532: Block Parameter */
  &kaiguangai_P.s2_Value,              /* 533: Block Parameter */
  &kaiguangai_P.s3_Value,              /* 534: Block Parameter */
  &kaiguangai_P.s4_Value,              /* 535: Block Parameter */
  &kaiguangai_P.s5_Value,              /* 536: Block Parameter */
  &kaiguangai_P.s6_Value,              /* 537: Block Parameter */
  &kaiguangai_P.s7_Value,              /* 538: Block Parameter */
  &kaiguangai_P.s8_Value,              /* 539: Block Parameter */
  &kaiguangai_P.songkai_Value_d,       /* 540: Block Parameter */
  &kaiguangai_P.suoding_Value_b,       /* 541: Block Parameter */
  &kaiguangai_P.yajin_Value_a,         /* 542: Block Parameter */
  &kaiguangai_P.tiaoshi_huanxiangxinhao_Y0,/* 543: Block Parameter */
  &kaiguangai_P.t1_Value,              /* 544: Block Parameter */
  &kaiguangai_P.t11_Value,             /* 545: Block Parameter */
  &kaiguangai_P.t3_Value,              /* 546: Block Parameter */
  &kaiguangai_P.t5_Value,              /* 547: Block Parameter */
  &kaiguangai_P.t7_Value,              /* 548: Block Parameter */
  &kaiguangai_P.t9_Value,              /* 549: Block Parameter */
  &kaiguangai_P.jinggai1_Value,        /* 550: Block Parameter */
  &kaiguangai_P.jinggai2_Value,        /* 551: Block Parameter */
  &kaiguangai_P.jinggai3_Value,        /* 552: Block Parameter */
  &kaiguangai_P.jinggai4_Value,        /* 553: Block Parameter */
  &kaiguangai_P.jinggai5_Value,        /* 554: Block Parameter */
  &kaiguangai_P.jinggai6_Value,        /* 555: Block Parameter */
  &kaiguangai_P.jinggai7_Value,        /* 556: Block Parameter */
  &kaiguangai_P.jinggai8_Value,        /* 557: Block Parameter */
  &kaiguangai_P.songkaihuanxiang_Y0,   /* 558: Block Parameter */
  &kaiguangai_P.kaigaihuanxiang_Y0,    /* 559: Block Parameter */
  &kaiguangai_P.yajinhuanxiang_Y0,     /* 560: Block Parameter */
  &kaiguangai_P.guangaihuanxiang_Y0,   /* 561: Block Parameter */
  &kaiguangai_P.songkaihuanxiang_Y0_m, /* 562: Block Parameter */
  &kaiguangai_P.kaigaihuanxiang_Y0_d,  /* 563: Block Parameter */
  &kaiguangai_P.yajinhuanxiang_Y0_k,   /* 564: Block Parameter */
  &kaiguangai_P.guangaihuanxiang_Y0_l, /* 565: Block Parameter */
  &kaiguangai_P.Constant12_Value,      /* 566: Block Parameter */
  &kaiguangai_P.Constant13_Value,      /* 567: Block Parameter */
  &kaiguangai_P.Constant16_Value,      /* 568: Block Parameter */
  &kaiguangai_P.Constant17_Value,      /* 569: Block Parameter */
  &kaiguangai_P.Constant18_Value,      /* 570: Block Parameter */
  &kaiguangai_P.Constant19_Value,      /* 571: Block Parameter */
  &kaiguangai_P.u_X0_im,               /* 572: Block Parameter */
  &kaiguangai_P.u_X0_g,                /* 573: Block Parameter */
  &kaiguangai_P.u_X0_o,                /* 574: Block Parameter */
  &kaiguangai_P.u_X0_h,                /* 575: Block Parameter */
  &kaiguangai_P.u_X0_i,                /* 576: Block Parameter */
  &kaiguangai_P.u_X0_i1,               /* 577: Block Parameter */
  &kaiguangai_P.Constant12_Value_b,    /* 578: Block Parameter */
  &kaiguangai_P.Constant13_Value_j,    /* 579: Block Parameter */
  &kaiguangai_P.Constant16_Value_o,    /* 580: Block Parameter */
  &kaiguangai_P.Constant17_Value_e,    /* 581: Block Parameter */
  &kaiguangai_P.Constant18_Value_e,    /* 582: Block Parameter */
  &kaiguangai_P.Constant19_Value_f,    /* 583: Block Parameter */
  &kaiguangai_P.u_X0_p,                /* 584: Block Parameter */
  &kaiguangai_P.u_X0,                  /* 585: Block Parameter */
  &kaiguangai_P.u_X0_f,                /* 586: Block Parameter */
  &kaiguangai_P.u_X0_a,                /* 587: Block Parameter */
  &kaiguangai_P.u_X0_n,                /* 588: Block Parameter */
  &kaiguangai_P.u_X0_j,                /* 589: Block Parameter */
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

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 }
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

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  10,                                  /* 4 */
  1,                                   /* 5 */
  4,                                   /* 6 */
  1,                                   /* 7 */
  32,                                  /* 8 */
  1,                                   /* 9 */
  16,                                  /* 10 */
  1,                                   /* 11 */
  8,                                   /* 12 */
  1,                                   /* 13 */
  48,                                  /* 14 */
  1,                                   /* 15 */
  1,                                   /* 16 */
  2                                    /* 17 */
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
  { rtBlockSignals, 496,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 94,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4072332393U,
    255773183U,
    630524459U,
    2994306861U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  kaiguangai_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void kaiguangai_InitializeDataMapInfo(RT_MODEL_kaiguangai_T *const kaiguangai_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(kaiguangai_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(kaiguangai_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(kaiguangai_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(kaiguangai_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(kaiguangai_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  kaiguangai_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (kaiguangai_M);
  kaiguangai_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_kaiguangai_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(kaiguangai_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(kaiguangai_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(kaiguangai_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void kaiguangai_host_InitializeDataMapInfo(kaiguangai_host_DataMapInfo_T
    *dataMap, const char *path)
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

/* EOF: kaiguangai_capi.c */
