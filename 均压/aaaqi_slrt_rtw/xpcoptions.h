#ifndef __aaaqi_XPCOPTIONS_H___
#define __aaaqi_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "aaaqi.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_aaaqi_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  0
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            512
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void aaaqi_ChangeStepSize(real_T newBaseRateStepSize, RT_MODEL_aaaqi_T *const
  aaaqi_M)
{
  real_T ratio = newBaseRateStepSize / 0.002;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  aaaqi_M->Timing.stepSize0 = aaaqi_M->Timing.stepSize0 * ratio;
  aaaqi_M->Timing.stepSize1 = aaaqi_M->Timing.stepSize1 * ratio;
  aaaqi_M->Timing.stepSize = aaaqi_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  aaaqi_ChangeStepSize(stepSize, aaaqi_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(aaaqi_M, errMsg);
}

#endif                                 /* __aaaqi_XPCOPTIONS_H___ */
