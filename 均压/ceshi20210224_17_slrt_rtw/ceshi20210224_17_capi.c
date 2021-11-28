/*
 * ceshi20210224_17_capi.c
 *
 * Code generation for model "ceshi20210224_17".
 *
 * Model version              : 1.152
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 12 20:04:50 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ceshi20210224_17_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "ceshi20210224_17.h"
#include "ceshi20210224_17_capi.h"
#include "ceshi20210224_17_private.h"
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
  { 0, 10, TARGET_STRING("Chart/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 10, TARGET_STRING("Chart/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 10, TARGET_STRING("Chart/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 11, TARGET_STRING("Chart1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 11, TARGET_STRING("Chart1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 5, 12, TARGET_STRING("Chart2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 13, TARGET_STRING("Chart3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 13, TARGET_STRING("Chart3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("c"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("&#x542F;&#x505C;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("&#x5F00;1&#x5173;0"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("&#x65CB;&#x677E;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("&#x65CB;&#x7D27;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("&#x6BD4;&#x4F8B;&#x51CF;&#x538B;&#x9600;1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("&#x89E3;&#x9501;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("&#x9501;&#x5B9A;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("&#x9600;&#x5F00;&#x53E3;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("&#x9884;&#x65CB;&#x677E;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 19, 0, TARGET_STRING("Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 0, TARGET_STRING("Derivative1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 0, TARGET_STRING("Derivative2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("Derivative3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 23, 0, TARGET_STRING("Derivative4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Gain10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 6, TARGET_STRING("Gain11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 28, 8, TARGET_STRING("Gain12"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 29, 0, TARGET_STRING("Gain13"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("Gain14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 0, TARGET_STRING("Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 0, TARGET_STRING("Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 0, TARGET_STRING("Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING("Gain5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 0, TARGET_STRING("Gain7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 0, TARGET_STRING("Gain8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING("Gain9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING(
    "TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1"),
    TARGET_STRING("Ê±¼ä"), 0, 0, 1, 0, 0 },

  { 40, 0, TARGET_STRING("Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 41, 0, TARGET_STRING("Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 42, 1, TARGET_STRING("Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 43, 2, TARGET_STRING("Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 44, 0, TARGET_STRING("right1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 0, TARGET_STRING("Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 46, 0, TARGET_STRING("Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 47, 7, TARGET_STRING("Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 9, TARGET_STRING("Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Multiport Switch2"),
    TARGET_STRING("shuchuliang"), 0, 0, 0, 0, 1 },

  { 50, 0, TARGET_STRING("Product"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 51, 1, TARGET_STRING("Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 2, TARGET_STRING("Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 55, 0, TARGET_STRING("PCI1716DIO1/p1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 56, 0, TARGET_STRING("PCI1716DIO1/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 1 },

  { 57, 0, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("vkg"), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("vgg"), 0, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("s"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING("s1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING("s2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 62, 0, TARGET_STRING("s3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING("s4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Step1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Add2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 68, 3, TARGET_STRING("Add3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 5, TARGET_STRING("Add4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Add5"),
    TARGET_STRING("s"), 0, 0, 0, 0, 1 },

  { 71, 6, TARGET_STRING("Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 8, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("chazhi"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING("chazhi1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 8, TARGET_STRING("shuchuliang1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 6, TARGET_STRING("shuchuliang2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 0, TARGET_STRING("Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING("Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 0, TARGET_STRING("Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 0, TARGET_STRING("Switch4"),
    TARGET_STRING("zongsudu"), 0, 0, 0, 0, 1 },

  { 82, 0, TARGET_STRING("Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 83, 0, TARGET_STRING("Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING("Manual Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 14, TARGET_STRING("Subsystem/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 86, 15, TARGET_STRING("Subsystem1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 16, TARGET_STRING("Subsystem2/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 17, TARGET_STRING("Subsystem3/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 18, TARGET_STRING("Subsystem4/In1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 0, TARGET_STRING("Subsystem5/qiwangv"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 0, TARGET_STRING("Subsystem5/Switch1"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 92, 0, TARGET_STRING("Subsystem5/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 0, TARGET_STRING("Subsystem5/Switch6"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 94, 0, TARGET_STRING("Subsystem6/qiwangv1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING("Subsystem7/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 96, 0, TARGET_STRING("Subsystem7/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 0, TARGET_STRING("Subsystem7/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 98, 0, TARGET_STRING("Subsystem7/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 99, 0, TARGET_STRING("Subsystem8/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 0, TARGET_STRING("Subsystem8/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 101, 6, TARGET_STRING("Subsystem8/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 0, TARGET_STRING("Subsystem8/Rate Limiter"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Subsystem9/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Subsystem9/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 105, 8, TARGET_STRING("Subsystem9/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 106, 0, TARGET_STRING("Subsystem9/Rate Limiter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("chuanganqi1/Data Type Conversion"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 108, 0, TARGET_STRING("chuanganqi1/Data Type Conversion1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 109, 28, TARGET_STRING("chuanganqi1/Data Type Conversion10"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 110, 28, TARGET_STRING("chuanganqi1/Data Type Conversion11"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 111, 28, TARGET_STRING("chuanganqi1/Data Type Conversion12"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 112, 28, TARGET_STRING("chuanganqi1/Data Type Conversion13"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 113, 28, TARGET_STRING("chuanganqi1/Data Type Conversion14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 114, 28, TARGET_STRING("chuanganqi1/Data Type Conversion15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 115, 27, TARGET_STRING("chuanganqi1/Data Type Conversion16"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 116, 27, TARGET_STRING("chuanganqi1/Data Type Conversion17"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 117, 27, TARGET_STRING("chuanganqi1/Data Type Conversion18"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 118, 27, TARGET_STRING("chuanganqi1/Data Type Conversion19"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 119, 0, TARGET_STRING("chuanganqi1/Data Type Conversion2"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 120, 27, TARGET_STRING("chuanganqi1/Data Type Conversion20"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 121, 27, TARGET_STRING("chuanganqi1/Data Type Conversion21"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 122, 27, TARGET_STRING("chuanganqi1/Data Type Conversion22"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 123, 27, TARGET_STRING("chuanganqi1/Data Type Conversion23"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 124, 26, TARGET_STRING("chuanganqi1/Data Type Conversion24"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 125, 26, TARGET_STRING("chuanganqi1/Data Type Conversion25"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 126, 26, TARGET_STRING("chuanganqi1/Data Type Conversion26"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 127, 26, TARGET_STRING("chuanganqi1/Data Type Conversion27"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 128, 26, TARGET_STRING("chuanganqi1/Data Type Conversion28"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 129, 26, TARGET_STRING("chuanganqi1/Data Type Conversion29"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 130, 0, TARGET_STRING("chuanganqi1/Data Type Conversion3"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 131, 26, TARGET_STRING("chuanganqi1/Data Type Conversion30"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 132, 26, TARGET_STRING("chuanganqi1/Data Type Conversion31"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 133, 25, TARGET_STRING("chuanganqi1/Data Type Conversion32"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 134, 25, TARGET_STRING("chuanganqi1/Data Type Conversion33"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 135, 25, TARGET_STRING("chuanganqi1/Data Type Conversion34"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 136, 25, TARGET_STRING("chuanganqi1/Data Type Conversion35"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 137, 25, TARGET_STRING("chuanganqi1/Data Type Conversion36"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 138, 25, TARGET_STRING("chuanganqi1/Data Type Conversion37"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 139, 25, TARGET_STRING("chuanganqi1/Data Type Conversion38"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 140, 25, TARGET_STRING("chuanganqi1/Data Type Conversion39"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 141, 0, TARGET_STRING("chuanganqi1/Data Type Conversion4"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 142, 24, TARGET_STRING("chuanganqi1/Data Type Conversion40"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 143, 24, TARGET_STRING("chuanganqi1/Data Type Conversion41"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 144, 24, TARGET_STRING("chuanganqi1/Data Type Conversion42"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 145, 24, TARGET_STRING("chuanganqi1/Data Type Conversion43"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 146, 24, TARGET_STRING("chuanganqi1/Data Type Conversion44"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 147, 24, TARGET_STRING("chuanganqi1/Data Type Conversion45"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 148, 24, TARGET_STRING("chuanganqi1/Data Type Conversion46"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 149, 24, TARGET_STRING("chuanganqi1/Data Type Conversion47"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 150, 0, TARGET_STRING("chuanganqi1/Data Type Conversion48"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 151, 0, TARGET_STRING("chuanganqi1/Data Type Conversion49"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 152, 0, TARGET_STRING("chuanganqi1/Data Type Conversion5"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 153, 0, TARGET_STRING("chuanganqi1/Data Type Conversion50"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 154, 0, TARGET_STRING("chuanganqi1/Data Type Conversion51"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 155, 0, TARGET_STRING("chuanganqi1/Data Type Conversion52"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 156, 0, TARGET_STRING("chuanganqi1/Data Type Conversion53"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 157, 0, TARGET_STRING("chuanganqi1/Data Type Conversion54"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 158, 0, TARGET_STRING("chuanganqi1/Data Type Conversion55"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 159, 0, TARGET_STRING("chuanganqi1/Data Type Conversion56"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 160, 0, TARGET_STRING("chuanganqi1/Data Type Conversion57"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 161, 0, TARGET_STRING("chuanganqi1/Data Type Conversion58"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 162, 0, TARGET_STRING("chuanganqi1/Data Type Conversion59"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 163, 0, TARGET_STRING("chuanganqi1/Data Type Conversion6"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 164, 0, TARGET_STRING("chuanganqi1/Data Type Conversion60"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 165, 0, TARGET_STRING("chuanganqi1/Data Type Conversion61"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 166, 0, TARGET_STRING("chuanganqi1/Data Type Conversion7"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 167, 28, TARGET_STRING("chuanganqi1/Data Type Conversion8"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 168, 28, TARGET_STRING("chuanganqi1/Data Type Conversion9"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 169, 0, TARGET_STRING("chuanganqi1/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 3, 0, 1 },

  { 170, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 171, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 172, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 173, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 174, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 175, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 176, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 177, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 178, 0, TARGET_STRING("chuanganqi1/1-D Lookup Table9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 179, 0, TARGET_STRING("chuanganqi1/Product"),
    TARGET_STRING("1234wuxinhao\n5.kaigaidaowei\n6.kaigaihuanchong\n7.guangaidaowei\n8.guangaihuanchong\n9.xuanjindaowei1\n10.xuanjindaowei2\n11.xuansongdaowei1\n12.xuansongdaowei2\n13.jiesuodaowei1\n14.jiesuodaowei2\n15.suodingdaowei1\n16.suodingdaowei2"),
    0, 0, 3, 0, 1 },

  { 180, 0, TARGET_STRING("chuanganqi1/CAN bit-packing "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 181, 0, TARGET_STRING("chuanganqi1/CAN bit-packing 1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 182, 0, TARGET_STRING("chuanganqi1/CAN bit-packing 2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 183, 0, TARGET_STRING("chuanganqi1/CAN bit-packing 3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 184, 0, TARGET_STRING("chuanganqi1/CAN bit-packing 4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 186, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 187, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 1 },

  { 188, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 1 },

  { 189, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p5"),
    TARGET_STRING(""), 4, 1, 0, 0, 1 },

  { 190, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p6"),
    TARGET_STRING(""), 5, 1, 0, 0, 1 },

  { 191, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p7"),
    TARGET_STRING(""), 6, 1, 0, 0, 1 },

  { 192, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p8"),
    TARGET_STRING(""), 7, 1, 0, 0, 1 },

  { 193, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p9"),
    TARGET_STRING(""), 8, 1, 0, 0, 1 },

  { 194, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p10"),
    TARGET_STRING(""), 9, 1, 0, 0, 1 },

  { 195, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p11"),
    TARGET_STRING(""), 10, 1, 0, 0, 1 },

  { 196, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p12"),
    TARGET_STRING(""), 11, 1, 0, 0, 1 },

  { 197, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p13"),
    TARGET_STRING(""), 12, 1, 0, 0, 1 },

  { 198, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p14"),
    TARGET_STRING(""), 13, 1, 0, 0, 1 },

  { 199, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p15"),
    TARGET_STRING(""), 14, 1, 0, 0, 1 },

  { 200, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 2/p16"),
    TARGET_STRING(""), 15, 1, 0, 0, 1 },

  { 201, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 3/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 202, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 3/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 203, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 3/p3"),
    TARGET_STRING(""), 2, 3, 0, 0, 0 },

  { 204, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 3/p4"),
    TARGET_STRING(""), 3, 3, 0, 0, 0 },

  { 205, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 4/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 206, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 4/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 1 },

  { 207, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 5/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 208, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 5/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 209, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 5/p3"),
    TARGET_STRING(""), 2, 3, 0, 0, 0 },

  { 210, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 6/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 211, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 6/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 212, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 7/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 213, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 7/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 214, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 7/p3"),
    TARGET_STRING(""), 2, 3, 0, 0, 0 },

  { 215, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 7/p4"),
    TARGET_STRING(""), 3, 3, 0, 0, 0 },

  { 216, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 9/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 217, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 9/p2"),
    TARGET_STRING(""), 1, 3, 0, 0, 0 },

  { 218, 0, TARGET_STRING("chuanganqi1/CAN bit-unpacking 9/p3"),
    TARGET_STRING(""), 2, 3, 0, 0, 0 },

  { 219, 0, TARGET_STRING("chuanganqi1/kaiguangaiweiyi3402"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 220, 0, TARGET_STRING("chuanganqi1/liuliangji_fuqiuyeweiji3402/p1"),
    TARGET_STRING("liuliangji"), 0, 0, 0, 0, 0 },

  { 221, 0, TARGET_STRING("chuanganqi1/liuliangji_fuqiuyeweiji3402/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 222, 0, TARGET_STRING("chuanganqi1/tonggai1808Receive"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 223, 0, TARGET_STRING("chuanganqi1/tonggai3402Receive/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 224, 0, TARGET_STRING("chuanganqi1/tonggai3402Receive/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 225, 0, TARGET_STRING("chuanganqi1/yalichuanganqi3402/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 226, 0, TARGET_STRING("chuanganqi1/yalichuanganqi3402/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 227, 0, TARGET_STRING("chuanganqi1/Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 228, 0, TARGET_STRING("chuanganqi1/Manual Switch"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 229, 0, TARGET_STRING("chuanganqi1/Manual Switch1"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 230, 0, TARGET_STRING("chuanganqi1/Manual Switch2"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 231, 0, TARGET_STRING("chuanganqi1/Manual Switch3"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 232, 0, TARGET_STRING("chuanganqi1/Manual Switch4"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 233, 23, TARGET_STRING("Subsystem7/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 234, 23, TARGET_STRING("Subsystem7/Subsystem/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 235, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 236, TARGET_STRING("Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 237, TARGET_STRING("Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 238, TARGET_STRING("Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 239, TARGET_STRING("c"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 240, TARGET_STRING("constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 241, TARGET_STRING("s&#x521D;&#x59CB;&#x503C;1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 242, TARGET_STRING("s&#x521D;&#x59CB;&#x503C;3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 243, TARGET_STRING("&#x5173;&#x76D6;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 244, TARGET_STRING("&#x542F;&#x505C;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 245, TARGET_STRING("&#x5F00;1&#x5173;0"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 246, TARGET_STRING("&#x65CB;&#x677E;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 247, TARGET_STRING("&#x65CB;&#x677E;1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 248, TARGET_STRING("&#x65CB;&#x7D27;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 249, TARGET_STRING("&#x6BD4;&#x4F8B;&#x51CF;&#x538B;&#x9600;1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 250, TARGET_STRING("&#x89E3;&#x9501;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 251, TARGET_STRING("&#x9501;&#x5B9A;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 252, TARGET_STRING("&#x9600;&#x5F00;&#x53E3;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 253, TARGET_STRING("&#x9600;&#x5F00;&#x53E3;1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 254, TARGET_STRING("&#x9600;&#x5F00;&#x53E3;2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 255, TARGET_STRING("&#x9600;&#x5F00;&#x53E3;3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 256, TARGET_STRING("&#x9600;&#x5F00;&#x53E3;4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 257, TARGET_STRING("&#x9884;&#x65CB;&#x677E;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 258, TARGET_STRING("Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 259, TARGET_STRING("Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 260, TARGET_STRING("Gain10"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 261, TARGET_STRING("Gain11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 262, TARGET_STRING("Gain12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 263, TARGET_STRING("Gain13"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 264, TARGET_STRING("Gain14"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 265, TARGET_STRING("Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 266, TARGET_STRING("Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 267, TARGET_STRING("Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 268, TARGET_STRING("Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 269, TARGET_STRING("Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 270, TARGET_STRING("Gain7"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 271, TARGET_STRING("Gain8"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 272, TARGET_STRING("Gain9"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 273, TARGET_STRING("right1"),
    TARGET_STRING("InputValues"), 0, 5, 0 },

  { 274, TARGET_STRING("right1"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 275, TARGET_STRING("Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 276, TARGET_STRING("Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 277, TARGET_STRING("Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 278, TARGET_STRING("Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 279, TARGET_STRING("Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 280, TARGET_STRING("Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 281, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 282, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 283, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 284, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 285, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P5"), 0, 6, 0 },

  { 286, TARGET_STRING("PCI-6208A DA "),
    TARGET_STRING("P6"), 0, 6, 0 },

  { 287, TARGET_STRING("PCI1716DIO1"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 288, TARGET_STRING("PCI1716DIO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 289, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 290, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 291, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 292, TARGET_STRING("Analog Filter Design1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 293, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 294, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 295, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 296, TARGET_STRING("Analog Filter Design2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 297, TARGET_STRING("s"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 298, TARGET_STRING("s"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 299, TARGET_STRING("s"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 300, TARGET_STRING("s"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 301, TARGET_STRING("s1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 302, TARGET_STRING("s1"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 303, TARGET_STRING("s1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 304, TARGET_STRING("s1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 305, TARGET_STRING("s2"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 306, TARGET_STRING("s2"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 307, TARGET_STRING("s2"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 308, TARGET_STRING("s2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 309, TARGET_STRING("s3"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 310, TARGET_STRING("s3"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 311, TARGET_STRING("s3"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 312, TARGET_STRING("s3"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 313, TARGET_STRING("s4"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 314, TARGET_STRING("s4"),
    TARGET_STRING("B"), 0, 0, 0 },

  { 315, TARGET_STRING("s4"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 316, TARGET_STRING("s4"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 317, TARGET_STRING("Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 318, TARGET_STRING("Step"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 319, TARGET_STRING("Step"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 320, TARGET_STRING("Step1"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 321, TARGET_STRING("Step1"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 322, TARGET_STRING("Step1"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 323, TARGET_STRING("Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 324, TARGET_STRING("Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 325, TARGET_STRING("Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 326, TARGET_STRING("Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 327, TARGET_STRING("Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 328, TARGET_STRING("Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 329, TARGET_STRING("Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 330, TARGET_STRING("Manual Switch"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 331, TARGET_STRING("Subsystem/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 332, TARGET_STRING("Subsystem/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 333, TARGET_STRING("Subsystem1/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 334, TARGET_STRING("Subsystem1/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 335, TARGET_STRING("Subsystem2/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 336, TARGET_STRING("Subsystem2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 337, TARGET_STRING("Subsystem3/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 338, TARGET_STRING("Subsystem3/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 339, TARGET_STRING("Subsystem4/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 340, TARGET_STRING("Subsystem5/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 341, TARGET_STRING("Subsystem5/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 342, TARGET_STRING("Subsystem5/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 343, TARGET_STRING("Subsystem5/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 344, TARGET_STRING("Subsystem7/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 345, TARGET_STRING("Subsystem7/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 346, TARGET_STRING("Subsystem7/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 347, TARGET_STRING("Subsystem7/Delay1"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 348, TARGET_STRING("Subsystem7/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 349, TARGET_STRING("Subsystem8/Rate Limiter"),
    TARGET_STRING("RisingSlewLimit"), 0, 0, 0 },

  { 350, TARGET_STRING("Subsystem8/Rate Limiter"),
    TARGET_STRING("FallingSlewLimit"), 0, 0, 0 },

  { 351, TARGET_STRING("Subsystem9/Rate Limiter1"),
    TARGET_STRING("RisingSlewLimit"), 0, 0, 0 },

  { 352, TARGET_STRING("Subsystem9/Rate Limiter1"),
    TARGET_STRING("FallingSlewLimit"), 0, 0, 0 },

  { 353, TARGET_STRING("chuanganqi1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 354, TARGET_STRING("chuanganqi1/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 355, TARGET_STRING("chuanganqi1/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 356, TARGET_STRING("chuanganqi1/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 357, TARGET_STRING("chuanganqi1/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 358, TARGET_STRING("chuanganqi1/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 359, TARGET_STRING("chuanganqi1/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 360, TARGET_STRING("chuanganqi1/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 361, TARGET_STRING("chuanganqi1/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 362, TARGET_STRING("chuanganqi1/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 363, TARGET_STRING("chuanganqi1/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 364, TARGET_STRING("chuanganqi1/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 365, TARGET_STRING("chuanganqi1/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 366, TARGET_STRING("chuanganqi1/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 367, TARGET_STRING("chuanganqi1/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 368, TARGET_STRING("chuanganqi1/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 369, TARGET_STRING("chuanganqi1/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 370, TARGET_STRING("chuanganqi1/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 371, TARGET_STRING("chuanganqi1/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 372, TARGET_STRING("chuanganqi1/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 373, TARGET_STRING("chuanganqi1/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 374, TARGET_STRING("chuanganqi1/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 375, TARGET_STRING("chuanganqi1/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 376, TARGET_STRING("chuanganqi1/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 377, TARGET_STRING("chuanganqi1/Constant30"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 378, TARGET_STRING("chuanganqi1/Constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 379, TARGET_STRING("chuanganqi1/Constant32"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 380, TARGET_STRING("chuanganqi1/Constant33"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 381, TARGET_STRING("chuanganqi1/Constant34"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 382, TARGET_STRING("chuanganqi1/Constant35"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 383, TARGET_STRING("chuanganqi1/Constant36"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 384, TARGET_STRING("chuanganqi1/Constant37"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 385, TARGET_STRING("chuanganqi1/Constant38"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 386, TARGET_STRING("chuanganqi1/Constant39"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 387, TARGET_STRING("chuanganqi1/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 388, TARGET_STRING("chuanganqi1/Constant40"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 389, TARGET_STRING("chuanganqi1/Constant41"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 390, TARGET_STRING("chuanganqi1/Constant42"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 391, TARGET_STRING("chuanganqi1/Constant43"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 392, TARGET_STRING("chuanganqi1/Constant44"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 393, TARGET_STRING("chuanganqi1/Constant45"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 394, TARGET_STRING("chuanganqi1/Constant46"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 395, TARGET_STRING("chuanganqi1/Constant47"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 396, TARGET_STRING("chuanganqi1/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 397, TARGET_STRING("chuanganqi1/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 398, TARGET_STRING("chuanganqi1/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 399, TARGET_STRING("chuanganqi1/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 400, TARGET_STRING("chuanganqi1/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 401, TARGET_STRING("chuanganqi1/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 402, TARGET_STRING("chuanganqi1/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 403, TARGET_STRING("chuanganqi1/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 404, TARGET_STRING("chuanganqi1/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 405, TARGET_STRING("chuanganqi1/1-D Lookup Table3"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 406, TARGET_STRING("chuanganqi1/1-D Lookup Table3"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 407, TARGET_STRING("chuanganqi1/1-D Lookup Table4"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 408, TARGET_STRING("chuanganqi1/1-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 409, TARGET_STRING("chuanganqi1/1-D Lookup Table5"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 410, TARGET_STRING("chuanganqi1/1-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 411, TARGET_STRING("chuanganqi1/1-D Lookup Table6"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 412, TARGET_STRING("chuanganqi1/1-D Lookup Table6"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 413, TARGET_STRING("chuanganqi1/1-D Lookup Table7"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 414, TARGET_STRING("chuanganqi1/1-D Lookup Table7"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 415, TARGET_STRING("chuanganqi1/1-D Lookup Table8"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 416, TARGET_STRING("chuanganqi1/1-D Lookup Table8"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 417, TARGET_STRING("chuanganqi1/1-D Lookup Table9"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 418, TARGET_STRING("chuanganqi1/1-D Lookup Table9"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 419, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 420, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P2"), 0, 7, 0 },

  { 421, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 422, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P4"), 0, 6, 0 },

  { 423, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P5"), 0, 7, 0 },

  { 424, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P11"), 0, 6, 0 },

  { 425, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 426, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 427, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 428, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 429, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 430, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 431, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 432, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 433, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 434, TARGET_STRING("chuanganqi1/Setup "),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 435, TARGET_STRING("chuanganqi1/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 436, TARGET_STRING("chuanganqi1/Step"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 437, TARGET_STRING("chuanganqi1/Step"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 438, TARGET_STRING("chuanganqi1/Manual Switch"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 439, TARGET_STRING("chuanganqi1/Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 440, TARGET_STRING("chuanganqi1/Manual Switch2"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 441, TARGET_STRING("chuanganqi1/Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 442, TARGET_STRING("chuanganqi1/Manual Switch4"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 443, TARGET_STRING("Subsystem7/Subsystem/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 444, TARGET_STRING("Subsystem7/Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 445, TARGET_STRING("S"), 0, 8, 0 },

  { 446, TARGET_STRING("Sgg"), 0, 8, 0 },

  { 447, TARGET_STRING("Ssx"), 0, 8, 0 },

  { 448, TARGET_STRING("V"), 0, 8, 0 },

  { 449, TARGET_STRING("Vgg"), 0, 8, 0 },

  { 450, TARGET_STRING("Vsx"), 0, 8, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &ceshi20210224_17_B.fa,              /* 0: Signal */
  &ceshi20210224_17_B.kaigaixinhao,    /* 1: Signal */
  &ceshi20210224_17_B.guangaixinhao,   /* 2: Signal */
  &ceshi20210224_17_B.kaigait,         /* 3: Signal */
  &ceshi20210224_17_B.guangait,        /* 4: Signal */
  &ceshi20210224_17_B.vroute,          /* 5: Signal */
  &ceshi20210224_17_B.yuxuansongt,     /* 6: Signal */
  &ceshi20210224_17_B.xuansongt,       /* 7: Signal */
  &ceshi20210224_17_B.c,               /* 8: Signal */
  &ceshi20210224_17_B.u_c,             /* 9: Signal */
  &ceshi20210224_17_B.u0,              /* 10: Signal */
  &ceshi20210224_17_B.u_g4,            /* 11: Signal */
  &ceshi20210224_17_B.u_gp,            /* 12: Signal */
  &ceshi20210224_17_B.u_hw,            /* 13: Signal */
  &ceshi20210224_17_B.u_g,             /* 14: Signal */
  &ceshi20210224_17_B.u,               /* 15: Signal */
  &ceshi20210224_17_B.u_i,             /* 16: Signal */
  &ceshi20210224_17_B.u_h,             /* 17: Signal */
  &ceshi20210224_17_B.DataTypeConversion,/* 18: Signal */
  &ceshi20210224_17_B.Derivative,      /* 19: Signal */
  &ceshi20210224_17_B.Derivative1,     /* 20: Signal */
  &ceshi20210224_17_B.Derivative2,     /* 21: Signal */
  &ceshi20210224_17_B.Derivative3,     /* 22: Signal */
  &ceshi20210224_17_B.Derivative4,     /* 23: Signal */
  &ceshi20210224_17_B.Gain,            /* 24: Signal */
  &ceshi20210224_17_B.Gain1,           /* 25: Signal */
  &ceshi20210224_17_B.Gain10,          /* 26: Signal */
  &ceshi20210224_17_B.Gain11,          /* 27: Signal */
  &ceshi20210224_17_B.Gain12,          /* 28: Signal */
  &ceshi20210224_17_B.Gain13,          /* 29: Signal */
  &ceshi20210224_17_B.Gain14,          /* 30: Signal */
  &ceshi20210224_17_B.Gain2,           /* 31: Signal */
  &ceshi20210224_17_B.Gain3,           /* 32: Signal */
  &ceshi20210224_17_B.Gain4,           /* 33: Signal */
  &ceshi20210224_17_B.Gain5,           /* 34: Signal */
  &ceshi20210224_17_B.Gain6,           /* 35: Signal */
  &ceshi20210224_17_B.Gain7,           /* 36: Signal */
  &ceshi20210224_17_B.Gain8,           /* 37: Signal */
  &ceshi20210224_17_B.Gain9,           /* 38: Signal */
  &ceshi20210224_17_B.u_b[0],          /* 39: Signal */
  &ceshi20210224_17_B.LogicalOperator, /* 40: Signal */
  &ceshi20210224_17_B.LogicalOperator1_l,/* 41: Signal */
  &ceshi20210224_17_B.LogicalOperator2_m,/* 42: Signal */
  &ceshi20210224_17_B.LogicalOperator3,/* 43: Signal */
  &ceshi20210224_17_B.right1,          /* 44: Signal */
  &ceshi20210224_17_B.Memory,          /* 45: Signal */
  &ceshi20210224_17_B.Memory1,         /* 46: Signal */
  &ceshi20210224_17_B.MultiportSwitch, /* 47: Signal */
  &ceshi20210224_17_B.MultiportSwitch1,/* 48: Signal */
  &ceshi20210224_17_B.shuchuliang,     /* 49: Signal */
  &ceshi20210224_17_B.Product[0],      /* 50: Signal */
  &ceshi20210224_17_B.Product2,        /* 51: Signal */
  &ceshi20210224_17_B.Product3,        /* 52: Signal */
  &ceshi20210224_17_B.Saturation1,     /* 53: Signal */
  &ceshi20210224_17_B.Saturation2,     /* 54: Signal */
  &ceshi20210224_17_B.PCI1716DIO1_o1[0],/* 55: Signal */
  &ceshi20210224_17_B.PCI1716DIO1_o2[0],/* 56: Signal */
  &ceshi20210224_17_B.vkg,             /* 57: Signal */
  &ceshi20210224_17_B.vgg,             /* 58: Signal */
  &ceshi20210224_17_B.s,               /* 59: Signal */
  &ceshi20210224_17_B.s1,              /* 60: Signal */
  &ceshi20210224_17_B.s2,              /* 61: Signal */
  &ceshi20210224_17_B.s3,              /* 62: Signal */
  &ceshi20210224_17_B.s4,              /* 63: Signal */
  &ceshi20210224_17_B.Step_o,          /* 64: Signal */
  &ceshi20210224_17_B.Step1,           /* 65: Signal */
  &ceshi20210224_17_B.Add1,            /* 66: Signal */
  &ceshi20210224_17_B.Add2,            /* 67: Signal */
  &ceshi20210224_17_B.Add3,            /* 68: Signal */
  &ceshi20210224_17_B.Add4,            /* 69: Signal */
  &ceshi20210224_17_B.s_k,             /* 70: Signal */
  &ceshi20210224_17_B.Sum,             /* 71: Signal */
  &ceshi20210224_17_B.Sum1,            /* 72: Signal */
  &ceshi20210224_17_B.chazhi,          /* 73: Signal */
  &ceshi20210224_17_B.chazhi1,         /* 74: Signal */
  &ceshi20210224_17_B.shuchuliang1,    /* 75: Signal */
  &ceshi20210224_17_B.shuchuliang2,    /* 76: Signal */
  &ceshi20210224_17_B.Switch,          /* 77: Signal */
  &ceshi20210224_17_B.Switch1_n,       /* 78: Signal */
  &ceshi20210224_17_B.Switch2_k,       /* 79: Signal */
  &ceshi20210224_17_B.Switch3,         /* 80: Signal */
  &ceshi20210224_17_B.zongsudu,        /* 81: Signal */
  &ceshi20210224_17_B.Switch5,         /* 82: Signal */
  &ceshi20210224_17_B.Switch6,         /* 83: Signal */
  &ceshi20210224_17_B.ManualSwitch,    /* 84: Signal */
  &ceshi20210224_17_B.Subsystem_d.Integrator,/* 85: Signal */
  &ceshi20210224_17_B.Subsystem1.Integrator,/* 86: Signal */
  &ceshi20210224_17_B.Add_n,           /* 87: Signal */
  &ceshi20210224_17_B.Add_c,           /* 88: Signal */
  &ceshi20210224_17_B.In1,             /* 89: Signal */
  &ceshi20210224_17_B.qiwangv,         /* 90: Signal */
  &ceshi20210224_17_B.Switch1[0],      /* 91: Signal */
  &ceshi20210224_17_B.Switch2,         /* 92: Signal */
  &ceshi20210224_17_B.Switch6_l[0],    /* 93: Signal */
  &ceshi20210224_17_B.qiwangv1,        /* 94: Signal */
  &ceshi20210224_17_B.LogicalOperator_d,/* 95: Signal */
  &ceshi20210224_17_B.Switch2_n,       /* 96: Signal */
  &ceshi20210224_17_B.Delay,           /* 97: Signal */
  &ceshi20210224_17_B.Delay1,          /* 98: Signal */
  &ceshi20210224_17_B.DataTypeConversion_d,/* 99: Signal */
  &ceshi20210224_17_B.LogicalOperator2_g,/* 100: Signal */
  &ceshi20210224_17_B.Product1_j,      /* 101: Signal */
  &ceshi20210224_17_B.RateLimiter,     /* 102: Signal */
  &ceshi20210224_17_B.DataTypeConversion_f,/* 103: Signal */
  &ceshi20210224_17_B.LogicalOperator2,/* 104: Signal */
  &ceshi20210224_17_B.Product1,        /* 105: Signal */
  &ceshi20210224_17_B.RateLimiter1,    /* 106: Signal */
  &ceshi20210224_17_B.DataTypeConversion_e,/* 107: Signal */
  &ceshi20210224_17_B.DataTypeConversion1,/* 108: Signal */
  &ceshi20210224_17_B.DataTypeConversion10,/* 109: Signal */
  &ceshi20210224_17_B.DataTypeConversion11,/* 110: Signal */
  &ceshi20210224_17_B.DataTypeConversion12,/* 111: Signal */
  &ceshi20210224_17_B.DataTypeConversion13,/* 112: Signal */
  &ceshi20210224_17_B.DataTypeConversion14,/* 113: Signal */
  &ceshi20210224_17_B.DataTypeConversion15,/* 114: Signal */
  &ceshi20210224_17_B.DataTypeConversion16,/* 115: Signal */
  &ceshi20210224_17_B.DataTypeConversion17,/* 116: Signal */
  &ceshi20210224_17_B.DataTypeConversion18,/* 117: Signal */
  &ceshi20210224_17_B.DataTypeConversion19,/* 118: Signal */
  &ceshi20210224_17_B.DataTypeConversion2,/* 119: Signal */
  &ceshi20210224_17_B.DataTypeConversion20,/* 120: Signal */
  &ceshi20210224_17_B.DataTypeConversion21,/* 121: Signal */
  &ceshi20210224_17_B.DataTypeConversion22,/* 122: Signal */
  &ceshi20210224_17_B.DataTypeConversion23,/* 123: Signal */
  &ceshi20210224_17_B.DataTypeConversion24,/* 124: Signal */
  &ceshi20210224_17_B.DataTypeConversion25,/* 125: Signal */
  &ceshi20210224_17_B.DataTypeConversion26,/* 126: Signal */
  &ceshi20210224_17_B.DataTypeConversion27,/* 127: Signal */
  &ceshi20210224_17_B.DataTypeConversion28,/* 128: Signal */
  &ceshi20210224_17_B.DataTypeConversion29,/* 129: Signal */
  &ceshi20210224_17_B.DataTypeConversion3,/* 130: Signal */
  &ceshi20210224_17_B.DataTypeConversion30,/* 131: Signal */
  &ceshi20210224_17_B.DataTypeConversion31,/* 132: Signal */
  &ceshi20210224_17_B.DataTypeConversion32,/* 133: Signal */
  &ceshi20210224_17_B.DataTypeConversion33,/* 134: Signal */
  &ceshi20210224_17_B.DataTypeConversion34,/* 135: Signal */
  &ceshi20210224_17_B.DataTypeConversion35,/* 136: Signal */
  &ceshi20210224_17_B.DataTypeConversion36,/* 137: Signal */
  &ceshi20210224_17_B.DataTypeConversion37,/* 138: Signal */
  &ceshi20210224_17_B.DataTypeConversion38,/* 139: Signal */
  &ceshi20210224_17_B.DataTypeConversion39,/* 140: Signal */
  &ceshi20210224_17_B.DataTypeConversion4,/* 141: Signal */
  &ceshi20210224_17_B.DataTypeConversion40,/* 142: Signal */
  &ceshi20210224_17_B.DataTypeConversion41,/* 143: Signal */
  &ceshi20210224_17_B.DataTypeConversion42,/* 144: Signal */
  &ceshi20210224_17_B.DataTypeConversion43,/* 145: Signal */
  &ceshi20210224_17_B.DataTypeConversion44,/* 146: Signal */
  &ceshi20210224_17_B.DataTypeConversion45,/* 147: Signal */
  &ceshi20210224_17_B.DataTypeConversion46,/* 148: Signal */
  &ceshi20210224_17_B.DataTypeConversion47,/* 149: Signal */
  &ceshi20210224_17_B.DataTypeConversion48,/* 150: Signal */
  &ceshi20210224_17_B.DataTypeConversion49,/* 151: Signal */
  &ceshi20210224_17_B.DataTypeConversion5,/* 152: Signal */
  &ceshi20210224_17_B.DataTypeConversion50,/* 153: Signal */
  &ceshi20210224_17_B.DataTypeConversion51,/* 154: Signal */
  &ceshi20210224_17_B.DataTypeConversion52,/* 155: Signal */
  &ceshi20210224_17_B.DataTypeConversion53,/* 156: Signal */
  &ceshi20210224_17_B.DataTypeConversion54,/* 157: Signal */
  &ceshi20210224_17_B.DataTypeConversion55,/* 158: Signal */
  &ceshi20210224_17_B.DataTypeConversion56,/* 159: Signal */
  &ceshi20210224_17_B.DataTypeConversion57,/* 160: Signal */
  &ceshi20210224_17_B.DataTypeConversion58,/* 161: Signal */
  &ceshi20210224_17_B.DataTypeConversion59,/* 162: Signal */
  &ceshi20210224_17_B.DataTypeConversion6,/* 163: Signal */
  &ceshi20210224_17_B.DataTypeConversion60,/* 164: Signal */
  &ceshi20210224_17_B.DataTypeConversion61,/* 165: Signal */
  &ceshi20210224_17_B.DataTypeConversion7,/* 166: Signal */
  &ceshi20210224_17_B.DataTypeConversion8,/* 167: Signal */
  &ceshi20210224_17_B.DataTypeConversion9,/* 168: Signal */
  &ceshi20210224_17_B.LogicalOperator1[0],/* 169: Signal */
  &ceshi20210224_17_B.uDLookupTable1,  /* 170: Signal */
  &ceshi20210224_17_B.uDLookupTable2,  /* 171: Signal */
  &ceshi20210224_17_B.uDLookupTable3,  /* 172: Signal */
  &ceshi20210224_17_B.uDLookupTable4,  /* 173: Signal */
  &ceshi20210224_17_B.uDLookupTable5,  /* 174: Signal */
  &ceshi20210224_17_B.uDLookupTable6,  /* 175: Signal */
  &ceshi20210224_17_B.uDLookupTable7,  /* 176: Signal */
  &ceshi20210224_17_B.uDLookupTable8,  /* 177: Signal */
  &ceshi20210224_17_B.uDLookupTable9,  /* 178: Signal */
  &ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[0],/* 179: Signal */
  &ceshi20210224_17_B.CANbitpacking,   /* 180: Signal */
  &ceshi20210224_17_B.CANbitpacking1,  /* 181: Signal */
  &ceshi20210224_17_B.CANbitpacking2,  /* 182: Signal */
  &ceshi20210224_17_B.CANbitpacking3,  /* 183: Signal */
  &ceshi20210224_17_B.CANbitpacking4,  /* 184: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o1,/* 185: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o2,/* 186: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o3,/* 187: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o4,/* 188: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o5,/* 189: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o6,/* 190: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o7,/* 191: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o8,/* 192: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o9,/* 193: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o10,/* 194: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o11,/* 195: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o12,/* 196: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o13,/* 197: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o14,/* 198: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o15,/* 199: Signal */
  &ceshi20210224_17_B.CANbitunpacking2_o16,/* 200: Signal */
  &ceshi20210224_17_B.CANbitunpacking3_o1,/* 201: Signal */
  &ceshi20210224_17_B.CANbitunpacking3_o2,/* 202: Signal */
  &ceshi20210224_17_B.CANbitunpacking3_o3,/* 203: Signal */
  &ceshi20210224_17_B.CANbitunpacking3_o4,/* 204: Signal */
  &ceshi20210224_17_B.CANbitunpacking4_o1,/* 205: Signal */
  &ceshi20210224_17_B.CANbitunpacking4_o2,/* 206: Signal */
  &ceshi20210224_17_B.CANbitunpacking5_o1,/* 207: Signal */
  &ceshi20210224_17_B.CANbitunpacking5_o2,/* 208: Signal */
  &ceshi20210224_17_B.CANbitunpacking5_o3,/* 209: Signal */
  &ceshi20210224_17_B.CANbitunpacking6_o1,/* 210: Signal */
  &ceshi20210224_17_B.CANbitunpacking6_o2,/* 211: Signal */
  &ceshi20210224_17_B.CANbitunpacking7_o1,/* 212: Signal */
  &ceshi20210224_17_B.CANbitunpacking7_o2,/* 213: Signal */
  &ceshi20210224_17_B.CANbitunpacking7_o3,/* 214: Signal */
  &ceshi20210224_17_B.CANbitunpacking7_o4,/* 215: Signal */
  &ceshi20210224_17_B.CANbitunpacking9_o1,/* 216: Signal */
  &ceshi20210224_17_B.CANbitunpacking9_o2,/* 217: Signal */
  &ceshi20210224_17_B.CANbitunpacking9_o3,/* 218: Signal */
  &ceshi20210224_17_B.kaiguangaiweiyi3402,/* 219: Signal */
  &ceshi20210224_17_B.liuliangji,      /* 220: Signal */
  &ceshi20210224_17_B.liuliangji_fuqiuyeweiji3402_o2,/* 221: Signal */
  &ceshi20210224_17_B.tonggai1808Receive,/* 222: Signal */
  &ceshi20210224_17_B.tonggai3402Receive_o1,/* 223: Signal */
  &ceshi20210224_17_B.tonggai3402Receive_o2,/* 224: Signal */
  &ceshi20210224_17_B.yalichuanganqi3402_o1,/* 225: Signal */
  &ceshi20210224_17_B.yalichuanganqi3402_o2,/* 226: Signal */
  &ceshi20210224_17_B.Step,            /* 227: Signal */
  &ceshi20210224_17_B.ManualSwitch_c[0],/* 228: Signal */
  &ceshi20210224_17_B.ManualSwitch1[0],/* 229: Signal */
  &ceshi20210224_17_B.ManualSwitch2[0],/* 230: Signal */
  &ceshi20210224_17_B.ManualSwitch3[0],/* 231: Signal */
  &ceshi20210224_17_B.ManualSwitch4[0],/* 232: Signal */
  &ceshi20210224_17_B.Gain_c,          /* 233: Signal */
  &ceshi20210224_17_B.Add,             /* 234: Signal */
  &ceshi20210224_17_P.Constant_Value,  /* 235: Block Parameter */
  &ceshi20210224_17_P.Constant2_Value, /* 236: Block Parameter */
  &ceshi20210224_17_P.Constant3_Value_e,/* 237: Block Parameter */
  &ceshi20210224_17_P.Constant6_Value, /* 238: Block Parameter */
  &ceshi20210224_17_P.c_Value,         /* 239: Block Parameter */
  &ceshi20210224_17_P.constant1_Value, /* 240: Block Parameter */
  &ceshi20210224_17_P.s1_Value,        /* 241: Block Parameter */
  &ceshi20210224_17_P.s3_Value,        /* 242: Block Parameter */
  &ceshi20210224_17_P._Value_fb,       /* 243: Block Parameter */
  &ceshi20210224_17_P._Value_n5,       /* 244: Block Parameter */
  &ceshi20210224_17_P.u0_Value,        /* 245: Block Parameter */
  &ceshi20210224_17_P._Value_f,        /* 246: Block Parameter */
  &ceshi20210224_17_P.u_Value,         /* 247: Block Parameter */
  &ceshi20210224_17_P._Value_n,        /* 248: Block Parameter */
  &ceshi20210224_17_P.u_Value_i,       /* 249: Block Parameter */
  &ceshi20210224_17_P._Value_k,        /* 250: Block Parameter */
  &ceshi20210224_17_P._Value,          /* 251: Block Parameter */
  &ceshi20210224_17_P._Value_l,        /* 252: Block Parameter */
  &ceshi20210224_17_P.u_Value_n,       /* 253: Block Parameter */
  &ceshi20210224_17_P.u_Value_d,       /* 254: Block Parameter */
  &ceshi20210224_17_P.u_Value_p,       /* 255: Block Parameter */
  &ceshi20210224_17_P.u_Value_l,       /* 256: Block Parameter */
  &ceshi20210224_17_P._Value_f1,       /* 257: Block Parameter */
  &ceshi20210224_17_P.Gain_Gain_a,     /* 258: Block Parameter */
  &ceshi20210224_17_P.Gain1_Gain,      /* 259: Block Parameter */
  &ceshi20210224_17_P.Gain10_Gain,     /* 260: Block Parameter */
  &ceshi20210224_17_P.Gain11_Gain,     /* 261: Block Parameter */
  &ceshi20210224_17_P.Gain12_Gain,     /* 262: Block Parameter */
  &ceshi20210224_17_P.Gain13_Gain,     /* 263: Block Parameter */
  &ceshi20210224_17_P.Gain14_Gain,     /* 264: Block Parameter */
  &ceshi20210224_17_P.Gain2_Gain,      /* 265: Block Parameter */
  &ceshi20210224_17_P.Gain3_Gain,      /* 266: Block Parameter */
  &ceshi20210224_17_P.Gain4_Gain,      /* 267: Block Parameter */
  &ceshi20210224_17_P.Gain5_Gain,      /* 268: Block Parameter */
  &ceshi20210224_17_P.Gain6_Gain,      /* 269: Block Parameter */
  &ceshi20210224_17_P.Gain7_Gain,      /* 270: Block Parameter */
  &ceshi20210224_17_P.Gain8_Gain,      /* 271: Block Parameter */
  &ceshi20210224_17_P.Gain9_Gain,      /* 272: Block Parameter */
  &ceshi20210224_17_P.right1_XData[0], /* 273: Block Parameter */
  &ceshi20210224_17_P.right1_YData[0], /* 274: Block Parameter */
  &ceshi20210224_17_P.Memory_X0,       /* 275: Block Parameter */
  &ceshi20210224_17_P.Memory1_X0,      /* 276: Block Parameter */
  &ceshi20210224_17_P.Saturation1_UpperSat,/* 277: Block Parameter */
  &ceshi20210224_17_P.Saturation1_LowerSat,/* 278: Block Parameter */
  &ceshi20210224_17_P.Saturation2_UpperSat,/* 279: Block Parameter */
  &ceshi20210224_17_P.Saturation2_LowerSat,/* 280: Block Parameter */
  &ceshi20210224_17_P.PCI6208ADA_P1[0],/* 281: Block Parameter */
  &ceshi20210224_17_P.PCI6208ADA_P2,   /* 282: Block Parameter */
  &ceshi20210224_17_P.PCI6208ADA_P3,   /* 283: Block Parameter */
  &ceshi20210224_17_P.PCI6208ADA_P4,   /* 284: Block Parameter */
  &ceshi20210224_17_P.PCI6208ADA_P5[0],/* 285: Block Parameter */
  &ceshi20210224_17_P.PCI6208ADA_P6[0],/* 286: Block Parameter */
  &ceshi20210224_17_P.PCI1716DIO1_P1[0],/* 287: Block Parameter */
  &ceshi20210224_17_P.PCI1716DIO1_P2,  /* 288: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign1_A,/* 289: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign1_B,/* 290: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign1_C,/* 291: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign1_X0,/* 292: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign2_A,/* 293: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign2_B,/* 294: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign2_C,/* 295: Block Parameter */
  &ceshi20210224_17_P.AnalogFilterDesign2_X0,/* 296: Block Parameter */
  &ceshi20210224_17_P.s_A,             /* 297: Block Parameter */
  &ceshi20210224_17_P.s_B,             /* 298: Block Parameter */
  &ceshi20210224_17_P.s_C,             /* 299: Block Parameter */
  &ceshi20210224_17_P.s_X0,            /* 300: Block Parameter */
  &ceshi20210224_17_P.s1_A,            /* 301: Block Parameter */
  &ceshi20210224_17_P.s1_B,            /* 302: Block Parameter */
  &ceshi20210224_17_P.s1_C,            /* 303: Block Parameter */
  &ceshi20210224_17_P.s1_X0,           /* 304: Block Parameter */
  &ceshi20210224_17_P.s2_A,            /* 305: Block Parameter */
  &ceshi20210224_17_P.s2_B,            /* 306: Block Parameter */
  &ceshi20210224_17_P.s2_C,            /* 307: Block Parameter */
  &ceshi20210224_17_P.s2_X0,           /* 308: Block Parameter */
  &ceshi20210224_17_P.s3_A,            /* 309: Block Parameter */
  &ceshi20210224_17_P.s3_B,            /* 310: Block Parameter */
  &ceshi20210224_17_P.s3_C,            /* 311: Block Parameter */
  &ceshi20210224_17_P.s3_X0,           /* 312: Block Parameter */
  &ceshi20210224_17_P.s4_A,            /* 313: Block Parameter */
  &ceshi20210224_17_P.s4_B,            /* 314: Block Parameter */
  &ceshi20210224_17_P.s4_C,            /* 315: Block Parameter */
  &ceshi20210224_17_P.s4_X0,           /* 316: Block Parameter */
  &ceshi20210224_17_P.Step_Time_l,     /* 317: Block Parameter */
  &ceshi20210224_17_P.Step_Y0_f,       /* 318: Block Parameter */
  &ceshi20210224_17_P.Step_YFinal_i,   /* 319: Block Parameter */
  &ceshi20210224_17_P.Step1_Time,      /* 320: Block Parameter */
  &ceshi20210224_17_P.Step1_Y0,        /* 321: Block Parameter */
  &ceshi20210224_17_P.Step1_YFinal,    /* 322: Block Parameter */
  &ceshi20210224_17_P.Switch_Threshold,/* 323: Block Parameter */
  &ceshi20210224_17_P.Switch1_Threshold_i,/* 324: Block Parameter */
  &ceshi20210224_17_P.Switch2_Threshold_m,/* 325: Block Parameter */
  &ceshi20210224_17_P.Switch3_Threshold,/* 326: Block Parameter */
  &ceshi20210224_17_P.Switch4_Threshold,/* 327: Block Parameter */
  &ceshi20210224_17_P.Switch5_Threshold,/* 328: Block Parameter */
  &ceshi20210224_17_P.Switch6_Threshold,/* 329: Block Parameter */
  &ceshi20210224_17_P.ManualSwitch_CurrentSetting,/* 330: Block Parameter */
  &ceshi20210224_17_P.Subsystem_d.Out1_Y0,/* 331: Block Parameter */
  &ceshi20210224_17_P.Subsystem_d.Integrator_IC,/* 332: Block Parameter */
  &ceshi20210224_17_P.Subsystem1.Out1_Y0,/* 333: Block Parameter */
  &ceshi20210224_17_P.Subsystem1.Integrator_IC,/* 334: Block Parameter */
  &ceshi20210224_17_P.Out1_Y0,         /* 335: Block Parameter */
  &ceshi20210224_17_P.Constant_Value_g,/* 336: Block Parameter */
  &ceshi20210224_17_P.Out1_Y0_c,       /* 337: Block Parameter */
  &ceshi20210224_17_P.Constant_Value_b,/* 338: Block Parameter */
  &ceshi20210224_17_P.Out1_Y0_n,       /* 339: Block Parameter */
  &ceshi20210224_17_P.Constant3_Value, /* 340: Block Parameter */
  &ceshi20210224_17_P.Switch1_Threshold,/* 341: Block Parameter */
  &ceshi20210224_17_P.Switch2_Threshold,/* 342: Block Parameter */
  &ceshi20210224_17_P.Switch6_Threshold_j,/* 343: Block Parameter */
  &ceshi20210224_17_P.Switch2_Threshold_l,/* 344: Block Parameter */
  &ceshi20210224_17_P.Delay_DelayLength,/* 345: Block Parameter */
  &ceshi20210224_17_P.Delay_InitialCondition,/* 346: Block Parameter */
  &ceshi20210224_17_P.Delay1_DelayLength,/* 347: Block Parameter */
  &ceshi20210224_17_P.Delay1_InitialCondition,/* 348: Block Parameter */
  &ceshi20210224_17_P.RateLimiter_RisingLim,/* 349: Block Parameter */
  &ceshi20210224_17_P.RateLimiter_FallingLim,/* 350: Block Parameter */
  &ceshi20210224_17_P.RateLimiter1_RisingLim,/* 351: Block Parameter */
  &ceshi20210224_17_P.RateLimiter1_FallingLim,/* 352: Block Parameter */
  &ceshi20210224_17_P.Constant_Value_a,/* 353: Block Parameter */
  &ceshi20210224_17_P.Constant1_Value, /* 354: Block Parameter */
  &ceshi20210224_17_P.Constant10_Value,/* 355: Block Parameter */
  &ceshi20210224_17_P.Constant11_Value,/* 356: Block Parameter */
  &ceshi20210224_17_P.Constant12_Value,/* 357: Block Parameter */
  &ceshi20210224_17_P.Constant13_Value,/* 358: Block Parameter */
  &ceshi20210224_17_P.Constant14_Value,/* 359: Block Parameter */
  &ceshi20210224_17_P.Constant15_Value,/* 360: Block Parameter */
  &ceshi20210224_17_P.Constant16_Value,/* 361: Block Parameter */
  &ceshi20210224_17_P.Constant17_Value,/* 362: Block Parameter */
  &ceshi20210224_17_P.Constant18_Value,/* 363: Block Parameter */
  &ceshi20210224_17_P.Constant19_Value,/* 364: Block Parameter */
  &ceshi20210224_17_P.Constant2_Value_n,/* 365: Block Parameter */
  &ceshi20210224_17_P.Constant20_Value,/* 366: Block Parameter */
  &ceshi20210224_17_P.Constant21_Value,/* 367: Block Parameter */
  &ceshi20210224_17_P.Constant22_Value,/* 368: Block Parameter */
  &ceshi20210224_17_P.Constant23_Value,/* 369: Block Parameter */
  &ceshi20210224_17_P.Constant24_Value,/* 370: Block Parameter */
  &ceshi20210224_17_P.Constant25_Value,/* 371: Block Parameter */
  &ceshi20210224_17_P.Constant26_Value,/* 372: Block Parameter */
  &ceshi20210224_17_P.Constant27_Value,/* 373: Block Parameter */
  &ceshi20210224_17_P.Constant28_Value,/* 374: Block Parameter */
  &ceshi20210224_17_P.Constant29_Value,/* 375: Block Parameter */
  &ceshi20210224_17_P.Constant3_Value_j,/* 376: Block Parameter */
  &ceshi20210224_17_P.Constant30_Value,/* 377: Block Parameter */
  &ceshi20210224_17_P.Constant31_Value,/* 378: Block Parameter */
  &ceshi20210224_17_P.Constant32_Value,/* 379: Block Parameter */
  &ceshi20210224_17_P.Constant33_Value,/* 380: Block Parameter */
  &ceshi20210224_17_P.Constant34_Value,/* 381: Block Parameter */
  &ceshi20210224_17_P.Constant35_Value,/* 382: Block Parameter */
  &ceshi20210224_17_P.Constant36_Value,/* 383: Block Parameter */
  &ceshi20210224_17_P.Constant37_Value,/* 384: Block Parameter */
  &ceshi20210224_17_P.Constant38_Value,/* 385: Block Parameter */
  &ceshi20210224_17_P.Constant39_Value,/* 386: Block Parameter */
  &ceshi20210224_17_P.Constant4_Value, /* 387: Block Parameter */
  &ceshi20210224_17_P.Constant40_Value,/* 388: Block Parameter */
  &ceshi20210224_17_P.Constant41_Value,/* 389: Block Parameter */
  &ceshi20210224_17_P.Constant42_Value,/* 390: Block Parameter */
  &ceshi20210224_17_P.Constant43_Value,/* 391: Block Parameter */
  &ceshi20210224_17_P.Constant44_Value,/* 392: Block Parameter */
  &ceshi20210224_17_P.Constant45_Value,/* 393: Block Parameter */
  &ceshi20210224_17_P.Constant46_Value,/* 394: Block Parameter */
  &ceshi20210224_17_P.Constant47_Value,/* 395: Block Parameter */
  &ceshi20210224_17_P.Constant5_Value, /* 396: Block Parameter */
  &ceshi20210224_17_P.Constant6_Value_n,/* 397: Block Parameter */
  &ceshi20210224_17_P.Constant7_Value, /* 398: Block Parameter */
  &ceshi20210224_17_P.Constant8_Value, /* 399: Block Parameter */
  &ceshi20210224_17_P.Constant9_Value, /* 400: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable1_tableData[0],/* 401: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable1_bp01Data[0],/* 402: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable2_tableData[0],/* 403: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable2_bp01Data[0],/* 404: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable3_tableData[0],/* 405: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable3_bp01Data[0],/* 406: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable4_tableData[0],/* 407: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable4_bp01Data[0],/* 408: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable5_tableData[0],/* 409: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable5_bp01Data[0],/* 410: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable6_tableData[0],/* 411: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable6_bp01Data[0],/* 412: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable7_tableData[0],/* 413: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable7_bp01Data[0],/* 414: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable8_tableData[0],/* 415: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable8_bp01Data[0],/* 416: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable9_tableData[0],/* 417: Block Parameter */
  &ceshi20210224_17_P.uDLookupTable9_bp01Data[0],/* 418: Block Parameter */
  &ceshi20210224_17_P.Setup_P1[0],     /* 419: Block Parameter */
  &ceshi20210224_17_P.Setup_P2[0],     /* 420: Block Parameter */
  &ceshi20210224_17_P.Setup_P3,        /* 421: Block Parameter */
  &ceshi20210224_17_P.Setup_P4[0],     /* 422: Block Parameter */
  &ceshi20210224_17_P.Setup_P5[0],     /* 423: Block Parameter */
  &ceshi20210224_17_P.Setup_P11[0],    /* 424: Block Parameter */
  &ceshi20210224_17_P.Setup_P15,       /* 425: Block Parameter */
  &ceshi20210224_17_P.Setup_P16,       /* 426: Block Parameter */
  &ceshi20210224_17_P.Setup_P17,       /* 427: Block Parameter */
  &ceshi20210224_17_P.Setup_P18,       /* 428: Block Parameter */
  &ceshi20210224_17_P.Setup_P19,       /* 429: Block Parameter */
  &ceshi20210224_17_P.Setup_P20,       /* 430: Block Parameter */
  &ceshi20210224_17_P.Setup_P21,       /* 431: Block Parameter */
  &ceshi20210224_17_P.Setup_P22,       /* 432: Block Parameter */
  &ceshi20210224_17_P.Setup_P23,       /* 433: Block Parameter */
  &ceshi20210224_17_P.Setup_P24,       /* 434: Block Parameter */
  &ceshi20210224_17_P.Step_Time,       /* 435: Block Parameter */
  &ceshi20210224_17_P.Step_Y0,         /* 436: Block Parameter */
  &ceshi20210224_17_P.Step_YFinal,     /* 437: Block Parameter */
  &ceshi20210224_17_P.ManualSwitch_CurrentSetting_b,/* 438: Block Parameter */
  &ceshi20210224_17_P.ManualSwitch1_CurrentSetting,/* 439: Block Parameter */
  &ceshi20210224_17_P.ManualSwitch2_CurrentSetting,/* 440: Block Parameter */
  &ceshi20210224_17_P.ManualSwitch3_CurrentSetting,/* 441: Block Parameter */
  &ceshi20210224_17_P.ManualSwitch4_CurrentSetting,/* 442: Block Parameter */
  &ceshi20210224_17_P.Out1_Y0_i,       /* 443: Block Parameter */
  &ceshi20210224_17_P.Gain_Gain,       /* 444: Block Parameter */
  &ceshi20210224_17_P.S[0],            /* 445: Model Parameter */
  &ceshi20210224_17_P.Sgg[0],          /* 446: Model Parameter */
  &ceshi20210224_17_P.Ssx[0],          /* 447: Model Parameter */
  &ceshi20210224_17_P.V[0],            /* 448: Model Parameter */
  &ceshi20210224_17_P.Vgg[0],          /* 449: Model Parameter */
  &ceshi20210224_17_P.Vsx[0],          /* 450: Model Parameter */
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

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

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
  2,                                   /* 2 */
  1,                                   /* 3 */
  8,                                   /* 4 */
  1,                                   /* 5 */
  16,                                  /* 6 */
  1,                                   /* 7 */
  80001,                               /* 8 */
  1,                                   /* 9 */
  1,                                   /* 10 */
  2,                                   /* 11 */
  1,                                   /* 12 */
  8,                                   /* 13 */
  1,                                   /* 14 */
  4,                                   /* 15 */
  1,                                   /* 16 */
  80001                                /* 17 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.01, 0.0
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
  { rtBlockSignals, 235,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 210,
    rtModelParameters, 6 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2119041428U,
    976593613U,
    2446599348U,
    590764802U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  ceshi20210224_17_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void ceshi20210224_17_InitializeDataMapInfo(RT_MODEL_ceshi20210224_17_T *const
  ceshi20210224_17_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(ceshi20210224_17_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(ceshi20210224_17_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(ceshi20210224_17_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(ceshi20210224_17_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(ceshi20210224_17_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  ceshi20210224_17_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(ceshi20210224_17_M);
  ceshi20210224_17_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_ceshi20210224_17_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(ceshi20210224_17_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(ceshi20210224_17_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(ceshi20210224_17_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void ceshi20210224_17_host_InitializeDataMapInfo
    (ceshi20210224_17_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: ceshi20210224_17_capi.c */
