#ifndef __faren_XPCOPTIONS_H___
#define __faren_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "faren.h"
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(Parameters_faren))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0

/* Change all stepsize using the newBaseRateStepSize */
void faren_ChangeStepSize(real_T newBaseRateStepSize, rtModel_faren *const
  faren_rtM)
{
  real_T ratio = newBaseRateStepSize / 0.5;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  faren_rtM->Timing.stepSize0 = faren_rtM->Timing.stepSize0 * ratio;
  faren_rtM->Timing.stepSize = faren_rtM->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  faren_ChangeStepSize(stepSize, faren_rtM);
}

#endif                                 /* __faren_XPCOPTIONS_H___ */
