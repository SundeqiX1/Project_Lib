/*
 * gggg_private.h
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

#ifndef RTW_HEADER_gggg_private_h_
#define RTW_HEADER_gggg_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "gggg.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void canac2pcisetupx(SimStruct *rts);
extern void gggg_DI(uint8_T rtu_a, B_DI_gggg_T *localB);
extern void gggg_Subsystem1_Init(B_Subsystem1_gggg_T *localB,
  P_Subsystem1_gggg_T *localP);
extern void gggg_Subsystem1_Start(DW_Subsystem1_gggg_T *localDW);
extern void gggg_Subsystem1_Disable(DW_Subsystem1_gggg_T *localDW);
extern void gggg_Subsystem1(RT_MODEL_gggg_T * const gggg_M, boolean_T rtu_Enable,
  real_T rtu_In1, B_Subsystem1_gggg_T *localB, DW_Subsystem1_gggg_T *localDW,
  P_Subsystem1_gggg_T *localP);
extern void gggg_V_S_1(uint8_T rtu_a, uint8_T rtu_b, uint8_T rtu_c, uint8_T
  rtu_d, uint8_T rtu_e, uint8_T rtu_f, uint8_T rtu_g, uint8_T rtu_h,
  B_V_S_1_gggg_T *localB);
extern void gggg_anti_v(real_T rtu_v, B_anti_v_gggg_T *localB);

/* private model entry point functions */
extern void gggg_derivatives(void);

#endif                                 /* RTW_HEADER_gggg_private_h_ */
