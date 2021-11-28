#ifndef __Copy_of_canceshi1_XPCOPTIONS_H___
#define __Copy_of_canceshi1_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "Copy_of_canceshi1.h"
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(Parameters_Copy_of_canceshi1))
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
void Copy_of_canceshi1_ChangeStepSize(real_T newBaseRateStepSize,
  rtModel_Copy_of_canceshi1 *const Copy_of_canceshi1_rtM)
{
  real_T ratio = newBaseRateStepSize / 0.1;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  Copy_of_canceshi1_rtM->Timing.stepSize0 =
    Copy_of_canceshi1_rtM->Timing.stepSize0 * ratio;
  Copy_of_canceshi1_rtM->Timing.stepSize =
    Copy_of_canceshi1_rtM->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  Copy_of_canceshi1_ChangeStepSize(stepSize, Copy_of_canceshi1_rtM);
}

#endif                                 /* __Copy_of_canceshi1_XPCOPTIONS_H___ */
