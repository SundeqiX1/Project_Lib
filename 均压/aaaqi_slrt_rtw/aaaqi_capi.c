/*
 * aaaqi_capi.c
 *
 * Code generation for model "aaaqi".
 *
 * Model version              : 1.84
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 12 19:16:45 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "aaaqi_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "aaaqi.h"
#include "aaaqi_capi.h"
#include "aaaqi_private.h"
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
  { 0, 0, TARGET_STRING("diancifa11_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("diancifa11_4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("diancifa16_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("diancifa16_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("jiting"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("&#x51F8;&#x819C;&#x4E0A;&#x4E0B;&#x8154;&#x6700;&#x5927;&#x538B;&#x529B;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("&#x51F8;&#x819C;&#x4E0A;&#x4E0B;&#x8154;&#x6700;&#x5C0F;&#x538B;&#x529B;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("&#x5E26;&#x6C14;&#x6CE8;&#x6C34;&#x6700;&#x5927;&#x538B;&#x529B;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("&#x6C34;&#x8231;&#x6700;&#x5927;&#x538B;&#x529B;"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 10, 0, TARGET_STRING("Data Type Conversion10"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 11, 0, TARGET_STRING("Data Type Conversion11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Data Type Conversion12"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 13, 0, TARGET_STRING("Data Type Conversion13"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Data Type Conversion15"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 5, TARGET_STRING("Data Type Conversion16"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 3, TARGET_STRING("Data Type Conversion17"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Data Type Conversion18"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 9, TARGET_STRING("Data Type Conversion19"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 13, TARGET_STRING("Data Type Conversion20"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 11, TARGET_STRING("Data Type Conversion21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Data Type Conversion22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 7, TARGET_STRING("Data Type Conversion23"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Data Type Conversion24"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 26, 0, TARGET_STRING("Data Type Conversion25"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 27, 0, TARGET_STRING("Data Type Conversion26"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Data Type Conversion27"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 29, 0, TARGET_STRING("Data Type Conversion28"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("Data Type Conversion29"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Data Type Conversion30"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Data Type Conversion31"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Data Type Conversion32"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Data Type Conversion33"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Data Type Conversion34"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Data Type Conversion35"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 0, TARGET_STRING("Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 40, 0, TARGET_STRING("Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 42, 0, TARGET_STRING("Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING("Data Type Conversion9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 0, TARGET_STRING("Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 45, 0, TARGET_STRING("Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 46, 0, TARGET_STRING("Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 47, 0, TARGET_STRING("Logical Operator10"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Logical Operator11"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 49, 0, TARGET_STRING("Logical Operator12"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 50, 0, TARGET_STRING("Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING("Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 53, 0, TARGET_STRING("Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 54, 0, TARGET_STRING("Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 55, 0, TARGET_STRING("Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Logical Operator8"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Logical Operator9"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 58, 0, TARGET_STRING("1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Memory2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 0, TARGET_STRING("PCI-1784/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 0, TARGET_STRING("PCI-1784/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 64, 0, TARGET_STRING("PCI-1784/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 65, 0, TARGET_STRING("PCI-1784/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 66, 0, TARGET_STRING("PCI-1784/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 67, 0, TARGET_STRING("PCI-1784/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 68, 0, TARGET_STRING("PCI-1784/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 69, 0, TARGET_STRING("PCI-1784/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 70, 0, TARGET_STRING("Add"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 71, 0, TARGET_STRING("Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 73, 0, TARGET_STRING("Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 74, 0, TARGET_STRING("Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 76, 0, TARGET_STRING("Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 77, 0, TARGET_STRING("PCI1716/constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 78, 0, TARGET_STRING("PCI1716/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 79, 0, TARGET_STRING("PCI1716/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 0, TARGET_STRING("PCI1716/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 0, TARGET_STRING("PCI1716/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 82, 0, TARGET_STRING("PCI1716/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 83, 0, TARGET_STRING("PCI1716/PCI1716DIO1/p1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 84, 0, TARGET_STRING("PCI1716/PCI1716DIO1/p2"),
    TARGET_STRING(""), 1, 0, 8, 0, 0 },

  { 85, 0, TARGET_STRING("PCI6208/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 86, 0, TARGET_STRING("PCI6208/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING("PCI6208/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 88, 0, TARGET_STRING("PCI6208/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 89, 0, TARGET_STRING("PCI6208/Saturation3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 90, 0, TARGET_STRING("PCI6208/Saturation4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 91, 0, TARGET_STRING("PCI6208/Saturation5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 92, 0, TARGET_STRING("PCI6208/Saturation6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 0, TARGET_STRING("PCI6208/Saturation7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 94, 0, TARGET_STRING("Subsystem1/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 95, 0, TARGET_STRING("Subsystem1/Switch10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 96, 0, TARGET_STRING("Subsystem1/Switch11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 97, 0, TARGET_STRING("Subsystem1/Switch12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 98, 0, TARGET_STRING("Subsystem1/Switch13"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 99, 0, TARGET_STRING("Subsystem1/Switch14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 100, 0, TARGET_STRING("Subsystem1/Switch17"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 101, 0, TARGET_STRING("Subsystem1/Switch18"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 102, 0, TARGET_STRING("Subsystem1/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 103, 0, TARGET_STRING("Subsystem1/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 104, 0, TARGET_STRING("Subsystem1/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 105, 0, TARGET_STRING("Subsystem1/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 106, 0, TARGET_STRING("Subsystem1/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 107, 0, TARGET_STRING("Subsystem1/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Subsystem1/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 0, TARGET_STRING("Subsystem1/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 110, 0, TARGET_STRING("Subsystem2/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 111, 0, TARGET_STRING("Subsystem2/Data Type Conversion5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 112, 0, TARGET_STRING("Subsystem2/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 113, 0, TARGET_STRING("Subsystem2/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 114, 0, TARGET_STRING("Subsystem2/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 115, 0, TARGET_STRING("Subsystem2/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 116, 0, TARGET_STRING("Subsystem2/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 117, 0, TARGET_STRING("Subsystem2/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 8, 0, 0 },

  { 118, 0, TARGET_STRING("Subsystem2/Multiport Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 119, 0, TARGET_STRING("Subsystem2/Multiport Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 120, 141, TARGET_STRING("Subsystem4/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 142, TARGET_STRING("Subsystem5/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 122, 0, TARGET_STRING("chuanganqi/Data Type Conversion"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 123, 0, TARGET_STRING("chuanganqi/Data Type Conversion1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 124, 147, TARGET_STRING("chuanganqi/Data Type Conversion10"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 125, 147, TARGET_STRING("chuanganqi/Data Type Conversion11"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 126, 147, TARGET_STRING("chuanganqi/Data Type Conversion12"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 127, 147, TARGET_STRING("chuanganqi/Data Type Conversion13"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 128, 147, TARGET_STRING("chuanganqi/Data Type Conversion14"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 129, 147, TARGET_STRING("chuanganqi/Data Type Conversion15"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 130, 146, TARGET_STRING("chuanganqi/Data Type Conversion16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 131, 146, TARGET_STRING("chuanganqi/Data Type Conversion17"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 132, 146, TARGET_STRING("chuanganqi/Data Type Conversion18"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 133, 146, TARGET_STRING("chuanganqi/Data Type Conversion19"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 134, 0, TARGET_STRING("chuanganqi/Data Type Conversion2"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 135, 146, TARGET_STRING("chuanganqi/Data Type Conversion20"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 136, 146, TARGET_STRING("chuanganqi/Data Type Conversion21"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 137, 146, TARGET_STRING("chuanganqi/Data Type Conversion22"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 138, 146, TARGET_STRING("chuanganqi/Data Type Conversion23"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 139, 145, TARGET_STRING("chuanganqi/Data Type Conversion24"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 140, 145, TARGET_STRING("chuanganqi/Data Type Conversion25"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 141, 145, TARGET_STRING("chuanganqi/Data Type Conversion26"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 142, 145, TARGET_STRING("chuanganqi/Data Type Conversion27"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 143, 145, TARGET_STRING("chuanganqi/Data Type Conversion28"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 144, 145, TARGET_STRING("chuanganqi/Data Type Conversion29"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 145, 0, TARGET_STRING("chuanganqi/Data Type Conversion3"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 146, 145, TARGET_STRING("chuanganqi/Data Type Conversion30"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 147, 145, TARGET_STRING("chuanganqi/Data Type Conversion31"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 148, 144, TARGET_STRING("chuanganqi/Data Type Conversion32"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 149, 144, TARGET_STRING("chuanganqi/Data Type Conversion33"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 150, 144, TARGET_STRING("chuanganqi/Data Type Conversion34"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 151, 144, TARGET_STRING("chuanganqi/Data Type Conversion35"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 152, 144, TARGET_STRING("chuanganqi/Data Type Conversion36"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 153, 144, TARGET_STRING("chuanganqi/Data Type Conversion37"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 154, 144, TARGET_STRING("chuanganqi/Data Type Conversion38"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 155, 144, TARGET_STRING("chuanganqi/Data Type Conversion39"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 156, 0, TARGET_STRING("chuanganqi/Data Type Conversion4"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 157, 143, TARGET_STRING("chuanganqi/Data Type Conversion40"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 158, 143, TARGET_STRING("chuanganqi/Data Type Conversion41"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 159, 143, TARGET_STRING("chuanganqi/Data Type Conversion42"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 160, 143, TARGET_STRING("chuanganqi/Data Type Conversion43"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 161, 143, TARGET_STRING("chuanganqi/Data Type Conversion44"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 162, 143, TARGET_STRING("chuanganqi/Data Type Conversion45"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 163, 143, TARGET_STRING("chuanganqi/Data Type Conversion46"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 164, 143, TARGET_STRING("chuanganqi/Data Type Conversion47"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 165, 0, TARGET_STRING("chuanganqi/Data Type Conversion48"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 166, 0, TARGET_STRING("chuanganqi/Data Type Conversion49"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 167, 0, TARGET_STRING("chuanganqi/Data Type Conversion5"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 168, 0, TARGET_STRING("chuanganqi/Data Type Conversion50"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 169, 0, TARGET_STRING("chuanganqi/Data Type Conversion51"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 170, 0, TARGET_STRING("chuanganqi/Data Type Conversion52"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 171, 0, TARGET_STRING("chuanganqi/Data Type Conversion53"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 172, 0, TARGET_STRING("chuanganqi/Data Type Conversion54"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 173, 0, TARGET_STRING("chuanganqi/Data Type Conversion6"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 174, 0, TARGET_STRING("chuanganqi/Data Type Conversion7"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 175, 147, TARGET_STRING("chuanganqi/Data Type Conversion8"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 176, 147, TARGET_STRING("chuanganqi/Data Type Conversion9"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 177, 0, TARGET_STRING("chuanganqi/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 178, 0, TARGET_STRING("chuanganqi/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 8, 0, 1 },

  { 179, 0, TARGET_STRING("chuanganqi/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 180, 0, TARGET_STRING("chuanganqi/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 181, 0, TARGET_STRING("chuanganqi/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 182, 0, TARGET_STRING("chuanganqi/1-D Lookup Table3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 183, 0, TARGET_STRING("chuanganqi/1-D Lookup Table4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 184, 0, TARGET_STRING("chuanganqi/1-D Lookup Table5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 0, TARGET_STRING("chuanganqi/1-D Lookup Table6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 186, 0, TARGET_STRING("chuanganqi/Product"),
    TARGET_STRING(""), 0, 0, 8, 0, 1 },

  { 187, 0, TARGET_STRING("chuanganqi/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 188, 0, TARGET_STRING("chuanganqi/CAN bit-packing "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 189, 0, TARGET_STRING("chuanganqi/CAN bit-packing 1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 190, 0, TARGET_STRING("chuanganqi/CAN bit-packing 2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 191, 0, TARGET_STRING("chuanganqi/CAN bit-packing 3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 192, 0, TARGET_STRING("chuanganqi/CAN bit-packing 4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 194, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 195, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 1 },

  { 196, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 1 },

  { 197, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p5"),
    TARGET_STRING(""), 4, 1, 0, 0, 1 },

  { 198, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p6"),
    TARGET_STRING(""), 5, 1, 0, 0, 1 },

  { 199, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p7"),
    TARGET_STRING(""), 6, 1, 0, 0, 1 },

  { 200, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p8"),
    TARGET_STRING(""), 7, 1, 0, 0, 1 },

  { 201, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p9"),
    TARGET_STRING(""), 8, 1, 0, 0, 1 },

  { 202, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p10"),
    TARGET_STRING(""), 9, 1, 0, 0, 1 },

  { 203, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p11"),
    TARGET_STRING(""), 10, 1, 0, 0, 1 },

  { 204, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p12"),
    TARGET_STRING(""), 11, 1, 0, 0, 1 },

  { 205, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p13"),
    TARGET_STRING(""), 12, 1, 0, 0, 1 },

  { 206, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p14"),
    TARGET_STRING(""), 13, 1, 0, 0, 1 },

  { 207, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p15"),
    TARGET_STRING(""), 14, 1, 0, 0, 1 },

  { 208, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 2/p16"),
    TARGET_STRING(""), 15, 1, 0, 0, 1 },

  { 209, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 3/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 210, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 3/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 1 },

  { 211, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 3/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 1 },

  { 212, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 3/p4"),
    TARGET_STRING(""), 3, 2, 0, 0, 1 },

  { 213, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 4/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 214, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 4/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 215, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 5/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 216, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 5/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 1 },

  { 217, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 5/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 1 },

  { 218, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 6/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 219, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 6/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 220, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 7/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 221, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 7/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 222, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 7/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 0 },

  { 223, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 7/p4"),
    TARGET_STRING(""), 3, 2, 0, 0, 0 },

  { 224, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 8"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 225, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 9/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 226, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 9/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 1 },

  { 227, 0, TARGET_STRING("chuanganqi/CAN bit-unpacking 9/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 1 },

  { 228, 0, TARGET_STRING("chuanganqi/kaiguangaiweiyi3402"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 229, 0, TARGET_STRING("chuanganqi/liuliangji_fuqiuyeweiji3402/p1"),
    TARGET_STRING("liuliangji"), 0, 0, 0, 0, 1 },

  { 230, 0, TARGET_STRING("chuanganqi/liuliangji_fuqiuyeweiji3402/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 231, 0, TARGET_STRING("chuanganqi/tonggai1808Receive"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 232, 0, TARGET_STRING("chuanganqi/tonggai3402Receive/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 233, 0, TARGET_STRING("chuanganqi/tonggai3402Receive/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 234, 0, TARGET_STRING("chuanganqi/yalichuanganqi3402/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 235, 0, TARGET_STRING("chuanganqi/yalichuanganqi3402/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 236, 0, TARGET_STRING("chuanganqi/Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 237, 0, TARGET_STRING("chuanganqi/Step1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 238, 0, TARGET_STRING("chuanganqi/Manual Switch"),
    TARGET_STRING(""), 0, 3, 1, 0, 0 },

  { 239, 0, TARGET_STRING("chuanganqi/Manual Switch1"),
    TARGET_STRING(""), 0, 3, 1, 0, 0 },

  { 240, 0, TARGET_STRING("chuanganqi/Manual Switch2"),
    TARGET_STRING(""), 0, 3, 1, 0, 0 },

  { 241, 0, TARGET_STRING("chuanganqi/Manual Switch3"),
    TARGET_STRING(""), 0, 3, 1, 0, 0 },

  { 242, 0, TARGET_STRING("chuanganqi/Manual Switch4"),
    TARGET_STRING(""), 0, 3, 1, 0, 0 },

  { 243, 148, TARGET_STRING("guangaiquxian/Chart1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 244, 0, TARGET_STRING("guangaiquxian/Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 245, 0, TARGET_STRING("guangaiquxian/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 246, 0, TARGET_STRING("guangaiquxian/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 247, 0, TARGET_STRING("guangaiquxian/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 248, 149, TARGET_STRING("jinjichuli/jinjichuli/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 249, 149, TARGET_STRING("jinjichuli/jinjichuli/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 250, 149, TARGET_STRING("jinjichuli/jinjichuli/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 251, 149, TARGET_STRING("jinjichuli/jinjichuli/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 252, 149, TARGET_STRING("jinjichuli/jinjichuli/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 253, 149, TARGET_STRING("jinjichuli/jinjichuli/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 254, 149, TARGET_STRING("jinjichuli/jinjichuli/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 255, 149, TARGET_STRING("jinjichuli/jinjichuli/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 256, 149, TARGET_STRING("jinjichuli/jinjichuli/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 257, 149, TARGET_STRING("jinjichuli/jinjichuli/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 258, 149, TARGET_STRING("jinjichuli/jinjichuli/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 259, 149, TARGET_STRING("jinjichuli/jinjichuli/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 260, 149, TARGET_STRING("jinjichuli/jinjichuli/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 261, 149, TARGET_STRING("jinjichuli/jinjichuli/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 262, 149, TARGET_STRING("jinjichuli/jinjichuli/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 263, 149, TARGET_STRING("jinjichuli/jinjichuli/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 264, 151, TARGET_STRING("kaigaiquxian/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING("kaigaiquxian/Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING("kaigaiquxian/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 267, 0, TARGET_STRING("kaigaiquxian/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 268, 0, TARGET_STRING("kaigaiquxian/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 0, TARGET_STRING("tiaoshifa/fa11_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 270, 0, TARGET_STRING("tiaoshifa/fa11_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 271, 0, TARGET_STRING("tiaoshifa/fa11_5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 272, 0, TARGET_STRING("tiaoshifa/fa16_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 273, 0, TARGET_STRING("tiaoshifa/fa18_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING("tiaoshifa/fa18_2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 0, TARGET_STRING("tiaoshifa/fa18_3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING("tiaoshifa/fa18_4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING("tiaoshifa/fa20"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING("tiaoshifa/fa21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING("tiaoshifa/fa3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING("tiaoshifa/fa_kgg"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 0, TARGET_STRING("tiaoshifa/jiesuomingling"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 282, 0, TARGET_STRING("tiaoshifa/suodingmingling"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 283, 0, TARGET_STRING("tiaoshifa/xuanjinmingling"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 284, 0, TARGET_STRING("tiaoshifa/xuansongmingling"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 285, 0, TARGET_STRING("Subsystem2/husuo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING("Subsystem2/husuo/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING("Subsystem2/husuo/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING("Subsystem2/husuo/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING("Subsystem2/husuo1/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 0, TARGET_STRING("Subsystem2/husuo1/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 291, 0, TARGET_STRING("Subsystem2/husuo1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 292, 0, TARGET_STRING("Subsystem2/husuo1/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 293, 0, TARGET_STRING("Subsystem2/husuo2/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 294, 0, TARGET_STRING("Subsystem2/husuo2/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 295, 0, TARGET_STRING("Subsystem2/husuo2/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 296, 0, TARGET_STRING("Subsystem2/husuo2/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 297, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 298, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 299, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 300, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 301, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 302, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 303, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 304, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 305, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 306, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 307, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 308, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 309, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 310, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 311, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 312, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 313, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 314, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 315, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 316, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 317, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 318, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p22"),
    TARGET_STRING(""), 21, 0, 0, 0, 0 },

  { 319, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p23"),
    TARGET_STRING(""), 22, 0, 0, 0, 0 },

  { 320, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p24"),
    TARGET_STRING(""), 23, 0, 0, 0, 0 },

  { 321, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p25"),
    TARGET_STRING(""), 24, 0, 0, 0, 0 },

  { 322, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p26"),
    TARGET_STRING(""), 25, 0, 0, 0, 0 },

  { 323, 15, TARGET_STRING("Subsystem2/shoudong/Chart/p27"),
    TARGET_STRING(""), 26, 0, 0, 0, 0 },

  { 324, 78, TARGET_STRING("Subsystem2/zidong/Chart/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 325, 78, TARGET_STRING("Subsystem2/zidong/Chart/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 326, 78, TARGET_STRING("Subsystem2/zidong/Chart/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 327, 78, TARGET_STRING("Subsystem2/zidong/Chart/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 328, 78, TARGET_STRING("Subsystem2/zidong/Chart/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 329, 78, TARGET_STRING("Subsystem2/zidong/Chart/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 330, 78, TARGET_STRING("Subsystem2/zidong/Chart/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 331, 78, TARGET_STRING("Subsystem2/zidong/Chart/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 332, 78, TARGET_STRING("Subsystem2/zidong/Chart/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 333, 78, TARGET_STRING("Subsystem2/zidong/Chart/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 334, 78, TARGET_STRING("Subsystem2/zidong/Chart/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 335, 78, TARGET_STRING("Subsystem2/zidong/Chart/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 336, 78, TARGET_STRING("Subsystem2/zidong/Chart/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 337, 78, TARGET_STRING("Subsystem2/zidong/Chart/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 338, 78, TARGET_STRING("Subsystem2/zidong/Chart/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 339, 78, TARGET_STRING("Subsystem2/zidong/Chart/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 340, 78, TARGET_STRING("Subsystem2/zidong/Chart/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 341, 78, TARGET_STRING("Subsystem2/zidong/Chart/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 342, 78, TARGET_STRING("Subsystem2/zidong/Chart/p19"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 343, 78, TARGET_STRING("Subsystem2/zidong/Chart/p20"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 344, 78, TARGET_STRING("Subsystem2/zidong/Chart/p21"),
    TARGET_STRING(""), 20, 0, 0, 0, 0 },

  { 345, 78, TARGET_STRING("Subsystem2/zidong/Chart/p22"),
    TARGET_STRING(""), 21, 0, 0, 0, 0 },

  { 346, 78, TARGET_STRING("Subsystem2/zidong/Chart/p23"),
    TARGET_STRING(""), 22, 0, 0, 0, 0 },

  { 347, 78, TARGET_STRING("Subsystem2/zidong/Chart/p24"),
    TARGET_STRING(""), 23, 0, 0, 0, 0 },

  { 348, 78, TARGET_STRING("Subsystem2/zidong/Chart/p25"),
    TARGET_STRING(""), 24, 0, 0, 0, 0 },

  { 349, 0, TARGET_STRING("chuanganqi/yalishangxiaxian/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 350, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 351, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 352, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 353, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 354, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 355, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Sum of Elements"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 356, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 357, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 358, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 359, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 360, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 361, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 362, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 363, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 364, 77, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 365, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 366, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 367, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 368, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 369, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 370, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 371, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 372, 48, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 373, 47, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 374, 46, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 375, 45, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 376, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 377, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 378, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 379, 77, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 380, 48, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 381, 47, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 382, 46, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 383, 45, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 384, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 385, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 386, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 387, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Sum of Elements"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 388, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 389, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 390, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 391, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 392, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 393, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 394, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 395, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 396, 77, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 397, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 398, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 399, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 400, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 401, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 402, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Sum of Elements"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 403, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 404, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 405, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 406, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 407, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 408, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 409, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 410, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 411, 140, TARGET_STRING("Subsystem2/zidong/SQfa/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 412, 140, TARGET_STRING("Subsystem2/zidong/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 413, 140, TARGET_STRING("Subsystem2/zidong/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 414, 140, TARGET_STRING("Subsystem2/zidong/Subsystem/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 415, 140, TARGET_STRING("Subsystem2/zidong/Subsystem/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 416, 140, TARGET_STRING("Subsystem2/zidong/Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 417, 140, TARGET_STRING("Subsystem2/zidong/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 418, 140, TARGET_STRING("Subsystem2/zidong/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 419, 111, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 420, 110, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 421, 109, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 422, 108, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 423, 140, TARGET_STRING("Subsystem2/zidong/Subsystem1/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 424, 140, TARGET_STRING("Subsystem2/zidong/Subsystem1/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 425, 140, TARGET_STRING("Subsystem2/zidong/Subsystem1/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 426, 140, TARGET_STRING("Subsystem2/zidong/Subsystem1/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 427, 111, TARGET_STRING("Subsystem2/zidong/Subsystem1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 428, 110, TARGET_STRING("Subsystem2/zidong/Subsystem1/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 429, 109, TARGET_STRING("Subsystem2/zidong/Subsystem1/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 430, 108, TARGET_STRING("Subsystem2/zidong/Subsystem1/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 431, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 432, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 433, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 434, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Sum of Elements"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 435, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 436, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 437, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 438, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 439, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 440, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 441, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 442, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 443, 140, TARGET_STRING("Subsystem2/zidong/XQfa/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 444, 0, TARGET_STRING(
    "chuanganqi/yalishangxiaxian/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 445, 0, TARGET_STRING(
    "chuanganqi/yalishangxiaxian/Compare To Constant11/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 446, 0, TARGET_STRING(
    "chuanganqi/yalishangxiaxian/Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 447, 0, TARGET_STRING(
    "chuanganqi/yalishangxiaxian/Compare To Constant5/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 448, 0, TARGET_STRING(
    "chuanganqi/yalishangxiaxian/Compare To Constant7/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 449, 0, TARGET_STRING(
    "chuanganqi/yalishangxiaxian/Compare To Constant9/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 450, 77, TARGET_STRING(
    "Subsystem2/shoudong/Subsystem2/Signal Builder/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 451, 77, TARGET_STRING(
    "Subsystem2/shoudong/Subsystem2/Signal Builder1/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 452, 77, TARGET_STRING(
    "Subsystem2/shoudong/Subsystem2/Signal Builder2/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 453, 77, TARGET_STRING(
    "Subsystem2/shoudong/Subsystem2/Signal Builder3/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 454, 140, TARGET_STRING("Subsystem2/zidong/Subsystem1/Signal Builder/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 455, 140, TARGET_STRING(
    "Subsystem2/zidong/Subsystem1/Signal Builder1/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 456, 140, TARGET_STRING(
    "Subsystem2/zidong/Subsystem1/Signal Builder2/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 457, 140, TARGET_STRING(
    "Subsystem2/zidong/Subsystem1/Signal Builder3/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 458, TARGET_STRING("Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 459, TARGET_STRING("Compare To Constant1"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 460, TARGET_STRING("Compare To Constant2"),
    TARGET_STRING("const"), 2, 0, 0 },

  { 461, TARGET_STRING("Compare To Constant3"),
    TARGET_STRING("const"), 2, 0, 0 },

  { 462, TARGET_STRING("BCQbushui"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 463, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 464, TARGET_STRING("Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 465, TARGET_STRING("Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 466, TARGET_STRING("Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 467, TARGET_STRING("SCjiaya"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 468, TARGET_STRING("SCxieya"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 469, TARGET_STRING("SCzhushui"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 470, TARGET_STRING("SXQjunya"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 471, TARGET_STRING("SXQxieya"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 472, TARGET_STRING("bilijianyafa"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 473, TARGET_STRING("diancifa11_3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 474, TARGET_STRING("diancifa11_4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 475, TARGET_STRING("diancifa16_2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 476, TARGET_STRING("diancifa16_3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 477, TARGET_STRING("guangai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 478, TARGET_STRING("jiesuo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 479, TARGET_STRING("jiting"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 480, TARGET_STRING("kaigai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 481, TARGET_STRING("kaishi"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 482, TARGET_STRING("qiehuan"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 483, TARGET_STRING("shiyabuchang"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 484, TARGET_STRING("suoding"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 485, TARGET_STRING("tiaoshi"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 486, TARGET_STRING("xuanjin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 487, TARGET_STRING("xuanjinjianya"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 488, TARGET_STRING("xuansong"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 489, TARGET_STRING("zidongguangai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 490, TARGET_STRING("zidongkaigai"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 491, TARGET_STRING("&#x51F8;&#x819C;&#x4E0A;&#x4E0B;&#x8154;&#x6700;&#x5927;&#x538B;&#x529B;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 492, TARGET_STRING("&#x51F8;&#x819C;&#x4E0A;&#x4E0B;&#x8154;&#x6700;&#x5C0F;&#x538B;&#x529B;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 493, TARGET_STRING("&#x5E26;&#x6C14;&#x6CE8;&#x6C34;&#x6700;&#x5927;&#x538B;&#x529B;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 494, TARGET_STRING("&#x6C34;&#x8231;&#x6700;&#x5927;&#x538B;&#x529B;"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 495, TARGET_STRING("Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 496, TARGET_STRING("1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 497, TARGET_STRING("1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 498, TARGET_STRING("Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 499, TARGET_STRING("Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 500, TARGET_STRING("Memory2"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 501, TARGET_STRING("PCI-1784"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 502, TARGET_STRING("PCI-1784"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 503, TARGET_STRING("PCI-1784"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 504, TARGET_STRING("PCI1716/constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 505, TARGET_STRING("PCI1716/PCI1716DIO1"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 506, TARGET_STRING("PCI1716/PCI1716DIO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 507, TARGET_STRING("PCI6208/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 508, TARGET_STRING("PCI6208/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 509, TARGET_STRING("PCI6208/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 510, TARGET_STRING("PCI6208/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 511, TARGET_STRING("PCI6208/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 512, TARGET_STRING("PCI6208/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 513, TARGET_STRING("PCI6208/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 514, TARGET_STRING("PCI6208/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 515, TARGET_STRING("PCI6208/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 516, TARGET_STRING("PCI6208/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 517, TARGET_STRING("PCI6208/Saturation4"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 518, TARGET_STRING("PCI6208/Saturation4"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 519, TARGET_STRING("PCI6208/Saturation5"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 520, TARGET_STRING("PCI6208/Saturation5"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 521, TARGET_STRING("PCI6208/Saturation6"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 522, TARGET_STRING("PCI6208/Saturation6"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 523, TARGET_STRING("PCI6208/Saturation7"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 524, TARGET_STRING("PCI6208/Saturation7"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 525, TARGET_STRING("PCI6208/PCI-6208A DA "),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 526, TARGET_STRING("PCI6208/PCI-6208A DA "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 527, TARGET_STRING("PCI6208/PCI-6208A DA "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 528, TARGET_STRING("PCI6208/PCI-6208A DA "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 529, TARGET_STRING("PCI6208/PCI-6208A DA "),
    TARGET_STRING("P5"), 0, 10, 0 },

  { 530, TARGET_STRING("PCI6208/PCI-6208A DA "),
    TARGET_STRING("P6"), 0, 10, 0 },

  { 531, TARGET_STRING("Subsystem1/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 532, TARGET_STRING("Subsystem1/Switch10"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 533, TARGET_STRING("Subsystem1/Switch11"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 534, TARGET_STRING("Subsystem1/Switch12"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 535, TARGET_STRING("Subsystem1/Switch13"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 536, TARGET_STRING("Subsystem1/Switch14"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 537, TARGET_STRING("Subsystem1/Switch17"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 538, TARGET_STRING("Subsystem1/Switch18"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 539, TARGET_STRING("Subsystem1/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 540, TARGET_STRING("Subsystem1/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 541, TARGET_STRING("Subsystem1/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 542, TARGET_STRING("Subsystem1/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 543, TARGET_STRING("Subsystem1/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 544, TARGET_STRING("Subsystem1/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 545, TARGET_STRING("Subsystem1/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 546, TARGET_STRING("Subsystem1/Switch9"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 547, TARGET_STRING("Subsystem4/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 548, TARGET_STRING("Subsystem4/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 549, TARGET_STRING("Subsystem5/Out1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 550, TARGET_STRING("Subsystem5/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 551, TARGET_STRING("chuanganqi/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 552, TARGET_STRING("chuanganqi/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 553, TARGET_STRING("chuanganqi/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 554, TARGET_STRING("chuanganqi/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 555, TARGET_STRING("chuanganqi/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 556, TARGET_STRING("chuanganqi/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 557, TARGET_STRING("chuanganqi/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 558, TARGET_STRING("chuanganqi/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 559, TARGET_STRING("chuanganqi/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 560, TARGET_STRING("chuanganqi/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 561, TARGET_STRING("chuanganqi/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 562, TARGET_STRING("chuanganqi/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 563, TARGET_STRING("chuanganqi/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 564, TARGET_STRING("chuanganqi/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 565, TARGET_STRING("chuanganqi/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 566, TARGET_STRING("chuanganqi/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 567, TARGET_STRING("chuanganqi/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 568, TARGET_STRING("chuanganqi/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("chuanganqi/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 570, TARGET_STRING("chuanganqi/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 571, TARGET_STRING("chuanganqi/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 572, TARGET_STRING("chuanganqi/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 573, TARGET_STRING("chuanganqi/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 574, TARGET_STRING("chuanganqi/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 575, TARGET_STRING("chuanganqi/Constant30"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 576, TARGET_STRING("chuanganqi/Constant31"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 577, TARGET_STRING("chuanganqi/Constant32"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 578, TARGET_STRING("chuanganqi/Constant33"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 579, TARGET_STRING("chuanganqi/Constant34"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 580, TARGET_STRING("chuanganqi/Constant35"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 581, TARGET_STRING("chuanganqi/Constant36"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 582, TARGET_STRING("chuanganqi/Constant37"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 583, TARGET_STRING("chuanganqi/Constant38"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 584, TARGET_STRING("chuanganqi/Constant39"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 585, TARGET_STRING("chuanganqi/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 586, TARGET_STRING("chuanganqi/Constant40"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 587, TARGET_STRING("chuanganqi/Constant41"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 588, TARGET_STRING("chuanganqi/Constant42"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 589, TARGET_STRING("chuanganqi/Constant43"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 590, TARGET_STRING("chuanganqi/Constant44"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 591, TARGET_STRING("chuanganqi/Constant45"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 592, TARGET_STRING("chuanganqi/Constant46"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 593, TARGET_STRING("chuanganqi/Constant47"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 594, TARGET_STRING("chuanganqi/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 595, TARGET_STRING("chuanganqi/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 596, TARGET_STRING("chuanganqi/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 597, TARGET_STRING("chuanganqi/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 598, TARGET_STRING("chuanganqi/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 599, TARGET_STRING("chuanganqi/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 600, TARGET_STRING("chuanganqi/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 601, TARGET_STRING("chuanganqi/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 602, TARGET_STRING("chuanganqi/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 603, TARGET_STRING("chuanganqi/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 604, TARGET_STRING("chuanganqi/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 605, TARGET_STRING("chuanganqi/1-D Lookup Table3"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 606, TARGET_STRING("chuanganqi/1-D Lookup Table3"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 607, TARGET_STRING("chuanganqi/1-D Lookup Table4"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 608, TARGET_STRING("chuanganqi/1-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 609, TARGET_STRING("chuanganqi/1-D Lookup Table5"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 610, TARGET_STRING("chuanganqi/1-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 611, TARGET_STRING("chuanganqi/1-D Lookup Table6"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 612, TARGET_STRING("chuanganqi/1-D Lookup Table6"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 613, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 614, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P2"), 0, 11, 0 },

  { 615, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 616, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P4"), 0, 10, 0 },

  { 617, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P5"), 0, 11, 0 },

  { 618, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P11"), 0, 10, 0 },

  { 619, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 620, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 621, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 622, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 623, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 624, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 625, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 626, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 627, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 628, TARGET_STRING("chuanganqi/Setup "),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 629, TARGET_STRING("chuanganqi/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 630, TARGET_STRING("chuanganqi/Step"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 631, TARGET_STRING("chuanganqi/Step"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 632, TARGET_STRING("chuanganqi/Step1"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 633, TARGET_STRING("chuanganqi/Step1"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 634, TARGET_STRING("chuanganqi/Step1"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 635, TARGET_STRING("chuanganqi/Manual Switch"),
    TARGET_STRING("CurrentSetting"), 3, 0, 0 },

  { 636, TARGET_STRING("chuanganqi/Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 3, 0, 0 },

  { 637, TARGET_STRING("chuanganqi/Manual Switch2"),
    TARGET_STRING("CurrentSetting"), 3, 0, 0 },

  { 638, TARGET_STRING("chuanganqi/Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 3, 0, 0 },

  { 639, TARGET_STRING("chuanganqi/Manual Switch4"),
    TARGET_STRING("CurrentSetting"), 3, 0, 0 },

  { 640, TARGET_STRING("guangaiquxian/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 641, TARGET_STRING("guangaiquxian/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 642, TARGET_STRING("guangaiquxian/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 643, TARGET_STRING("guangaiquxian/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 644, TARGET_STRING("kaigaiquxian/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 645, TARGET_STRING("kaigaiquxian/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 646, TARGET_STRING("kaigaiquxian/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 647, TARGET_STRING("kaigaiquxian/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 648, TARGET_STRING("tiaoshifa/fa11_1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 649, TARGET_STRING("tiaoshifa/fa11_2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 650, TARGET_STRING("tiaoshifa/fa11_5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 651, TARGET_STRING("tiaoshifa/fa16_1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 652, TARGET_STRING("tiaoshifa/fa18_1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 653, TARGET_STRING("tiaoshifa/fa18_2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 654, TARGET_STRING("tiaoshifa/fa18_3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 655, TARGET_STRING("tiaoshifa/fa18_4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 656, TARGET_STRING("tiaoshifa/fa20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 657, TARGET_STRING("tiaoshifa/fa21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 658, TARGET_STRING("tiaoshifa/fa3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 659, TARGET_STRING("tiaoshifa/fa_kgg"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 660, TARGET_STRING("tiaoshifa/jiesuomingling"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 661, TARGET_STRING("tiaoshifa/suodingmingling"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 662, TARGET_STRING("tiaoshifa/xuanjinmingling"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 663, TARGET_STRING("tiaoshifa/xuansongmingling"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 664, TARGET_STRING("Subsystem2/husuo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 665, TARGET_STRING("Subsystem2/husuo/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 666, TARGET_STRING("Subsystem2/husuo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 667, TARGET_STRING("Subsystem2/husuo/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 668, TARGET_STRING("Subsystem2/husuo/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 669, TARGET_STRING("Subsystem2/husuo/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 670, TARGET_STRING("Subsystem2/husuo1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 671, TARGET_STRING("Subsystem2/husuo1/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 672, TARGET_STRING("Subsystem2/husuo1/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 673, TARGET_STRING("Subsystem2/husuo1/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 674, TARGET_STRING("Subsystem2/husuo1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 675, TARGET_STRING("Subsystem2/husuo1/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 676, TARGET_STRING("Subsystem2/husuo2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 677, TARGET_STRING("Subsystem2/husuo2/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 678, TARGET_STRING("Subsystem2/husuo2/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 679, TARGET_STRING("Subsystem2/husuo2/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 680, TARGET_STRING("Subsystem2/husuo2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 681, TARGET_STRING("Subsystem2/husuo2/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 682, TARGET_STRING("Subsystem2/shoudong/bililiuliangfa18_1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 683, TARGET_STRING("Subsystem2/shoudong/bililiuliangfa18_2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 684, TARGET_STRING("Subsystem2/shoudong/bililiuliangfa18_3"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 685, TARGET_STRING("Subsystem2/shoudong/bililiuliangfa18_4"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 686, TARGET_STRING("Subsystem2/shoudong/kaiguangaifa"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 687, TARGET_STRING("Subsystem2/zidong/bililiuliangfa18_1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 688, TARGET_STRING("Subsystem2/zidong/bililiuliangfa18_2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 689, TARGET_STRING("Subsystem2/zidong/bililiuliangfa18_3"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 690, TARGET_STRING("Subsystem2/zidong/bililiuliangfa18_4"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 691, TARGET_STRING("Subsystem2/zidong/kaiguangaifa"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 692, TARGET_STRING("chuanganqi/yalishangxiaxian/Compare To Constant1"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 693, TARGET_STRING("chuanganqi/yalishangxiaxian/Compare To Constant11"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 694, TARGET_STRING("chuanganqi/yalishangxiaxian/Compare To Constant3"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 695, TARGET_STRING("chuanganqi/yalishangxiaxian/Compare To Constant5"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 696, TARGET_STRING("chuanganqi/yalishangxiaxian/Compare To Constant7"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 697, TARGET_STRING("chuanganqi/yalishangxiaxian/Compare To Constant9"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 698, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 699, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 700, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 701, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 702, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 703, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 704, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 705, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 706, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 707, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 708, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 709, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 710, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 711, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 712, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 713, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 714, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 715, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 716, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 717, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 718, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 719, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 720, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 721, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 722, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 723, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 724, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 725, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 726, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 727, TARGET_STRING("Subsystem2/shoudong/SQfa/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 728, TARGET_STRING("Subsystem2/shoudong/SQfa/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 729, TARGET_STRING("Subsystem2/shoudong/SQfa/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 730, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 731, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 732, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 733, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 734, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 735, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 736, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 737, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 738, TARGET_STRING("Subsystem2/shoudong/SQfa/Switch9"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 739, TARGET_STRING("Subsystem2/shoudong/Subsystem/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 740, TARGET_STRING("Subsystem2/shoudong/Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 741, TARGET_STRING("Subsystem2/shoudong/Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 742, TARGET_STRING("Subsystem2/shoudong/Subsystem/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 743, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 744, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 745, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 746, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 747, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 748, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 749, TARGET_STRING("Subsystem2/shoudong/Subsystem2/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 750, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 751, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 752, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 753, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 754, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 755, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 756, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 757, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 758, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 759, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 760, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 761, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 762, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 763, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 764, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 765, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 766, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 767, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 768, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 769, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 770, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 771, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 772, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 773, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 774, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 775, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 776, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 777, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 778, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 779, TARGET_STRING("Subsystem2/shoudong/XQfa/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 780, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 781, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 782, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 783, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 784, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 785, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 786, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 787, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 788, TARGET_STRING("Subsystem2/shoudong/XQfa/Switch9"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 789, TARGET_STRING("Subsystem2/zidong/SQfa/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 790, TARGET_STRING("Subsystem2/zidong/SQfa/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 791, TARGET_STRING("Subsystem2/zidong/SQfa/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 792, TARGET_STRING("Subsystem2/zidong/SQfa/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 793, TARGET_STRING("Subsystem2/zidong/SQfa/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 794, TARGET_STRING("Subsystem2/zidong/SQfa/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 795, TARGET_STRING("Subsystem2/zidong/SQfa/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 796, TARGET_STRING("Subsystem2/zidong/SQfa/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 797, TARGET_STRING("Subsystem2/zidong/SQfa/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 798, TARGET_STRING("Subsystem2/zidong/SQfa/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 799, TARGET_STRING("Subsystem2/zidong/SQfa/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 800, TARGET_STRING("Subsystem2/zidong/SQfa/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 801, TARGET_STRING("Subsystem2/zidong/SQfa/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 802, TARGET_STRING("Subsystem2/zidong/SQfa/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 803, TARGET_STRING("Subsystem2/zidong/SQfa/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 804, TARGET_STRING("Subsystem2/zidong/SQfa/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 805, TARGET_STRING("Subsystem2/zidong/SQfa/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 806, TARGET_STRING("Subsystem2/zidong/SQfa/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 807, TARGET_STRING("Subsystem2/zidong/SQfa/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 808, TARGET_STRING("Subsystem2/zidong/SQfa/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 809, TARGET_STRING("Subsystem2/zidong/SQfa/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 810, TARGET_STRING("Subsystem2/zidong/SQfa/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 811, TARGET_STRING("Subsystem2/zidong/SQfa/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 812, TARGET_STRING("Subsystem2/zidong/SQfa/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 813, TARGET_STRING("Subsystem2/zidong/SQfa/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 814, TARGET_STRING("Subsystem2/zidong/SQfa/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 815, TARGET_STRING("Subsystem2/zidong/SQfa/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 816, TARGET_STRING("Subsystem2/zidong/SQfa/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 817, TARGET_STRING("Subsystem2/zidong/SQfa/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 818, TARGET_STRING("Subsystem2/zidong/SQfa/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 819, TARGET_STRING("Subsystem2/zidong/SQfa/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 820, TARGET_STRING("Subsystem2/zidong/SQfa/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 821, TARGET_STRING("Subsystem2/zidong/SQfa/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 822, TARGET_STRING("Subsystem2/zidong/SQfa/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 823, TARGET_STRING("Subsystem2/zidong/SQfa/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 824, TARGET_STRING("Subsystem2/zidong/SQfa/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 825, TARGET_STRING("Subsystem2/zidong/SQfa/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 826, TARGET_STRING("Subsystem2/zidong/SQfa/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 827, TARGET_STRING("Subsystem2/zidong/SQfa/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 828, TARGET_STRING("Subsystem2/zidong/SQfa/Switch9"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 829, TARGET_STRING("Subsystem2/zidong/Subsystem/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 830, TARGET_STRING("Subsystem2/zidong/Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 831, TARGET_STRING("Subsystem2/zidong/Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 832, TARGET_STRING("Subsystem2/zidong/Subsystem/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 833, TARGET_STRING("Subsystem2/zidong/Subsystem1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 834, TARGET_STRING("Subsystem2/zidong/Subsystem1/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 835, TARGET_STRING("Subsystem2/zidong/Subsystem1/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 836, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 837, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 838, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 839, TARGET_STRING("Subsystem2/zidong/Subsystem1/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 840, TARGET_STRING("Subsystem2/zidong/XQfa/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 841, TARGET_STRING("Subsystem2/zidong/XQfa/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 842, TARGET_STRING("Subsystem2/zidong/XQfa/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 843, TARGET_STRING("Subsystem2/zidong/XQfa/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 844, TARGET_STRING("Subsystem2/zidong/XQfa/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 845, TARGET_STRING("Subsystem2/zidong/XQfa/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 846, TARGET_STRING("Subsystem2/zidong/XQfa/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 847, TARGET_STRING("Subsystem2/zidong/XQfa/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 848, TARGET_STRING("Subsystem2/zidong/XQfa/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 849, TARGET_STRING("Subsystem2/zidong/XQfa/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 850, TARGET_STRING("Subsystem2/zidong/XQfa/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 851, TARGET_STRING("Subsystem2/zidong/XQfa/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 852, TARGET_STRING("Subsystem2/zidong/XQfa/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 853, TARGET_STRING("Subsystem2/zidong/XQfa/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 854, TARGET_STRING("Subsystem2/zidong/XQfa/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 855, TARGET_STRING("Subsystem2/zidong/XQfa/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 856, TARGET_STRING("Subsystem2/zidong/XQfa/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 857, TARGET_STRING("Subsystem2/zidong/XQfa/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 858, TARGET_STRING("Subsystem2/zidong/XQfa/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 859, TARGET_STRING("Subsystem2/zidong/XQfa/Constant27"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 860, TARGET_STRING("Subsystem2/zidong/XQfa/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 861, TARGET_STRING("Subsystem2/zidong/XQfa/Constant29"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 862, TARGET_STRING("Subsystem2/zidong/XQfa/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 863, TARGET_STRING("Subsystem2/zidong/XQfa/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 864, TARGET_STRING("Subsystem2/zidong/XQfa/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 865, TARGET_STRING("Subsystem2/zidong/XQfa/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 866, TARGET_STRING("Subsystem2/zidong/XQfa/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 867, TARGET_STRING("Subsystem2/zidong/XQfa/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 868, TARGET_STRING("Subsystem2/zidong/XQfa/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 869, TARGET_STRING("Subsystem2/zidong/XQfa/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 870, TARGET_STRING("Subsystem2/zidong/XQfa/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 871, TARGET_STRING("Subsystem2/zidong/XQfa/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 872, TARGET_STRING("Subsystem2/zidong/XQfa/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 873, TARGET_STRING("Subsystem2/zidong/XQfa/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 874, TARGET_STRING("Subsystem2/zidong/XQfa/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 875, TARGET_STRING("Subsystem2/zidong/XQfa/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 876, TARGET_STRING("Subsystem2/zidong/XQfa/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 877, TARGET_STRING("Subsystem2/zidong/XQfa/Switch9"),
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
  &aaaqi_B.diancifa11_3,               /* 0: Signal */
  &aaaqi_B.diancifa11_4,               /* 1: Signal */
  &aaaqi_B.diancifa16_2,               /* 2: Signal */
  &aaaqi_B.diancifa16_3,               /* 3: Signal */
  &aaaqi_B.jiting,                     /* 4: Signal */
  &aaaqi_B.u_m,                        /* 5: Signal */
  &aaaqi_B.u_c,                        /* 6: Signal */
  &aaaqi_B.u_a,                        /* 7: Signal */
  &aaaqi_B.u,                          /* 8: Signal */
  &aaaqi_B.DataTypeConversion1,        /* 9: Signal */
  &aaaqi_B.DataTypeConversion10[0],    /* 10: Signal */
  &aaaqi_B.DataTypeConversion11,       /* 11: Signal */
  &aaaqi_B.DataTypeConversion12,       /* 12: Signal */
  &aaaqi_B.DataTypeConversion13,       /* 13: Signal */
  &aaaqi_B.DataTypeConversion14,       /* 14: Signal */
  &aaaqi_B.DataTypeConversion15,       /* 15: Signal */
  &aaaqi_B.DataTypeConversion16,       /* 16: Signal */
  &aaaqi_B.DataTypeConversion17,       /* 17: Signal */
  &aaaqi_B.DataTypeConversion18,       /* 18: Signal */
  &aaaqi_B.DataTypeConversion19,       /* 19: Signal */
  &aaaqi_B.DataTypeConversion2_a,      /* 20: Signal */
  &aaaqi_B.DataTypeConversion20,       /* 21: Signal */
  &aaaqi_B.DataTypeConversion21,       /* 22: Signal */
  &aaaqi_B.DataTypeConversion22,       /* 23: Signal */
  &aaaqi_B.DataTypeConversion23,       /* 24: Signal */
  &aaaqi_B.DataTypeConversion24[0],    /* 25: Signal */
  &aaaqi_B.DataTypeConversion25[0],    /* 26: Signal */
  &aaaqi_B.DataTypeConversion26,       /* 27: Signal */
  &aaaqi_B.DataTypeConversion27[0],    /* 28: Signal */
  &aaaqi_B.DataTypeConversion28,       /* 29: Signal */
  &aaaqi_B.DataTypeConversion29,       /* 30: Signal */
  &aaaqi_B.DataTypeConversion3,        /* 31: Signal */
  &aaaqi_B.DataTypeConversion30,       /* 32: Signal */
  &aaaqi_B.DataTypeConversion31,       /* 33: Signal */
  &aaaqi_B.DataTypeConversion32,       /* 34: Signal */
  &aaaqi_B.DataTypeConversion33,       /* 35: Signal */
  &aaaqi_B.DataTypeConversion34,       /* 36: Signal */
  &aaaqi_B.DataTypeConversion35,       /* 37: Signal */
  &aaaqi_B.DataTypeConversion4,        /* 38: Signal */
  &aaaqi_B.DataTypeConversion5_a[0],   /* 39: Signal */
  &aaaqi_B.DataTypeConversion6,        /* 40: Signal */
  &aaaqi_B.DataTypeConversion7[0],     /* 41: Signal */
  &aaaqi_B.DataTypeConversion8,        /* 42: Signal */
  &aaaqi_B.DataTypeConversion9,        /* 43: Signal */
  &aaaqi_B.Gain,                       /* 44: Signal */
  &aaaqi_B.LogicalOperator_m,          /* 45: Signal */
  &aaaqi_B.LogicalOperator1_j,         /* 46: Signal */
  &aaaqi_B.LogicalOperator10,          /* 47: Signal */
  &aaaqi_B.LogicalOperator11,          /* 48: Signal */
  &aaaqi_B.LogicalOperator12,          /* 49: Signal */
  &aaaqi_B.LogicalOperator2,           /* 50: Signal */
  &aaaqi_B.LogicalOperator3,           /* 51: Signal */
  &aaaqi_B.LogicalOperator4,           /* 52: Signal */
  &aaaqi_B.LogicalOperator5,           /* 53: Signal */
  &aaaqi_B.LogicalOperator6,           /* 54: Signal */
  &aaaqi_B.LogicalOperator7,           /* 55: Signal */
  &aaaqi_B.LogicalOperator8,           /* 56: Signal */
  &aaaqi_B.LogicalOperator9,           /* 57: Signal */
  &aaaqi_B.uDLookupTable_j,            /* 58: Signal */
  &aaaqi_B.Memory,                     /* 59: Signal */
  &aaaqi_B.Memory1,                    /* 60: Signal */
  &aaaqi_B.Memory2,                    /* 61: Signal */
  &aaaqi_B.PCI1784_o1,                 /* 62: Signal */
  &aaaqi_B.PCI1784_o2,                 /* 63: Signal */
  &aaaqi_B.PCI1784_o3,                 /* 64: Signal */
  &aaaqi_B.PCI1784_o4,                 /* 65: Signal */
  &aaaqi_B.PCI1784_o5,                 /* 66: Signal */
  &aaaqi_B.PCI1784_o6,                 /* 67: Signal */
  &aaaqi_B.PCI1784_o7,                 /* 68: Signal */
  &aaaqi_B.PCI1784_o8,                 /* 69: Signal */
  &aaaqi_B.Add_l,                      /* 70: Signal */
  &aaaqi_B.Add1,                       /* 71: Signal */
  &aaaqi_B.Switch_l,                   /* 72: Signal */
  &aaaqi_B.Compare_kp,                 /* 73: Signal */
  &aaaqi_B.Compare_cr,                 /* 74: Signal */
  &aaaqi_B.Compare_c,                  /* 75: Signal */
  &aaaqi_B.Compare_m,                  /* 76: Signal */
  &aaaqi_B.constant,                   /* 77: Signal */
  &aaaqi_B.DataTypeConversion[0],      /* 78: Signal */
  &aaaqi_B.DataTypeConversion1_k,      /* 79: Signal */
  &aaaqi_B.DataTypeConversion2,        /* 80: Signal */
  &aaaqi_B.LogicalOperator_jg,         /* 81: Signal */
  &aaaqi_B.LogicalOperator1_g,         /* 82: Signal */
  &aaaqi_B.PCI1716DIO1_o1[0],          /* 83: Signal */
  &aaaqi_B.PCI1716DIO1_o2[0],          /* 84: Signal */
  &aaaqi_B.DataTypeConversion_p[0],    /* 85: Signal */
  &aaaqi_B.Saturation_j,               /* 86: Signal */
  &aaaqi_B.Saturation1_i,              /* 87: Signal */
  &aaaqi_B.Saturation2,                /* 88: Signal */
  &aaaqi_B.Saturation3,                /* 89: Signal */
  &aaaqi_B.Saturation4,                /* 90: Signal */
  &aaaqi_B.Saturation5,                /* 91: Signal */
  &aaaqi_B.Saturation6,                /* 92: Signal */
  &aaaqi_B.Saturation7,                /* 93: Signal */
  &aaaqi_B.Switch1,                    /* 94: Signal */
  &aaaqi_B.Switch10,                   /* 95: Signal */
  &aaaqi_B.Switch11,                   /* 96: Signal */
  &aaaqi_B.Switch12,                   /* 97: Signal */
  &aaaqi_B.Switch13,                   /* 98: Signal */
  &aaaqi_B.Switch14,                   /* 99: Signal */
  &aaaqi_B.Switch17,                   /* 100: Signal */
  &aaaqi_B.Switch18,                   /* 101: Signal */
  &aaaqi_B.Switch2_l,                  /* 102: Signal */
  &aaaqi_B.Switch3,                    /* 103: Signal */
  &aaaqi_B.Switch4,                    /* 104: Signal */
  &aaaqi_B.Switch5,                    /* 105: Signal */
  &aaaqi_B.Switch6,                    /* 106: Signal */
  &aaaqi_B.Switch7,                    /* 107: Signal */
  &aaaqi_B.Switch8,                    /* 108: Signal */
  &aaaqi_B.Switch9,                    /* 109: Signal */
  &aaaqi_B.DataTypeConversion1_e,      /* 110: Signal */
  &aaaqi_B.DataTypeConversion5,        /* 111: Signal */
  &aaaqi_B.LogicalOperator_j,          /* 112: Signal */
  &aaaqi_B.LogicalOperator1_e,         /* 113: Signal */
  &aaaqi_B.LogicalOperator2_a,         /* 114: Signal */
  &aaaqi_B.LogicalOperator3_k,         /* 115: Signal */
  &aaaqi_B.MultiportSwitch[0],         /* 116: Signal */
  &aaaqi_B.MultiportSwitch1[0],        /* 117: Signal */
  &aaaqi_B.MultiportSwitch2,           /* 118: Signal */
  &aaaqi_B.MultiportSwitch3,           /* 119: Signal */
  &aaaqi_B.Subsystem4.Add,             /* 120: Signal */
  &aaaqi_B.Subsystem5.Add,             /* 121: Signal */
  &aaaqi_B.DataTypeConversion_n,       /* 122: Signal */
  &aaaqi_B.DataTypeConversion1_p,      /* 123: Signal */
  &aaaqi_B.DataTypeConversion10_c,     /* 124: Signal */
  &aaaqi_B.DataTypeConversion11_l,     /* 125: Signal */
  &aaaqi_B.DataTypeConversion12_i,     /* 126: Signal */
  &aaaqi_B.DataTypeConversion13_m,     /* 127: Signal */
  &aaaqi_B.DataTypeConversion14_h,     /* 128: Signal */
  &aaaqi_B.DataTypeConversion15_k,     /* 129: Signal */
  &aaaqi_B.DataTypeConversion16_i,     /* 130: Signal */
  &aaaqi_B.DataTypeConversion17_b,     /* 131: Signal */
  &aaaqi_B.DataTypeConversion18_c,     /* 132: Signal */
  &aaaqi_B.DataTypeConversion19_m,     /* 133: Signal */
  &aaaqi_B.DataTypeConversion2_c,      /* 134: Signal */
  &aaaqi_B.DataTypeConversion20_n,     /* 135: Signal */
  &aaaqi_B.DataTypeConversion21_l,     /* 136: Signal */
  &aaaqi_B.DataTypeConversion22_l,     /* 137: Signal */
  &aaaqi_B.DataTypeConversion23_c,     /* 138: Signal */
  &aaaqi_B.DataTypeConversion24_m,     /* 139: Signal */
  &aaaqi_B.DataTypeConversion25_h,     /* 140: Signal */
  &aaaqi_B.DataTypeConversion26_j,     /* 141: Signal */
  &aaaqi_B.DataTypeConversion27_i,     /* 142: Signal */
  &aaaqi_B.DataTypeConversion28_m,     /* 143: Signal */
  &aaaqi_B.DataTypeConversion29_f,     /* 144: Signal */
  &aaaqi_B.DataTypeConversion3_g,      /* 145: Signal */
  &aaaqi_B.DataTypeConversion30_e,     /* 146: Signal */
  &aaaqi_B.DataTypeConversion31_d,     /* 147: Signal */
  &aaaqi_B.DataTypeConversion32_g,     /* 148: Signal */
  &aaaqi_B.DataTypeConversion33_g,     /* 149: Signal */
  &aaaqi_B.DataTypeConversion34_i,     /* 150: Signal */
  &aaaqi_B.DataTypeConversion35_a,     /* 151: Signal */
  &aaaqi_B.DataTypeConversion36,       /* 152: Signal */
  &aaaqi_B.DataTypeConversion37,       /* 153: Signal */
  &aaaqi_B.DataTypeConversion38,       /* 154: Signal */
  &aaaqi_B.DataTypeConversion39,       /* 155: Signal */
  &aaaqi_B.DataTypeConversion4_b,      /* 156: Signal */
  &aaaqi_B.DataTypeConversion40,       /* 157: Signal */
  &aaaqi_B.DataTypeConversion41,       /* 158: Signal */
  &aaaqi_B.DataTypeConversion42,       /* 159: Signal */
  &aaaqi_B.DataTypeConversion43,       /* 160: Signal */
  &aaaqi_B.DataTypeConversion44,       /* 161: Signal */
  &aaaqi_B.DataTypeConversion45,       /* 162: Signal */
  &aaaqi_B.DataTypeConversion46,       /* 163: Signal */
  &aaaqi_B.DataTypeConversion47,       /* 164: Signal */
  &aaaqi_B.DataTypeConversion48,       /* 165: Signal */
  &aaaqi_B.DataTypeConversion49,       /* 166: Signal */
  &aaaqi_B.DataTypeConversion5_i,      /* 167: Signal */
  &aaaqi_B.DataTypeConversion50,       /* 168: Signal */
  &aaaqi_B.DataTypeConversion51,       /* 169: Signal */
  &aaaqi_B.DataTypeConversion52,       /* 170: Signal */
  &aaaqi_B.DataTypeConversion53,       /* 171: Signal */
  &aaaqi_B.DataTypeConversion54,       /* 172: Signal */
  &aaaqi_B.DataTypeConversion6_b,      /* 173: Signal */
  &aaaqi_B.DataTypeConversion7_e,      /* 174: Signal */
  &aaaqi_B.DataTypeConversion8_e,      /* 175: Signal */
  &aaaqi_B.DataTypeConversion9_b,      /* 176: Signal */
  &aaaqi_B.LogicalOperator_e,          /* 177: Signal */
  &aaaqi_B.LogicalOperator1[0],        /* 178: Signal */
  &aaaqi_B.uDLookupTable,              /* 179: Signal */
  &aaaqi_B.uDLookupTable1,             /* 180: Signal */
  &aaaqi_B.uDLookupTable2,             /* 181: Signal */
  &aaaqi_B.uDLookupTable3,             /* 182: Signal */
  &aaaqi_B.uDLookupTable4,             /* 183: Signal */
  &aaaqi_B.uDLookupTable5,             /* 184: Signal */
  &aaaqi_B.uDLookupTable6,             /* 185: Signal */
  &aaaqi_B.Product[0],                 /* 186: Signal */
  &aaaqi_B.Product1,                   /* 187: Signal */
  &aaaqi_B.CANbitpacking,              /* 188: Signal */
  &aaaqi_B.CANbitpacking1,             /* 189: Signal */
  &aaaqi_B.CANbitpacking2,             /* 190: Signal */
  &aaaqi_B.CANbitpacking3,             /* 191: Signal */
  &aaaqi_B.CANbitpacking4,             /* 192: Signal */
  &aaaqi_B.CANbitunpacking2_o1,        /* 193: Signal */
  &aaaqi_B.CANbitunpacking2_o2,        /* 194: Signal */
  &aaaqi_B.CANbitunpacking2_o3,        /* 195: Signal */
  &aaaqi_B.CANbitunpacking2_o4,        /* 196: Signal */
  &aaaqi_B.CANbitunpacking2_o5,        /* 197: Signal */
  &aaaqi_B.CANbitunpacking2_o6,        /* 198: Signal */
  &aaaqi_B.CANbitunpacking2_o7,        /* 199: Signal */
  &aaaqi_B.CANbitunpacking2_o8,        /* 200: Signal */
  &aaaqi_B.CANbitunpacking2_o9,        /* 201: Signal */
  &aaaqi_B.CANbitunpacking2_o10,       /* 202: Signal */
  &aaaqi_B.CANbitunpacking2_o11,       /* 203: Signal */
  &aaaqi_B.CANbitunpacking2_o12,       /* 204: Signal */
  &aaaqi_B.CANbitunpacking2_o13,       /* 205: Signal */
  &aaaqi_B.CANbitunpacking2_o14,       /* 206: Signal */
  &aaaqi_B.CANbitunpacking2_o15,       /* 207: Signal */
  &aaaqi_B.CANbitunpacking2_o16,       /* 208: Signal */
  &aaaqi_B.CANbitunpacking3_o1,        /* 209: Signal */
  &aaaqi_B.CANbitunpacking3_o2,        /* 210: Signal */
  &aaaqi_B.CANbitunpacking3_o3,        /* 211: Signal */
  &aaaqi_B.CANbitunpacking3_o4,        /* 212: Signal */
  &aaaqi_B.CANbitunpacking4_o1,        /* 213: Signal */
  &aaaqi_B.CANbitunpacking4_o2,        /* 214: Signal */
  &aaaqi_B.CANbitunpacking5_o1,        /* 215: Signal */
  &aaaqi_B.CANbitunpacking5_o2,        /* 216: Signal */
  &aaaqi_B.CANbitunpacking5_o3,        /* 217: Signal */
  &aaaqi_B.CANbitunpacking6_o1,        /* 218: Signal */
  &aaaqi_B.CANbitunpacking6_o2,        /* 219: Signal */
  &aaaqi_B.CANbitunpacking7_o1,        /* 220: Signal */
  &aaaqi_B.CANbitunpacking7_o2,        /* 221: Signal */
  &aaaqi_B.CANbitunpacking7_o3,        /* 222: Signal */
  &aaaqi_B.CANbitunpacking7_o4,        /* 223: Signal */
  &aaaqi_B.CANbitunpacking8,           /* 224: Signal */
  &aaaqi_B.CANbitunpacking9_o1,        /* 225: Signal */
  &aaaqi_B.CANbitunpacking9_o2,        /* 226: Signal */
  &aaaqi_B.CANbitunpacking9_o3,        /* 227: Signal */
  &aaaqi_B.kaiguangaiweiyi3402,        /* 228: Signal */
  &aaaqi_B.liuliangji,                 /* 229: Signal */
  &aaaqi_B.liuliangji_fuqiuyeweiji3402_o2,/* 230: Signal */
  &aaaqi_B.tonggai1808Receive,         /* 231: Signal */
  &aaaqi_B.tonggai3402Receive_o1,      /* 232: Signal */
  &aaaqi_B.tonggai3402Receive_o2,      /* 233: Signal */
  &aaaqi_B.yalichuanganqi3402_o1,      /* 234: Signal */
  &aaaqi_B.yalichuanganqi3402_o2,      /* 235: Signal */
  &aaaqi_B.Step,                       /* 236: Signal */
  &aaaqi_B.Step1,                      /* 237: Signal */
  &aaaqi_B.ManualSwitch[0],            /* 238: Signal */
  &aaaqi_B.ManualSwitch1[0],           /* 239: Signal */
  &aaaqi_B.ManualSwitch2[0],           /* 240: Signal */
  &aaaqi_B.ManualSwitch3[0],           /* 241: Signal */
  &aaaqi_B.ManualSwitch4[0],           /* 242: Signal */
  &aaaqi_B.sf_Chart1.t,                /* 243: Signal */
  &aaaqi_B.Fcn_o,                      /* 244: Signal */
  &aaaqi_B.Saturation_c,               /* 245: Signal */
  &aaaqi_B.Saturation1_a,              /* 246: Signal */
  &aaaqi_B.Add_i,                      /* 247: Signal */
  &aaaqi_B.diancifa11_1,               /* 248: Signal */
  &aaaqi_B.diancifa11_2,               /* 249: Signal */
  &aaaqi_B.diancifa11_5,               /* 250: Signal */
  &aaaqi_B.diancifa20,                 /* 251: Signal */
  &aaaqi_B.diancifa16_1,               /* 252: Signal */
  &aaaqi_B.diancifa3,                  /* 253: Signal */
  &aaaqi_B.diancifa21,                 /* 254: Signal */
  &aaaqi_B.suoding,                    /* 255: Signal */
  &aaaqi_B.jiesuo,                     /* 256: Signal */
  &aaaqi_B.xuansong,                   /* 257: Signal */
  &aaaqi_B.xuanjin,                    /* 258: Signal */
  &aaaqi_B.bililiuliangfa18_1,         /* 259: Signal */
  &aaaqi_B.bililiuliangfa18_2,         /* 260: Signal */
  &aaaqi_B.bililiuliangfa18_3,         /* 261: Signal */
  &aaaqi_B.bililiuliangfa18_4,         /* 262: Signal */
  &aaaqi_B.kaiguangaifa,               /* 263: Signal */
  &aaaqi_B.sf_Chart.t,                 /* 264: Signal */
  &aaaqi_B.Fcn,                        /* 265: Signal */
  &aaaqi_B.Saturation,                 /* 266: Signal */
  &aaaqi_B.Saturation1,                /* 267: Signal */
  &aaaqi_B.Add,                        /* 268: Signal */
  &aaaqi_B.fa11_1,                     /* 269: Signal */
  &aaaqi_B.fa11_2,                     /* 270: Signal */
  &aaaqi_B.fa11_5,                     /* 271: Signal */
  &aaaqi_B.fa16_1,                     /* 272: Signal */
  &aaaqi_B.fa18_1,                     /* 273: Signal */
  &aaaqi_B.fa18_2,                     /* 274: Signal */
  &aaaqi_B.fa18_3,                     /* 275: Signal */
  &aaaqi_B.fa18_4,                     /* 276: Signal */
  &aaaqi_B.fa20,                       /* 277: Signal */
  &aaaqi_B.fa21,                       /* 278: Signal */
  &aaaqi_B.fa3,                        /* 279: Signal */
  &aaaqi_B.fa_kgg,                     /* 280: Signal */
  &aaaqi_B.jiesuomingling,             /* 281: Signal */
  &aaaqi_B.suodingmingling,            /* 282: Signal */
  &aaaqi_B.xuanjinmingling,            /* 283: Signal */
  &aaaqi_B.xuansongmingling,           /* 284: Signal */
  &aaaqi_B.Memory_h,                   /* 285: Signal */
  &aaaqi_B.Memory1_c,                  /* 286: Signal */
  &aaaqi_B.Switch,                     /* 287: Signal */
  &aaaqi_B.Switch2,                    /* 288: Signal */
  &aaaqi_B.Memory_ht,                  /* 289: Signal */
  &aaaqi_B.Memory1_o,                  /* 290: Signal */
  &aaaqi_B.Switch_g,                   /* 291: Signal */
  &aaaqi_B.Switch2_a,                  /* 292: Signal */
  &aaaqi_B.Memory_j,                   /* 293: Signal */
  &aaaqi_B.Memory1_d,                  /* 294: Signal */
  &aaaqi_B.Switch_i,                   /* 295: Signal */
  &aaaqi_B.Switch2_m,                  /* 296: Signal */
  &aaaqi_B.diancifa11_1_d,             /* 297: Signal */
  &aaaqi_B.diancifa11_2_b,             /* 298: Signal */
  &aaaqi_B.diancifa11_5_o,             /* 299: Signal */
  &aaaqi_B.diancifa20_i,               /* 300: Signal */
  &aaaqi_B.diancifa16_1_c,             /* 301: Signal */
  &aaaqi_B.diancifa3_l,                /* 302: Signal */
  &aaaqi_B.diancifa21_g,               /* 303: Signal */
  &aaaqi_B.suoding_k,                  /* 304: Signal */
  &aaaqi_B.jiesuo_g,                   /* 305: Signal */
  &aaaqi_B.xuansong_i,                 /* 306: Signal */
  &aaaqi_B.xuanjin_l,                  /* 307: Signal */
  &aaaqi_B.bililiuliangfa18_1_h,       /* 308: Signal */
  &aaaqi_B.bililiuliangfa18_2_i,       /* 309: Signal */
  &aaaqi_B.bililiuliangfa18_3_m,       /* 310: Signal */
  &aaaqi_B.bililiuliangfa18_4_b,       /* 311: Signal */
  &aaaqi_B.kaigaikaishi_k,             /* 312: Signal */
  &aaaqi_B.guangaikaishi_j,            /* 313: Signal */
  &aaaqi_B.SCzhushuiwancheng_f,        /* 314: Signal */
  &aaaqi_B.SCjiayawancheng_l,          /* 315: Signal */
  &aaaqi_B.SXQjunyawancheng_h,         /* 316: Signal */
  &aaaqi_B.SXQxieyawancheng_p,         /* 317: Signal */
  &aaaqi_B.SQshiyabuchangwancheng_p,   /* 318: Signal */
  &aaaqi_B.SQxuanjinjianyawancheng_m,  /* 319: Signal */
  &aaaqi_B.kaigaiwancheng_g,           /* 320: Signal */
  &aaaqi_B.guangaiwancheng_n,          /* 321: Signal */
  &aaaqi_B.p0_1,                       /* 322: Signal */
  &aaaqi_B.p0_2,                       /* 323: Signal */
  &aaaqi_B.diancifa11_1_l,             /* 324: Signal */
  &aaaqi_B.diancifa11_2_l,             /* 325: Signal */
  &aaaqi_B.diancifa11_5_d,             /* 326: Signal */
  &aaaqi_B.diancifa20_n,               /* 327: Signal */
  &aaaqi_B.diancifa16_1_l,             /* 328: Signal */
  &aaaqi_B.diancifa3_m,                /* 329: Signal */
  &aaaqi_B.diancifa21_a,               /* 330: Signal */
  &aaaqi_B.suoding_a,                  /* 331: Signal */
  &aaaqi_B.jiesuo_j,                   /* 332: Signal */
  &aaaqi_B.xuansong_n,                 /* 333: Signal */
  &aaaqi_B.xuanjin_b,                  /* 334: Signal */
  &aaaqi_B.bililiuliangfa18_1_a,       /* 335: Signal */
  &aaaqi_B.bililiuliangfa18_2_d,       /* 336: Signal */
  &aaaqi_B.bililiuliangfa18_3_p,       /* 337: Signal */
  &aaaqi_B.bililiuliangfa18_4_c,       /* 338: Signal */
  &aaaqi_B.kaigaikaishi,               /* 339: Signal */
  &aaaqi_B.guangaikaishi,              /* 340: Signal */
  &aaaqi_B.SCzhushuiwancheng,          /* 341: Signal */
  &aaaqi_B.SCjiayawancheng,            /* 342: Signal */
  &aaaqi_B.SXQjunyawancheng,           /* 343: Signal */
  &aaaqi_B.SXQxieyawancheng,           /* 344: Signal */
  &aaaqi_B.SQshiyabuchangwancheng,     /* 345: Signal */
  &aaaqi_B.SQxuanjinjianyawancheng,    /* 346: Signal */
  &aaaqi_B.kaigaiwancheng,             /* 347: Signal */
  &aaaqi_B.guangaiwancheng,            /* 348: Signal */
  &aaaqi_B.LogicalOperator,            /* 349: Signal */
  &aaaqi_B.Gain_j,                     /* 350: Signal */
  &aaaqi_B.Gain1_of,                   /* 351: Signal */
  &aaaqi_B.MultiportSwitch_jk,         /* 352: Signal */
  &aaaqi_B.Product_k,                  /* 353: Signal */
  &aaaqi_B.Product1_g,                 /* 354: Signal */
  &aaaqi_B.SumofElements_e,            /* 355: Signal */
  &aaaqi_B.Switch1_b,                  /* 356: Signal */
  &aaaqi_B.Switch2_ax,                 /* 357: Signal */
  &aaaqi_B.Switch3_p,                  /* 358: Signal */
  &aaaqi_B.Switch4_e,                  /* 359: Signal */
  &aaaqi_B.Switch5_o,                  /* 360: Signal */
  &aaaqi_B.Switch6_g,                  /* 361: Signal */
  &aaaqi_B.Switch7_n,                  /* 362: Signal */
  &aaaqi_B.Switch8_g,                  /* 363: Signal */
  &aaaqi_B.Switch9_m,                  /* 364: Signal */
  &aaaqi_B.Gain_p,                     /* 365: Signal */
  &aaaqi_B.Gain1_j,                    /* 366: Signal */
  &aaaqi_B.MultiportSwitch_e,          /* 367: Signal */
  &aaaqi_B.Product_l,                  /* 368: Signal */
  &aaaqi_B.Add1_mg,                    /* 369: Signal */
  &aaaqi_B.Sum_h,                      /* 370: Signal */
  &aaaqi_B.Sum1_n,                     /* 371: Signal */
  &aaaqi_B.Gain_o,                     /* 372: Signal */
  &aaaqi_B.Gain1_d,                    /* 373: Signal */
  &aaaqi_B.Gain2_c,                    /* 374: Signal */
  &aaaqi_B.Gain3_f,                    /* 375: Signal */
  &aaaqi_B.MultiportSwitch_g,          /* 376: Signal */
  &aaaqi_B.MultiportSwitch1_e,         /* 377: Signal */
  &aaaqi_B.Product_e,                  /* 378: Signal */
  &aaaqi_B.Add1_n,                     /* 379: Signal */
  &aaaqi_B.Sum_l,                      /* 380: Signal */
  &aaaqi_B.Sum1_p,                     /* 381: Signal */
  &aaaqi_B.Sum2_e,                     /* 382: Signal */
  &aaaqi_B.Sum3_n,                     /* 383: Signal */
  &aaaqi_B.MultiportSwitch_l,          /* 384: Signal */
  &aaaqi_B.Product_m3,                 /* 385: Signal */
  &aaaqi_B.Product1_bp,                /* 386: Signal */
  &aaaqi_B.SumofElements_d,            /* 387: Signal */
  &aaaqi_B.Switch1_bv,                 /* 388: Signal */
  &aaaqi_B.Switch2_p,                  /* 389: Signal */
  &aaaqi_B.Switch3_m,                  /* 390: Signal */
  &aaaqi_B.Switch4_f,                  /* 391: Signal */
  &aaaqi_B.Switch5_b,                  /* 392: Signal */
  &aaaqi_B.Switch6_k,                  /* 393: Signal */
  &aaaqi_B.Switch7_g,                  /* 394: Signal */
  &aaaqi_B.Switch8_l,                  /* 395: Signal */
  &aaaqi_B.Switch9_o,                  /* 396: Signal */
  &aaaqi_B.Gain_f,                     /* 397: Signal */
  &aaaqi_B.Gain1,                      /* 398: Signal */
  &aaaqi_B.MultiportSwitch_b,          /* 399: Signal */
  &aaaqi_B.Product_i,                  /* 400: Signal */
  &aaaqi_B.Product1_i,                 /* 401: Signal */
  &aaaqi_B.SumofElements,              /* 402: Signal */
  &aaaqi_B.Switch1_a,                  /* 403: Signal */
  &aaaqi_B.Switch2_h,                  /* 404: Signal */
  &aaaqi_B.Switch3_b,                  /* 405: Signal */
  &aaaqi_B.Switch4_d,                  /* 406: Signal */
  &aaaqi_B.Switch5_g,                  /* 407: Signal */
  &aaaqi_B.Switch6_a,                  /* 408: Signal */
  &aaaqi_B.Switch7_b,                  /* 409: Signal */
  &aaaqi_B.Switch8_b,                  /* 410: Signal */
  &aaaqi_B.Switch9_a,                  /* 411: Signal */
  &aaaqi_B.Gain_m,                     /* 412: Signal */
  &aaaqi_B.Gain1_o,                    /* 413: Signal */
  &aaaqi_B.MultiportSwitch_j,          /* 414: Signal */
  &aaaqi_B.Product_c,                  /* 415: Signal */
  &aaaqi_B.Add1_f,                     /* 416: Signal */
  &aaaqi_B.Sum,                        /* 417: Signal */
  &aaaqi_B.Sum1,                       /* 418: Signal */
  &aaaqi_B.Gain_i,                     /* 419: Signal */
  &aaaqi_B.Gain1_l,                    /* 420: Signal */
  &aaaqi_B.Gain2,                      /* 421: Signal */
  &aaaqi_B.Gain3,                      /* 422: Signal */
  &aaaqi_B.MultiportSwitch_m,          /* 423: Signal */
  &aaaqi_B.MultiportSwitch1_d,         /* 424: Signal */
  &aaaqi_B.Product_m,                  /* 425: Signal */
  &aaaqi_B.Add1_m,                     /* 426: Signal */
  &aaaqi_B.Sum_m,                      /* 427: Signal */
  &aaaqi_B.Sum1_l,                     /* 428: Signal */
  &aaaqi_B.Sum2,                       /* 429: Signal */
  &aaaqi_B.Sum3,                       /* 430: Signal */
  &aaaqi_B.MultiportSwitch_d,          /* 431: Signal */
  &aaaqi_B.Product_j,                  /* 432: Signal */
  &aaaqi_B.Product1_b,                 /* 433: Signal */
  &aaaqi_B.SumofElements_f,            /* 434: Signal */
  &aaaqi_B.Switch1_m,                  /* 435: Signal */
  &aaaqi_B.Switch2_mu,                 /* 436: Signal */
  &aaaqi_B.Switch3_l,                  /* 437: Signal */
  &aaaqi_B.Switch4_i,                  /* 438: Signal */
  &aaaqi_B.Switch5_k,                  /* 439: Signal */
  &aaaqi_B.Switch6_b,                  /* 440: Signal */
  &aaaqi_B.Switch7_h,                  /* 441: Signal */
  &aaaqi_B.Switch8_p,                  /* 442: Signal */
  &aaaqi_B.Switch9_h,                  /* 443: Signal */
  &aaaqi_B.Compare,                    /* 444: Signal */
  &aaaqi_B.Compare_jd,                 /* 445: Signal */
  &aaaqi_B.Compare_o,                  /* 446: Signal */
  &aaaqi_B.Compare_p,                  /* 447: Signal */
  &aaaqi_B.Compare_j,                  /* 448: Signal */
  &aaaqi_B.Compare_k,                  /* 449: Signal */
  &aaaqi_B.FromWs_g,                   /* 450: Signal */
  &aaaqi_B.FromWs_i,                   /* 451: Signal */
  &aaaqi_B.FromWs_ou,                  /* 452: Signal */
  &aaaqi_B.FromWs_fu,                  /* 453: Signal */
  &aaaqi_B.FromWs,                     /* 454: Signal */
  &aaaqi_B.FromWs_n,                   /* 455: Signal */
  &aaaqi_B.FromWs_f,                   /* 456: Signal */
  &aaaqi_B.FromWs_o,                   /* 457: Signal */
  &aaaqi_P.CompareToConstant_const,    /* 458: Mask Parameter */
  &aaaqi_P.CompareToConstant1_const_o, /* 459: Mask Parameter */
  &aaaqi_P.CompareToConstant2_const,   /* 460: Mask Parameter */
  &aaaqi_P.CompareToConstant3_const_e, /* 461: Mask Parameter */
  &aaaqi_P.BCQbushui_Value,            /* 462: Block Parameter */
  &aaaqi_P.Constant_Value_cb,          /* 463: Block Parameter */
  &aaaqi_P.Constant1_Value,            /* 464: Block Parameter */
  &aaaqi_P.Constant2_Value_a,          /* 465: Block Parameter */
  &aaaqi_P.Constant3_Value,            /* 466: Block Parameter */
  &aaaqi_P.SCjiaya_Value,              /* 467: Block Parameter */
  &aaaqi_P.SCxieya_Value,              /* 468: Block Parameter */
  &aaaqi_P.SCzhushui_Value,            /* 469: Block Parameter */
  &aaaqi_P.SXQjunya_Value,             /* 470: Block Parameter */
  &aaaqi_P.SXQxieya_Value,             /* 471: Block Parameter */
  &aaaqi_P.bilijianyafa_Value,         /* 472: Block Parameter */
  &aaaqi_P.diancifa11_3_Value,         /* 473: Block Parameter */
  &aaaqi_P.diancifa11_4_Value,         /* 474: Block Parameter */
  &aaaqi_P.diancifa16_2_Value,         /* 475: Block Parameter */
  &aaaqi_P.diancifa16_3_Value,         /* 476: Block Parameter */
  &aaaqi_P.guangai_Value,              /* 477: Block Parameter */
  &aaaqi_P.jiesuo_Value,               /* 478: Block Parameter */
  &aaaqi_P.jiting_Value,               /* 479: Block Parameter */
  &aaaqi_P.kaigai_Value,               /* 480: Block Parameter */
  &aaaqi_P.kaishi_Value,               /* 481: Block Parameter */
  &aaaqi_P.qiehuan_Value,              /* 482: Block Parameter */
  &aaaqi_P.shiyabuchang_Value,         /* 483: Block Parameter */
  &aaaqi_P.suoding_Value,              /* 484: Block Parameter */
  &aaaqi_P.tiaoshi_Value,              /* 485: Block Parameter */
  &aaaqi_P.xuanjin_Value,              /* 486: Block Parameter */
  &aaaqi_P.xuanjinjianya_Value,        /* 487: Block Parameter */
  &aaaqi_P.xuansong_Value,             /* 488: Block Parameter */
  &aaaqi_P.zidongguangai_Value,        /* 489: Block Parameter */
  &aaaqi_P.zidongkaigai_Value,         /* 490: Block Parameter */
  &aaaqi_P._Value_g,                   /* 491: Block Parameter */
  &aaaqi_P._Value_k,                   /* 492: Block Parameter */
  &aaaqi_P._Value_e,                   /* 493: Block Parameter */
  &aaaqi_P._Value,                     /* 494: Block Parameter */
  &aaaqi_P.Gain_Gain_f,                /* 495: Block Parameter */
  &aaaqi_P.uDLookupTable_tableData_h[0],/* 496: Block Parameter */
  &aaaqi_P.uDLookupTable_bp01Data_n[0],/* 497: Block Parameter */
  &aaaqi_P.Memory_X0,                  /* 498: Block Parameter */
  &aaaqi_P.Memory1_X0,                 /* 499: Block Parameter */
  &aaaqi_P.Memory2_X0,                 /* 500: Block Parameter */
  &aaaqi_P.PCI1784_P1[0],              /* 501: Block Parameter */
  &aaaqi_P.PCI1784_P2,                 /* 502: Block Parameter */
  &aaaqi_P.PCI1784_P3,                 /* 503: Block Parameter */
  &aaaqi_P.constant_Value,             /* 504: Block Parameter */
  &aaaqi_P.PCI1716DIO1_P1[0],          /* 505: Block Parameter */
  &aaaqi_P.PCI1716DIO1_P2,             /* 506: Block Parameter */
  &aaaqi_P.Constant_Value_l,           /* 507: Block Parameter */
  &aaaqi_P.Constant1_Value_n,          /* 508: Block Parameter */
  &aaaqi_P.Saturation_UpperSat_m,      /* 509: Block Parameter */
  &aaaqi_P.Saturation_LowerSat_a,      /* 510: Block Parameter */
  &aaaqi_P.Saturation1_UpperSat_f,     /* 511: Block Parameter */
  &aaaqi_P.Saturation1_LowerSat_b,     /* 512: Block Parameter */
  &aaaqi_P.Saturation2_UpperSat,       /* 513: Block Parameter */
  &aaaqi_P.Saturation2_LowerSat,       /* 514: Block Parameter */
  &aaaqi_P.Saturation3_UpperSat,       /* 515: Block Parameter */
  &aaaqi_P.Saturation3_LowerSat,       /* 516: Block Parameter */
  &aaaqi_P.Saturation4_UpperSat,       /* 517: Block Parameter */
  &aaaqi_P.Saturation4_LowerSat,       /* 518: Block Parameter */
  &aaaqi_P.Saturation5_UpperSat,       /* 519: Block Parameter */
  &aaaqi_P.Saturation5_LowerSat,       /* 520: Block Parameter */
  &aaaqi_P.Saturation6_UpperSat,       /* 521: Block Parameter */
  &aaaqi_P.Saturation6_LowerSat,       /* 522: Block Parameter */
  &aaaqi_P.Saturation7_UpperSat,       /* 523: Block Parameter */
  &aaaqi_P.Saturation7_LowerSat,       /* 524: Block Parameter */
  &aaaqi_P.PCI6208ADA_P1[0],           /* 525: Block Parameter */
  &aaaqi_P.PCI6208ADA_P2,              /* 526: Block Parameter */
  &aaaqi_P.PCI6208ADA_P3,              /* 527: Block Parameter */
  &aaaqi_P.PCI6208ADA_P4,              /* 528: Block Parameter */
  &aaaqi_P.PCI6208ADA_P5[0],           /* 529: Block Parameter */
  &aaaqi_P.PCI6208ADA_P6[0],           /* 530: Block Parameter */
  &aaaqi_P.Switch1_Threshold_g,        /* 531: Block Parameter */
  &aaaqi_P.Switch10_Threshold,         /* 532: Block Parameter */
  &aaaqi_P.Switch11_Threshold,         /* 533: Block Parameter */
  &aaaqi_P.Switch12_Threshold,         /* 534: Block Parameter */
  &aaaqi_P.Switch13_Threshold,         /* 535: Block Parameter */
  &aaaqi_P.Switch14_Threshold,         /* 536: Block Parameter */
  &aaaqi_P.Switch17_Threshold,         /* 537: Block Parameter */
  &aaaqi_P.Switch18_Threshold,         /* 538: Block Parameter */
  &aaaqi_P.Switch2_Threshold_f,        /* 539: Block Parameter */
  &aaaqi_P.Switch3_Threshold_b4,       /* 540: Block Parameter */
  &aaaqi_P.Switch4_Threshold_a,        /* 541: Block Parameter */
  &aaaqi_P.Switch5_Threshold_j,        /* 542: Block Parameter */
  &aaaqi_P.Switch6_Threshold_k,        /* 543: Block Parameter */
  &aaaqi_P.Switch7_Threshold_e,        /* 544: Block Parameter */
  &aaaqi_P.Switch8_Threshold_p,        /* 545: Block Parameter */
  &aaaqi_P.Switch9_Threshold_k,        /* 546: Block Parameter */
  &aaaqi_P.Subsystem4.Out1_Y0,         /* 547: Block Parameter */
  &aaaqi_P.Subsystem4.Constant_Value,  /* 548: Block Parameter */
  &aaaqi_P.Subsystem5.Out1_Y0,         /* 549: Block Parameter */
  &aaaqi_P.Subsystem5.Constant_Value,  /* 550: Block Parameter */
  &aaaqi_P.Constant_Value_o,           /* 551: Block Parameter */
  &aaaqi_P.Constant1_Value_jd,         /* 552: Block Parameter */
  &aaaqi_P.Constant10_Value_e,         /* 553: Block Parameter */
  &aaaqi_P.Constant11_Value_e,         /* 554: Block Parameter */
  &aaaqi_P.Constant12_Value_nm,        /* 555: Block Parameter */
  &aaaqi_P.Constant13_Value_n,         /* 556: Block Parameter */
  &aaaqi_P.Constant14_Value_i,         /* 557: Block Parameter */
  &aaaqi_P.Constant15_Value_o,         /* 558: Block Parameter */
  &aaaqi_P.Constant16_Value_n,         /* 559: Block Parameter */
  &aaaqi_P.Constant17_Value_p,         /* 560: Block Parameter */
  &aaaqi_P.Constant18_Value_o,         /* 561: Block Parameter */
  &aaaqi_P.Constant19_Value_ol,        /* 562: Block Parameter */
  &aaaqi_P.Constant2_Value_a4,         /* 563: Block Parameter */
  &aaaqi_P.Constant20_Value_b,         /* 564: Block Parameter */
  &aaaqi_P.Constant21_Value_e,         /* 565: Block Parameter */
  &aaaqi_P.Constant22_Value_j,         /* 566: Block Parameter */
  &aaaqi_P.Constant23_Value_g4,        /* 567: Block Parameter */
  &aaaqi_P.Constant24_Value_b,         /* 568: Block Parameter */
  &aaaqi_P.Constant25_Value_e,         /* 569: Block Parameter */
  &aaaqi_P.Constant26_Value_a,         /* 570: Block Parameter */
  &aaaqi_P.Constant27_Value_h,         /* 571: Block Parameter */
  &aaaqi_P.Constant28_Value_e,         /* 572: Block Parameter */
  &aaaqi_P.Constant29_Value_k,         /* 573: Block Parameter */
  &aaaqi_P.Constant3_Value_d,          /* 574: Block Parameter */
  &aaaqi_P.Constant30_Value,           /* 575: Block Parameter */
  &aaaqi_P.Constant31_Value,           /* 576: Block Parameter */
  &aaaqi_P.Constant32_Value,           /* 577: Block Parameter */
  &aaaqi_P.Constant33_Value,           /* 578: Block Parameter */
  &aaaqi_P.Constant34_Value,           /* 579: Block Parameter */
  &aaaqi_P.Constant35_Value,           /* 580: Block Parameter */
  &aaaqi_P.Constant36_Value,           /* 581: Block Parameter */
  &aaaqi_P.Constant37_Value,           /* 582: Block Parameter */
  &aaaqi_P.Constant38_Value,           /* 583: Block Parameter */
  &aaaqi_P.Constant39_Value,           /* 584: Block Parameter */
  &aaaqi_P.Constant4_Value_d,          /* 585: Block Parameter */
  &aaaqi_P.Constant40_Value,           /* 586: Block Parameter */
  &aaaqi_P.Constant41_Value,           /* 587: Block Parameter */
  &aaaqi_P.Constant42_Value,           /* 588: Block Parameter */
  &aaaqi_P.Constant43_Value,           /* 589: Block Parameter */
  &aaaqi_P.Constant44_Value,           /* 590: Block Parameter */
  &aaaqi_P.Constant45_Value,           /* 591: Block Parameter */
  &aaaqi_P.Constant46_Value,           /* 592: Block Parameter */
  &aaaqi_P.Constant47_Value,           /* 593: Block Parameter */
  &aaaqi_P.Constant5_Value_l,          /* 594: Block Parameter */
  &aaaqi_P.Constant6_Value_j,          /* 595: Block Parameter */
  &aaaqi_P.Constant7_Value_d,          /* 596: Block Parameter */
  &aaaqi_P.Constant8_Value_m,          /* 597: Block Parameter */
  &aaaqi_P.Constant9_Value_k,          /* 598: Block Parameter */
  &aaaqi_P.uDLookupTable_tableData[0], /* 599: Block Parameter */
  &aaaqi_P.uDLookupTable_bp01Data[0],  /* 600: Block Parameter */
  &aaaqi_P.uDLookupTable1_tableData[0],/* 601: Block Parameter */
  &aaaqi_P.uDLookupTable1_bp01Data[0], /* 602: Block Parameter */
  &aaaqi_P.uDLookupTable2_tableData[0],/* 603: Block Parameter */
  &aaaqi_P.uDLookupTable2_bp01Data[0], /* 604: Block Parameter */
  &aaaqi_P.uDLookupTable3_tableData[0],/* 605: Block Parameter */
  &aaaqi_P.uDLookupTable3_bp01Data[0], /* 606: Block Parameter */
  &aaaqi_P.uDLookupTable4_tableData[0],/* 607: Block Parameter */
  &aaaqi_P.uDLookupTable4_bp01Data[0], /* 608: Block Parameter */
  &aaaqi_P.uDLookupTable5_tableData[0],/* 609: Block Parameter */
  &aaaqi_P.uDLookupTable5_bp01Data[0], /* 610: Block Parameter */
  &aaaqi_P.uDLookupTable6_tableData[0],/* 611: Block Parameter */
  &aaaqi_P.uDLookupTable6_bp01Data[0], /* 612: Block Parameter */
  &aaaqi_P.Setup_P1[0],                /* 613: Block Parameter */
  &aaaqi_P.Setup_P2[0],                /* 614: Block Parameter */
  &aaaqi_P.Setup_P3,                   /* 615: Block Parameter */
  &aaaqi_P.Setup_P4[0],                /* 616: Block Parameter */
  &aaaqi_P.Setup_P5[0],                /* 617: Block Parameter */
  &aaaqi_P.Setup_P11[0],               /* 618: Block Parameter */
  &aaaqi_P.Setup_P15,                  /* 619: Block Parameter */
  &aaaqi_P.Setup_P16,                  /* 620: Block Parameter */
  &aaaqi_P.Setup_P17,                  /* 621: Block Parameter */
  &aaaqi_P.Setup_P18,                  /* 622: Block Parameter */
  &aaaqi_P.Setup_P19,                  /* 623: Block Parameter */
  &aaaqi_P.Setup_P20,                  /* 624: Block Parameter */
  &aaaqi_P.Setup_P21,                  /* 625: Block Parameter */
  &aaaqi_P.Setup_P22,                  /* 626: Block Parameter */
  &aaaqi_P.Setup_P23,                  /* 627: Block Parameter */
  &aaaqi_P.Setup_P24,                  /* 628: Block Parameter */
  &aaaqi_P.Step_Time,                  /* 629: Block Parameter */
  &aaaqi_P.Step_Y0,                    /* 630: Block Parameter */
  &aaaqi_P.Step_YFinal,                /* 631: Block Parameter */
  &aaaqi_P.Step1_Time,                 /* 632: Block Parameter */
  &aaaqi_P.Step1_Y0,                   /* 633: Block Parameter */
  &aaaqi_P.Step1_YFinal,               /* 634: Block Parameter */
  &aaaqi_P.ManualSwitch_CurrentSetting,/* 635: Block Parameter */
  &aaaqi_P.ManualSwitch1_CurrentSetting,/* 636: Block Parameter */
  &aaaqi_P.ManualSwitch2_CurrentSetting,/* 637: Block Parameter */
  &aaaqi_P.ManualSwitch3_CurrentSetting,/* 638: Block Parameter */
  &aaaqi_P.ManualSwitch4_CurrentSetting,/* 639: Block Parameter */
  &aaaqi_P.Saturation_UpperSat_p,      /* 640: Block Parameter */
  &aaaqi_P.Saturation_LowerSat_e,      /* 641: Block Parameter */
  &aaaqi_P.Saturation1_UpperSat_l,     /* 642: Block Parameter */
  &aaaqi_P.Saturation1_LowerSat_m,     /* 643: Block Parameter */
  &aaaqi_P.Saturation_UpperSat,        /* 644: Block Parameter */
  &aaaqi_P.Saturation_LowerSat,        /* 645: Block Parameter */
  &aaaqi_P.Saturation1_UpperSat,       /* 646: Block Parameter */
  &aaaqi_P.Saturation1_LowerSat,       /* 647: Block Parameter */
  &aaaqi_P.fa11_1_Value,               /* 648: Block Parameter */
  &aaaqi_P.fa11_2_Value,               /* 649: Block Parameter */
  &aaaqi_P.fa11_5_Value,               /* 650: Block Parameter */
  &aaaqi_P.fa16_1_Value,               /* 651: Block Parameter */
  &aaaqi_P.fa18_1_Value,               /* 652: Block Parameter */
  &aaaqi_P.fa18_2_Value,               /* 653: Block Parameter */
  &aaaqi_P.fa18_3_Value,               /* 654: Block Parameter */
  &aaaqi_P.fa18_4_Value,               /* 655: Block Parameter */
  &aaaqi_P.fa20_Value,                 /* 656: Block Parameter */
  &aaaqi_P.fa21_Value,                 /* 657: Block Parameter */
  &aaaqi_P.fa3_Value,                  /* 658: Block Parameter */
  &aaaqi_P.fa_kgg_Value,               /* 659: Block Parameter */
  &aaaqi_P.jiesuomingling_Value,       /* 660: Block Parameter */
  &aaaqi_P.suodingmingling_Value,      /* 661: Block Parameter */
  &aaaqi_P.xuanjinmingling_Value,      /* 662: Block Parameter */
  &aaaqi_P.xuansongmingling_Value,     /* 663: Block Parameter */
  &aaaqi_P.Constant_Value,             /* 664: Block Parameter */
  &aaaqi_P.Constant2_Value,            /* 665: Block Parameter */
  &aaaqi_P.Memory_X0_b,                /* 666: Block Parameter */
  &aaaqi_P.Memory1_X0_l,               /* 667: Block Parameter */
  &aaaqi_P.Switch_Threshold,           /* 668: Block Parameter */
  &aaaqi_P.Switch2_Threshold_d,        /* 669: Block Parameter */
  &aaaqi_P.Constant_Value_p,           /* 670: Block Parameter */
  &aaaqi_P.Constant2_Value_f,          /* 671: Block Parameter */
  &aaaqi_P.Memory_X0_k,                /* 672: Block Parameter */
  &aaaqi_P.Memory1_X0_lk,              /* 673: Block Parameter */
  &aaaqi_P.Switch_Threshold_c,         /* 674: Block Parameter */
  &aaaqi_P.Switch2_Threshold_g,        /* 675: Block Parameter */
  &aaaqi_P.Constant_Value_e,           /* 676: Block Parameter */
  &aaaqi_P.Constant2_Value_l,          /* 677: Block Parameter */
  &aaaqi_P.Memory_X0_d,                /* 678: Block Parameter */
  &aaaqi_P.Memory1_X0_b,               /* 679: Block Parameter */
  &aaaqi_P.Switch_Threshold_j,         /* 680: Block Parameter */
  &aaaqi_P.Switch2_Threshold_l,        /* 681: Block Parameter */
  &aaaqi_P.bililiuliangfa18_1_Y0,      /* 682: Block Parameter */
  &aaaqi_P.bililiuliangfa18_2_Y0,      /* 683: Block Parameter */
  &aaaqi_P.bililiuliangfa18_3_Y0,      /* 684: Block Parameter */
  &aaaqi_P.bililiuliangfa18_4_Y0,      /* 685: Block Parameter */
  &aaaqi_P.kaiguangaifa_Y0,            /* 686: Block Parameter */
  &aaaqi_P.bililiuliangfa18_1_Y0_e,    /* 687: Block Parameter */
  &aaaqi_P.bililiuliangfa18_2_Y0_j,    /* 688: Block Parameter */
  &aaaqi_P.bililiuliangfa18_3_Y0_d,    /* 689: Block Parameter */
  &aaaqi_P.bililiuliangfa18_4_Y0_j,    /* 690: Block Parameter */
  &aaaqi_P.kaiguangaifa_Y0_i,          /* 691: Block Parameter */
  &aaaqi_P.CompareToConstant1_const,   /* 692: Mask Parameter */
  &aaaqi_P.CompareToConstant11_const,  /* 693: Mask Parameter */
  &aaaqi_P.CompareToConstant3_const,   /* 694: Mask Parameter */
  &aaaqi_P.CompareToConstant5_const,   /* 695: Mask Parameter */
  &aaaqi_P.CompareToConstant7_const,   /* 696: Mask Parameter */
  &aaaqi_P.CompareToConstant9_const,   /* 697: Mask Parameter */
  &aaaqi_P.Constant_Value_k,           /* 698: Block Parameter */
  &aaaqi_P.Constant1_Value_j,          /* 699: Block Parameter */
  &aaaqi_P.Constant10_Value,           /* 700: Block Parameter */
  &aaaqi_P.Constant11_Value,           /* 701: Block Parameter */
  &aaaqi_P.Constant12_Value,           /* 702: Block Parameter */
  &aaaqi_P.Constant13_Value,           /* 703: Block Parameter */
  &aaaqi_P.Constant14_Value,           /* 704: Block Parameter */
  &aaaqi_P.Constant15_Value,           /* 705: Block Parameter */
  &aaaqi_P.Constant16_Value,           /* 706: Block Parameter */
  &aaaqi_P.Constant17_Value,           /* 707: Block Parameter */
  &aaaqi_P.Constant18_Value,           /* 708: Block Parameter */
  &aaaqi_P.Constant19_Value,           /* 709: Block Parameter */
  &aaaqi_P.Constant2_Value_i,          /* 710: Block Parameter */
  &aaaqi_P.Constant20_Value,           /* 711: Block Parameter */
  &aaaqi_P.Constant21_Value,           /* 712: Block Parameter */
  &aaaqi_P.Constant22_Value,           /* 713: Block Parameter */
  &aaaqi_P.Constant23_Value,           /* 714: Block Parameter */
  &aaaqi_P.Constant24_Value,           /* 715: Block Parameter */
  &aaaqi_P.Constant25_Value,           /* 716: Block Parameter */
  &aaaqi_P.Constant26_Value,           /* 717: Block Parameter */
  &aaaqi_P.Constant27_Value,           /* 718: Block Parameter */
  &aaaqi_P.Constant28_Value,           /* 719: Block Parameter */
  &aaaqi_P.Constant29_Value,           /* 720: Block Parameter */
  &aaaqi_P.Constant3_Value_a,          /* 721: Block Parameter */
  &aaaqi_P.Constant4_Value,            /* 722: Block Parameter */
  &aaaqi_P.Constant5_Value,            /* 723: Block Parameter */
  &aaaqi_P.Constant6_Value,            /* 724: Block Parameter */
  &aaaqi_P.Constant7_Value,            /* 725: Block Parameter */
  &aaaqi_P.Constant8_Value,            /* 726: Block Parameter */
  &aaaqi_P.Constant9_Value,            /* 727: Block Parameter */
  &aaaqi_P.Gain_Gain_l,                /* 728: Block Parameter */
  &aaaqi_P.Gain1_Gain_h,               /* 729: Block Parameter */
  &aaaqi_P.Switch1_Threshold,          /* 730: Block Parameter */
  &aaaqi_P.Switch2_Threshold,          /* 731: Block Parameter */
  &aaaqi_P.Switch3_Threshold,          /* 732: Block Parameter */
  &aaaqi_P.Switch4_Threshold,          /* 733: Block Parameter */
  &aaaqi_P.Switch5_Threshold,          /* 734: Block Parameter */
  &aaaqi_P.Switch6_Threshold,          /* 735: Block Parameter */
  &aaaqi_P.Switch7_Threshold,          /* 736: Block Parameter */
  &aaaqi_P.Switch8_Threshold,          /* 737: Block Parameter */
  &aaaqi_P.Switch9_Threshold,          /* 738: Block Parameter */
  &aaaqi_P.Constant_Value_c,           /* 739: Block Parameter */
  &aaaqi_P.Constant1_Value_i,          /* 740: Block Parameter */
  &aaaqi_P.Gain_Gain_p,                /* 741: Block Parameter */
  &aaaqi_P.Gain1_Gain_k,               /* 742: Block Parameter */
  &aaaqi_P.Constant_Value_m,           /* 743: Block Parameter */
  &aaaqi_P.Constant1_Value_m,          /* 744: Block Parameter */
  &aaaqi_P.Constant2_Value_b,          /* 745: Block Parameter */
  &aaaqi_P.Gain_Gain,                  /* 746: Block Parameter */
  &aaaqi_P.Gain1_Gain,                 /* 747: Block Parameter */
  &aaaqi_P.Gain2_Gain,                 /* 748: Block Parameter */
  &aaaqi_P.Gain3_Gain,                 /* 749: Block Parameter */
  &aaaqi_P.Constant_Value_g,           /* 750: Block Parameter */
  &aaaqi_P.Constant1_Value_f,          /* 751: Block Parameter */
  &aaaqi_P.Constant10_Value_d,         /* 752: Block Parameter */
  &aaaqi_P.Constant11_Value_g,         /* 753: Block Parameter */
  &aaaqi_P.Constant12_Value_n,         /* 754: Block Parameter */
  &aaaqi_P.Constant13_Value_m,         /* 755: Block Parameter */
  &aaaqi_P.Constant14_Value_e,         /* 756: Block Parameter */
  &aaaqi_P.Constant15_Value_f,         /* 757: Block Parameter */
  &aaaqi_P.Constant16_Value_l,         /* 758: Block Parameter */
  &aaaqi_P.Constant17_Value_i,         /* 759: Block Parameter */
  &aaaqi_P.Constant18_Value_d,         /* 760: Block Parameter */
  &aaaqi_P.Constant19_Value_b,         /* 761: Block Parameter */
  &aaaqi_P.Constant2_Value_e,          /* 762: Block Parameter */
  &aaaqi_P.Constant20_Value_j,         /* 763: Block Parameter */
  &aaaqi_P.Constant21_Value_l,         /* 764: Block Parameter */
  &aaaqi_P.Constant22_Value_d,         /* 765: Block Parameter */
  &aaaqi_P.Constant23_Value_g,         /* 766: Block Parameter */
  &aaaqi_P.Constant24_Value_m,         /* 767: Block Parameter */
  &aaaqi_P.Constant25_Value_n,         /* 768: Block Parameter */
  &aaaqi_P.Constant26_Value_l,         /* 769: Block Parameter */
  &aaaqi_P.Constant27_Value_p,         /* 770: Block Parameter */
  &aaaqi_P.Constant28_Value_h,         /* 771: Block Parameter */
  &aaaqi_P.Constant29_Value_g,         /* 772: Block Parameter */
  &aaaqi_P.Constant3_Value_e,          /* 773: Block Parameter */
  &aaaqi_P.Constant4_Value_l,          /* 774: Block Parameter */
  &aaaqi_P.Constant5_Value_c,          /* 775: Block Parameter */
  &aaaqi_P.Constant6_Value_p,          /* 776: Block Parameter */
  &aaaqi_P.Constant7_Value_k,          /* 777: Block Parameter */
  &aaaqi_P.Constant8_Value_h,          /* 778: Block Parameter */
  &aaaqi_P.Constant9_Value_b,          /* 779: Block Parameter */
  &aaaqi_P.Switch1_Threshold_o,        /* 780: Block Parameter */
  &aaaqi_P.Switch2_Threshold_a,        /* 781: Block Parameter */
  &aaaqi_P.Switch3_Threshold_b,        /* 782: Block Parameter */
  &aaaqi_P.Switch4_Threshold_e,        /* 783: Block Parameter */
  &aaaqi_P.Switch5_Threshold_b,        /* 784: Block Parameter */
  &aaaqi_P.Switch6_Threshold_h,        /* 785: Block Parameter */
  &aaaqi_P.Switch7_Threshold_j,        /* 786: Block Parameter */
  &aaaqi_P.Switch8_Threshold_k,        /* 787: Block Parameter */
  &aaaqi_P.Switch9_Threshold_c,        /* 788: Block Parameter */
  &aaaqi_P.Constant1_Value_e,          /* 789: Block Parameter */
  &aaaqi_P.Constant10_Value_o,         /* 790: Block Parameter */
  &aaaqi_P.Constant11_Value_gt,        /* 791: Block Parameter */
  &aaaqi_P.Constant12_Value_o,         /* 792: Block Parameter */
  &aaaqi_P.Constant13_Value_e,         /* 793: Block Parameter */
  &aaaqi_P.Constant14_Value_o,         /* 794: Block Parameter */
  &aaaqi_P.Constant15_Value_n,         /* 795: Block Parameter */
  &aaaqi_P.Constant16_Value_b,         /* 796: Block Parameter */
  &aaaqi_P.Constant17_Value_k,         /* 797: Block Parameter */
  &aaaqi_P.Constant18_Value_dz,        /* 798: Block Parameter */
  &aaaqi_P.Constant19_Value_i,         /* 799: Block Parameter */
  &aaaqi_P.Constant2_Value_p,          /* 800: Block Parameter */
  &aaaqi_P.Constant20_Value_jg,        /* 801: Block Parameter */
  &aaaqi_P.Constant21_Value_h,         /* 802: Block Parameter */
  &aaaqi_P.Constant22_Value_m,         /* 803: Block Parameter */
  &aaaqi_P.Constant23_Value_j,         /* 804: Block Parameter */
  &aaaqi_P.Constant24_Value_d,         /* 805: Block Parameter */
  &aaaqi_P.Constant25_Value_h,         /* 806: Block Parameter */
  &aaaqi_P.Constant26_Value_f,         /* 807: Block Parameter */
  &aaaqi_P.Constant27_Value_f,         /* 808: Block Parameter */
  &aaaqi_P.Constant28_Value_c,         /* 809: Block Parameter */
  &aaaqi_P.Constant29_Value_a,         /* 810: Block Parameter */
  &aaaqi_P.Constant3_Value_e0,         /* 811: Block Parameter */
  &aaaqi_P.Constant4_Value_f,          /* 812: Block Parameter */
  &aaaqi_P.Constant5_Value_e,          /* 813: Block Parameter */
  &aaaqi_P.Constant6_Value_i,          /* 814: Block Parameter */
  &aaaqi_P.Constant7_Value_c,          /* 815: Block Parameter */
  &aaaqi_P.Constant8_Value_p,          /* 816: Block Parameter */
  &aaaqi_P.Constant9_Value_c,          /* 817: Block Parameter */
  &aaaqi_P.Gain_Gain_j,                /* 818: Block Parameter */
  &aaaqi_P.Gain1_Gain_o,               /* 819: Block Parameter */
  &aaaqi_P.Switch1_Threshold_od,       /* 820: Block Parameter */
  &aaaqi_P.Switch2_Threshold_j,        /* 821: Block Parameter */
  &aaaqi_P.Switch3_Threshold_o,        /* 822: Block Parameter */
  &aaaqi_P.Switch4_Threshold_h,        /* 823: Block Parameter */
  &aaaqi_P.Switch5_Threshold_e,        /* 824: Block Parameter */
  &aaaqi_P.Switch6_Threshold_a,        /* 825: Block Parameter */
  &aaaqi_P.Switch7_Threshold_m,        /* 826: Block Parameter */
  &aaaqi_P.Switch8_Threshold_f,        /* 827: Block Parameter */
  &aaaqi_P.Switch9_Threshold_o,        /* 828: Block Parameter */
  &aaaqi_P.Constant_Value_n,           /* 829: Block Parameter */
  &aaaqi_P.Constant1_Value_d,          /* 830: Block Parameter */
  &aaaqi_P.Gain_Gain_n,                /* 831: Block Parameter */
  &aaaqi_P.Gain1_Gain_ol,              /* 832: Block Parameter */
  &aaaqi_P.Constant_Value_na,          /* 833: Block Parameter */
  &aaaqi_P.Constant1_Value_c,          /* 834: Block Parameter */
  &aaaqi_P.Constant2_Value_o,          /* 835: Block Parameter */
  &aaaqi_P.Gain_Gain_l0,               /* 836: Block Parameter */
  &aaaqi_P.Gain1_Gain_a,               /* 837: Block Parameter */
  &aaaqi_P.Gain2_Gain_c,               /* 838: Block Parameter */
  &aaaqi_P.Gain3_Gain_n,               /* 839: Block Parameter */
  &aaaqi_P.Constant1_Value_k,          /* 840: Block Parameter */
  &aaaqi_P.Constant10_Value_c,         /* 841: Block Parameter */
  &aaaqi_P.Constant11_Value_g2,        /* 842: Block Parameter */
  &aaaqi_P.Constant12_Value_o5,        /* 843: Block Parameter */
  &aaaqi_P.Constant13_Value_j,         /* 844: Block Parameter */
  &aaaqi_P.Constant14_Value_l,         /* 845: Block Parameter */
  &aaaqi_P.Constant15_Value_n5,        /* 846: Block Parameter */
  &aaaqi_P.Constant16_Value_f,         /* 847: Block Parameter */
  &aaaqi_P.Constant17_Value_n,         /* 848: Block Parameter */
  &aaaqi_P.Constant18_Value_g,         /* 849: Block Parameter */
  &aaaqi_P.Constant19_Value_o,         /* 850: Block Parameter */
  &aaaqi_P.Constant2_Value_lm,         /* 851: Block Parameter */
  &aaaqi_P.Constant20_Value_o,         /* 852: Block Parameter */
  &aaaqi_P.Constant21_Value_ly,        /* 853: Block Parameter */
  &aaaqi_P.Constant22_Value_l,         /* 854: Block Parameter */
  &aaaqi_P.Constant23_Value_n,         /* 855: Block Parameter */
  &aaaqi_P.Constant24_Value_j,         /* 856: Block Parameter */
  &aaaqi_P.Constant25_Value_c,         /* 857: Block Parameter */
  &aaaqi_P.Constant26_Value_m,         /* 858: Block Parameter */
  &aaaqi_P.Constant27_Value_i,         /* 859: Block Parameter */
  &aaaqi_P.Constant28_Value_o,         /* 860: Block Parameter */
  &aaaqi_P.Constant29_Value_e,         /* 861: Block Parameter */
  &aaaqi_P.Constant3_Value_h,          /* 862: Block Parameter */
  &aaaqi_P.Constant4_Value_j,          /* 863: Block Parameter */
  &aaaqi_P.Constant5_Value_j,          /* 864: Block Parameter */
  &aaaqi_P.Constant6_Value_h,          /* 865: Block Parameter */
  &aaaqi_P.Constant7_Value_i,          /* 866: Block Parameter */
  &aaaqi_P.Constant8_Value_a,          /* 867: Block Parameter */
  &aaaqi_P.Constant9_Value_n,          /* 868: Block Parameter */
  &aaaqi_P.Switch1_Threshold_k,        /* 869: Block Parameter */
  &aaaqi_P.Switch2_Threshold_b,        /* 870: Block Parameter */
  &aaaqi_P.Switch3_Threshold_i,        /* 871: Block Parameter */
  &aaaqi_P.Switch4_Threshold_f,        /* 872: Block Parameter */
  &aaaqi_P.Switch5_Threshold_n,        /* 873: Block Parameter */
  &aaaqi_P.Switch6_Threshold_g,        /* 874: Block Parameter */
  &aaaqi_P.Switch7_Threshold_b,        /* 875: Block Parameter */
  &aaaqi_P.Switch8_Threshold_g,        /* 876: Block Parameter */
  &aaaqi_P.Switch9_Threshold_a,        /* 877: Block Parameter */
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

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 }
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

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  8,                                   /* 2 */
  1,                                   /* 3 */
  12,                                  /* 4 */
  1,                                   /* 5 */
  7,                                   /* 6 */
  1,                                   /* 7 */
  6,                                   /* 8 */
  1,                                   /* 9 */
  5,                                   /* 10 */
  1,                                   /* 11 */
  11,                                  /* 12 */
  1,                                   /* 13 */
  15,                                  /* 14 */
  1,                                   /* 15 */
  16,                                  /* 16 */
  1,                                   /* 17 */
  1,                                   /* 18 */
  2,                                   /* 19 */
  1,                                   /* 20 */
  8,                                   /* 21 */
  1,                                   /* 22 */
  4                                    /* 23 */
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
  { rtBlockSignals, 458,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 420,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4148740506U,
    3427126656U,
    3220036837U,
    2330507560U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  aaaqi_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void aaaqi_InitializeDataMapInfo(RT_MODEL_aaaqi_T *const aaaqi_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(aaaqi_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(aaaqi_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(aaaqi_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(aaaqi_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(aaaqi_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  aaaqi_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam(aaaqi_M);
  aaaqi_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_aaaqi_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(aaaqi_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(aaaqi_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(aaaqi_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void aaaqi_host_InitializeDataMapInfo(aaaqi_host_DataMapInfo_T *dataMap, const
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

/* EOF: aaaqi_capi.c */
