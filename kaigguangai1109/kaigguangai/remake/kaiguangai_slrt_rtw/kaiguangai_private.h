/*
 * kaiguangai_private.h
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

#ifndef RTW_HEADER_kaiguangai_private_h_
#define RTW_HEADER_kaiguangai_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "kaiguangai.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void pci1756IO(SimStruct *rts);
extern void kaiguangai_Chart1_Init(DW_Chart1_kaiguangai_T *localDW);
extern void kaiguangai_Chart1(real_T rtu_start, real_T rtu_kgdw1, real_T
  rtu_kgdw2, real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
  rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_songkai, real_T
  rtu_kaigai, real_T rtu_suoding, real_T rtu_jiesuo, real_T rtu_guangai, real_T
  rtu_yajin, real_T rtu_jieshu, B_Chart1_kaiguangai_T *localB,
  DW_Chart1_kaiguangai_T *localDW);
extern void kaiguangai_u_Init(DW_u_kaiguangai_T *localDW);
extern void kaiguangai_u(boolean_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_yjdw, real_T
  rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3, real_T rtu_t5, real_T
  rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T rtu_shedingcishu, real_T
  rtu_jieshu, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
extern void kaiguangai_jinjichuli_Init(B_jinjichuli_kaiguangai_T *localB,
  DW_jinjichuli_kaiguangai_T *localDW);
extern void kaiguangai_jinjichuli(real_T rtu_tiaoshi, real_T rtu_songkai, real_T
  rtu_kaigai, real_T rtu_suoding, real_T rtu_jiesuo, real_T rtu_guangai, real_T
  rtu_yajin, real_T rtu_jiting, B_jinjichuli_kaiguangai_T *localB,
  DW_jinjichuli_kaiguangai_T *localDW);

#endif                                 /* RTW_HEADER_kaiguangai_private_h_ */
