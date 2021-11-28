#ifndef __untitled2_XPCOPTIONS_H___
#define __untitled2_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "untitled2.h"
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(Parameters_untitled2))
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
void untitled2_ChangeStepSize(real_T newBaseRateStepSize, rtModel_untitled2 *
  const untitled2_rtM)
{
  real_T ratio = newBaseRateStepSize / 0.2;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  untitled2_rtM->Timing.stepSize0 = untitled2_rtM->Timing.stepSize0 * ratio;
  untitled2_rtM->Timing.stepSize = untitled2_rtM->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  untitled2_ChangeStepSize(stepSize, untitled2_rtM);
}

#endif                                 /* __untitled2_XPCOPTIONS_H___ */
