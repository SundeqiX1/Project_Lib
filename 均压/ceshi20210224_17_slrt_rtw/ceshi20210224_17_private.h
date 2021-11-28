/*
 * ceshi20210224_17_private.h
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

#ifndef RTW_HEADER_ceshi20210224_17_private_h_
#define RTW_HEADER_ceshi20210224_17_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "ceshi20210224_17.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi);
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void pci1716DIO(SimStruct *rts);
extern void da6208(SimStruct *rts);
extern void canac2pcisetupx(SimStruct *rts);
extern void ceshi20210224_17_Subsystem_Init(B_Subsystem_ceshi20210224_17_T
  *localB, P_Subsystem_ceshi20210224_17_T *localP,
  X_Subsystem_ceshi20210224_17_T *localX);
extern void ceshi20210224_1_Subsystem_Start(DW_Subsystem_ceshi20210224_17_T
  *localDW);
extern void ceshi20210224_1_Subsystem_Deriv(real_T rtu_In1,
  DW_Subsystem_ceshi20210224_17_T *localDW, XDot_Subsystem_ceshi20210224__T
  *localXdot);
extern void ceshi20210224_Subsystem_Disable(DW_Subsystem_ceshi20210224_17_T
  *localDW);
extern void ceshi20210224_17_Subsystem(RT_MODEL_ceshi20210224_17_T * const
  ceshi20210224_17_M, real_T rtu_Enable, real_T rtu_In2,
  B_Subsystem_ceshi20210224_17_T *localB, DW_Subsystem_ceshi20210224_17_T
  *localDW, P_Subsystem_ceshi20210224_17_T *localP,
  X_Subsystem_ceshi20210224_17_T *localX, ZCE_Subsystem_ceshi20210224_1_T
  *localZCE);

/* private model entry point functions */
extern void ceshi20210224_17_derivatives(void);

#endif                                 /* RTW_HEADER_ceshi20210224_17_private_h_ */
