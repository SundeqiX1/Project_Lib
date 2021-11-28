#ifndef __untitled_XPCOPTIONS_H___
#define __untitled_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "untitled.h"
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(Parameters_untitled))
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
void untitled_ChangeStepSize(real_T newBaseRateStepSize, rtModel_untitled *const
  untitled_rtM)
{
  real_T ratio = newBaseRateStepSize / 0.2;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  untitled_rtM->Timing.stepSize0 = untitled_rtM->Timing.stepSize0 * ratio;
  untitled_rtM->Timing.stepSize = untitled_rtM->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  untitled_ChangeStepSize(stepSize, untitled_rtM);
}

#endif                                 /* __untitled_XPCOPTIONS_H___ */
