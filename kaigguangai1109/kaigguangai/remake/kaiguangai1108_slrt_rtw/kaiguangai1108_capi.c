/*
 * kaiguangai1108_capi.c
 *
 * Code generation for model "kaiguangai1108".
 *
 * Model version              : 1.85
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Nov 09 15:31:44 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "kaiguangai1108_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "kaiguangai1108.h"
#include "kaiguangai1108_capi.h"
#include "kaiguangai1108_private.h"
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

  { 7, 0, TARGET_STRING("Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 8, 0, TARGET_STRING("memory"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 9, 0, TARGET_STRING("memory1"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 10, 0, TARGET_STRING("Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 11, 0, TARGET_STRING("Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 12, 0, TARGET_STRING("Multiport Switch2"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 13, 0, TARGET_STRING("Switch3"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 14, 0, TARGET_STRING("PCI-1756/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("PCI-1756/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("PCI-1756/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 17, 0, TARGET_STRING("PCI-1756/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 18, 0, TARGET_STRING("PCI-1756/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 19, 0, TARGET_STRING("PCI-1756/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 20, 0, TARGET_STRING("PCI-1756/Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 21, 0, TARGET_STRING("PCI-1756/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 22, 0, TARGET_STRING("PCI-1756/PCI1/p1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 23, 0, TARGET_STRING("PCI-1756/PCI1/p2"),
    TARGET_STRING(""), 1, 0, 5, 0, 0 },

  { 24, 0, TARGET_STRING("PCI-1756/PCI2/p1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 25, 0, TARGET_STRING("PCI-1756/PCI2/p2"),
    TARGET_STRING(""), 1, 0, 5, 0, 0 },

  { 26, 0, TARGET_STRING("PCI-1756/PCI3/p1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 27, 0, TARGET_STRING("PCI-1756/PCI3/p2"),
    TARGET_STRING(""), 1, 0, 5, 0, 0 },

  { 28, 2, TARGET_STRING("Subsystem1/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 3, TARGET_STRING("Subsystem1/Chart1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Subsystem1/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Subsystem1/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 1, TARGET_STRING("Subsystem1/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 33, 0, TARGET_STRING("Subsystem1/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 34, 0, TARGET_STRING("Subsystem1/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Subsystem1/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Subsystem1/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Subsystem1/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 38, 0, TARGET_STRING("Subsystem1/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Subsystem1/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 40, 0, TARGET_STRING("Subsystem1/Multiport Switch"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 41, 0, TARGET_STRING("Subsystem1/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 42, 0, TARGET_STRING("Subsystem1/Multiport Switch2"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 43, 0, TARGET_STRING("Subsystem1/Multiport Switch3"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 44, 0, TARGET_STRING("shoudongcaozuo/Product"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 45, 0, TARGET_STRING("shoudongcaozuo/Product1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 46, 0, TARGET_STRING("shoudongcaozuo/Product2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 47, 0, TARGET_STRING("shoudongcaozuo/Product3"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 48, 0, TARGET_STRING("shoudongcaozuo/Product4"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 49, 0, TARGET_STRING("shoudongcaozuo/Product5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 50, 0, TARGET_STRING("shoudongcaozuo/Product6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 51, 0, TARGET_STRING("shoudongcaozuo/Product7"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 52, 0, TARGET_STRING("tiaoshidongzuo/Product"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 53, 0, TARGET_STRING("tiaoshidongzuo/Product1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 54, 0, TARGET_STRING("tiaoshidongzuo/Product2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 55, 0, TARGET_STRING("tiaoshidongzuo/Product3"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 56, 0, TARGET_STRING("tiaoshidongzuo/Product4"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 57, 0, TARGET_STRING("tiaoshidongzuo/Product5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 58, 0, TARGET_STRING("tiaoshidongzuo/Product6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 59, 0, TARGET_STRING("tiaoshidongzuo/Product7"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 60, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 62, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 63, 46, TARGET_STRING("tiaoshimoshi/jinjichuli/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 64, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 65, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 66, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 67, 47, TARGET_STRING("tiaoshimoshi/jinjichuli1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 68, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 69, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 70, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 71, 48, TARGET_STRING("tiaoshimoshi/jinjichuli2/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 72, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 73, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 74, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 75, 49, TARGET_STRING("tiaoshimoshi/jinjichuli3/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 76, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 78, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 79, 50, TARGET_STRING("tiaoshimoshi/jinjichuli4/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 80, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 82, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 83, 51, TARGET_STRING("tiaoshimoshi/jinjichuli5/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 84, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 85, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 86, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 87, 52, TARGET_STRING("tiaoshimoshi/jinjichuli6/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 88, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 89, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 90, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 91, 53, TARGET_STRING("tiaoshimoshi/jinjichuli7/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 92, 54, TARGET_STRING("tiaoshimoshi/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 93, 54, TARGET_STRING("tiaoshimoshi/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 94, 54, TARGET_STRING("tiaoshimoshi/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 95, 54, TARGET_STRING("tiaoshimoshi/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 96, 0, TARGET_STRING("zidong_jiangeshijian/t1"),
    TARGET_STRING("松开至开盖的间隔时间"), 0, 0, 0, 0, 0 },

  { 97, 0, TARGET_STRING("zidong_jiangeshijian/t11"),
    TARGET_STRING("压紧至松开的间隔时间"), 0, 0, 0, 0, 0 },

  { 98, 0, TARGET_STRING("zidong_jiangeshijian/t3"),
    TARGET_STRING("开盖至锁定的间隔时间"), 0, 0, 0, 0, 0 },

  { 99, 0, TARGET_STRING("zidong_jiangeshijian/t5"),
    TARGET_STRING("锁定至解锁的间隔时间"), 0, 0, 0, 0, 0 },

  { 100, 0, TARGET_STRING("zidong_jiangeshijian/t7"),
    TARGET_STRING("解锁至关盖的间隔时间"), 0, 0, 0, 0, 0 },

  { 101, 0, TARGET_STRING("zidong_jiangeshijian/t9"),
    TARGET_STRING("关盖至压紧的间隔时间"), 0, 0, 0, 0, 0 },

  { 102, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 103, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 104, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 105, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 106, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 107, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 108, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 109, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 110, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 111, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 112, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 113, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 114, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 115, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 116, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 117, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 118, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 119, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 120, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 121, 4, TARGET_STRING("Subsystem1/shoudong/Chart/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 122, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 123, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 124, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 125, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 126, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 127, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 128, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 129, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 130, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 131, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 132, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 133, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 134, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 135, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 136, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 137, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 138, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 139, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 140, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 141, 5, TARGET_STRING("Subsystem1/shoudong/Chart1/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 142, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 143, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 144, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 145, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 146, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 147, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 148, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 149, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 150, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 151, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 152, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 153, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 154, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 155, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 156, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 157, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 158, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 159, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 160, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 161, 6, TARGET_STRING("Subsystem1/shoudong/Chart2/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 162, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 163, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 164, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 165, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 166, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 167, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 168, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 169, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 170, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 171, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 172, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 173, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 174, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 175, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 176, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 177, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 178, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 179, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 180, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 181, 7, TARGET_STRING("Subsystem1/shoudong/Chart3/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 182, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 183, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 184, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 185, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 186, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 187, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 188, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 189, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 190, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 191, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 192, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 193, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 194, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 195, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 196, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 197, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 198, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 199, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 200, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 201, 8, TARGET_STRING("Subsystem1/shoudong/Chart4/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 202, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 203, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 204, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 205, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 206, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 207, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 208, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 209, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 210, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 211, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 212, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 213, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 214, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 215, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 216, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 217, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 218, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 219, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 220, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 221, 9, TARGET_STRING("Subsystem1/shoudong/Chart5/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 222, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 223, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 224, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 225, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 226, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 227, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 228, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 229, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 230, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 231, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 232, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 233, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 234, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 235, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 236, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 237, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 238, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 239, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 240, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 241, 10, TARGET_STRING("Subsystem1/shoudong/Chart6/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 242, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 243, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 244, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 245, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 246, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 247, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 248, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 249, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 250, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 251, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 252, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 253, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 254, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 255, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 256, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 257, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 258, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 259, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 260, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 261, 11, TARGET_STRING("Subsystem1/shoudong/Chart7/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 262, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 263, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion10"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 264, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 265, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 266, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion6"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 267, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 268, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion8"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 269, 12, TARGET_STRING("Subsystem1/shoudong/Data Type Conversion9"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 270, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 271, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 272, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 273, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 274, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 275, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 276, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 277, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 278, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator8"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 279, 12, TARGET_STRING("Subsystem1/shoudong/Logical Operator9"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 280, 13, TARGET_STRING("Subsystem1/zidong/1#/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 13, TARGET_STRING("Subsystem1/zidong/1#/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 282, 13, TARGET_STRING("Subsystem1/zidong/1#/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 283, 13, TARGET_STRING("Subsystem1/zidong/1#/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 284, 13, TARGET_STRING("Subsystem1/zidong/1#/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 285, 13, TARGET_STRING("Subsystem1/zidong/1#/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 286, 13, TARGET_STRING("Subsystem1/zidong/1#/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 287, 13, TARGET_STRING("Subsystem1/zidong/1#/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 288, 13, TARGET_STRING("Subsystem1/zidong/1#/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 289, 13, TARGET_STRING("Subsystem1/zidong/1#/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 290, 13, TARGET_STRING("Subsystem1/zidong/1#/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 291, 13, TARGET_STRING("Subsystem1/zidong/1#/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 292, 13, TARGET_STRING("Subsystem1/zidong/1#/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 293, 13, TARGET_STRING("Subsystem1/zidong/1#/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 294, 13, TARGET_STRING("Subsystem1/zidong/1#/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 295, 13, TARGET_STRING("Subsystem1/zidong/1#/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 296, 13, TARGET_STRING("Subsystem1/zidong/1#/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 297, 13, TARGET_STRING("Subsystem1/zidong/1#/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 298, 13, TARGET_STRING("Subsystem1/zidong/1#/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 299, 13, TARGET_STRING("Subsystem1/zidong/1#/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 300, 13, TARGET_STRING("Subsystem1/zidong/1#/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 301, 14, TARGET_STRING("Subsystem1/zidong/1#1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 302, 14, TARGET_STRING("Subsystem1/zidong/1#1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 303, 14, TARGET_STRING("Subsystem1/zidong/1#1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 304, 14, TARGET_STRING("Subsystem1/zidong/1#1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 305, 14, TARGET_STRING("Subsystem1/zidong/1#1/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 306, 14, TARGET_STRING("Subsystem1/zidong/1#1/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 307, 14, TARGET_STRING("Subsystem1/zidong/1#1/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 308, 14, TARGET_STRING("Subsystem1/zidong/1#1/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 309, 14, TARGET_STRING("Subsystem1/zidong/1#1/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 310, 14, TARGET_STRING("Subsystem1/zidong/1#1/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 311, 14, TARGET_STRING("Subsystem1/zidong/1#1/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 312, 14, TARGET_STRING("Subsystem1/zidong/1#1/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 313, 14, TARGET_STRING("Subsystem1/zidong/1#1/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 314, 14, TARGET_STRING("Subsystem1/zidong/1#1/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 315, 14, TARGET_STRING("Subsystem1/zidong/1#1/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 316, 14, TARGET_STRING("Subsystem1/zidong/1#1/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 317, 14, TARGET_STRING("Subsystem1/zidong/1#1/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 318, 14, TARGET_STRING("Subsystem1/zidong/1#1/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 319, 14, TARGET_STRING("Subsystem1/zidong/1#1/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 320, 14, TARGET_STRING("Subsystem1/zidong/1#1/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 321, 14, TARGET_STRING("Subsystem1/zidong/1#1/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 322, 15, TARGET_STRING("Subsystem1/zidong/1#2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 323, 15, TARGET_STRING("Subsystem1/zidong/1#2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 324, 15, TARGET_STRING("Subsystem1/zidong/1#2/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 325, 15, TARGET_STRING("Subsystem1/zidong/1#2/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 326, 15, TARGET_STRING("Subsystem1/zidong/1#2/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 327, 15, TARGET_STRING("Subsystem1/zidong/1#2/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 328, 15, TARGET_STRING("Subsystem1/zidong/1#2/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 329, 15, TARGET_STRING("Subsystem1/zidong/1#2/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 330, 15, TARGET_STRING("Subsystem1/zidong/1#2/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 331, 15, TARGET_STRING("Subsystem1/zidong/1#2/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 332, 15, TARGET_STRING("Subsystem1/zidong/1#2/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 333, 15, TARGET_STRING("Subsystem1/zidong/1#2/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 334, 15, TARGET_STRING("Subsystem1/zidong/1#2/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 335, 15, TARGET_STRING("Subsystem1/zidong/1#2/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 336, 15, TARGET_STRING("Subsystem1/zidong/1#2/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 337, 15, TARGET_STRING("Subsystem1/zidong/1#2/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 338, 15, TARGET_STRING("Subsystem1/zidong/1#2/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 339, 15, TARGET_STRING("Subsystem1/zidong/1#2/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 340, 15, TARGET_STRING("Subsystem1/zidong/1#2/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 341, 15, TARGET_STRING("Subsystem1/zidong/1#2/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 342, 15, TARGET_STRING("Subsystem1/zidong/1#2/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 343, 16, TARGET_STRING("Subsystem1/zidong/1#3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 344, 16, TARGET_STRING("Subsystem1/zidong/1#3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 345, 16, TARGET_STRING("Subsystem1/zidong/1#3/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 346, 16, TARGET_STRING("Subsystem1/zidong/1#3/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 347, 16, TARGET_STRING("Subsystem1/zidong/1#3/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 348, 16, TARGET_STRING("Subsystem1/zidong/1#3/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 349, 16, TARGET_STRING("Subsystem1/zidong/1#3/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 350, 16, TARGET_STRING("Subsystem1/zidong/1#3/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 351, 16, TARGET_STRING("Subsystem1/zidong/1#3/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 352, 16, TARGET_STRING("Subsystem1/zidong/1#3/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 353, 16, TARGET_STRING("Subsystem1/zidong/1#3/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 354, 16, TARGET_STRING("Subsystem1/zidong/1#3/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 355, 16, TARGET_STRING("Subsystem1/zidong/1#3/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 356, 16, TARGET_STRING("Subsystem1/zidong/1#3/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 357, 16, TARGET_STRING("Subsystem1/zidong/1#3/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 358, 16, TARGET_STRING("Subsystem1/zidong/1#3/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 359, 16, TARGET_STRING("Subsystem1/zidong/1#3/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 360, 16, TARGET_STRING("Subsystem1/zidong/1#3/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 361, 16, TARGET_STRING("Subsystem1/zidong/1#3/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 362, 16, TARGET_STRING("Subsystem1/zidong/1#3/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 363, 16, TARGET_STRING("Subsystem1/zidong/1#3/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 364, 17, TARGET_STRING("Subsystem1/zidong/1#4/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 365, 17, TARGET_STRING("Subsystem1/zidong/1#4/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 366, 17, TARGET_STRING("Subsystem1/zidong/1#4/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 367, 17, TARGET_STRING("Subsystem1/zidong/1#4/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 368, 17, TARGET_STRING("Subsystem1/zidong/1#4/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 369, 17, TARGET_STRING("Subsystem1/zidong/1#4/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 370, 17, TARGET_STRING("Subsystem1/zidong/1#4/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 371, 17, TARGET_STRING("Subsystem1/zidong/1#4/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 372, 17, TARGET_STRING("Subsystem1/zidong/1#4/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 373, 17, TARGET_STRING("Subsystem1/zidong/1#4/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 374, 17, TARGET_STRING("Subsystem1/zidong/1#4/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 375, 17, TARGET_STRING("Subsystem1/zidong/1#4/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 376, 17, TARGET_STRING("Subsystem1/zidong/1#4/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 377, 17, TARGET_STRING("Subsystem1/zidong/1#4/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 378, 17, TARGET_STRING("Subsystem1/zidong/1#4/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 379, 17, TARGET_STRING("Subsystem1/zidong/1#4/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 380, 17, TARGET_STRING("Subsystem1/zidong/1#4/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 381, 17, TARGET_STRING("Subsystem1/zidong/1#4/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 382, 17, TARGET_STRING("Subsystem1/zidong/1#4/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 383, 17, TARGET_STRING("Subsystem1/zidong/1#4/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 384, 17, TARGET_STRING("Subsystem1/zidong/1#4/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 385, 18, TARGET_STRING("Subsystem1/zidong/1#5/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 386, 18, TARGET_STRING("Subsystem1/zidong/1#5/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 387, 18, TARGET_STRING("Subsystem1/zidong/1#5/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 388, 18, TARGET_STRING("Subsystem1/zidong/1#5/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 389, 18, TARGET_STRING("Subsystem1/zidong/1#5/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 390, 18, TARGET_STRING("Subsystem1/zidong/1#5/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 391, 18, TARGET_STRING("Subsystem1/zidong/1#5/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 392, 18, TARGET_STRING("Subsystem1/zidong/1#5/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 393, 18, TARGET_STRING("Subsystem1/zidong/1#5/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 394, 18, TARGET_STRING("Subsystem1/zidong/1#5/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 395, 18, TARGET_STRING("Subsystem1/zidong/1#5/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 396, 18, TARGET_STRING("Subsystem1/zidong/1#5/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 397, 18, TARGET_STRING("Subsystem1/zidong/1#5/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 398, 18, TARGET_STRING("Subsystem1/zidong/1#5/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 399, 18, TARGET_STRING("Subsystem1/zidong/1#5/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 400, 18, TARGET_STRING("Subsystem1/zidong/1#5/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 401, 18, TARGET_STRING("Subsystem1/zidong/1#5/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 402, 18, TARGET_STRING("Subsystem1/zidong/1#5/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 403, 18, TARGET_STRING("Subsystem1/zidong/1#5/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 404, 18, TARGET_STRING("Subsystem1/zidong/1#5/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 405, 18, TARGET_STRING("Subsystem1/zidong/1#5/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 406, 19, TARGET_STRING("Subsystem1/zidong/1#6/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 407, 19, TARGET_STRING("Subsystem1/zidong/1#6/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 408, 19, TARGET_STRING("Subsystem1/zidong/1#6/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 409, 19, TARGET_STRING("Subsystem1/zidong/1#6/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 410, 19, TARGET_STRING("Subsystem1/zidong/1#6/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 411, 19, TARGET_STRING("Subsystem1/zidong/1#6/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 412, 19, TARGET_STRING("Subsystem1/zidong/1#6/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 413, 19, TARGET_STRING("Subsystem1/zidong/1#6/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 414, 19, TARGET_STRING("Subsystem1/zidong/1#6/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 415, 19, TARGET_STRING("Subsystem1/zidong/1#6/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 416, 19, TARGET_STRING("Subsystem1/zidong/1#6/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 417, 19, TARGET_STRING("Subsystem1/zidong/1#6/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 418, 19, TARGET_STRING("Subsystem1/zidong/1#6/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 419, 19, TARGET_STRING("Subsystem1/zidong/1#6/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 420, 19, TARGET_STRING("Subsystem1/zidong/1#6/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 421, 19, TARGET_STRING("Subsystem1/zidong/1#6/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 422, 19, TARGET_STRING("Subsystem1/zidong/1#6/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 423, 19, TARGET_STRING("Subsystem1/zidong/1#6/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 424, 19, TARGET_STRING("Subsystem1/zidong/1#6/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 425, 19, TARGET_STRING("Subsystem1/zidong/1#6/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 426, 19, TARGET_STRING("Subsystem1/zidong/1#6/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 427, 20, TARGET_STRING("Subsystem1/zidong/1#7/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 428, 20, TARGET_STRING("Subsystem1/zidong/1#7/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 429, 20, TARGET_STRING("Subsystem1/zidong/1#7/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 430, 20, TARGET_STRING("Subsystem1/zidong/1#7/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 431, 20, TARGET_STRING("Subsystem1/zidong/1#7/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 432, 20, TARGET_STRING("Subsystem1/zidong/1#7/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 433, 20, TARGET_STRING("Subsystem1/zidong/1#7/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 434, 20, TARGET_STRING("Subsystem1/zidong/1#7/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 435, 20, TARGET_STRING("Subsystem1/zidong/1#7/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 436, 20, TARGET_STRING("Subsystem1/zidong/1#7/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 437, 20, TARGET_STRING("Subsystem1/zidong/1#7/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 438, 20, TARGET_STRING("Subsystem1/zidong/1#7/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 439, 20, TARGET_STRING("Subsystem1/zidong/1#7/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 440, 20, TARGET_STRING("Subsystem1/zidong/1#7/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 441, 20, TARGET_STRING("Subsystem1/zidong/1#7/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 442, 20, TARGET_STRING("Subsystem1/zidong/1#7/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 443, 20, TARGET_STRING("Subsystem1/zidong/1#7/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 444, 20, TARGET_STRING("Subsystem1/zidong/1#7/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 445, 20, TARGET_STRING("Subsystem1/zidong/1#7/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 446, 20, TARGET_STRING("Subsystem1/zidong/1#7/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 447, 20, TARGET_STRING("Subsystem1/zidong/1#7/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 448, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 449, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 450, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 451, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 452, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 453, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 454, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion7"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 455, 21, TARGET_STRING("Subsystem1/zidong/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 456, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 457, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 458, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator10"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 459, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator11"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 460, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator12"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 461, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator13"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 462, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator14"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 463, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator15"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 464, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator16"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 465, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator17"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 466, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 467, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 468, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 469, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 470, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 471, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 472, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator8"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 473, 21, TARGET_STRING("Subsystem1/zidong/Logical Operator9"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 474, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 475, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 476, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 477, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 478, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 479, 0, TARGET_STRING("shoudongcaozuo/husuo/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 480, 0, TARGET_STRING("shoudongcaozuo/husuo/1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 481, 0, TARGET_STRING("shoudongcaozuo/husuo/2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 482, 0, TARGET_STRING("shoudongcaozuo/husuo/3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 483, 0, TARGET_STRING("shoudongcaozuo/husuo/4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 484, 0, TARGET_STRING("shoudongcaozuo/husuo/5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 485, 0, TARGET_STRING("shoudongcaozuo/husuo/6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 486, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 487, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 488, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 489, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 490, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 491, 0, TARGET_STRING("shoudongcaozuo/husuo/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 492, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 493, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 494, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 495, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 496, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 497, 0, TARGET_STRING("tiaoshidongzuo/husuo/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 498, 0, TARGET_STRING("tiaoshidongzuo/husuo/1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 499, 0, TARGET_STRING("tiaoshidongzuo/husuo/2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 500, 0, TARGET_STRING("tiaoshidongzuo/husuo/3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 501, 0, TARGET_STRING("tiaoshidongzuo/husuo/4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 502, 0, TARGET_STRING("tiaoshidongzuo/husuo/5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 503, 0, TARGET_STRING("tiaoshidongzuo/husuo/6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 504, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 505, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 506, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 507, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 508, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 509, 0, TARGET_STRING("tiaoshidongzuo/husuo/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 510, TARGET_STRING("Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 511, TARGET_STRING("Switch1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 512, TARGET_STRING("Switch2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 513, TARGET_STRING("jieshu"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 514, TARGET_STRING("qiehuan"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 515, TARGET_STRING("start"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 516, TARGET_STRING("tiaoshi"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 517, TARGET_STRING("zidong_shedingcishu"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 518, TARGET_STRING("memory"),
    TARGET_STRING("X0"), 1, 0, 0 },

  { 519, TARGET_STRING("memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 520, TARGET_STRING("Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 521, TARGET_STRING("PCI-1756/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 522, TARGET_STRING("PCI-1756/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 523, TARGET_STRING("PCI-1756/PCI1"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 524, TARGET_STRING("PCI-1756/PCI1"),
    TARGET_STRING("P2"), 0, 8, 0 },

  { 525, TARGET_STRING("PCI-1756/PCI2"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 526, TARGET_STRING("PCI-1756/PCI2"),
    TARGET_STRING("P2"), 0, 8, 0 },

  { 527, TARGET_STRING("PCI-1756/PCI3"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 528, TARGET_STRING("PCI-1756/PCI3"),
    TARGET_STRING("P2"), 0, 8, 0 },

  { 529, TARGET_STRING("shoudongcaozuo/guangai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 530, TARGET_STRING("shoudongcaozuo/jiesuo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 531, TARGET_STRING("shoudongcaozuo/kaigai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 532, TARGET_STRING("shoudongcaozuo/s1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 533, TARGET_STRING("shoudongcaozuo/s2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 534, TARGET_STRING("shoudongcaozuo/s3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 535, TARGET_STRING("shoudongcaozuo/s4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 536, TARGET_STRING("shoudongcaozuo/s5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 537, TARGET_STRING("shoudongcaozuo/s6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 538, TARGET_STRING("shoudongcaozuo/s7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 539, TARGET_STRING("shoudongcaozuo/s8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 540, TARGET_STRING("shoudongcaozuo/songkai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 541, TARGET_STRING("shoudongcaozuo/suoding"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 542, TARGET_STRING("shoudongcaozuo/yajin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 543, TARGET_STRING("tiaoshidongzuo/guangai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 544, TARGET_STRING("tiaoshidongzuo/jiesuo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 545, TARGET_STRING("tiaoshidongzuo/kaigai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 546, TARGET_STRING("tiaoshidongzuo/s1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 547, TARGET_STRING("tiaoshidongzuo/s2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 548, TARGET_STRING("tiaoshidongzuo/s3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 549, TARGET_STRING("tiaoshidongzuo/s4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 550, TARGET_STRING("tiaoshidongzuo/s5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 551, TARGET_STRING("tiaoshidongzuo/s6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 552, TARGET_STRING("tiaoshidongzuo/s7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 553, TARGET_STRING("tiaoshidongzuo/s8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 554, TARGET_STRING("tiaoshidongzuo/songkai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 555, TARGET_STRING("tiaoshidongzuo/suoding"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 556, TARGET_STRING("tiaoshidongzuo/yajin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 557, TARGET_STRING("tiaoshimoshi/tiaoshi_huanxiangxinhao"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 558, TARGET_STRING("zidong_jiangeshijian/t1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 559, TARGET_STRING("zidong_jiangeshijian/t11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 560, TARGET_STRING("zidong_jiangeshijian/t3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 561, TARGET_STRING("zidong_jiangeshijian/t5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 562, TARGET_STRING("zidong_jiangeshijian/t7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 563, TARGET_STRING("zidong_jiangeshijian/t9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 564, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 565, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 566, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 567, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 568, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 570, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 571, TARGET_STRING("Subsystem1/jinggaixuanze/jinggai8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 572, TARGET_STRING("Subsystem1/shoudong/songkaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 573, TARGET_STRING("Subsystem1/shoudong/kaigaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 574, TARGET_STRING("Subsystem1/shoudong/yajinhuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 575, TARGET_STRING("Subsystem1/shoudong/guangaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 576, TARGET_STRING("Subsystem1/shoudong/sdyichangxinhao"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 577, TARGET_STRING("Subsystem1/zidong/songkaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 578, TARGET_STRING("Subsystem1/zidong/kaigaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 579, TARGET_STRING("Subsystem1/zidong/yajinhuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 580, TARGET_STRING("Subsystem1/zidong/guangaihuanxiang"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 581, TARGET_STRING("Subsystem1/zidong/zdyichangxinhao"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 582, TARGET_STRING("shoudongcaozuo/husuo/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 583, TARGET_STRING("shoudongcaozuo/husuo/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 584, TARGET_STRING("shoudongcaozuo/husuo/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 585, TARGET_STRING("shoudongcaozuo/husuo/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 586, TARGET_STRING("shoudongcaozuo/husuo/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 587, TARGET_STRING("shoudongcaozuo/husuo/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 588, TARGET_STRING("shoudongcaozuo/husuo/1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 589, TARGET_STRING("shoudongcaozuo/husuo/2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 590, TARGET_STRING("shoudongcaozuo/husuo/3"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 591, TARGET_STRING("shoudongcaozuo/husuo/4"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 592, TARGET_STRING("shoudongcaozuo/husuo/5"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 593, TARGET_STRING("shoudongcaozuo/husuo/6"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 594, TARGET_STRING("tiaoshidongzuo/husuo/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 595, TARGET_STRING("tiaoshidongzuo/husuo/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 596, TARGET_STRING("tiaoshidongzuo/husuo/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 597, TARGET_STRING("tiaoshidongzuo/husuo/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 598, TARGET_STRING("tiaoshidongzuo/husuo/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 599, TARGET_STRING("tiaoshidongzuo/husuo/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 600, TARGET_STRING("tiaoshidongzuo/husuo/1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 601, TARGET_STRING("tiaoshidongzuo/husuo/2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 602, TARGET_STRING("tiaoshidongzuo/husuo/3"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 603, TARGET_STRING("tiaoshidongzuo/husuo/4"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 604, TARGET_STRING("tiaoshidongzuo/husuo/5"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 605, TARGET_STRING("tiaoshidongzuo/husuo/6"),
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
  &kaiguangai1108_B.jieshu,            /* 0: Signal */
  &kaiguangai1108_B.start,             /* 1: Signal */
  &kaiguangai1108_B.tiaoshi,           /* 2: Signal */
  &kaiguangai1108_B.zidong_shedingcishu,/* 3: Signal */
  &kaiguangai1108_B.DataTypeConversion[0],/* 4: Signal */
  &kaiguangai1108_B.DataTypeConversion1_j[0],/* 5: Signal */
  &kaiguangai1108_B.DataTypeConversion2_g[0],/* 6: Signal */
  &kaiguangai1108_B.DataTypeConversion3_o[0],/* 7: Signal */
  &kaiguangai1108_B.memory[0],         /* 8: Signal */
  &kaiguangai1108_B.memory1[0],        /* 9: Signal */
  &kaiguangai1108_B.MultiportSwitch[0],/* 10: Signal */
  &kaiguangai1108_B.MultiportSwitch1[0],/* 11: Signal */
  &kaiguangai1108_B.MultiportSwitch2_o[0],/* 12: Signal */
  &kaiguangai1108_B.Switch3_g[0],      /* 13: Signal */
  &kaiguangai1108_B.Constant,          /* 14: Signal */
  &kaiguangai1108_B.Constant1,         /* 15: Signal */
  &kaiguangai1108_B.DataTypeConversion1[0],/* 16: Signal */
  &kaiguangai1108_B.DataTypeConversion2[0],/* 17: Signal */
  &kaiguangai1108_B.DataTypeConversion3[0],/* 18: Signal */
  &kaiguangai1108_B.DataTypeConversion4[0],/* 19: Signal */
  &kaiguangai1108_B.DataTypeConversion5[0],/* 20: Signal */
  &kaiguangai1108_B.DataTypeConversion6[0],/* 21: Signal */
  &kaiguangai1108_B.PCI1_o1[0],        /* 22: Signal */
  &kaiguangai1108_B.PCI1_o2[0],        /* 23: Signal */
  &kaiguangai1108_B.PCI2_o1[0],        /* 24: Signal */
  &kaiguangai1108_B.PCI2_o2[0],        /* 25: Signal */
  &kaiguangai1108_B.PCI3_o1[0],        /* 26: Signal */
  &kaiguangai1108_B.PCI3_o2[0],        /* 27: Signal */
  &kaiguangai1108_B.kaigaihuanchongyichang,/* 28: Signal */
  &kaiguangai1108_B.guangaihuanchongyichang,/* 29: Signal */
  &kaiguangai1108_B.DataTypeConversion1_i,/* 30: Signal */
  &kaiguangai1108_B.DataTypeConversion2_a,/* 31: Signal */
  &kaiguangai1108_B.DataTypeConversion4_d[0],/* 32: Signal */
  &kaiguangai1108_B.DataTypeConversion6_n[0],/* 33: Signal */
  &kaiguangai1108_B.LogicalOperator,   /* 34: Signal */
  &kaiguangai1108_B.LogicalOperator1_h,/* 35: Signal */
  &kaiguangai1108_B.LogicalOperator2_e,/* 36: Signal */
  &kaiguangai1108_B.LogicalOperator3_e,/* 37: Signal */
  &kaiguangai1108_B.LogicalOperator4_i,/* 38: Signal */
  &kaiguangai1108_B.LogicalOperator5_av,/* 39: Signal */
  &kaiguangai1108_B.MultiportSwitch_k[0],/* 40: Signal */
  &kaiguangai1108_B.MultiportSwitch1_i[0],/* 41: Signal */
  &kaiguangai1108_B.MultiportSwitch2[0],/* 42: Signal */
  &kaiguangai1108_B.MultiportSwitch3[0],/* 43: Signal */
  &kaiguangai1108_B.Product_g[0],      /* 44: Signal */
  &kaiguangai1108_B.Product1_k[0],     /* 45: Signal */
  &kaiguangai1108_B.Product2_m[0],     /* 46: Signal */
  &kaiguangai1108_B.Product3_p[0],     /* 47: Signal */
  &kaiguangai1108_B.Product4_l[0],     /* 48: Signal */
  &kaiguangai1108_B.Product5_f[0],     /* 49: Signal */
  &kaiguangai1108_B.Product6_p[0],     /* 50: Signal */
  &kaiguangai1108_B.Product7_l[0],     /* 51: Signal */
  &kaiguangai1108_B.Product[0],        /* 52: Signal */
  &kaiguangai1108_B.Product1[0],       /* 53: Signal */
  &kaiguangai1108_B.Product2[0],       /* 54: Signal */
  &kaiguangai1108_B.Product3[0],       /* 55: Signal */
  &kaiguangai1108_B.Product4[0],       /* 56: Signal */
  &kaiguangai1108_B.Product5[0],       /* 57: Signal */
  &kaiguangai1108_B.Product6[0],       /* 58: Signal */
  &kaiguangai1108_B.Product7[0],       /* 59: Signal */
  &kaiguangai1108_B.sf_jinjichuli.skhx,/* 60: Signal */
  &kaiguangai1108_B.sf_jinjichuli.kghx,/* 61: Signal */
  &kaiguangai1108_B.sf_jinjichuli.yjhx,/* 62: Signal */
  &kaiguangai1108_B.sf_jinjichuli.gghx,/* 63: Signal */
  &kaiguangai1108_B.sf_jinjichuli1.skhx,/* 64: Signal */
  &kaiguangai1108_B.sf_jinjichuli1.kghx,/* 65: Signal */
  &kaiguangai1108_B.sf_jinjichuli1.yjhx,/* 66: Signal */
  &kaiguangai1108_B.sf_jinjichuli1.gghx,/* 67: Signal */
  &kaiguangai1108_B.sf_jinjichuli2.skhx,/* 68: Signal */
  &kaiguangai1108_B.sf_jinjichuli2.kghx,/* 69: Signal */
  &kaiguangai1108_B.sf_jinjichuli2.yjhx,/* 70: Signal */
  &kaiguangai1108_B.sf_jinjichuli2.gghx,/* 71: Signal */
  &kaiguangai1108_B.sf_jinjichuli3.skhx,/* 72: Signal */
  &kaiguangai1108_B.sf_jinjichuli3.kghx,/* 73: Signal */
  &kaiguangai1108_B.sf_jinjichuli3.yjhx,/* 74: Signal */
  &kaiguangai1108_B.sf_jinjichuli3.gghx,/* 75: Signal */
  &kaiguangai1108_B.sf_jinjichuli4.skhx,/* 76: Signal */
  &kaiguangai1108_B.sf_jinjichuli4.kghx,/* 77: Signal */
  &kaiguangai1108_B.sf_jinjichuli4.yjhx,/* 78: Signal */
  &kaiguangai1108_B.sf_jinjichuli4.gghx,/* 79: Signal */
  &kaiguangai1108_B.sf_jinjichuli5.skhx,/* 80: Signal */
  &kaiguangai1108_B.sf_jinjichuli5.kghx,/* 81: Signal */
  &kaiguangai1108_B.sf_jinjichuli5.yjhx,/* 82: Signal */
  &kaiguangai1108_B.sf_jinjichuli5.gghx,/* 83: Signal */
  &kaiguangai1108_B.sf_jinjichuli6.skhx,/* 84: Signal */
  &kaiguangai1108_B.sf_jinjichuli6.kghx,/* 85: Signal */
  &kaiguangai1108_B.sf_jinjichuli6.yjhx,/* 86: Signal */
  &kaiguangai1108_B.sf_jinjichuli6.gghx,/* 87: Signal */
  &kaiguangai1108_B.sf_jinjichuli7.skhx,/* 88: Signal */
  &kaiguangai1108_B.sf_jinjichuli7.kghx,/* 89: Signal */
  &kaiguangai1108_B.sf_jinjichuli7.yjhx,/* 90: Signal */
  &kaiguangai1108_B.sf_jinjichuli7.gghx,/* 91: Signal */
  &kaiguangai1108_B.LogicalOperator_e, /* 92: Signal */
  &kaiguangai1108_B.LogicalOperator1_kr,/* 93: Signal */
  &kaiguangai1108_B.LogicalOperator4_d,/* 94: Signal */
  &kaiguangai1108_B.LogicalOperator5_c,/* 95: Signal */
  &kaiguangai1108_B.u_g,               /* 96: Signal */
  &kaiguangai1108_B.u_m0,              /* 97: Signal */
  &kaiguangai1108_B.u_m,               /* 98: Signal */
  &kaiguangai1108_B.u_m5,              /* 99: Signal */
  &kaiguangai1108_B.u_gd,              /* 100: Signal */
  &kaiguangai1108_B.u_gh,              /* 101: Signal */
  &kaiguangai1108_B.sf_Chart_o.skhx,   /* 102: Signal */
  &kaiguangai1108_B.sf_Chart_o.kghx,   /* 103: Signal */
  &kaiguangai1108_B.sf_Chart_o.yjhx,   /* 104: Signal */
  &kaiguangai1108_B.sf_Chart_o.gghx,   /* 105: Signal */
  &kaiguangai1108_B.sf_Chart_o.kgzhiling1,/* 106: Signal */
  &kaiguangai1108_B.sf_Chart_o.kgzhiling2,/* 107: Signal */
  &kaiguangai1108_B.sf_Chart_o.ggzhiling1,/* 108: Signal */
  &kaiguangai1108_B.sf_Chart_o.ggzhiling2,/* 109: Signal */
  &kaiguangai1108_B.sf_Chart_o.skt,    /* 110: Signal */
  &kaiguangai1108_B.sf_Chart_o.kgt,    /* 111: Signal */
  &kaiguangai1108_B.sf_Chart_o.sdt,    /* 112: Signal */
  &kaiguangai1108_B.sf_Chart_o.jst,    /* 113: Signal */
  &kaiguangai1108_B.sf_Chart_o.ggt,    /* 114: Signal */
  &kaiguangai1108_B.sf_Chart_o.yjt,    /* 115: Signal */
  &kaiguangai1108_B.sf_Chart_o.skyichang,/* 116: Signal */
  &kaiguangai1108_B.sf_Chart_o.kgyichang,/* 117: Signal */
  &kaiguangai1108_B.sf_Chart_o.sdyichang,/* 118: Signal */
  &kaiguangai1108_B.sf_Chart_o.jsyichang,/* 119: Signal */
  &kaiguangai1108_B.sf_Chart_o.ggyichang,/* 120: Signal */
  &kaiguangai1108_B.sf_Chart_o.yjyichang,/* 121: Signal */
  &kaiguangai1108_B.sf_Chart1_b.skhx,  /* 122: Signal */
  &kaiguangai1108_B.sf_Chart1_b.kghx,  /* 123: Signal */
  &kaiguangai1108_B.sf_Chart1_b.yjhx,  /* 124: Signal */
  &kaiguangai1108_B.sf_Chart1_b.gghx,  /* 125: Signal */
  &kaiguangai1108_B.sf_Chart1_b.kgzhiling1,/* 126: Signal */
  &kaiguangai1108_B.sf_Chart1_b.kgzhiling2,/* 127: Signal */
  &kaiguangai1108_B.sf_Chart1_b.ggzhiling1,/* 128: Signal */
  &kaiguangai1108_B.sf_Chart1_b.ggzhiling2,/* 129: Signal */
  &kaiguangai1108_B.sf_Chart1_b.skt,   /* 130: Signal */
  &kaiguangai1108_B.sf_Chart1_b.kgt,   /* 131: Signal */
  &kaiguangai1108_B.sf_Chart1_b.sdt,   /* 132: Signal */
  &kaiguangai1108_B.sf_Chart1_b.jst,   /* 133: Signal */
  &kaiguangai1108_B.sf_Chart1_b.ggt,   /* 134: Signal */
  &kaiguangai1108_B.sf_Chart1_b.yjt,   /* 135: Signal */
  &kaiguangai1108_B.sf_Chart1_b.skyichang,/* 136: Signal */
  &kaiguangai1108_B.sf_Chart1_b.kgyichang,/* 137: Signal */
  &kaiguangai1108_B.sf_Chart1_b.sdyichang,/* 138: Signal */
  &kaiguangai1108_B.sf_Chart1_b.jsyichang,/* 139: Signal */
  &kaiguangai1108_B.sf_Chart1_b.ggyichang,/* 140: Signal */
  &kaiguangai1108_B.sf_Chart1_b.yjyichang,/* 141: Signal */
  &kaiguangai1108_B.sf_Chart2.skhx,    /* 142: Signal */
  &kaiguangai1108_B.sf_Chart2.kghx,    /* 143: Signal */
  &kaiguangai1108_B.sf_Chart2.yjhx,    /* 144: Signal */
  &kaiguangai1108_B.sf_Chart2.gghx,    /* 145: Signal */
  &kaiguangai1108_B.sf_Chart2.kgzhiling1,/* 146: Signal */
  &kaiguangai1108_B.sf_Chart2.kgzhiling2,/* 147: Signal */
  &kaiguangai1108_B.sf_Chart2.ggzhiling1,/* 148: Signal */
  &kaiguangai1108_B.sf_Chart2.ggzhiling2,/* 149: Signal */
  &kaiguangai1108_B.sf_Chart2.skt,     /* 150: Signal */
  &kaiguangai1108_B.sf_Chart2.kgt,     /* 151: Signal */
  &kaiguangai1108_B.sf_Chart2.sdt,     /* 152: Signal */
  &kaiguangai1108_B.sf_Chart2.jst,     /* 153: Signal */
  &kaiguangai1108_B.sf_Chart2.ggt,     /* 154: Signal */
  &kaiguangai1108_B.sf_Chart2.yjt,     /* 155: Signal */
  &kaiguangai1108_B.sf_Chart2.skyichang,/* 156: Signal */
  &kaiguangai1108_B.sf_Chart2.kgyichang,/* 157: Signal */
  &kaiguangai1108_B.sf_Chart2.sdyichang,/* 158: Signal */
  &kaiguangai1108_B.sf_Chart2.jsyichang,/* 159: Signal */
  &kaiguangai1108_B.sf_Chart2.ggyichang,/* 160: Signal */
  &kaiguangai1108_B.sf_Chart2.yjyichang,/* 161: Signal */
  &kaiguangai1108_B.sf_Chart3.skhx,    /* 162: Signal */
  &kaiguangai1108_B.sf_Chart3.kghx,    /* 163: Signal */
  &kaiguangai1108_B.sf_Chart3.yjhx,    /* 164: Signal */
  &kaiguangai1108_B.sf_Chart3.gghx,    /* 165: Signal */
  &kaiguangai1108_B.sf_Chart3.kgzhiling1,/* 166: Signal */
  &kaiguangai1108_B.sf_Chart3.kgzhiling2,/* 167: Signal */
  &kaiguangai1108_B.sf_Chart3.ggzhiling1,/* 168: Signal */
  &kaiguangai1108_B.sf_Chart3.ggzhiling2,/* 169: Signal */
  &kaiguangai1108_B.sf_Chart3.skt,     /* 170: Signal */
  &kaiguangai1108_B.sf_Chart3.kgt,     /* 171: Signal */
  &kaiguangai1108_B.sf_Chart3.sdt,     /* 172: Signal */
  &kaiguangai1108_B.sf_Chart3.jst,     /* 173: Signal */
  &kaiguangai1108_B.sf_Chart3.ggt,     /* 174: Signal */
  &kaiguangai1108_B.sf_Chart3.yjt,     /* 175: Signal */
  &kaiguangai1108_B.sf_Chart3.skyichang,/* 176: Signal */
  &kaiguangai1108_B.sf_Chart3.kgyichang,/* 177: Signal */
  &kaiguangai1108_B.sf_Chart3.sdyichang,/* 178: Signal */
  &kaiguangai1108_B.sf_Chart3.jsyichang,/* 179: Signal */
  &kaiguangai1108_B.sf_Chart3.ggyichang,/* 180: Signal */
  &kaiguangai1108_B.sf_Chart3.yjyichang,/* 181: Signal */
  &kaiguangai1108_B.sf_Chart4.skhx,    /* 182: Signal */
  &kaiguangai1108_B.sf_Chart4.kghx,    /* 183: Signal */
  &kaiguangai1108_B.sf_Chart4.yjhx,    /* 184: Signal */
  &kaiguangai1108_B.sf_Chart4.gghx,    /* 185: Signal */
  &kaiguangai1108_B.sf_Chart4.kgzhiling1,/* 186: Signal */
  &kaiguangai1108_B.sf_Chart4.kgzhiling2,/* 187: Signal */
  &kaiguangai1108_B.sf_Chart4.ggzhiling1,/* 188: Signal */
  &kaiguangai1108_B.sf_Chart4.ggzhiling2,/* 189: Signal */
  &kaiguangai1108_B.sf_Chart4.skt,     /* 190: Signal */
  &kaiguangai1108_B.sf_Chart4.kgt,     /* 191: Signal */
  &kaiguangai1108_B.sf_Chart4.sdt,     /* 192: Signal */
  &kaiguangai1108_B.sf_Chart4.jst,     /* 193: Signal */
  &kaiguangai1108_B.sf_Chart4.ggt,     /* 194: Signal */
  &kaiguangai1108_B.sf_Chart4.yjt,     /* 195: Signal */
  &kaiguangai1108_B.sf_Chart4.skyichang,/* 196: Signal */
  &kaiguangai1108_B.sf_Chart4.kgyichang,/* 197: Signal */
  &kaiguangai1108_B.sf_Chart4.sdyichang,/* 198: Signal */
  &kaiguangai1108_B.sf_Chart4.jsyichang,/* 199: Signal */
  &kaiguangai1108_B.sf_Chart4.ggyichang,/* 200: Signal */
  &kaiguangai1108_B.sf_Chart4.yjyichang,/* 201: Signal */
  &kaiguangai1108_B.sf_Chart5.skhx,    /* 202: Signal */
  &kaiguangai1108_B.sf_Chart5.kghx,    /* 203: Signal */
  &kaiguangai1108_B.sf_Chart5.yjhx,    /* 204: Signal */
  &kaiguangai1108_B.sf_Chart5.gghx,    /* 205: Signal */
  &kaiguangai1108_B.sf_Chart5.kgzhiling1,/* 206: Signal */
  &kaiguangai1108_B.sf_Chart5.kgzhiling2,/* 207: Signal */
  &kaiguangai1108_B.sf_Chart5.ggzhiling1,/* 208: Signal */
  &kaiguangai1108_B.sf_Chart5.ggzhiling2,/* 209: Signal */
  &kaiguangai1108_B.sf_Chart5.skt,     /* 210: Signal */
  &kaiguangai1108_B.sf_Chart5.kgt,     /* 211: Signal */
  &kaiguangai1108_B.sf_Chart5.sdt,     /* 212: Signal */
  &kaiguangai1108_B.sf_Chart5.jst,     /* 213: Signal */
  &kaiguangai1108_B.sf_Chart5.ggt,     /* 214: Signal */
  &kaiguangai1108_B.sf_Chart5.yjt,     /* 215: Signal */
  &kaiguangai1108_B.sf_Chart5.skyichang,/* 216: Signal */
  &kaiguangai1108_B.sf_Chart5.kgyichang,/* 217: Signal */
  &kaiguangai1108_B.sf_Chart5.sdyichang,/* 218: Signal */
  &kaiguangai1108_B.sf_Chart5.jsyichang,/* 219: Signal */
  &kaiguangai1108_B.sf_Chart5.ggyichang,/* 220: Signal */
  &kaiguangai1108_B.sf_Chart5.yjyichang,/* 221: Signal */
  &kaiguangai1108_B.sf_Chart6.skhx,    /* 222: Signal */
  &kaiguangai1108_B.sf_Chart6.kghx,    /* 223: Signal */
  &kaiguangai1108_B.sf_Chart6.yjhx,    /* 224: Signal */
  &kaiguangai1108_B.sf_Chart6.gghx,    /* 225: Signal */
  &kaiguangai1108_B.sf_Chart6.kgzhiling1,/* 226: Signal */
  &kaiguangai1108_B.sf_Chart6.kgzhiling2,/* 227: Signal */
  &kaiguangai1108_B.sf_Chart6.ggzhiling1,/* 228: Signal */
  &kaiguangai1108_B.sf_Chart6.ggzhiling2,/* 229: Signal */
  &kaiguangai1108_B.sf_Chart6.skt,     /* 230: Signal */
  &kaiguangai1108_B.sf_Chart6.kgt,     /* 231: Signal */
  &kaiguangai1108_B.sf_Chart6.sdt,     /* 232: Signal */
  &kaiguangai1108_B.sf_Chart6.jst,     /* 233: Signal */
  &kaiguangai1108_B.sf_Chart6.ggt,     /* 234: Signal */
  &kaiguangai1108_B.sf_Chart6.yjt,     /* 235: Signal */
  &kaiguangai1108_B.sf_Chart6.skyichang,/* 236: Signal */
  &kaiguangai1108_B.sf_Chart6.kgyichang,/* 237: Signal */
  &kaiguangai1108_B.sf_Chart6.sdyichang,/* 238: Signal */
  &kaiguangai1108_B.sf_Chart6.jsyichang,/* 239: Signal */
  &kaiguangai1108_B.sf_Chart6.ggyichang,/* 240: Signal */
  &kaiguangai1108_B.sf_Chart6.yjyichang,/* 241: Signal */
  &kaiguangai1108_B.sf_Chart7.skhx,    /* 242: Signal */
  &kaiguangai1108_B.sf_Chart7.kghx,    /* 243: Signal */
  &kaiguangai1108_B.sf_Chart7.yjhx,    /* 244: Signal */
  &kaiguangai1108_B.sf_Chart7.gghx,    /* 245: Signal */
  &kaiguangai1108_B.sf_Chart7.kgzhiling1,/* 246: Signal */
  &kaiguangai1108_B.sf_Chart7.kgzhiling2,/* 247: Signal */
  &kaiguangai1108_B.sf_Chart7.ggzhiling1,/* 248: Signal */
  &kaiguangai1108_B.sf_Chart7.ggzhiling2,/* 249: Signal */
  &kaiguangai1108_B.sf_Chart7.skt,     /* 250: Signal */
  &kaiguangai1108_B.sf_Chart7.kgt,     /* 251: Signal */
  &kaiguangai1108_B.sf_Chart7.sdt,     /* 252: Signal */
  &kaiguangai1108_B.sf_Chart7.jst,     /* 253: Signal */
  &kaiguangai1108_B.sf_Chart7.ggt,     /* 254: Signal */
  &kaiguangai1108_B.sf_Chart7.yjt,     /* 255: Signal */
  &kaiguangai1108_B.sf_Chart7.skyichang,/* 256: Signal */
  &kaiguangai1108_B.sf_Chart7.kgyichang,/* 257: Signal */
  &kaiguangai1108_B.sf_Chart7.sdyichang,/* 258: Signal */
  &kaiguangai1108_B.sf_Chart7.jsyichang,/* 259: Signal */
  &kaiguangai1108_B.sf_Chart7.ggyichang,/* 260: Signal */
  &kaiguangai1108_B.sf_Chart7.yjyichang,/* 261: Signal */
  &kaiguangai1108_B.DataTypeConversion1_a[0],/* 262: Signal */
  &kaiguangai1108_B.DataTypeConversion10[0],/* 263: Signal */
  &kaiguangai1108_B.DataTypeConversion2_p[0],/* 264: Signal */
  &kaiguangai1108_B.DataTypeConversion5_m[0],/* 265: Signal */
  &kaiguangai1108_B.DataTypeConversion6_nb[0],/* 266: Signal */
  &kaiguangai1108_B.DataTypeConversion7_d[0],/* 267: Signal */
  &kaiguangai1108_B.DataTypeConversion8_a[0],/* 268: Signal */
  &kaiguangai1108_B.DataTypeConversion9[0],/* 269: Signal */
  &kaiguangai1108_B.LogicalOperator_p, /* 270: Signal */
  &kaiguangai1108_B.LogicalOperator1_f,/* 271: Signal */
  &kaiguangai1108_B.LogicalOperator2_f,/* 272: Signal */
  &kaiguangai1108_B.LogicalOperator3_d,/* 273: Signal */
  &kaiguangai1108_B.LogicalOperator4_lm,/* 274: Signal */
  &kaiguangai1108_B.LogicalOperator5_ml,/* 275: Signal */
  &kaiguangai1108_B.LogicalOperator6_nu,/* 276: Signal */
  &kaiguangai1108_B.LogicalOperator7_g,/* 277: Signal */
  &kaiguangai1108_B.LogicalOperator8_e,/* 278: Signal */
  &kaiguangai1108_B.LogicalOperator9_d,/* 279: Signal */
  &kaiguangai1108_B.skhx,              /* 280: Signal */
  &kaiguangai1108_B.kghx,              /* 281: Signal */
  &kaiguangai1108_B.kgzhiling1,        /* 282: Signal */
  &kaiguangai1108_B.kgzhiling2,        /* 283: Signal */
  &kaiguangai1108_B.yjhx,              /* 284: Signal */
  &kaiguangai1108_B.gghx,              /* 285: Signal */
  &kaiguangai1108_B.ggzhiling1,        /* 286: Signal */
  &kaiguangai1108_B.ggzhiling2,        /* 287: Signal */
  &kaiguangai1108_B.skt,               /* 288: Signal */
  &kaiguangai1108_B.kgt,               /* 289: Signal */
  &kaiguangai1108_B.sdt,               /* 290: Signal */
  &kaiguangai1108_B.jst,               /* 291: Signal */
  &kaiguangai1108_B.ggt,               /* 292: Signal */
  &kaiguangai1108_B.yjt,               /* 293: Signal */
  &kaiguangai1108_B.yikaicishu,        /* 294: Signal */
  &kaiguangai1108_B.skyichang,         /* 295: Signal */
  &kaiguangai1108_B.kgyichang,         /* 296: Signal */
  &kaiguangai1108_B.sdyichang,         /* 297: Signal */
  &kaiguangai1108_B.jsyichang,         /* 298: Signal */
  &kaiguangai1108_B.ggyichang,         /* 299: Signal */
  &kaiguangai1108_B.yjyichang,         /* 300: Signal */
  &kaiguangai1108_B.sf_11.skhx,        /* 301: Signal */
  &kaiguangai1108_B.sf_11.kghx,        /* 302: Signal */
  &kaiguangai1108_B.sf_11.kgzhiling1,  /* 303: Signal */
  &kaiguangai1108_B.sf_11.kgzhiling2,  /* 304: Signal */
  &kaiguangai1108_B.sf_11.yjhx,        /* 305: Signal */
  &kaiguangai1108_B.sf_11.gghx,        /* 306: Signal */
  &kaiguangai1108_B.sf_11.ggzhiling1,  /* 307: Signal */
  &kaiguangai1108_B.sf_11.ggzhiling2,  /* 308: Signal */
  &kaiguangai1108_B.sf_11.skt,         /* 309: Signal */
  &kaiguangai1108_B.sf_11.kgt,         /* 310: Signal */
  &kaiguangai1108_B.sf_11.sdt,         /* 311: Signal */
  &kaiguangai1108_B.sf_11.jst,         /* 312: Signal */
  &kaiguangai1108_B.sf_11.ggt,         /* 313: Signal */
  &kaiguangai1108_B.sf_11.yjt,         /* 314: Signal */
  &kaiguangai1108_B.sf_11.yikaicishu,  /* 315: Signal */
  &kaiguangai1108_B.sf_11.skyichang,   /* 316: Signal */
  &kaiguangai1108_B.sf_11.kgyichang,   /* 317: Signal */
  &kaiguangai1108_B.sf_11.sdyichang,   /* 318: Signal */
  &kaiguangai1108_B.sf_11.jsyichang,   /* 319: Signal */
  &kaiguangai1108_B.sf_11.ggyichang,   /* 320: Signal */
  &kaiguangai1108_B.sf_11.yjyichang,   /* 321: Signal */
  &kaiguangai1108_B.sf_12.skhx,        /* 322: Signal */
  &kaiguangai1108_B.sf_12.kghx,        /* 323: Signal */
  &kaiguangai1108_B.sf_12.kgzhiling1,  /* 324: Signal */
  &kaiguangai1108_B.sf_12.kgzhiling2,  /* 325: Signal */
  &kaiguangai1108_B.sf_12.yjhx,        /* 326: Signal */
  &kaiguangai1108_B.sf_12.gghx,        /* 327: Signal */
  &kaiguangai1108_B.sf_12.ggzhiling1,  /* 328: Signal */
  &kaiguangai1108_B.sf_12.ggzhiling2,  /* 329: Signal */
  &kaiguangai1108_B.sf_12.skt,         /* 330: Signal */
  &kaiguangai1108_B.sf_12.kgt,         /* 331: Signal */
  &kaiguangai1108_B.sf_12.sdt,         /* 332: Signal */
  &kaiguangai1108_B.sf_12.jst,         /* 333: Signal */
  &kaiguangai1108_B.sf_12.ggt,         /* 334: Signal */
  &kaiguangai1108_B.sf_12.yjt,         /* 335: Signal */
  &kaiguangai1108_B.sf_12.yikaicishu,  /* 336: Signal */
  &kaiguangai1108_B.sf_12.skyichang,   /* 337: Signal */
  &kaiguangai1108_B.sf_12.kgyichang,   /* 338: Signal */
  &kaiguangai1108_B.sf_12.sdyichang,   /* 339: Signal */
  &kaiguangai1108_B.sf_12.jsyichang,   /* 340: Signal */
  &kaiguangai1108_B.sf_12.ggyichang,   /* 341: Signal */
  &kaiguangai1108_B.sf_12.yjyichang,   /* 342: Signal */
  &kaiguangai1108_B.sf_13.skhx,        /* 343: Signal */
  &kaiguangai1108_B.sf_13.kghx,        /* 344: Signal */
  &kaiguangai1108_B.sf_13.kgzhiling1,  /* 345: Signal */
  &kaiguangai1108_B.sf_13.kgzhiling2,  /* 346: Signal */
  &kaiguangai1108_B.sf_13.yjhx,        /* 347: Signal */
  &kaiguangai1108_B.sf_13.gghx,        /* 348: Signal */
  &kaiguangai1108_B.sf_13.ggzhiling1,  /* 349: Signal */
  &kaiguangai1108_B.sf_13.ggzhiling2,  /* 350: Signal */
  &kaiguangai1108_B.sf_13.skt,         /* 351: Signal */
  &kaiguangai1108_B.sf_13.kgt,         /* 352: Signal */
  &kaiguangai1108_B.sf_13.sdt,         /* 353: Signal */
  &kaiguangai1108_B.sf_13.jst,         /* 354: Signal */
  &kaiguangai1108_B.sf_13.ggt,         /* 355: Signal */
  &kaiguangai1108_B.sf_13.yjt,         /* 356: Signal */
  &kaiguangai1108_B.sf_13.yikaicishu,  /* 357: Signal */
  &kaiguangai1108_B.sf_13.skyichang,   /* 358: Signal */
  &kaiguangai1108_B.sf_13.kgyichang,   /* 359: Signal */
  &kaiguangai1108_B.sf_13.sdyichang,   /* 360: Signal */
  &kaiguangai1108_B.sf_13.jsyichang,   /* 361: Signal */
  &kaiguangai1108_B.sf_13.ggyichang,   /* 362: Signal */
  &kaiguangai1108_B.sf_13.yjyichang,   /* 363: Signal */
  &kaiguangai1108_B.sf_14.skhx,        /* 364: Signal */
  &kaiguangai1108_B.sf_14.kghx,        /* 365: Signal */
  &kaiguangai1108_B.sf_14.kgzhiling1,  /* 366: Signal */
  &kaiguangai1108_B.sf_14.kgzhiling2,  /* 367: Signal */
  &kaiguangai1108_B.sf_14.yjhx,        /* 368: Signal */
  &kaiguangai1108_B.sf_14.gghx,        /* 369: Signal */
  &kaiguangai1108_B.sf_14.ggzhiling1,  /* 370: Signal */
  &kaiguangai1108_B.sf_14.ggzhiling2,  /* 371: Signal */
  &kaiguangai1108_B.sf_14.skt,         /* 372: Signal */
  &kaiguangai1108_B.sf_14.kgt,         /* 373: Signal */
  &kaiguangai1108_B.sf_14.sdt,         /* 374: Signal */
  &kaiguangai1108_B.sf_14.jst,         /* 375: Signal */
  &kaiguangai1108_B.sf_14.ggt,         /* 376: Signal */
  &kaiguangai1108_B.sf_14.yjt,         /* 377: Signal */
  &kaiguangai1108_B.sf_14.yikaicishu,  /* 378: Signal */
  &kaiguangai1108_B.sf_14.skyichang,   /* 379: Signal */
  &kaiguangai1108_B.sf_14.kgyichang,   /* 380: Signal */
  &kaiguangai1108_B.sf_14.sdyichang,   /* 381: Signal */
  &kaiguangai1108_B.sf_14.jsyichang,   /* 382: Signal */
  &kaiguangai1108_B.sf_14.ggyichang,   /* 383: Signal */
  &kaiguangai1108_B.sf_14.yjyichang,   /* 384: Signal */
  &kaiguangai1108_B.sf_15.skhx,        /* 385: Signal */
  &kaiguangai1108_B.sf_15.kghx,        /* 386: Signal */
  &kaiguangai1108_B.sf_15.kgzhiling1,  /* 387: Signal */
  &kaiguangai1108_B.sf_15.kgzhiling2,  /* 388: Signal */
  &kaiguangai1108_B.sf_15.yjhx,        /* 389: Signal */
  &kaiguangai1108_B.sf_15.gghx,        /* 390: Signal */
  &kaiguangai1108_B.sf_15.ggzhiling1,  /* 391: Signal */
  &kaiguangai1108_B.sf_15.ggzhiling2,  /* 392: Signal */
  &kaiguangai1108_B.sf_15.skt,         /* 393: Signal */
  &kaiguangai1108_B.sf_15.kgt,         /* 394: Signal */
  &kaiguangai1108_B.sf_15.sdt,         /* 395: Signal */
  &kaiguangai1108_B.sf_15.jst,         /* 396: Signal */
  &kaiguangai1108_B.sf_15.ggt,         /* 397: Signal */
  &kaiguangai1108_B.sf_15.yjt,         /* 398: Signal */
  &kaiguangai1108_B.sf_15.yikaicishu,  /* 399: Signal */
  &kaiguangai1108_B.sf_15.skyichang,   /* 400: Signal */
  &kaiguangai1108_B.sf_15.kgyichang,   /* 401: Signal */
  &kaiguangai1108_B.sf_15.sdyichang,   /* 402: Signal */
  &kaiguangai1108_B.sf_15.jsyichang,   /* 403: Signal */
  &kaiguangai1108_B.sf_15.ggyichang,   /* 404: Signal */
  &kaiguangai1108_B.sf_15.yjyichang,   /* 405: Signal */
  &kaiguangai1108_B.sf_16.skhx,        /* 406: Signal */
  &kaiguangai1108_B.sf_16.kghx,        /* 407: Signal */
  &kaiguangai1108_B.sf_16.kgzhiling1,  /* 408: Signal */
  &kaiguangai1108_B.sf_16.kgzhiling2,  /* 409: Signal */
  &kaiguangai1108_B.sf_16.yjhx,        /* 410: Signal */
  &kaiguangai1108_B.sf_16.gghx,        /* 411: Signal */
  &kaiguangai1108_B.sf_16.ggzhiling1,  /* 412: Signal */
  &kaiguangai1108_B.sf_16.ggzhiling2,  /* 413: Signal */
  &kaiguangai1108_B.sf_16.skt,         /* 414: Signal */
  &kaiguangai1108_B.sf_16.kgt,         /* 415: Signal */
  &kaiguangai1108_B.sf_16.sdt,         /* 416: Signal */
  &kaiguangai1108_B.sf_16.jst,         /* 417: Signal */
  &kaiguangai1108_B.sf_16.ggt,         /* 418: Signal */
  &kaiguangai1108_B.sf_16.yjt,         /* 419: Signal */
  &kaiguangai1108_B.sf_16.yikaicishu,  /* 420: Signal */
  &kaiguangai1108_B.sf_16.skyichang,   /* 421: Signal */
  &kaiguangai1108_B.sf_16.kgyichang,   /* 422: Signal */
  &kaiguangai1108_B.sf_16.sdyichang,   /* 423: Signal */
  &kaiguangai1108_B.sf_16.jsyichang,   /* 424: Signal */
  &kaiguangai1108_B.sf_16.ggyichang,   /* 425: Signal */
  &kaiguangai1108_B.sf_16.yjyichang,   /* 426: Signal */
  &kaiguangai1108_B.sf_17.skhx,        /* 427: Signal */
  &kaiguangai1108_B.sf_17.kghx,        /* 428: Signal */
  &kaiguangai1108_B.sf_17.kgzhiling1,  /* 429: Signal */
  &kaiguangai1108_B.sf_17.kgzhiling2,  /* 430: Signal */
  &kaiguangai1108_B.sf_17.yjhx,        /* 431: Signal */
  &kaiguangai1108_B.sf_17.gghx,        /* 432: Signal */
  &kaiguangai1108_B.sf_17.ggzhiling1,  /* 433: Signal */
  &kaiguangai1108_B.sf_17.ggzhiling2,  /* 434: Signal */
  &kaiguangai1108_B.sf_17.skt,         /* 435: Signal */
  &kaiguangai1108_B.sf_17.kgt,         /* 436: Signal */
  &kaiguangai1108_B.sf_17.sdt,         /* 437: Signal */
  &kaiguangai1108_B.sf_17.jst,         /* 438: Signal */
  &kaiguangai1108_B.sf_17.ggt,         /* 439: Signal */
  &kaiguangai1108_B.sf_17.yjt,         /* 440: Signal */
  &kaiguangai1108_B.sf_17.yikaicishu,  /* 441: Signal */
  &kaiguangai1108_B.sf_17.skyichang,   /* 442: Signal */
  &kaiguangai1108_B.sf_17.kgyichang,   /* 443: Signal */
  &kaiguangai1108_B.sf_17.sdyichang,   /* 444: Signal */
  &kaiguangai1108_B.sf_17.jsyichang,   /* 445: Signal */
  &kaiguangai1108_B.sf_17.ggyichang,   /* 446: Signal */
  &kaiguangai1108_B.sf_17.yjyichang,   /* 447: Signal */
  &kaiguangai1108_B.DataTypeConversion1_b[0],/* 448: Signal */
  &kaiguangai1108_B.DataTypeConversion2_j[0],/* 449: Signal */
  &kaiguangai1108_B.DataTypeConversion3_l[0],/* 450: Signal */
  &kaiguangai1108_B.DataTypeConversion4_m[0],/* 451: Signal */
  &kaiguangai1108_B.DataTypeConversion5_n[0],/* 452: Signal */
  &kaiguangai1108_B.DataTypeConversion6_d[0],/* 453: Signal */
  &kaiguangai1108_B.DataTypeConversion7[0],/* 454: Signal */
  &kaiguangai1108_B.DataTypeConversion8[0],/* 455: Signal */
  &kaiguangai1108_B.LogicalOperator_c, /* 456: Signal */
  &kaiguangai1108_B.LogicalOperator1_i,/* 457: Signal */
  &kaiguangai1108_B.LogicalOperator10, /* 458: Signal */
  &kaiguangai1108_B.LogicalOperator11, /* 459: Signal */
  &kaiguangai1108_B.LogicalOperator12, /* 460: Signal */
  &kaiguangai1108_B.LogicalOperator13, /* 461: Signal */
  &kaiguangai1108_B.LogicalOperator14, /* 462: Signal */
  &kaiguangai1108_B.LogicalOperator15, /* 463: Signal */
  &kaiguangai1108_B.LogicalOperator16, /* 464: Signal */
  &kaiguangai1108_B.LogicalOperator17, /* 465: Signal */
  &kaiguangai1108_B.LogicalOperator2_k,/* 466: Signal */
  &kaiguangai1108_B.LogicalOperator3_p,/* 467: Signal */
  &kaiguangai1108_B.LogicalOperator4_l,/* 468: Signal */
  &kaiguangai1108_B.LogicalOperator5_m,/* 469: Signal */
  &kaiguangai1108_B.LogicalOperator6_j,/* 470: Signal */
  &kaiguangai1108_B.LogicalOperator7,  /* 471: Signal */
  &kaiguangai1108_B.LogicalOperator8,  /* 472: Signal */
  &kaiguangai1108_B.LogicalOperator9,  /* 473: Signal */
  &kaiguangai1108_B.LogicalOperator1_k,/* 474: Signal */
  &kaiguangai1108_B.LogicalOperator2_j,/* 475: Signal */
  &kaiguangai1108_B.LogicalOperator3_j,/* 476: Signal */
  &kaiguangai1108_B.LogicalOperator4_n,/* 477: Signal */
  &kaiguangai1108_B.LogicalOperator5_a,/* 478: Signal */
  &kaiguangai1108_B.LogicalOperator6_n,/* 479: Signal */
  &kaiguangai1108_B.u_dd,              /* 480: Signal */
  &kaiguangai1108_B.u_gs,              /* 481: Signal */
  &kaiguangai1108_B.u_n,               /* 482: Signal */
  &kaiguangai1108_B.u_k,               /* 483: Signal */
  &kaiguangai1108_B.u_ni,              /* 484: Signal */
  &kaiguangai1108_B.u_l4,              /* 485: Signal */
  &kaiguangai1108_B.Switch1_d,         /* 486: Signal */
  &kaiguangai1108_B.Switch2_d,         /* 487: Signal */
  &kaiguangai1108_B.Switch3_p,         /* 488: Signal */
  &kaiguangai1108_B.Switch4_k,         /* 489: Signal */
  &kaiguangai1108_B.Switch5_h,         /* 490: Signal */
  &kaiguangai1108_B.Switch6_c,         /* 491: Signal */
  &kaiguangai1108_B.LogicalOperator1,  /* 492: Signal */
  &kaiguangai1108_B.LogicalOperator2,  /* 493: Signal */
  &kaiguangai1108_B.LogicalOperator3,  /* 494: Signal */
  &kaiguangai1108_B.LogicalOperator4,  /* 495: Signal */
  &kaiguangai1108_B.LogicalOperator5,  /* 496: Signal */
  &kaiguangai1108_B.LogicalOperator6,  /* 497: Signal */
  &kaiguangai1108_B.u_h,               /* 498: Signal */
  &kaiguangai1108_B.u,                 /* 499: Signal */
  &kaiguangai1108_B.u_l,               /* 500: Signal */
  &kaiguangai1108_B.u_c,               /* 501: Signal */
  &kaiguangai1108_B.u_d,               /* 502: Signal */
  &kaiguangai1108_B.u_c4,              /* 503: Signal */
  &kaiguangai1108_B.Switch1,           /* 504: Signal */
  &kaiguangai1108_B.Switch2,           /* 505: Signal */
  &kaiguangai1108_B.Switch3,           /* 506: Signal */
  &kaiguangai1108_B.Switch4,           /* 507: Signal */
  &kaiguangai1108_B.Switch5,           /* 508: Signal */
  &kaiguangai1108_B.Switch6,           /* 509: Signal */
  &kaiguangai1108_P.Switch_Value,      /* 510: Block Parameter */
  &kaiguangai1108_P.Switch1_Value,     /* 511: Block Parameter */
  &kaiguangai1108_P.Switch2_Value,     /* 512: Block Parameter */
  &kaiguangai1108_P.jieshu_Value,      /* 513: Block Parameter */
  &kaiguangai1108_P.qiehuan_Value,     /* 514: Block Parameter */
  &kaiguangai1108_P.start_Value,       /* 515: Block Parameter */
  &kaiguangai1108_P.tiaoshi_Value,     /* 516: Block Parameter */
  &kaiguangai1108_P.zidong_shedingcishu_Value,/* 517: Block Parameter */
  &kaiguangai1108_P.memory_X0,         /* 518: Block Parameter */
  &kaiguangai1108_P.memory1_X0,        /* 519: Block Parameter */
  &kaiguangai1108_P.Switch3_Threshold, /* 520: Block Parameter */
  &kaiguangai1108_P.Constant_Value,    /* 521: Block Parameter */
  &kaiguangai1108_P.Constant1_Value,   /* 522: Block Parameter */
  &kaiguangai1108_P.PCI1_P1[0],        /* 523: Block Parameter */
  &kaiguangai1108_P.PCI1_P2[0],        /* 524: Block Parameter */
  &kaiguangai1108_P.PCI2_P1[0],        /* 525: Block Parameter */
  &kaiguangai1108_P.PCI2_P2[0],        /* 526: Block Parameter */
  &kaiguangai1108_P.PCI3_P1[0],        /* 527: Block Parameter */
  &kaiguangai1108_P.PCI3_P2[0],        /* 528: Block Parameter */
  &kaiguangai1108_P.guangai_Value,     /* 529: Block Parameter */
  &kaiguangai1108_P.jiesuo_Value,      /* 530: Block Parameter */
  &kaiguangai1108_P.kaigai_Value,      /* 531: Block Parameter */
  &kaiguangai1108_P.s1_Value_d,        /* 532: Block Parameter */
  &kaiguangai1108_P.s2_Value_o,        /* 533: Block Parameter */
  &kaiguangai1108_P.s3_Value_d,        /* 534: Block Parameter */
  &kaiguangai1108_P.s4_Value_n,        /* 535: Block Parameter */
  &kaiguangai1108_P.s5_Value_j,        /* 536: Block Parameter */
  &kaiguangai1108_P.s6_Value_i,        /* 537: Block Parameter */
  &kaiguangai1108_P.s7_Value_m,        /* 538: Block Parameter */
  &kaiguangai1108_P.s8_Value_p,        /* 539: Block Parameter */
  &kaiguangai1108_P.songkai_Value,     /* 540: Block Parameter */
  &kaiguangai1108_P.suoding_Value,     /* 541: Block Parameter */
  &kaiguangai1108_P.yajin_Value,       /* 542: Block Parameter */
  &kaiguangai1108_P.guangai_Value_b,   /* 543: Block Parameter */
  &kaiguangai1108_P.jiesuo_Value_m,    /* 544: Block Parameter */
  &kaiguangai1108_P.kaigai_Value_n,    /* 545: Block Parameter */
  &kaiguangai1108_P.s1_Value,          /* 546: Block Parameter */
  &kaiguangai1108_P.s2_Value,          /* 547: Block Parameter */
  &kaiguangai1108_P.s3_Value,          /* 548: Block Parameter */
  &kaiguangai1108_P.s4_Value,          /* 549: Block Parameter */
  &kaiguangai1108_P.s5_Value,          /* 550: Block Parameter */
  &kaiguangai1108_P.s6_Value,          /* 551: Block Parameter */
  &kaiguangai1108_P.s7_Value,          /* 552: Block Parameter */
  &kaiguangai1108_P.s8_Value,          /* 553: Block Parameter */
  &kaiguangai1108_P.songkai_Value_d,   /* 554: Block Parameter */
  &kaiguangai1108_P.suoding_Value_b,   /* 555: Block Parameter */
  &kaiguangai1108_P.yajin_Value_a,     /* 556: Block Parameter */
  &kaiguangai1108_P.tiaoshi_huanxiangxinhao_Y0,/* 557: Block Parameter */
  &kaiguangai1108_P.t1_Value,          /* 558: Block Parameter */
  &kaiguangai1108_P.t11_Value,         /* 559: Block Parameter */
  &kaiguangai1108_P.t3_Value,          /* 560: Block Parameter */
  &kaiguangai1108_P.t5_Value,          /* 561: Block Parameter */
  &kaiguangai1108_P.t7_Value,          /* 562: Block Parameter */
  &kaiguangai1108_P.t9_Value,          /* 563: Block Parameter */
  &kaiguangai1108_P.jinggai1_Value,    /* 564: Block Parameter */
  &kaiguangai1108_P.jinggai2_Value,    /* 565: Block Parameter */
  &kaiguangai1108_P.jinggai3_Value,    /* 566: Block Parameter */
  &kaiguangai1108_P.jinggai4_Value,    /* 567: Block Parameter */
  &kaiguangai1108_P.jinggai5_Value,    /* 568: Block Parameter */
  &kaiguangai1108_P.jinggai6_Value,    /* 569: Block Parameter */
  &kaiguangai1108_P.jinggai7_Value,    /* 570: Block Parameter */
  &kaiguangai1108_P.jinggai8_Value,    /* 571: Block Parameter */
  &kaiguangai1108_P.songkaihuanxiang_Y0,/* 572: Block Parameter */
  &kaiguangai1108_P.kaigaihuanxiang_Y0,/* 573: Block Parameter */
  &kaiguangai1108_P.yajinhuanxiang_Y0, /* 574: Block Parameter */
  &kaiguangai1108_P.guangaihuanxiang_Y0,/* 575: Block Parameter */
  &kaiguangai1108_P.sdyichangxinhao_Y0,/* 576: Block Parameter */
  &kaiguangai1108_P.songkaihuanxiang_Y0_m,/* 577: Block Parameter */
  &kaiguangai1108_P.kaigaihuanxiang_Y0_d,/* 578: Block Parameter */
  &kaiguangai1108_P.yajinhuanxiang_Y0_k,/* 579: Block Parameter */
  &kaiguangai1108_P.guangaihuanxiang_Y0_l,/* 580: Block Parameter */
  &kaiguangai1108_P.zdyichangxinhao_Y0,/* 581: Block Parameter */
  &kaiguangai1108_P.Constant12_Value,  /* 582: Block Parameter */
  &kaiguangai1108_P.Constant13_Value,  /* 583: Block Parameter */
  &kaiguangai1108_P.Constant16_Value,  /* 584: Block Parameter */
  &kaiguangai1108_P.Constant17_Value,  /* 585: Block Parameter */
  &kaiguangai1108_P.Constant18_Value,  /* 586: Block Parameter */
  &kaiguangai1108_P.Constant19_Value,  /* 587: Block Parameter */
  &kaiguangai1108_P.u_X0_im,           /* 588: Block Parameter */
  &kaiguangai1108_P.u_X0_g,            /* 589: Block Parameter */
  &kaiguangai1108_P.u_X0_o,            /* 590: Block Parameter */
  &kaiguangai1108_P.u_X0_h,            /* 591: Block Parameter */
  &kaiguangai1108_P.u_X0_i,            /* 592: Block Parameter */
  &kaiguangai1108_P.u_X0_i1,           /* 593: Block Parameter */
  &kaiguangai1108_P.Constant12_Value_b,/* 594: Block Parameter */
  &kaiguangai1108_P.Constant13_Value_j,/* 595: Block Parameter */
  &kaiguangai1108_P.Constant16_Value_o,/* 596: Block Parameter */
  &kaiguangai1108_P.Constant17_Value_e,/* 597: Block Parameter */
  &kaiguangai1108_P.Constant18_Value_e,/* 598: Block Parameter */
  &kaiguangai1108_P.Constant19_Value_f,/* 599: Block Parameter */
  &kaiguangai1108_P.u_X0_p,            /* 600: Block Parameter */
  &kaiguangai1108_P.u_X0,              /* 601: Block Parameter */
  &kaiguangai1108_P.u_X0_f,            /* 602: Block Parameter */
  &kaiguangai1108_P.u_X0_a,            /* 603: Block Parameter */
  &kaiguangai1108_P.u_X0_n,            /* 604: Block Parameter */
  &kaiguangai1108_P.u_X0_j,            /* 605: Block Parameter */
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
  { rtBlockSignals, 510,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 96,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3903482845U,
    2240008634U,
    2808233303U,
    611687969U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  kaiguangai1108_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void kaiguangai1108_InitializeDataMapInfo(RT_MODEL_kaiguangai1108_T *const
  kaiguangai1108_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(kaiguangai1108_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(kaiguangai1108_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(kaiguangai1108_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(kaiguangai1108_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(kaiguangai1108_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  kaiguangai1108_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (kaiguangai1108_M);
  kaiguangai1108_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_kaiguangai1108_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(kaiguangai1108_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(kaiguangai1108_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(kaiguangai1108_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void kaiguangai1108_host_InitializeDataMapInfo
    (kaiguangai1108_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: kaiguangai1108_capi.c */
