#ifndef __luoji1_XPCOPTIONS_H___
#define __luoji1_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "luoji1.h"
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(Parameters_luoji1))
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
void luoji1_ChangeStepSize(real_T newBaseRateStepSize, rtModel_luoji1 *const
  luoji1_rtM)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  luoji1_rtM->Timing.stepSize0 = luoji1_rtM->Timing.stepSize0 * ratio;
  luoji1_rtM->Timing.stepSize = luoji1_rtM->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  luoji1_ChangeStepSize(stepSize, luoji1_rtM);
}

#endif                                 /* __luoji1_XPCOPTIONS_H___ */
