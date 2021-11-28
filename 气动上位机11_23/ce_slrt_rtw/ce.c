/*
 * ce.c
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

#include "rt_logging_mmi.h"
#include "ce_capi.h"
#include "ce.h"
#include "ce_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define ce_CALL_EVENT                  (-1)
#define ce_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define ce_IN_by                       ((uint8_T)1U)
#define ce_IN_bysjgd_action1           ((uint8_T)1U)
#define ce_IN_bysjgd_action2           ((uint8_T)2U)
#define ce_IN_bysjgd_action3           ((uint8_T)3U)
#define ce_IN_exp_fq                   ((uint8_T)2U)
#define ce_IN_exp_qfq                  ((uint8_T)1U)
#define ce_IN_exp_ready                ((uint8_T)3U)
#define ce_IN_exp_rqfq                 ((uint8_T)2U)
#define ce_IN_fby                      ((uint8_T)4U)
#define ce_IN_fby_action1              ((uint8_T)1U)
#define ce_IN_fby_action2              ((uint8_T)2U)
#define ce_IN_fby_action3              ((uint8_T)3U)
#define ce_IN_fqyc                     ((uint8_T)5U)
#define ce_IN_fqyc_action1             ((uint8_T)1U)
#define ce_IN_fqyc_action2             ((uint8_T)2U)
#define ce_IN_fqyc_action3             ((uint8_T)3U)
#define ce_IN_fqyc_action4             ((uint8_T)4U)
#define ce_IN_kong                     ((uint8_T)6U)
#define ce_IN_kong1                    ((uint8_T)3U)

const real_T ce_RGND = 0.0;            /* real_T ground */

/* Block signals (auto storage) */
B_ce_T ce_B;

/* Continuous states */
X_ce_T ce_X;

/* Block states (auto storage) */
DW_ce_T ce_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ce_T ce_PrevZCX;

/* Real-time model */
RT_MODEL_ce_T ce_M_;
RT_MODEL_ce_T *const ce_M = &ce_M_;

/* Forward declaration for local functions */
static void ce_kong(void);

/*
 * This function updates continuous states using the ODE4 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = (ODE4_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 81;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  ce_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  ce_output();
  ce_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  ce_output();
  ce_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  ce_output();
  ce_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Function for Chart: '<Root>/Chart' */
