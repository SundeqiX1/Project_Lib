#ifndef __simpleCylinder1_XPCOPTIONS_H___
#define __simpleCylinder1_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "simpleCylinder1.h"
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(Parameters_simpleCylinder1))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0

/* Change all stepsize using the newBaseRateStepSize */
void simpleCylinder1_ChangeStepSize(real_T newBaseRateStepSize,
  rtModel_simpleCylinder1 *simpleCylinder1_rtM)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  simpleCylinder1_rtM->Timing.stepSize0 = simpleCylinder1_rtM->Timing.stepSize0
    *ratio;
  simpleCylinder1_rtM->Timing.stepSize1 = simpleCylinder1_rtM->Timing.stepSize1
    *ratio;
  simpleCylinder1_rtM->Timing.stepSize = simpleCylinder1_rtM->Timing.stepSize *
    ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  simpleCylinder1_ChangeStepSize(stepSize, simpleCylinder1_rtM);
}

#endif                                 /* __simpleCylinder1_XPCOPTIONS_H___ */
