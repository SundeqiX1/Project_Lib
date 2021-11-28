#ifndef __bb2010_XPCOPTIONS_H___
#define __bb2010_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "bb2010.h"
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(Parameters_bb2010))
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
void bb2010_ChangeStepSize(real_T newBaseRateStepSize, rtModel_bb2010 *const
  bb2010_rtM)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  bb2010_rtM->Timing.stepSize0 = bb2010_rtM->Timing.stepSize0 * ratio;
  bb2010_rtM->Timing.stepSize = bb2010_rtM->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  bb2010_ChangeStepSize(stepSize, bb2010_rtM);
}

#endif                                 /* __bb2010_XPCOPTIONS_H___ */