static void ce_kong(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'kong': '<S1>:162' */
  sf_internal_predicateOutput = ((ce_B.zidong == 1.0) && (ce_B.shoudong == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S1>:2' */
    if (ce_B.fq == 1.0) {
      /* Transition: '<S1>:200' */
      ce_DW.is_c3_ce = ce_IN_exp_fq;

      /* Entry Internal 'exp_fq': '<S1>:187' */
      /* Transition: '<S1>:193' */
      ce_DW.is_exp_fq = ce_IN_kong1;

      /* Entry 'kong1': '<S1>:192' */
      ce_B.fby_qfsd = 0.0;
    } else {
      if (ce_B.fq == 0.0) {
        /* Transition: '<S1>:201' */
        ce_DW.is_c3_ce = ce_IN_exp_ready;

        /* Entry 'exp_ready': '<S1>:1' */
        ce_B.dcf_1 = 0.0;
        ce_B.dcf_2 = 0.0;
        ce_B.trigger = 0.0;
        ce_B.kbhxz = 0.0;
        ce_B.qfkk = 0.0;
        ce_B.fby_qfsd = 0.0;
      }
    }
  }
}

/* Model output function */
void ce_output(void)
{
  real_T *lastU;
  real_T lastTime;
  int_T ci;
  boolean_T sf_internal_predicateOutput;
  ZCEventType zcEvent;
  real_T u1;
  real_T u2;
  boolean_T guard1 = false;
  if (rtmIsMajorTimeStep(ce_M)) {
    /* set solver stop time */
    if (!(ce_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&ce_M->solverInfo, ((ce_M->Timing.clockTickH0 + 1) *
        ce_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&ce_M->solverInfo, ((ce_M->Timing.clockTick0 + 1) *
        ce_M->Timing.stepSize0 + ce_M->Timing.clockTickH0 *
        ce_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ce_M)) {
    ce_M->Timing.t[0] = rtsiGetT(&ce_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(ce_DW.TriggeredSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ce_DW.EnabledSubsystem_SubsysRanBC);
  if (rtmIsMajorTimeStep(ce_M)) {
    /* Level2 S-Function Block: '<Root>/PCI-1' (pci1716) */
    {
      SimStruct *rts = ce_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
    {
      SimStruct *rts = ce_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Constant: '<Root>/zidong' */
    ce_B.zidong = ce_P.zidong_Value;

    /* Constant: '<Root>/shoudong' */
    ce_B.shoudong = ce_P.shoudong_Value;

    /* Constant: '<Root>/start' */
    ce_B.start = ce_P.start_Value;

    /* Constant: '<Root>/jt' */
    ce_B.jt = ce_P.jt_Value;

    /* Constant: '<Root>/fby' */
    ce_B.fby = ce_P.fby_Value;

    /* Constant: '<Root>/by' */
    ce_B.by = ce_P.by_Value;

    /* Constant: '<Root>/fqyc' */
    ce_B.fqyc = ce_P.fqyc_Value;

    /* Constant: '<Root>/bdqy' */
    ce_B.bdqy = ce_P.bdqy_Value;

    /* Constant: '<Root>/fq' */
    ce_B.fq = ce_P.fq_Value;

    /* Constant: '<Root>/rqfq' */
    ce_B.rqfq = ce_P.rqfq_Value;

    /* Constant: '<Root>/qfq' */
    ce_B.qfq = ce_P.qfq_Value;

    /* Memory: '<Root>/Memory' */
    ce_B.Memory = ce_DW.Memory_PreviousInput;
  }

  /* StateSpace: '<Root>/Analog Filter Design2' */
  ce_B.AnalogFilterDesign2 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign2 += ce_P.AnalogFilterDesign2_C *
      ce_X.AnalogFilterDesign2_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design2' */

  /* DataTypeConversion: '<Root>/rqyl1' */
  ce_B.rqyl1 = ce_B.AnalogFilterDesign2;

  /* StateSpace: '<Root>/Analog Filter Design4' */
  ce_B.AnalogFilterDesign4 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign4 += ce_P.AnalogFilterDesign4_C *
      ce_X.AnalogFilterDesign4_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design4' */

  /* DataTypeConversion: '<Root>/rqyl2' */
  ce_B.rqyl2 = ce_B.AnalogFilterDesign4;

  /* Switch: '<Root>/Switch' */
  if (ce_B.rqyl1 > ce_P.Switch_Threshold_j) {
    ce_B.Switch = ce_B.rqyl1;
  } else {
    ce_B.Switch = ce_B.rqyl2;
  }

  /* End of Switch: '<Root>/Switch' */

  /* DataTypeConversion: '<Root>/rqyl3' */
  ce_B.rqyl3 = ce_B.Switch;
  if (rtmIsMajorTimeStep(ce_M)) {
    /* DataTypeConversion: '<Root>/qffk' */
    ce_B.qffk = ce_B.PCI2[6];

    /* Constant: '<Root>/fby_qfkk' */
    ce_B.fby_qfkk = ce_P.fby_qfkk_Value;

    /* Constant: '<Root>/exp_ready' */
    ce_B.exp_ready = ce_P.exp_ready_Value;

    /* Chart: '<Root>/Chart' */
    /* Gateway: Chart */
    ce_DW.sfEvent = ce_CALL_EVENT;

    /* During: Chart */
    if (ce_DW.is_active_c3_ce == 0U) {
      /* Entry: Chart */
      ce_DW.is_active_c3_ce = 1U;

      /* Entry Internal: Chart */
      /* Transition: '<S1>:163' */
      ce_DW.is_c3_ce = ce_IN_kong;
    } else {
      guard1 = false;
      switch (ce_DW.is_c3_ce) {
       case ce_IN_by:
        /* During 'by': '<S1>:51' */
        sf_internal_predicateOutput = ((ce_B.start == 0.0) || (ce_B.jt == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S1>:76' */
          /* Exit Internal 'by': '<S1>:51' */
          ce_DW.is_by = ce_IN_NO_ACTIVE_CHILD;
          ce_DW.is_c3_ce = ce_IN_exp_ready;

          /* Entry 'exp_ready': '<S1>:1' */
          ce_B.dcf_1 = 0.0;
          ce_B.dcf_2 = 0.0;
          ce_B.trigger = 0.0;
          ce_B.kbhxz = 0.0;
          ce_B.qfkk = 0.0;
          ce_B.fby_qfsd = 0.0;
        } else {
          switch (ce_DW.is_by) {
           case ce_IN_bysjgd_action1:
            /* During 'bysjgd_action1': '<S1>:54' */
            if (ce_B.Memory == 1.0) {
              /* Transition: '<S1>:53' */
              ce_DW.is_by = ce_IN_bysjgd_action3;

              /* Entry 'bysjgd_action3': '<S1>:57' */
              ce_B.dcf_2 = 5.0;
              ce_B.kbhxz = 0.0;
              ce_B.qfkk = 0.0;
              ce_B.dcf_1 = 0.0;
            } else {
              if (ce_B.rqyl3 > ce_B.bdqy) {
                /* Transition: '<S1>:90' */
                ce_DW.is_by = ce_IN_bysjgd_action2;

                /* Entry 'bysjgd_action2': '<S1>:87' */
                ce_B.dcf_1 = 0.0;
                ce_B.dcf_2 = 0.0;
                ce_B.trigger = 1.0;
              }
            }
            break;

           case ce_IN_bysjgd_action2:
            /* During 'bysjgd_action2': '<S1>:87' */
            if (ce_B.rqyl3 < ce_B.bdqy) {
              /* Transition: '<S1>:94' */
              ce_DW.is_by = ce_IN_bysjgd_action1;

              /* Entry 'bysjgd_action1': '<S1>:54' */
              ce_B.dcf_1 = 5.0;
              ce_B.kbhxz = 1.0;
              ce_B.dcf_2 = 0.0;
            } else {
              if (ce_B.Memory == 1.0) {
                /* Transition: '<S1>:95' */
                ce_DW.is_by = ce_IN_bysjgd_action3;

                /* Entry 'bysjgd_action3': '<S1>:57' */
                ce_B.dcf_2 = 5.0;
                ce_B.kbhxz = 0.0;
                ce_B.qfkk = 0.0;
                ce_B.dcf_1 = 0.0;
              }
            }
            break;

           default:
            /* During 'bysjgd_action3': '<S1>:57' */
            break;
          }
        }
        break;

       case ce_IN_exp_fq:
        /* During 'exp_fq': '<S1>:187' */
        sf_internal_predicateOutput = ((ce_B.fq == 0.0) || (ce_B.jt == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S1>:202' */
          /* Exit Internal 'exp_fq': '<S1>:187' */
          ce_DW.is_exp_fq = ce_IN_NO_ACTIVE_CHILD;
          ce_DW.is_c3_ce = ce_IN_exp_ready;

          /* Entry 'exp_ready': '<S1>:1' */
          ce_B.dcf_1 = 0.0;
          ce_B.dcf_2 = 0.0;
          ce_B.trigger = 0.0;
          ce_B.kbhxz = 0.0;
          ce_B.qfkk = 0.0;
          ce_B.fby_qfsd = 0.0;
        } else {
          switch (ce_DW.is_exp_fq) {
           case ce_IN_exp_qfq:
            /* During 'exp_qfq': '<S1>:173' */
            if (ce_B.rqfq == 1.0) {
              /* Transition: '<S1>:205' */
              ce_DW.is_exp_fq = ce_IN_exp_rqfq;

              /* Entry 'exp_rqfq': '<S1>:174' */
              ce_B.dcf_1 = 0.0;
              ce_B.dcf_2 = 5.0;
              ce_B.kbhxz = 0.0;
              ce_B.qfkk = 0.0;
            }
            break;

           case ce_IN_exp_rqfq:
            /* During 'exp_rqfq': '<S1>:174' */
            if (ce_B.qfq == 1.0) {
              /* Transition: '<S1>:204' */
              ce_DW.is_exp_fq = ce_IN_exp_qfq;

              /* Entry 'exp_qfq': '<S1>:173' */
              ce_B.dcf_1 = 5.0;
              ce_B.dcf_2 = 5.0;
              ce_B.kbhxz = 0.0;
              ce_B.qfkk = 5.0;
            }
            break;

           default:
            /* During 'kong1': '<S1>:192' */
            sf_internal_predicateOutput = ((ce_B.rqfq == 1.0) && (ce_B.qfq ==
              0.0));
            if (sf_internal_predicateOutput) {
              /* Transition: '<S1>:194' */
              ce_DW.is_exp_fq = ce_IN_exp_rqfq;

              /* Entry 'exp_rqfq': '<S1>:174' */
              ce_B.dcf_1 = 0.0;
              ce_B.dcf_2 = 5.0;
              ce_B.kbhxz = 0.0;
              ce_B.qfkk = 0.0;
            } else {
              sf_internal_predicateOutput = ((ce_B.rqfq == 0.0) && (ce_B.qfq ==
                1.0));
              if (sf_internal_predicateOutput) {
                /* Transition: '<S1>:195' */
                ce_DW.is_exp_fq = ce_IN_exp_qfq;

                /* Entry 'exp_qfq': '<S1>:173' */
                ce_B.dcf_1 = 5.0;
                ce_B.dcf_2 = 5.0;
                ce_B.kbhxz = 0.0;
                ce_B.qfkk = 5.0;
              }
            }
            break;
          }
        }
        break;

       case ce_IN_exp_ready:
        /* During 'exp_ready': '<S1>:1' */
        if (ce_B.jt == 0.0) {
          /* Transition: '<S1>:7' */
          sf_internal_predicateOutput = ((ce_B.fby == 1.0) && (ce_B.rqyl3 <
            ce_B.bdqy) && (ce_B.exp_ready == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S1>:8' */
            ce_DW.is_c3_ce = ce_IN_fby;

            /* Entry Internal 'fby': '<S1>:43' */
            /* Transition: '<S1>:268' */
            ce_DW.is_fby = ce_IN_fby_action1;

            /* Entry 'fby_action1': '<S1>:226' */
            ce_B.fby_qfsd = 1.0;
          } else {
            sf_internal_predicateOutput = ((ce_B.by == 1.0) && (ce_B.rqyl3 <
              ce_B.bdqy) && (ce_B.start == 1.0));
            if (sf_internal_predicateOutput) {
              /* Transition: '<S1>:16' */
              ce_DW.is_c3_ce = ce_IN_by;

              /* Entry Internal 'by': '<S1>:51' */
              /* Transition: '<S1>:108' */
              ce_DW.is_by = ce_IN_bysjgd_action1;

              /* Entry 'bysjgd_action1': '<S1>:54' */
              ce_B.dcf_1 = 5.0;
              ce_B.kbhxz = 1.0;
              ce_B.dcf_2 = 0.0;
            } else {
              sf_internal_predicateOutput = ((ce_B.fqyc == 1.0) && (ce_B.rqyl3 <
                ce_B.bdqy) && (ce_B.exp_ready == 1.0));
              if (sf_internal_predicateOutput) {
                /* Transition: '<S1>:64' */
                ce_DW.is_c3_ce = ce_IN_fqyc;

                /* Entry Internal 'fqyc': '<S1>:285' */
                /* Transition: '<S1>:280' */
                ce_DW.is_fqyc = ce_IN_fqyc_action1;

                /* Entry 'fqyc_action1': '<S1>:281' */
                ce_B.fby_qfsd = 1.0;
              } else {
                guard1 = true;
              }
            }
          }
        } else {
          guard1 = true;
        }
        break;

       case ce_IN_fby:
        /* During 'fby': '<S1>:43' */
        sf_internal_predicateOutput = (((ce_B.start == 0.0) && (ce_B.exp_ready ==
          0.0)) || (ce_B.jt == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S1>:171' */
          /* Exit Internal 'fby': '<S1>:43' */
          ce_DW.is_fby = ce_IN_NO_ACTIVE_CHILD;
          ce_DW.is_c3_ce = ce_IN_exp_ready;

          /* Entry 'exp_ready': '<S1>:1' */
          ce_B.dcf_1 = 0.0;
          ce_B.dcf_2 = 0.0;
          ce_B.trigger = 0.0;
          ce_B.kbhxz = 0.0;
          ce_B.qfkk = 0.0;
          ce_B.fby_qfsd = 0.0;
        } else {
          switch (ce_DW.is_fby) {
           case ce_IN_fby_action1:
            /* During 'fby_action1': '<S1>:226' */
            sf_internal_predicateOutput = ((ce_B.qffk >= ce_B.fby_qfkk - 0.2) &&
              (ce_B.start == 1.0));
            if (sf_internal_predicateOutput) {
              /* Transition: '<S1>:224' */
              ce_DW.is_fby = ce_IN_fby_action2;

              /* Entry 'fby_action2': '<S1>:45' */
              ce_B.dcf_1 = 5.0;
              ce_B.dcf_2 = 0.0;
            }
            break;

           case ce_IN_fby_action2:
            /* During 'fby_action2': '<S1>:45' */
            if (ce_B.rqyl3 >= ce_B.bdqy) {
              /* Transition: '<S1>:48' */
              ce_DW.is_fby = ce_IN_fby_action3;

              /* Entry 'fby_action3': '<S1>:47' */
              ce_B.dcf_2 = 5.0;
              ce_B.dcf_1 = 0.0;
            }
            break;

           default:
            /* During 'fby_action3': '<S1>:47' */
            break;
          }
        }
        break;

       case ce_IN_fqyc:
        /* During 'fqyc': '<S1>:285' */
        sf_internal_predicateOutput = (((ce_B.start == 0.0) && (ce_B.exp_ready ==
          0.0)) || (ce_B.jt == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S1>:79' */
          /* Exit Internal 'fqyc': '<S1>:285' */
          ce_DW.is_fqyc = ce_IN_NO_ACTIVE_CHILD;
          ce_DW.is_c3_ce = ce_IN_exp_ready;

          /* Entry 'exp_ready': '<S1>:1' */
          ce_B.dcf_1 = 0.0;
          ce_B.dcf_2 = 0.0;
          ce_B.trigger = 0.0;
          ce_B.kbhxz = 0.0;
          ce_B.qfkk = 0.0;
          ce_B.fby_qfsd = 0.0;
        } else {
          switch (ce_DW.is_fqyc) {
           case ce_IN_fqyc_action1:
            /* During 'fqyc_action1': '<S1>:281' */
            sf_internal_predicateOutput = ((ce_B.qffk >= ce_B.fby_qfkk - 0.2) &&
              (ce_B.start == 1.0));
            if (sf_internal_predicateOutput) {
              /* Transition: '<S1>:279' */
              ce_DW.is_fqyc = ce_IN_fqyc_action2;

              /* Entry 'fqyc_action2': '<S1>:283' */
              ce_B.dcf_1 = 5.0;
              ce_B.dcf_2 = 0.0;
            }
            break;

           case ce_IN_fqyc_action2:
            /* During 'fqyc_action2': '<S1>:283' */
            if (ce_B.rqyl3 >= ce_B.bdqy) {
              /* Transition: '<S1>:284' */
              ce_DW.is_fqyc = ce_IN_fqyc_action3;

              /* Entry 'fqyc_action3': '<S1>:282' */
              ce_B.trigger = 1.0;
              ce_B.dcf_1 = 0.0;
            }
            break;

           case ce_IN_fqyc_action3:
            /* During 'fqyc_action3': '<S1>:282' */
            if (ce_B.Memory == 1.0) {
              /* Transition: '<S1>:288' */
              ce_DW.is_fqyc = ce_IN_fqyc_action4;

              /* Entry 'fqyc_action4': '<S1>:287' */
              ce_B.dcf_1 = 0.0;
              ce_B.dcf_2 = 5.0;
            }
            break;

           default:
            /* During 'fqyc_action4': '<S1>:287' */
            break;
          }
        }
        break;

       default:
        ce_kong();
        break;
      }

      if (guard1) {
        if (ce_B.fq == 1.0) {
          /* Transition: '<S1>:203' */
          ce_DW.is_c3_ce = ce_IN_exp_fq;

          /* Entry Internal 'exp_fq': '<S1>:187' */
          /* Transition: '<S1>:193' */
          ce_DW.is_exp_fq = ce_IN_kong1;

          /* Entry 'kong1': '<S1>:192' */
          ce_B.fby_qfsd = 0.0;
        } else {
          sf_internal_predicateOutput = ((ce_B.zidong == 0.0) && (ce_B.shoudong ==
            1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S1>:164' */
            ce_DW.is_c3_ce = ce_IN_kong;
          }
        }
      }
    }

    /* End of Chart: '<Root>/Chart' */
  }

  /* StateSpace: '<Root>/Analog Filter Design6' */
  ce_B.AnalogFilterDesign6 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign6 += ce_P.AnalogFilterDesign6_C *
      ce_X.AnalogFilterDesign6_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design6' */

  /* Lookup: '<Root>/biaoding4' */
  ce_B.biaoding4 = rt_Lookup(ce_P.biaoding4_XData, 2, ce_B.AnalogFilterDesign6,
    ce_P.biaoding4_YData);

  /* DataTypeConversion: '<Root>/5t1' */
  ce_B.ut1 = ce_B.biaoding4;

  /* StateSpace: '<Root>/Analog Filter Design5' */
  ce_B.AnalogFilterDesign5 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign5 += ce_P.AnalogFilterDesign5_C *
      ce_X.AnalogFilterDesign5_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design5' */

  /* Lookup: '<Root>/biaoding5' */
  ce_B.biaoding5 = rt_Lookup(ce_P.biaoding5_XData, 2, ce_B.AnalogFilterDesign5,
    ce_P.biaoding5_YData);

  /* DataTypeConversion: '<Root>/wy1' */
  ce_B.wy1 = ce_B.biaoding5;
  if (rtmIsMajorTimeStep(ce_M)) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    memcpy(&ce_B.DataTypeConversion[0], &ce_B.PCI1[0], sizeof(real_T) << 4U);

    /* Lookup: '<Root>/biaoding6' */
    ce_B.biaoding6 = rt_Lookup(ce_P.biaoding6_XData, 2, ce_B.DataTypeConversion
      [12], ce_P.biaoding6_YData);

    /* DataTypeConversion: '<Root>/yihuai_gensui11biandong' */
    ce_B.yihuai_gensui11biandong = ce_B.biaoding6;

    /* Lookup: '<Root>/biaoding7' */
    ce_B.biaoding7 = rt_Lookup(ce_P.biaoding7_XData, 2, ce_B.DataTypeConversion
      [14], ce_P.biaoding7_YData);

    /* DataTypeConversion: '<Root>/wy2' */
    ce_B.wy2 = ce_B.biaoding7;

    /* Lookup: '<Root>/biaoding8' */
    ce_B.biaoding8 = rt_Lookup(ce_P.biaoding8_XData, 2, ce_B.PCI2[0],
      ce_P.biaoding8_YData);

    /* DataTypeConversion: '<Root>/5t2' */
    ce_B.ut2 = ce_B.biaoding8;

    /* Lookup: '<Root>/biaoding9' */
    ce_B.biaoding9 = rt_Lookup(ce_P.biaoding9_XData, 2, ce_B.PCI2[2],
      ce_P.biaoding9_YData);

    /* DataTypeConversion: '<Root>/150t1' */
    ce_B.u50t1 = ce_B.biaoding9;

    /* Lookup: '<Root>/biaoding11' */
    ce_B.biaoding11 = rt_Lookup(ce_P.biaoding11_XData, 2, ce_B.PCI2[4],
      ce_P.biaoding11_YData);

    /* DataTypeConversion: '<Root>/150t2' */
    ce_B.u50t2 = ce_B.biaoding11;
  }

  /* StateSpace: '<Root>/Analog Filter Design7' */
  ce_B.AnalogFilterDesign7 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign7 += ce_P.AnalogFilterDesign7_C *
      ce_X.AnalogFilterDesign7_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design7' */

  /* Gain: '<Root>/Gain2' */
  ce_B.Gain2 = ce_P.Gain2_Gain * ce_B.AnalogFilterDesign7;

  /* DataTypeConversion: '<Root>/s2' */
  ce_B.s2 = ce_B.Gain2;

  /* StateSpace: '<Root>/Analog Filter Design9' */
  ce_B.AnalogFilterDesign9 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign9 += ce_P.AnalogFilterDesign9_C *
      ce_X.AnalogFilterDesign9_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design9' */

  /* Gain: '<Root>/Gain' */
  ce_B.Gain = ce_P.Gain_Gain * ce_B.AnalogFilterDesign9;

  /* StateSpace: '<Root>/Analog Filter Design8' */
  ce_B.AnalogFilterDesign8 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign8 += ce_P.AnalogFilterDesign8_C *
      ce_X.AnalogFilterDesign8_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design8' */

  /* Gain: '<Root>/Gain3' */
  ce_B.Gain3 = ce_P.Gain3_Gain_c * ce_B.AnalogFilterDesign8;

  /* StateSpace: '<Root>/Analog Filter Design10' */
  ce_B.AnalogFilterDesign10 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign10 += ce_P.AnalogFilterDesign10_C *
      ce_X.AnalogFilterDesign10_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design10' */

  /* Gain: '<Root>/Gain1' */
  ce_B.Gain1 = ce_P.Gain1_Gain * ce_B.AnalogFilterDesign10;
  if (rtmIsMajorTimeStep(ce_M)) {
    /* Outputs for Triggered SubSystem: '<S2>/Triggered Subsystem' incorporates:
     *  TriggerPort: '<S6>/Trigger'
     */
    if (rtmIsMajorTimeStep(ce_M)) {
      /* Constant: '<Root>/t0' */
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &ce_PrevZCX.TriggeredSubsystem_Trig_ZCE,
                         (ce_P.t0_Value));
      if (zcEvent != NO_ZCEVENT) {
        /* Inport: '<S6>/In-5t1' */
        ce_B.In5t1 = ce_B.ut1;

        /* Inport: '<S6>/In-5t2' */
        ce_B.In5t2 = ce_B.ut2;

        /* Inport: '<S6>/In-150t1' */
        ce_B.In150t1 = ce_B.u50t1;

        /* Inport: '<S6>/In-150t2' */
        ce_B.In150t2 = ce_B.u50t2;

        /* Inport: '<S6>/In-wy1' */
        ce_B.Inwy1 = ce_B.wy1;

        /* Inport: '<S6>/In-wy2' */
        ce_B.Inwy2 = ce_B.wy2;

        /* Inport: '<S6>/In-s1' */
        ce_B.Ins1 = ce_B.Gain;

        /* Inport: '<S6>/In-s2' */
        ce_B.Ins2 = ce_B.Gain2;

        /* Inport: '<S6>/In-s3' */
        ce_B.Ins3 = ce_B.Gain3;

        /* Inport: '<S6>/In-s4' */
        ce_B.Ins4 = ce_B.Gain1;
        ce_DW.TriggeredSubsystem_SubsysRanBC = 4;
      }
    }

    /* End of Outputs for SubSystem: '<S2>/Triggered Subsystem' */

    /* Sum: '<S2>/Sum1' */
    ce_B.Sum1 = ce_B.ut2 - ce_B.In5t2;

    /* DataTypeConversion: '<Root>/t0_5t2' */
    ce_B.t0_5t2 = ce_B.Sum1;

    /* Sum: '<S2>/Sum2' */
    ce_B.Sum2 = ce_B.u50t1 - ce_B.In150t1;

    /* DataTypeConversion: '<Root>/t0_150t1' */
    ce_B.t0_150t1 = ce_B.Sum2;

    /* Sum: '<S2>/Sum3' */
    ce_B.Sum3 = ce_B.u50t2 - ce_B.In150t2;

    /* DataTypeConversion: '<Root>/t0_150t2' */
    ce_B.t0_150t2 = ce_B.Sum3;
  }

  /* Sum: '<S2>/Sum' */
  ce_B.Sum = ce_B.ut1 - ce_B.In5t1;

  /* DataTypeConversion: '<Root>/t0_5t1' */
  ce_B.t0_5t1 = ce_B.Sum;

  /* Sum: '<S2>/Sum4' */
  ce_B.Sum4 = ce_B.wy1 - ce_B.Inwy1;

  /* DataTypeConversion: '<Root>/t0_wy1' */
  ce_B.t0_wy1 = ce_B.Sum4;
  if (rtmIsMajorTimeStep(ce_M)) {
    /* Sum: '<S2>/Sum5' */
    ce_B.Sum5 = ce_B.wy2 - ce_B.Inwy2;

    /* DataTypeConversion: '<Root>/t0_wy2' */
    ce_B.t0_wy2 = ce_B.Sum5;

    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S5>/Constant3'
     *  Switch: '<S5>/Switch'
     *  Switch: '<S5>/Switch3'
     */
    if (ce_B.jt > ce_P.Switch6_Threshold) {
      ce_B.Switch6 = ce_P.Constant3_Value;
    } else {
      if (ce_B.zidong > ce_P.Switch_Threshold_c) {
        /* Switch: '<S5>/Switch' */
        ce_B.Switch_a = ce_B.dcf_1;
      } else {
        if (ce_B.shoudong > ce_P.Switch3_Threshold) {
          /* Gain: '<S5>/Gain3' incorporates:
           *  Constant: '<Root>/cns1'
           *  Switch: '<S5>/Switch'
           *  Switch: '<S5>/Switch3'
           */
          ce_B.Gain3_b = ce_P.Gain3_Gain * ce_P.cns1_Value;

          /* Switch: '<S5>/Switch3' incorporates:
           *  Switch: '<S5>/Switch'
           */
          ce_B.Switch3 = ce_B.Gain3_b;
        } else {
          /* Switch: '<S5>/Switch3' incorporates:
           *  Constant: '<S5>/Constant'
           *  Switch: '<S5>/Switch'
           */
          ce_B.Switch3 = ce_P.Constant_Value;
        }

        /* Switch: '<S5>/Switch' */
        ce_B.Switch_a = ce_B.Switch3;
      }

      ce_B.Switch6 = ce_B.Switch_a;
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S5>/Constant4'
     *  Switch: '<S5>/Switch1'
     *  Switch: '<S5>/Switch4'
     */
    if (ce_B.jt > ce_P.Switch7_Threshold) {
      ce_B.Switch7 = ce_P.Constant4_Value;
    } else {
      if (ce_B.zidong > ce_P.Switch1_Threshold) {
        /* Switch: '<S5>/Switch1' */
        ce_B.Switch1_i = ce_B.dcf_2;
      } else {
        if (ce_B.shoudong > ce_P.Switch4_Threshold) {
          /* Gain: '<S5>/Gain4' incorporates:
           *  Constant: '<Root>/cns2'
           *  Switch: '<S5>/Switch1'
           *  Switch: '<S5>/Switch4'
           */
          ce_B.Gain4 = ce_P.Gain4_Gain * ce_P.cns2_Value;

          /* Switch: '<S5>/Switch4' incorporates:
           *  Switch: '<S5>/Switch1'
           */
          ce_B.Switch4 = ce_B.Gain4;
        } else {
          /* Switch: '<S5>/Switch4' incorporates:
           *  Constant: '<S5>/Constant1'
           *  Switch: '<S5>/Switch1'
           */
          ce_B.Switch4 = ce_P.Constant1_Value;
        }

        /* Switch: '<S5>/Switch1' */
        ce_B.Switch1_i = ce_B.Switch4;
      }

      ce_B.Switch7 = ce_B.Switch1_i;
    }

    /* End of Switch: '<S5>/Switch7' */
  }

  /* Sum: '<S2>/Sum9' */
  ce_B.Sum9 = ce_B.Gain - ce_B.Ins1;

  /* DataTypeConversion: '<Root>/t0_s1' */
  ce_B.t0_s1 = ce_B.Sum9;

  /* Sum: '<S2>/Sum8' */
  ce_B.Sum8 = ce_B.Gain2 - ce_B.Ins2;

  /* DataTypeConversion: '<Root>/t0_s2' */
  ce_B.t0_s2 = ce_B.Sum8;

  /* Sum: '<S2>/Sum7' */
  ce_B.Sum7 = ce_B.Gain3 - ce_B.Ins3;

  /* DataTypeConversion: '<Root>/t0_s3' */
  ce_B.t0_s3 = ce_B.Sum7;

  /* Sum: '<S2>/Sum6' */
  ce_B.Sum6 = ce_B.Gain1 - ce_B.Ins4;

  /* DataTypeConversion: '<Root>/t0_s4' */
  ce_B.t0_s4 = ce_B.Sum6;

  /* DataTypeConversion: '<Root>/s3' */
  ce_B.s3 = ce_B.Gain3;

  /* DataTypeConversion: '<Root>/s1' */
  ce_B.s1 = ce_B.Gain;

  /* DataTypeConversion: '<Root>/s4' */
  ce_B.s4 = ce_B.Gain1;

  /* Sum: '<S4>/Sum' incorporates:
   *  Constant: '<Root>/cns'
   */
  ce_B.Sum_e = ce_P.cns_Value - ce_B.rqyl3;

  /* Switch: '<S8>/Switch' */
  if (ce_B.Sum_e > ce_P.Switch_Threshold_h) {
    ce_B.Switch_n = ce_B.Sum_e;
  } else {
    /* Product: '<S8>/Product3' incorporates:
     *  Constant: '<S8>/Constant'
     */
    ce_B.Product3 = ce_B.Sum_e * ce_P.Constant_Value_e;
    ce_B.Switch_n = ce_B.Product3;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Integrator: '<S8>/Integrator' */
  ce_B.Integrator = ce_X.Integrator_CSTATE;

  /* Derivative: '<S8>/Derivative' */
  if ((ce_DW.TimeStampA >= ce_M->Timing.t[0]) && (ce_DW.TimeStampB >=
       ce_M->Timing.t[0])) {
    ce_B.Derivative = 0.0;
  } else {
    lastTime = ce_DW.TimeStampA;
    lastU = &ce_DW.LastUAtTimeA;
    if (ce_DW.TimeStampA < ce_DW.TimeStampB) {
      if (ce_DW.TimeStampB < ce_M->Timing.t[0]) {
        lastTime = ce_DW.TimeStampB;
        lastU = &ce_DW.LastUAtTimeB;
      }
    } else {
      if (ce_DW.TimeStampA >= ce_M->Timing.t[0]) {
        lastTime = ce_DW.TimeStampB;
        lastU = &ce_DW.LastUAtTimeB;
      }
    }

    lastTime = ce_M->Timing.t[0] - lastTime;
    ce_B.Derivative = (ce_B.Switch_n - *lastU) / lastTime;
  }

  /* End of Derivative: '<S8>/Derivative' */
  if (rtmIsMajorTimeStep(ce_M)) {
    /* Switch: '<Root>/Switch1' */
    if (ce_B.fby_qfsd > ce_P.Switch1_Threshold_o) {
      ce_B.Switch1 = ce_B.fby_qfkk;
    } else {
      ce_B.Switch1 = ce_B.qfkk;
    }

    /* End of Switch: '<Root>/Switch1' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<Root>/cns3'
     *  Constant: '<S5>/Constant2'
     */
    if (ce_B.shoudong > ce_P.Switch5_Threshold) {
      ce_B.Switch5 = ce_P.cns3_Value;
    } else {
      ce_B.Switch5 = ce_P.Constant2_Value;
    }

    /* End of Switch: '<S5>/Switch5' */
  }

  /* Switch: '<S5>/Switch8' incorporates:
   *  Constant: '<S5>/Constant5'
   *  Switch: '<S5>/Switch2'
   */
  if (ce_B.jt > ce_P.Switch8_Threshold) {
    ce_B.Switch8 = ce_P.Constant5_Value;
  } else {
    if (ce_B.zidong > ce_P.Switch2_Threshold) {
      /* Switch: '<S4>/Switch' incorporates:
       *  Switch: '<S5>/Switch2'
       */
      if (ce_B.kbhxz > ce_P.Switch_Threshold) {
        /* Product: '<S8>/Product2' incorporates:
         *  Constant: '<Root>/D'
         */
        ce_B.Product2 = ce_P.D_Value * ce_B.Derivative;

        /* Product: '<S8>/Product' incorporates:
         *  Constant: '<Root>/I'
         */
        ce_B.Product = ce_P.I_Value * ce_B.Integrator;

        /* Product: '<S8>/Product1' incorporates:
         *  Constant: '<Root>/P'
         */
        ce_B.Product1 = ce_P.P_Value * ce_B.Switch_n;

        /* Sum: '<S8>/Sum1' */
        ce_B.Sum1_i = (ce_B.Product1 + ce_B.Product) + ce_B.Product2;
        ce_B.Switch_m = ce_B.Sum1_i;
      } else {
        ce_B.Switch_m = ce_B.Switch1;
      }

      /* End of Switch: '<S4>/Switch' */

      /* Saturate: '<S4>/Saturation' incorporates:
       *  Switch: '<S5>/Switch2'
       */
      lastTime = ce_B.Switch_m;
      u1 = ce_P.Saturation_LowerSat;
      u2 = ce_P.Saturation_UpperSat;
      if (lastTime > u2) {
        ce_B.Saturation = u2;
      } else if (lastTime < u1) {
        ce_B.Saturation = u1;
      } else {
        ce_B.Saturation = lastTime;
      }

      /* End of Saturate: '<S4>/Saturation' */

      /* Switch: '<S5>/Switch2' */
      ce_B.Switch2 = ce_B.Saturation;
    } else {
      /* Switch: '<S5>/Switch2' */
      ce_B.Switch2 = ce_B.Switch5;
    }

    ce_B.Switch8 = ce_B.Switch2;
  }

  /* End of Switch: '<S5>/Switch8' */

  /* StateSpace: '<Root>/Analog Filter Design3' */
  ce_B.AnalogFilterDesign3 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign3 += ce_P.AnalogFilterDesign3_C *
      ce_X.AnalogFilterDesign3_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design3' */

  /* DataTypeConversion: '<Root>/qyyl' */
  ce_B.qyyl = ce_B.AnalogFilterDesign3;

  /* StateSpace: '<Root>/Analog Filter Design1' */
  ce_B.AnalogFilterDesign1 = 0.0;
  ci = 0;
  while (ci < 1) {
    ce_B.AnalogFilterDesign1 += ce_P.AnalogFilterDesign1_C *
      ce_X.AnalogFilterDesign1_CSTATE[7];
    ci = 1;
  }

  /* End of StateSpace: '<Root>/Analog Filter Design1' */

  /* DataTypeConversion: '<Root>/jyf' */
  ce_B.jyf = ce_B.AnalogFilterDesign1;
  if (rtmIsMajorTimeStep(ce_M)) {
    /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
    {
      SimStruct *rts = ce_M->childSfunctions[2];
      sfcnOutputs(rts, 1);
    }
  }

  /* Clock: '<S3>/Clock' */
  ce_B.Clock = ce_M->Timing.t[0];
  if (rtmIsMajorTimeStep(ce_M)) {
    /* Outputs for Triggered SubSystem: '<S3>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S7>/Trigger'
     */
    if (rtmIsMajorTimeStep(ce_M)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &ce_PrevZCX.EnabledSubsystem_Trig_ZCE,
                         (ce_B.trigger));
      if (zcEvent != NO_ZCEVENT) {
        /* Inport: '<S7>/In1' */
        ce_B.In1 = ce_B.Clock;
        ce_DW.EnabledSubsystem_SubsysRanBC = 4;
      }
    }

    /* End of Outputs for SubSystem: '<S3>/Enabled Subsystem' */

    /* Lookup: '<Root>/biaoding1' */
    ce_B.biaoding1 = rt_Lookup(ce_P.biaoding1_XData, 2, ce_B.DataTypeConversion
      [0], ce_P.biaoding1_YData);

    /* Lookup: '<Root>/biaoding10' */
    ce_B.biaoding10 = rt_Lookup(ce_P.biaoding10_XData, 2,
      ce_B.DataTypeConversion[2], ce_P.biaoding10_YData);

    /* Lookup: '<Root>/biaoding2' */
    ce_B.biaoding2 = rt_Lookup(ce_P.biaoding2_XData, 2, ce_B.DataTypeConversion
      [6], ce_P.biaoding2_YData);

    /* Lookup: '<Root>/biaoding3' */
    ce_B.biaoding3 = rt_Lookup(ce_P.biaoding3_XData, 2, ce_B.DataTypeConversion
      [4], ce_P.biaoding3_YData);
  }

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (ce_B.trigger > ce_P.Switch_Threshold_hz) {
    /* Sum: '<S3>/Sum' */
    ce_B.Sum_j = ce_B.Clock - ce_B.In1;

    /* RelationalOperator: '<S3>/Relational Operator' incorporates:
     *  Constant: '<Root>/time'
     */
    ce_B.RelationalOperator = (ce_B.Sum_j >= ce_P.time_Value);
    ce_B.Switch_p = ce_B.RelationalOperator;
  } else {
    ce_B.Switch_p = ce_P.Constant_Value_l;
  }

  /* End of Switch: '<S3>/Switch' */
}

/* Model update function */
void ce_update(void)
{
  real_T *lastU;
  if (rtmIsMajorTimeStep(ce_M)) {
    /* Update for Memory: '<Root>/Memory' */
    ce_DW.Memory_PreviousInput = ce_B.Switch_p;
  }

  /* Update for Derivative: '<S8>/Derivative' */
  if (ce_DW.TimeStampA == (rtInf)) {
    ce_DW.TimeStampA = ce_M->Timing.t[0];
    lastU = &ce_DW.LastUAtTimeA;
  } else if (ce_DW.TimeStampB == (rtInf)) {
    ce_DW.TimeStampB = ce_M->Timing.t[0];
    lastU = &ce_DW.LastUAtTimeB;
  } else if (ce_DW.TimeStampA < ce_DW.TimeStampB) {
    ce_DW.TimeStampA = ce_M->Timing.t[0];
    lastU = &ce_DW.LastUAtTimeA;
  } else {
    ce_DW.TimeStampB = ce_M->Timing.t[0];
    lastU = &ce_DW.LastUAtTimeB;
  }

  *lastU = ce_B.Switch_n;

  /* End of Update for Derivative: '<S8>/Derivative' */
  if (rtmIsMajorTimeStep(ce_M)) {
    rt_ertODEUpdateContinuousStates(&ce_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ce_M->Timing.clockTick0)) {
    ++ce_M->Timing.clockTickH0;
  }

  ce_M->Timing.t[0] = rtsiGetSolverStopTime(&ce_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++ce_M->Timing.clockTick1)) {
      ++ce_M->Timing.clockTickH1;
    }

    ce_M->Timing.t[1] = ce_M->Timing.clockTick1 * ce_M->Timing.stepSize1 +
      ce_M->Timing.clockTickH1 * ce_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void ce_derivatives(void)
{
  int_T is;
  int_T ci;
  static const int8_T ir[9] = { 0, 2, 3, 6, 7, 10, 11, 14, 15 };

  static const int8_T ir_0[9] = { 0, 1, 1, 1, 1, 1, 1, 1, 1 };

  static const int8_T jc[15] = { 0, 1, 0, 1, 2, 3, 2, 3, 4, 5, 4, 5, 6, 7, 6 };

  XDot_ce_T *_rtXdot;
  _rtXdot = ((XDot_ce_T *) ce_M->derivs);

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design2' */
  for (is = 0; is < 8; is++) {
    _rtXdot->AnalogFilterDesign2_CSTATE[is] = 0.0;
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign2_CSTATE[is] += ce_P.AnalogFilterDesign2_A[ci] *
        ce_X.AnalogFilterDesign2_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign2_CSTATE[is] += ce_P.AnalogFilterDesign2_B *
        ce_B.biaoding3;
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design4' */
    _rtXdot->AnalogFilterDesign4_CSTATE[is] = 0.0;
  }

  /* End of Derivatives for StateSpace: '<Root>/Analog Filter Design2' */

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design4' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign4_CSTATE[is] += ce_P.AnalogFilterDesign4_A[ci] *
        ce_X.AnalogFilterDesign4_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign4_CSTATE[is] += ce_P.AnalogFilterDesign4_B *
        ce_B.biaoding2;
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design6' */
    _rtXdot->AnalogFilterDesign6_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design6' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign6_CSTATE[is] += ce_P.AnalogFilterDesign6_A[ci] *
        ce_X.AnalogFilterDesign6_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign6_CSTATE[is] += ce_P.AnalogFilterDesign6_B *
        ce_B.DataTypeConversion[8];
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design5' */
    _rtXdot->AnalogFilterDesign5_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design5' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign5_CSTATE[is] += ce_P.AnalogFilterDesign5_A[ci] *
        ce_X.AnalogFilterDesign5_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign5_CSTATE[is] += ce_P.AnalogFilterDesign5_B *
        ce_B.DataTypeConversion[10];
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design7' */
    _rtXdot->AnalogFilterDesign7_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design7' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign7_CSTATE[is] += ce_P.AnalogFilterDesign7_A[ci] *
        ce_X.AnalogFilterDesign7_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign7_CSTATE[is] += ce_P.AnalogFilterDesign7_B *
        ce_B.PCI2[10];
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design9' */
    _rtXdot->AnalogFilterDesign9_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design9' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign9_CSTATE[is] += ce_P.AnalogFilterDesign9_A[ci] *
        ce_X.AnalogFilterDesign9_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign9_CSTATE[is] += ce_P.AnalogFilterDesign9_B *
        ce_B.PCI2[8];
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design8' */
    _rtXdot->AnalogFilterDesign8_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design8' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign8_CSTATE[is] += ce_P.AnalogFilterDesign8_A[ci] *
        ce_X.AnalogFilterDesign8_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign8_CSTATE[is] += ce_P.AnalogFilterDesign8_B *
        ce_B.PCI2[12];
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design10' */
    _rtXdot->AnalogFilterDesign10_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design10' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign10_CSTATE[is] += ce_P.AnalogFilterDesign10_A[ci]
        * ce_X.AnalogFilterDesign10_CSTATE[jc[ci]];
    }
  }

  /* Derivatives for Integrator: '<S8>/Integrator' */
  _rtXdot->Integrator_CSTATE = ce_B.Switch_n;
  for (is = 0; is < 8; is++) {
    /* Derivatives for StateSpace: '<Root>/Analog Filter Design10' */
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign10_CSTATE[is] += ce_P.AnalogFilterDesign10_B *
        ce_B.PCI2[14];
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design3' */
    _rtXdot->AnalogFilterDesign3_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design3' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign3_CSTATE[is] += ce_P.AnalogFilterDesign3_A[ci] *
        ce_X.AnalogFilterDesign3_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign3_CSTATE[is] += ce_P.AnalogFilterDesign3_B *
        ce_B.biaoding1;
      ci = 1;
    }

    /* Derivatives for StateSpace: '<Root>/Analog Filter Design1' */
    _rtXdot->AnalogFilterDesign1_CSTATE[is] = 0.0;
  }

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design1' */
  for (is = 0; is < 8; is++) {
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->AnalogFilterDesign1_CSTATE[is] += ce_P.AnalogFilterDesign1_A[ci] *
        ce_X.AnalogFilterDesign1_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    ci = ir_0[is];
    while (ci < 1) {
      _rtXdot->AnalogFilterDesign1_CSTATE[is] += ce_P.AnalogFilterDesign1_B *
        ce_B.biaoding10;
      ci = 1;
    }
  }
}

/* Model initialize function */
void ce_initialize(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-1' (pci1716) */
  {
    SimStruct *rts = ce_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
  {
    SimStruct *rts = ce_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/zidong' */
  ce_B.zidong = ce_P.zidong_Value;

  /* Start for Constant: '<Root>/shoudong' */
  ce_B.shoudong = ce_P.shoudong_Value;

  /* Start for Constant: '<Root>/start' */
  ce_B.start = ce_P.start_Value;

  /* Start for Constant: '<Root>/jt' */
  ce_B.jt = ce_P.jt_Value;

  /* Start for Constant: '<Root>/fby' */
  ce_B.fby = ce_P.fby_Value;

  /* Start for Constant: '<Root>/by' */
  ce_B.by = ce_P.by_Value;

  /* Start for Constant: '<Root>/fqyc' */
  ce_B.fqyc = ce_P.fqyc_Value;

  /* Start for Constant: '<Root>/bdqy' */
  ce_B.bdqy = ce_P.bdqy_Value;

  /* Start for Constant: '<Root>/fq' */
  ce_B.fq = ce_P.fq_Value;

  /* Start for Constant: '<Root>/rqfq' */
  ce_B.rqfq = ce_P.rqfq_Value;

  /* Start for Constant: '<Root>/qfq' */
  ce_B.qfq = ce_P.qfq_Value;

  /* Start for Constant: '<Root>/fby_qfkk' */
  ce_B.fby_qfkk = ce_P.fby_qfkk_Value;

  /* Start for Constant: '<Root>/exp_ready' */
  ce_B.exp_ready = ce_P.exp_ready_Value;

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = ce_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  ce_PrevZCX.TriggeredSubsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ce_PrevZCX.EnabledSubsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;

  {
    int_T is;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    ce_DW.Memory_PreviousInput = ce_P.Memory_X0;

    /* InitializeConditions for Integrator: '<S8>/Integrator' */
    ce_X.Integrator_CSTATE = ce_P.Integrator_IC;

    /* InitializeConditions for Derivative: '<S8>/Derivative' */
    ce_DW.TimeStampA = (rtInf);
    ce_DW.TimeStampB = (rtInf);
    for (is = 0; is < 8; is++) {
      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design2' */
      ce_X.AnalogFilterDesign2_CSTATE[is] = ce_P.AnalogFilterDesign2_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design4' */
      ce_X.AnalogFilterDesign4_CSTATE[is] = ce_P.AnalogFilterDesign4_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design6' */
      ce_X.AnalogFilterDesign6_CSTATE[is] = ce_P.AnalogFilterDesign6_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design5' */
      ce_X.AnalogFilterDesign5_CSTATE[is] = ce_P.AnalogFilterDesign5_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design7' */
      ce_X.AnalogFilterDesign7_CSTATE[is] = ce_P.AnalogFilterDesign7_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design9' */
      ce_X.AnalogFilterDesign9_CSTATE[is] = ce_P.AnalogFilterDesign9_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design8' */
      ce_X.AnalogFilterDesign8_CSTATE[is] = ce_P.AnalogFilterDesign8_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design10' */
      ce_X.AnalogFilterDesign10_CSTATE[is] = ce_P.AnalogFilterDesign10_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design3' */
      ce_X.AnalogFilterDesign3_CSTATE[is] = ce_P.AnalogFilterDesign3_X0;

      /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design1' */
      ce_X.AnalogFilterDesign1_CSTATE[is] = ce_P.AnalogFilterDesign1_X0;
    }

    /* SystemInitialize for Chart: '<Root>/Chart' */
    ce_DW.sfEvent = ce_CALL_EVENT;
    ce_DW.is_by = ce_IN_NO_ACTIVE_CHILD;
    ce_DW.is_exp_fq = ce_IN_NO_ACTIVE_CHILD;
    ce_DW.is_fby = ce_IN_NO_ACTIVE_CHILD;
    ce_DW.is_fqyc = ce_IN_NO_ACTIVE_CHILD;
    ce_DW.is_active_c3_ce = 0U;
    ce_DW.is_c3_ce = ce_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Triggered SubSystem: '<S2>/Triggered Subsystem' */
    /* SystemInitialize for Outport: '<S6>/Out-5t1' */
    ce_B.In5t1 = ce_P.Out5t1_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-5t2' */
    ce_B.In5t2 = ce_P.Out5t2_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-150t1' */
    ce_B.In150t1 = ce_P.Out150t1_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-150t2' */
    ce_B.In150t2 = ce_P.Out150t2_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-wy1' */
    ce_B.Inwy1 = ce_P.Outwy1_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-wy2' */
    ce_B.Inwy2 = ce_P.Outwy2_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-s1' */
    ce_B.Ins1 = ce_P.Outs1_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-s2' */
    ce_B.Ins2 = ce_P.Outs2_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-s3' */
    ce_B.Ins3 = ce_P.Outs3_Y0;

    /* SystemInitialize for Outport: '<S6>/Out-s4' */
    ce_B.Ins4 = ce_P.Outs4_Y0;

    /* End of SystemInitialize for SubSystem: '<S2>/Triggered Subsystem' */

    /* SystemInitialize for Triggered SubSystem: '<S3>/Enabled Subsystem' */
    /* SystemInitialize for Outport: '<S7>/Out1' */
    ce_B.In1 = ce_P.Out1_Y0;

    /* End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem' */
  }
}

/* Model terminate function */
void ce_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-1' (pci1716) */
  {
    SimStruct *rts = ce_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
  {
    SimStruct *rts = ce_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = ce_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  ce_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ce_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  ce_initialize();
}

void MdlTerminate(void)
{
  ce_terminate();
}

/* Registration function */
RT_MODEL_ce_T *ce(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ce_M, 0,
                sizeof(RT_MODEL_ce_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ce_M->solverInfo, &ce_M->Timing.simTimeStep);
    rtsiSetTPtr(&ce_M->solverInfo, &rtmGetTPtr(ce_M));
    rtsiSetStepSizePtr(&ce_M->solverInfo, &ce_M->Timing.stepSize0);
    rtsiSetdXPtr(&ce_M->solverInfo, &ce_M->derivs);
    rtsiSetContStatesPtr(&ce_M->solverInfo, (real_T **) &ce_M->contStates);
    rtsiSetNumContStatesPtr(&ce_M->solverInfo, &ce_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ce_M->solverInfo,
      &ce_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ce_M->solverInfo,
      &ce_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ce_M->solverInfo,
      &ce_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ce_M->solverInfo, (&rtmGetErrorStatus(ce_M)));
    rtsiSetRTModelPtr(&ce_M->solverInfo, ce_M);
  }

  rtsiSetSimTimeStep(&ce_M->solverInfo, MAJOR_TIME_STEP);
  ce_M->intgData.y = ce_M->odeY;
  ce_M->intgData.f[0] = ce_M->odeF[0];
  ce_M->intgData.f[1] = ce_M->odeF[1];
  ce_M->intgData.f[2] = ce_M->odeF[2];
  ce_M->intgData.f[3] = ce_M->odeF[3];
  ce_M->contStates = ((real_T *) &ce_X);
  rtsiSetSolverData(&ce_M->solverInfo, (void *)&ce_M->intgData);
  rtsiSetSolverName(&ce_M->solverInfo,"ode4");
  ce_M->solverInfoPtr = (&ce_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ce_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    ce_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ce_M->Timing.sampleTimes = (&ce_M->Timing.sampleTimesArray[0]);
    ce_M->Timing.offsetTimes = (&ce_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ce_M->Timing.sampleTimes[0] = (0.0);
    ce_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    ce_M->Timing.offsetTimes[0] = (0.0);
    ce_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ce_M, &ce_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ce_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    ce_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ce_M, -1);
  ce_M->Timing.stepSize0 = 0.001;
  ce_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    ce_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ce_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(ce_M->rtwLogInfo, (NULL));
    rtliSetLogT(ce_M->rtwLogInfo, "tout");
    rtliSetLogX(ce_M->rtwLogInfo, "");
    rtliSetLogXFinal(ce_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(ce_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(ce_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(ce_M->rtwLogInfo, 0);
    rtliSetLogDecimation(ce_M->rtwLogInfo, 1);
    rtliSetLogY(ce_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(ce_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(ce_M->rtwLogInfo, (NULL));
  }

  ce_M->solverInfoPtr = (&ce_M->solverInfo);
  ce_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ce_M->solverInfo, 0.001);
  rtsiSetSolverMode(&ce_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ce_M->blockIO = ((void *) &ce_B);
  (void) memset(((void *) &ce_B), 0,
                sizeof(B_ce_T));

  /* parameters */
  ce_M->defaultParam = ((real_T *)&ce_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &ce_X;
    ce_M->contStates = (x);
    (void) memset((void *)&ce_X, 0,
                  sizeof(X_ce_T));
  }

  /* states (dwork) */
  ce_M->dwork = ((void *) &ce_DW);
  (void) memset((void *)&ce_DW, 0,
                sizeof(DW_ce_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  ce_InitializeDataMapInfo(ce_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &ce_M->NonInlinedSFcns.sfcnInfo;
    ce_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(ce_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &ce_M->Sizes.numSampTimes);
    ce_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(ce_M)[0]);
    ce_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(ce_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,ce_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ce_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ce_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(ce_M));
    rtssSetStepSizePtr(sfcnInfo, &ce_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(ce_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &ce_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &ce_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &ce_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &ce_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &ce_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ce_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &ce_M->solverInfoPtr);
  }

  ce_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&ce_M->NonInlinedSFcns.childSFunctions[0], 0,
                  3*sizeof(SimStruct));
    ce_M->childSfunctions = (&ce_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    ce_M->childSfunctions[0] = (&ce_M->NonInlinedSFcns.childSFunctions[0]);
    ce_M->childSfunctions[1] = (&ce_M->NonInlinedSFcns.childSFunctions[1]);
    ce_M->childSfunctions[2] = (&ce_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: ce/<Root>/PCI-1 (pci1716) */
    {
      SimStruct *rts = ce_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = ce_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = ce_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = ce_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &ce_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, ce_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ce_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ce_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ce_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ce_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &ce_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts, &ce_M->
          NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) ce_B.PCI1));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-1");
      ssSetPath(rts, "ce/PCI-1");
      ssSetRTModel(rts,ce_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &ce_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ce_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ce_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &ce_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ce_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ce_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ce_DW.PCI1_IWORK[0]);
      }

      /* registration */
      pci1716(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: ce/<Root>/PCI-2 (pci1716) */
    {
      SimStruct *rts = ce_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = ce_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = ce_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = ce_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &ce_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, ce_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ce_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ce_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ce_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ce_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts, &ce_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts, &ce_M->
          NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) ce_B.PCI2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-2");
      ssSetPath(rts, "ce/PCI-2");
      ssSetRTModel(rts,ce_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &ce_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ce_P.PCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ce_P.PCI2_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &ce_DW.PCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ce_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ce_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ce_DW.PCI2_IWORK[0]);
      }

      /* registration */
      pci1716(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: ce/<Root>/PCI-6208A DA  (da6208) */
    {
      SimStruct *rts = ce_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = ce_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = ce_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = ce_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &ce_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, ce_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ce_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ce_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ce_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ce_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts, &ce_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts, &ce_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &ce_B.Switch6;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&ce_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs2;
          sfcnUPtrs[0] = &ce_B.Switch7;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs3;
          sfcnUPtrs[0] = (real_T*)&ce_RGND;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs4;
          sfcnUPtrs[0] = &ce_B.Switch8;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs5;
          sfcnUPtrs[0] = (real_T*)&ce_RGND;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs6;
          sfcnUPtrs[0] = (real_T*)&ce_RGND;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ce_M->NonInlinedSFcns.Sfcn2.UPtrs7;
          sfcnUPtrs[0] = (real_T*)&ce_RGND;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6208A DA ");
      ssSetPath(rts, "ce/PCI-6208A DA ");
      ssSetRTModel(rts,ce_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &ce_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ce_P.PCI6208ADA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ce_P.PCI6208ADA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ce_P.PCI6208ADA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ce_P.PCI6208ADA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ce_P.PCI6208ADA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ce_P.PCI6208ADA_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &ce_DW.PCI6208ADA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ce_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ce_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ce_DW.PCI6208ADA_IWORK[0]);
      }

      /* registration */
      da6208(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 0);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 0);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 0);
      _ssSetInputPortConnected(rts, 6, 0);
      _ssSetInputPortConnected(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
    }
  }

  /* Initialize Sizes */
  ce_M->Sizes.numContStates = (81);    /* Number of continuous states */
  ce_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  ce_M->Sizes.numY = (0);              /* Number of model outputs */
  ce_M->Sizes.numU = (0);              /* Number of model inputs */
  ce_M->Sizes.sysDirFeedThru = (0);    /* The model is not direct feedthrough */
  ce_M->Sizes.numSampTimes = (2);      /* Number of sample times */
  ce_M->Sizes.numBlocks = (184);       /* Number of blocks */
  ce_M->Sizes.numBlockIO = (124);      /* Number of block outputs */
  ce_M->Sizes.numBlockPrms = (344);    /* Sum of parameter "widths" */
  return ce_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
