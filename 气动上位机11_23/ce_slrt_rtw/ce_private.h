/*
 * ce_private.h
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

#ifndef RTW_HEADER_ce_private_h_
#define RTW_HEADER_ce_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern void pci1716(SimStruct *rts);
extern void da6208(SimStruct *rts);

/* private model entry point functions */
extern void ce_derivatives(void);

#endif                                 /* RTW_HEADER_ce_private_h_ */
