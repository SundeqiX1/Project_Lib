/*
 * simpleCylinder1_private.h
 *
 * Real-Time Workshop code generation for Simulink model "simpleCylinder1.mdl".
 *
 * Model Version              : 1.34
 * Real-Time Workshop version : 6.5  (R2006b)  03-Aug-2006
 * C source code generated on : Thu Nov 26 15:47:16 2020
 */
#ifndef _RTW_HEADER_simpleCylinder1_private_h_
#define _RTW_HEADER_simpleCylinder1_private_h_
#include "rtwtypes.h"
#  include "rtlibsrc.h"
#define CALL_EVENT                     (MAX_uint8_T)
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

/*
 * UNUSED_PARAMETER(x)
 *   Used to specify that a function parameter (argument) is required but not
 *   accessed by the function body.
 */
#ifndef UNUSED_PARAMETER
# if defined(__LCC__)
#   define UNUSED_PARAMETER(x)                                   /* do nothing */
# else

/*
 * This is the semi-ANSI standard way of indicating that an
 * unused function parameter is required.
 */
#   define UNUSED_PARAMETER(x)         (void) (x)
# endif
#endif

/* private model entry point functions */
extern void simpleCylinder1_derivatives(void);
extern void pci1716(SimStruct *rts);
extern void acl6126(SimStruct *rts);
void simpleCylinde_EnabledSubsystem1(boolean_T rtu_0, real_T rtu_1,
  rtModel_simpleCylinder1 *rtm, rtB_EnabledSubsystem1_simpleCyl *localB,
  rtDW_EnabledSubsystem1_simpleCy *localDW);

#endif                                 /* _RTW_HEADER_simpleCylinder1_private_h_ */
