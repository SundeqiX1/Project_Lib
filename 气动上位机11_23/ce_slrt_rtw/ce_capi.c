/*
 * ce_capi.c
 *
 * Code generation for model "ce".
 *
 * Model version              : 1.259
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Nov 23 18:58:58 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ce_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "ce.h"
#include "ce_capi.h"
#include "ce_private.h"
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
  { 0, 1, TARGET_STRING("Chart/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 1, TARGET_STRING("Chart/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 1, TARGET_STRING("Chart/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 1, TARGET_STRING("Chart/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 4, 1, TARGET_STRING("Chart/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 5, 1, TARGET_STRING("Chart/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("bdqy"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("by"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("exp_ready"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("fby"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("fby_qfkk"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("fq"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("fqyc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("jt"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("qfq"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("rqfq"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("shoudong"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("start"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("zidong"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("150t1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("150t2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("5t1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("5t2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 24, 0, TARGET_STRING("jyf"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("qffk"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("qyyl"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 0, TARGET_STRING("rqyl1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 28, 0, TARGET_STRING("rqyl2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 29, 0, TARGET_STRING("rqyl3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("s1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 0, TARGET_STRING("s2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 0, TARGET_STRING("s3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 0, TARGET_STRING("s4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING("t0_150t1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("t0_150t2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING("t0_5t1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 0, TARGET_STRING("t0_5t2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 0, TARGET_STRING("t0_s1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING("t0_s2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("t0_s3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING("t0_s4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 0, TARGET_STRING("t0_wy1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING("t0_wy2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 0, TARGET_STRING("wy1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 0, TARGET_STRING("wy2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 46, 0, TARGET_STRING("yihuai_gensui11biandong"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 47, 0, TARGET_STRING("Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 0, TARGET_STRING("Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING("biaoding1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 52, 0, TARGET_STRING("biaoding10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 53, 0, TARGET_STRING("biaoding11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 54, 0, TARGET_STRING("biaoding2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 0, TARGET_STRING("biaoding3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 56, 0, TARGET_STRING("biaoding4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING("biaoding5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("biaoding6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 0, TARGET_STRING("biaoding7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING("biaoding8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 0, TARGET_STRING("biaoding9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 0, TARGET_STRING("PCI-1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 64, 0, TARGET_STRING("PCI-2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 65, 0, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Analog Filter Design10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Analog Filter Design3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Analog Filter Design4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Analog Filter Design5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 0, TARGET_STRING("Analog Filter Design6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 0, TARGET_STRING("Analog Filter Design7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Analog Filter Design8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING("Analog Filter Design9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING("Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 0, TARGET_STRING("Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING("Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Subsystem/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Subsystem/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 0, TARGET_STRING("Subsystem/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 0, TARGET_STRING("Subsystem/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 0, TARGET_STRING("Subsystem/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING("Subsystem/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 0, TARGET_STRING("Subsystem/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 86, 0, TARGET_STRING("Subsystem/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 0, TARGET_STRING("Timedelay/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 3, TARGET_STRING("Timedelay/Relational Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 89, 3, TARGET_STRING("Timedelay/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 0, TARGET_STRING("Timedelay/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 7, TARGET_STRING("kaibihuan/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 0, TARGET_STRING("kaibihuan/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 7, TARGET_STRING("kaibihuan/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 15, TARGET_STRING("kaibihuan1/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 95, 10, TARGET_STRING("kaibihuan1/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 96, 17, TARGET_STRING("kaibihuan1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 97, 12, TARGET_STRING("kaibihuan1/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 98, 8, TARGET_STRING("kaibihuan1/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 16, TARGET_STRING("kaibihuan1/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 100, 11, TARGET_STRING("kaibihuan1/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 101, 0, TARGET_STRING("kaibihuan1/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 102, 0, TARGET_STRING("kaibihuan1/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 103, 0, TARGET_STRING("kaibihuan1/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 104, 0, TARGET_STRING("kaibihuan1/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-5t1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 106, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-5t2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 107, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-150t1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 108, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-150t2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 109, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-wy1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 110, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-wy2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 111, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-s1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 112, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-s2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 113, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-s3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 114, 2, TARGET_STRING("Subsystem/Triggered Subsystem/In-s4"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 115, 4, TARGET_STRING("Timedelay/Enabled Subsystem/In1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 116, 0, TARGET_STRING("kaibihuan/Subsystem/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 117, 0, TARGET_STRING("kaibihuan/Subsystem/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 118, 6, TARGET_STRING("kaibihuan/Subsystem/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 6, TARGET_STRING("kaibihuan/Subsystem/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 6, TARGET_STRING("kaibihuan/Subsystem/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 121, 5, TARGET_STRING("kaibihuan/Subsystem/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 6, TARGET_STRING("kaibihuan/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 0, TARGET_STRING("kaibihuan/Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 124, TARGET_STRING("D"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 125, TARGET_STRING("I"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 126, TARGET_STRING("P"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 127, TARGET_STRING("bdqy"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 128, TARGET_STRING("by"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 129, TARGET_STRING("cns"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 130, TARGET_STRING("cns1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 131, TARGET_STRING("cns2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 132, TARGET_STRING("cns3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 133, TARGET_STRING("exp_ready"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 134, TARGET_STRING("fby"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 135, TARGET_STRING("fby_qfkk"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 136, TARGET_STRING("fq"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 137, TARGET_STRING("fqyc"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 138, TARGET_STRING("jt"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 139, TARGET_STRING("qfq"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 140, TARGET_STRING("rqfq"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 141, TARGET_STRING("shoudong"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 142, TARGET_STRING("start"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 143, TARGET_STRING("t0"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 144, TARGET_STRING("time"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 145, TARGET_STRING("zidong"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 146, TARGET_STRING("Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 147, TARGET_STRING("Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 148, TARGET_STRING("Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 149, TARGET_STRING("Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 150, TARGET_STRING("biaoding1"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 151, TARGET_STRING("biaoding1"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 152, TARGET_STRING("biaoding10"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 153, TARGET_STRING("biaoding10"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 154, TARGET_STRING("biaoding11"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 155, TARGET_STRING("biaoding11"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 156, TARGET_STRING("biaoding2"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 157, TARGET_STRING("biaoding2"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 158, TARGET_STRING("biaoding3"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 159, TARGET_STRING("biaoding3"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 160, TARGET_STRING("biaoding4"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 161, TARGET_STRING("biaoding4"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 162, TARGET_STRING("biaoding5"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 163, TARGET_STRING("biaoding5"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 164, TARGET_STRING("biaoding6"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 165, TARGET_STRING("biaoding6"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 166, TARGET_STRING("biaoding7"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 167, TARGET_STRING("biaoding7"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 168, TARGET_STRING("biaoding8"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 169, TARGET_STRING("biaoding8"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 170, TARGET_STRING("biaoding9"),
    TARGET_STRING("InputValues"), 0, 2, 0 },

  { 171, TARGET_STRING("biaoding9"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 172, TARGET_STRING("Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 173, TARGET_STRING("PCI-1"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 174, TARGET_STRING("PCI-1"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 175, TARGET_STRING("PCI-2"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 176, TARGET_STRING("PCI-2"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 177, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 178, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 179, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 180, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 181, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P5"), 0, 3, 0 },

  { 182, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P6"), 0, 3, 0 },

  { 183, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 184, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 185, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 186, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 187, TARGET_STRING("Analog Filter Design10"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 188, TARGET_STRING("Analog Filter Design10"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 189, TARGET_STRING("Analog Filter Design10"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 190, TARGET_STRING("Analog Filter Design10"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 191, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 192, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 193, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 194, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 195, TARGET_STRING("Analog Filter Design3"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 196, TARGET_STRING("Analog Filter Design3"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 197, TARGET_STRING("Analog Filter Design3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 198, TARGET_STRING("Analog Filter Design3"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 199, TARGET_STRING("Analog Filter Design4"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 200, TARGET_STRING("Analog Filter Design4"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 201, TARGET_STRING("Analog Filter Design4"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 202, TARGET_STRING("Analog Filter Design4"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 203, TARGET_STRING("Analog Filter Design5"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 204, TARGET_STRING("Analog Filter Design5"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 205, TARGET_STRING("Analog Filter Design5"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 206, TARGET_STRING("Analog Filter Design5"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 207, TARGET_STRING("Analog Filter Design6"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 208, TARGET_STRING("Analog Filter Design6"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 209, TARGET_STRING("Analog Filter Design6"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 210, TARGET_STRING("Analog Filter Design6"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 211, TARGET_STRING("Analog Filter Design7"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 212, TARGET_STRING("Analog Filter Design7"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 213, TARGET_STRING("Analog Filter Design7"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 214, TARGET_STRING("Analog Filter Design7"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 215, TARGET_STRING("Analog Filter Design8"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 216, TARGET_STRING("Analog Filter Design8"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 217, TARGET_STRING("Analog Filter Design8"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 218, TARGET_STRING("Analog Filter Design8"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 219, TARGET_STRING("Analog Filter Design9"),
    TARGET_STRING("A"), 0, 4, 0 },

  { 220, TARGET_STRING("Analog Filter Design9"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 221, TARGET_STRING("Analog Filter Design9"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 222, TARGET_STRING("Analog Filter Design9"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 223, TARGET_STRING("Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 224, TARGET_STRING("Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 225, TARGET_STRING("Timedelay/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 226, TARGET_STRING("Timedelay/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 227, TARGET_STRING("kaibihuan/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 228, TARGET_STRING("kaibihuan/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 229, TARGET_STRING("kaibihuan/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 230, TARGET_STRING("kaibihuan1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 231, TARGET_STRING("kaibihuan1/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 232, TARGET_STRING("kaibihuan1/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 233, TARGET_STRING("kaibihuan1/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 234, TARGET_STRING("kaibihuan1/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 235, TARGET_STRING("kaibihuan1/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 236, TARGET_STRING("kaibihuan1/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 237, TARGET_STRING("kaibihuan1/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 238, TARGET_STRING("kaibihuan1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 239, TARGET_STRING("kaibihuan1/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 240, TARGET_STRING("kaibihuan1/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 241, TARGET_STRING("kaibihuan1/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 242, TARGET_STRING("kaibihuan1/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 243, TARGET_STRING("kaibihuan1/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 244, TARGET_STRING("kaibihuan1/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 245, TARGET_STRING("kaibihuan1/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 246, TARGET_STRING("kaibihuan1/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 247, TARGET_STRING("Subsystem/Triggered Subsystem/Out-5t1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 248, TARGET_STRING("Subsystem/Triggered Subsystem/Out-5t2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 249, TARGET_STRING("Subsystem/Triggered Subsystem/Out-150t1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 250, TARGET_STRING("Subsystem/Triggered Subsystem/Out-150t2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 251, TARGET_STRING("Subsystem/Triggered Subsystem/Out-wy1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 252, TARGET_STRING("Subsystem/Triggered Subsystem/Out-wy2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 253, TARGET_STRING("Subsystem/Triggered Subsystem/Out-s1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 254, TARGET_STRING("Subsystem/Triggered Subsystem/Out-s2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 255, TARGET_STRING("Subsystem/Triggered Subsystem/Out-s3"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 256, TARGET_STRING("Subsystem/Triggered Subsystem/Out-s4"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 257, TARGET_STRING("Timedelay/Enabled Subsystem/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 258, TARGET_STRING("kaibihuan/Subsystem/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 259, TARGET_STRING("kaibihuan/Subsystem/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 260, TARGET_STRING("kaibihuan/Subsystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

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
  &ce_B.dcf_1,                         /* 0: Signal */
  &ce_B.dcf_2,                         /* 1: Signal */
  &ce_B.kbhxz,                         /* 2: Signal */
  &ce_B.fby_qfsd,                      /* 3: Signal */
  &ce_B.qfkk,                          /* 4: Signal */
  &ce_B.trigger,                       /* 5: Signal */
  &ce_B.bdqy,                          /* 6: Signal */
  &ce_B.by,                            /* 7: Signal */
  &ce_B.exp_ready,                     /* 8: Signal */
  &ce_B.fby,                           /* 9: Signal */
  &ce_B.fby_qfkk,                      /* 10: Signal */
  &ce_B.fq,                            /* 11: Signal */
  &ce_B.fqyc,                          /* 12: Signal */
  &ce_B.jt,                            /* 13: Signal */
  &ce_B.qfq,                           /* 14: Signal */
  &ce_B.rqfq,                          /* 15: Signal */
  &ce_B.shoudong,                      /* 16: Signal */
  &ce_B.start,                         /* 17: Signal */
  &ce_B.zidong,                        /* 18: Signal */
  &ce_B.u50t1,                         /* 19: Signal */
  &ce_B.u50t2,                         /* 20: Signal */
  &ce_B.ut1,                           /* 21: Signal */
  &ce_B.ut2,                           /* 22: Signal */
  &ce_B.DataTypeConversion[0],         /* 23: Signal */
  &ce_B.jyf,                           /* 24: Signal */
  &ce_B.qffk,                          /* 25: Signal */
  &ce_B.qyyl,                          /* 26: Signal */
  &ce_B.rqyl1,                         /* 27: Signal */
  &ce_B.rqyl2,                         /* 28: Signal */
  &ce_B.rqyl3,                         /* 29: Signal */
  &ce_B.s1,                            /* 30: Signal */
  &ce_B.s2,                            /* 31: Signal */
  &ce_B.s3,                            /* 32: Signal */
  &ce_B.s4,                            /* 33: Signal */
  &ce_B.t0_150t1,                      /* 34: Signal */
  &ce_B.t0_150t2,                      /* 35: Signal */
  &ce_B.t0_5t1,                        /* 36: Signal */
  &ce_B.t0_5t2,                        /* 37: Signal */
  &ce_B.t0_s1,                         /* 38: Signal */
  &ce_B.t0_s2,                         /* 39: Signal */
  &ce_B.t0_s3,                         /* 40: Signal */
  &ce_B.t0_s4,                         /* 41: Signal */
  &ce_B.t0_wy1,                        /* 42: Signal */
  &ce_B.t0_wy2,                        /* 43: Signal */
  &ce_B.wy1,                           /* 44: Signal */
  &ce_B.wy2,                           /* 45: Signal */
  &ce_B.yihuai_gensui11biandong,       /* 46: Signal */
  &ce_B.Gain,                          /* 47: Signal */
  &ce_B.Gain1,                         /* 48: Signal */
  &ce_B.Gain2,                         /* 49: Signal */
  &ce_B.Gain3,                         /* 50: Signal */
  &ce_B.biaoding1,                     /* 51: Signal */
  &ce_B.biaoding10,                    /* 52: Signal */
  &ce_B.biaoding11,                    /* 53: Signal */
  &ce_B.biaoding2,                     /* 54: Signal */
  &ce_B.biaoding3,                     /* 55: Signal */
  &ce_B.biaoding4,                     /* 56: Signal */
  &ce_B.biaoding5,                     /* 57: Signal */
  &ce_B.biaoding6,                     /* 58: Signal */
  &ce_B.biaoding7,                     /* 59: Signal */
  &ce_B.biaoding8,                     /* 60: Signal */
  &ce_B.biaoding9,                     /* 61: Signal */
  &ce_B.Memory,                        /* 62: Signal */
  &ce_B.PCI1[0],                       /* 63: Signal */
  &ce_B.PCI2[0],                       /* 64: Signal */
  &ce_B.AnalogFilterDesign1,           /* 65: Signal */
  &ce_B.AnalogFilterDesign10,          /* 66: Signal */
  &ce_B.AnalogFilterDesign2,           /* 67: Signal */
  &ce_B.AnalogFilterDesign3,           /* 68: Signal */
  &ce_B.AnalogFilterDesign4,           /* 69: Signal */
  &ce_B.AnalogFilterDesign5,           /* 70: Signal */
  &ce_B.AnalogFilterDesign6,           /* 71: Signal */
  &ce_B.AnalogFilterDesign7,           /* 72: Signal */
  &ce_B.AnalogFilterDesign8,           /* 73: Signal */
  &ce_B.AnalogFilterDesign9,           /* 74: Signal */
  &ce_B.Switch,                        /* 75: Signal */
  &ce_B.Switch1,                       /* 76: Signal */
  &ce_B.Sum,                           /* 77: Signal */
  &ce_B.Sum1,                          /* 78: Signal */
  &ce_B.Sum2,                          /* 79: Signal */
  &ce_B.Sum3,                          /* 80: Signal */
  &ce_B.Sum4,                          /* 81: Signal */
  &ce_B.Sum5,                          /* 82: Signal */
  &ce_B.Sum6,                          /* 83: Signal */
  &ce_B.Sum7,                          /* 84: Signal */
  &ce_B.Sum8,                          /* 85: Signal */
  &ce_B.Sum9,                          /* 86: Signal */
  &ce_B.Clock,                         /* 87: Signal */
  &ce_B.RelationalOperator,            /* 88: Signal */
  &ce_B.Sum_j,                         /* 89: Signal */
  &ce_B.Switch_p,                      /* 90: Signal */
  &ce_B.Saturation,                    /* 91: Signal */
  &ce_B.Sum_e,                         /* 92: Signal */
  &ce_B.Switch_m,                      /* 93: Signal */
  &ce_B.Gain3_b,                       /* 94: Signal */
  &ce_B.Gain4,                         /* 95: Signal */
  &ce_B.Switch_a,                      /* 96: Signal */
  &ce_B.Switch1_i,                     /* 97: Signal */
  &ce_B.Switch2,                       /* 98: Signal */
  &ce_B.Switch3,                       /* 99: Signal */
  &ce_B.Switch4,                       /* 100: Signal */
  &ce_B.Switch5,                       /* 101: Signal */
  &ce_B.Switch6,                       /* 102: Signal */
  &ce_B.Switch7,                       /* 103: Signal */
  &ce_B.Switch8,                       /* 104: Signal */
  &ce_B.In5t1,                         /* 105: Signal */
  &ce_B.In5t2,                         /* 106: Signal */
  &ce_B.In150t1,                       /* 107: Signal */
  &ce_B.In150t2,                       /* 108: Signal */
  &ce_B.Inwy1,                         /* 109: Signal */
  &ce_B.Inwy2,                         /* 110: Signal */
  &ce_B.Ins1,                          /* 111: Signal */
  &ce_B.Ins2,                          /* 112: Signal */
  &ce_B.Ins3,                          /* 113: Signal */
  &ce_B.Ins4,                          /* 114: Signal */
  &ce_B.In1,                           /* 115: Signal */
  &ce_B.Derivative,                    /* 116: Signal */
  &ce_B.Integrator,                    /* 117: Signal */
  &ce_B.Product,                       /* 118: Signal */
  &ce_B.Product1,                      /* 119: Signal */
  &ce_B.Product2,                      /* 120: Signal */
  &ce_B.Product3,                      /* 121: Signal */
  &ce_B.Sum1_i,                        /* 122: Signal */
  &ce_B.Switch_n,                      /* 123: Signal */
  &ce_P.D_Value,                       /* 124: Block Parameter */
  &ce_P.I_Value,                       /* 125: Block Parameter */
  &ce_P.P_Value,                       /* 126: Block Parameter */
  &ce_P.bdqy_Value,                    /* 127: Block Parameter */
  &ce_P.by_Value,                      /* 128: Block Parameter */
  &ce_P.cns_Value,                     /* 129: Block Parameter */
  &ce_P.cns1_Value,                    /* 130: Block Parameter */
  &ce_P.cns2_Value,                    /* 131: Block Parameter */
  &ce_P.cns3_Value,                    /* 132: Block Parameter */
  &ce_P.exp_ready_Value,               /* 133: Block Parameter */
  &ce_P.fby_Value,                     /* 134: Block Parameter */
  &ce_P.fby_qfkk_Value,                /* 135: Block Parameter */
  &ce_P.fq_Value,                      /* 136: Block Parameter */
  &ce_P.fqyc_Value,                    /* 137: Block Parameter */
  &ce_P.jt_Value,                      /* 138: Block Parameter */
  &ce_P.qfq_Value,                     /* 139: Block Parameter */
  &ce_P.rqfq_Value,                    /* 140: Block Parameter */
  &ce_P.shoudong_Value,                /* 141: Block Parameter */
  &ce_P.start_Value,                   /* 142: Block Parameter */
  &ce_P.t0_Value,                      /* 143: Block Parameter */
  &ce_P.time_Value,                    /* 144: Block Parameter */
  &ce_P.zidong_Value,                  /* 145: Block Parameter */
  &ce_P.Gain_Gain,                     /* 146: Block Parameter */
  &ce_P.Gain1_Gain,                    /* 147: Block Parameter */
  &ce_P.Gain2_Gain,                    /* 148: Block Parameter */
  &ce_P.Gain3_Gain_c,                  /* 149: Block Parameter */
  &ce_P.biaoding1_XData[0],            /* 150: Block Parameter */
  &ce_P.biaoding1_YData[0],            /* 151: Block Parameter */
  &ce_P.biaoding10_XData[0],           /* 152: Block Parameter */
  &ce_P.biaoding10_YData[0],           /* 153: Block Parameter */
  &ce_P.biaoding11_XData[0],           /* 154: Block Parameter */
  &ce_P.biaoding11_YData[0],           /* 155: Block Parameter */
  &ce_P.biaoding2_XData[0],            /* 156: Block Parameter */
  &ce_P.biaoding2_YData[0],            /* 157: Block Parameter */
  &ce_P.biaoding3_XData[0],            /* 158: Block Parameter */
  &ce_P.biaoding3_YData[0],            /* 159: Block Parameter */
  &ce_P.biaoding4_XData[0],            /* 160: Block Parameter */
  &ce_P.biaoding4_YData[0],            /* 161: Block Parameter */
  &ce_P.biaoding5_XData[0],            /* 162: Block Parameter */
  &ce_P.biaoding5_YData[0],            /* 163: Block Parameter */
  &ce_P.biaoding6_XData[0],            /* 164: Block Parameter */
  &ce_P.biaoding6_YData[0],            /* 165: Block Parameter */
  &ce_P.biaoding7_XData[0],            /* 166: Block Parameter */
  &ce_P.biaoding7_YData[0],            /* 167: Block Parameter */
  &ce_P.biaoding8_XData[0],            /* 168: Block Parameter */
  &ce_P.biaoding8_YData[0],            /* 169: Block Parameter */
  &ce_P.biaoding9_XData[0],            /* 170: Block Parameter */
  &ce_P.biaoding9_YData[0],            /* 171: Block Parameter */
  &ce_P.Memory_X0,                     /* 172: Block Parameter */
  &ce_P.PCI1_P1[0],                    /* 173: Block Parameter */
  &ce_P.PCI1_P2[0],                    /* 174: Block Parameter */
  &ce_P.PCI2_P1[0],                    /* 175: Block Parameter */
  &ce_P.PCI2_P2[0],                    /* 176: Block Parameter */
  &ce_P.PCI6208ADA_P1[0],              /* 177: Block Parameter */
  &ce_P.PCI6208ADA_P2,                 /* 178: Block Parameter */
  &ce_P.PCI6208ADA_P3,                 /* 179: Block Parameter */
  &ce_P.PCI6208ADA_P4,                 /* 180: Block Parameter */
  &ce_P.PCI6208ADA_P5[0],              /* 181: Block Parameter */
  &ce_P.PCI6208ADA_P6[0],              /* 182: Block Parameter */
  &ce_P.AnalogFilterDesign1_A[0],      /* 183: Block Parameter */
  &ce_P.AnalogFilterDesign1_B,         /* 184: Block Parameter */
  &ce_P.AnalogFilterDesign1_C,         /* 185: Block Parameter */
  &ce_P.AnalogFilterDesign1_X0,        /* 186: Block Parameter */
  &ce_P.AnalogFilterDesign10_A[0],     /* 187: Block Parameter */
  &ce_P.AnalogFilterDesign10_B,        /* 188: Block Parameter */
  &ce_P.AnalogFilterDesign10_C,        /* 189: Block Parameter */
  &ce_P.AnalogFilterDesign10_X0,       /* 190: Block Parameter */
  &ce_P.AnalogFilterDesign2_A[0],      /* 191: Block Parameter */
  &ce_P.AnalogFilterDesign2_B,         /* 192: Block Parameter */
  &ce_P.AnalogFilterDesign2_C,         /* 193: Block Parameter */
  &ce_P.AnalogFilterDesign2_X0,        /* 194: Block Parameter */
  &ce_P.AnalogFilterDesign3_A[0],      /* 195: Block Parameter */
  &ce_P.AnalogFilterDesign3_B,         /* 196: Block Parameter */
  &ce_P.AnalogFilterDesign3_C,         /* 197: Block Parameter */
  &ce_P.AnalogFilterDesign3_X0,        /* 198: Block Parameter */
  &ce_P.AnalogFilterDesign4_A[0],      /* 199: Block Parameter */
  &ce_P.AnalogFilterDesign4_B,         /* 200: Block Parameter */
  &ce_P.AnalogFilterDesign4_C,         /* 201: Block Parameter */
  &ce_P.AnalogFilterDesign4_X0,        /* 202: Block Parameter */
  &ce_P.AnalogFilterDesign5_A[0],      /* 203: Block Parameter */
  &ce_P.AnalogFilterDesign5_B,         /* 204: Block Parameter */
  &ce_P.AnalogFilterDesign5_C,         /* 205: Block Parameter */
  &ce_P.AnalogFilterDesign5_X0,        /* 206: Block Parameter */
  &ce_P.AnalogFilterDesign6_A[0],      /* 207: Block Parameter */
  &ce_P.AnalogFilterDesign6_B,         /* 208: Block Parameter */
  &ce_P.AnalogFilterDesign6_C,         /* 209: Block Parameter */
  &ce_P.AnalogFilterDesign6_X0,        /* 210: Block Parameter */
  &ce_P.AnalogFilterDesign7_A[0],      /* 211: Block Parameter */
  &ce_P.AnalogFilterDesign7_B,         /* 212: Block Parameter */
  &ce_P.AnalogFilterDesign7_C,         /* 213: Block Parameter */
  &ce_P.AnalogFilterDesign7_X0,        /* 214: Block Parameter */
  &ce_P.AnalogFilterDesign8_A[0],      /* 215: Block Parameter */
  &ce_P.AnalogFilterDesign8_B,         /* 216: Block Parameter */
  &ce_P.AnalogFilterDesign8_C,         /* 217: Block Parameter */
  &ce_P.AnalogFilterDesign8_X0,        /* 218: Block Parameter */
  &ce_P.AnalogFilterDesign9_A[0],      /* 219: Block Parameter */
  &ce_P.AnalogFilterDesign9_B,         /* 220: Block Parameter */
  &ce_P.AnalogFilterDesign9_C,         /* 221: Block Parameter */
  &ce_P.AnalogFilterDesign9_X0,        /* 222: Block Parameter */
  &ce_P.Switch_Threshold_j,            /* 223: Block Parameter */
  &ce_P.Switch1_Threshold_o,           /* 224: Block Parameter */
  &ce_P.Constant_Value_l,              /* 225: Block Parameter */
  &ce_P.Switch_Threshold_hz,           /* 226: Block Parameter */
  &ce_P.Saturation_UpperSat,           /* 227: Block Parameter */
  &ce_P.Saturation_LowerSat,           /* 228: Block Parameter */
  &ce_P.Switch_Threshold,              /* 229: Block Parameter */
  &ce_P.Constant_Value,                /* 230: Block Parameter */
  &ce_P.Constant1_Value,               /* 231: Block Parameter */
  &ce_P.Constant2_Value,               /* 232: Block Parameter */
  &ce_P.Constant3_Value,               /* 233: Block Parameter */
  &ce_P.Constant4_Value,               /* 234: Block Parameter */
  &ce_P.Constant5_Value,               /* 235: Block Parameter */
  &ce_P.Gain3_Gain,                    /* 236: Block Parameter */
  &ce_P.Gain4_Gain,                    /* 237: Block Parameter */
  &ce_P.Switch_Threshold_c,            /* 238: Block Parameter */
  &ce_P.Switch1_Threshold,             /* 239: Block Parameter */
  &ce_P.Switch2_Threshold,             /* 240: Block Parameter */
  &ce_P.Switch3_Threshold,             /* 241: Block Parameter */
  &ce_P.Switch4_Threshold,             /* 242: Block Parameter */
  &ce_P.Switch5_Threshold,             /* 243: Block Parameter */
  &ce_P.Switch6_Threshold,             /* 244: Block Parameter */
  &ce_P.Switch7_Threshold,             /* 245: Block Parameter */
  &ce_P.Switch8_Threshold,             /* 246: Block Parameter */
  &ce_P.Out5t1_Y0,                     /* 247: Block Parameter */
  &ce_P.Out5t2_Y0,                     /* 248: Block Parameter */
  &ce_P.Out150t1_Y0,                   /* 249: Block Parameter */
  &ce_P.Out150t2_Y0,                   /* 250: Block Parameter */
  &ce_P.Outwy1_Y0,                     /* 251: Block Parameter */
  &ce_P.Outwy2_Y0,                     /* 252: Block Parameter */
  &ce_P.Outs1_Y0,                      /* 253: Block Parameter */
  &ce_P.Outs2_Y0,                      /* 254: Block Parameter */
  &ce_P.Outs3_Y0,                      /* 255: Block Parameter */
  &ce_P.Outs4_Y0,                      /* 256: Block Parameter */
  &ce_P.Out1_Y0,                       /* 257: Block Parameter */
  &ce_P.Constant_Value_e,              /* 258: Block Parameter */
  &ce_P.Integrator_IC,                 /* 259: Block Parameter */
  &ce_P.Switch_Threshold_h,            /* 260: Block Parameter */
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

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  16,                                  /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  2,                                   /* 5 */
  1,                                   /* 6 */
  8,                                   /* 7 */
  15,                                  /* 8 */
  1                                    /* 9 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
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
    0, 0 },

  { (NULL), (NULL), -1, 0 }
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
  { rtBlockSignals, 124,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 137,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 704841475U,
    44584935U,
    3101483579U,
    3269939804U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  ce_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void ce_InitializeDataMapInfo(RT_MODEL_ce_T *const ce_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(ce_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(ce_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(ce_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(ce_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(ce_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  ce_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam(ce_M);
  ce_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_ce_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(ce_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(ce_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(ce_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void ce_host_InitializeDataMapInfo(ce_host_DataMapInfo_T *dataMap, const char *
    path)
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

/* EOF: ce_capi.c */
