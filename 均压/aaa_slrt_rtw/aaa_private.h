/*
 * aaa_private.h
 *
 * Code generation for model "aaa".
 *
 * Model version              : 1.100
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri May 21 16:12:18 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_aaa_private_h_
#define RTW_HEADER_aaa_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "aaa.h"

/* Used by FromWorkspace Block: '<S33>/FromWs' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void pci1716DIO(SimStruct *rts);
extern void da6208(SimStruct *rts);
extern void canac2pcisetupx(SimStruct *rts);
extern void adpci_1784(SimStruct *rts);
extern void aaa_Subsystem3_Init(B_Subsystem3_aaa_T *localB, P_Subsystem3_aaa_T
  *localP);
extern void aaa_Subsystem3(boolean_T rtu_Enable, real_T rtu_In1,
  B_Subsystem3_aaa_T *localB, DW_Subsystem3_aaa_T *localDW, P_Subsystem3_aaa_T
  *localP);
extern void aaa_Chart1_Init(B_Chart1_aaa_T *localB, DW_Chart1_aaa_T *localDW);
extern void aaa_Chart1(real_T rtu_a, B_Chart1_aaa_T *localB, DW_Chart1_aaa_T
  *localDW);

#endif                                 /* RTW_HEADER_aaa_private_h_ */
