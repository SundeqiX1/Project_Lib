/*
 * simpleCylinder1.c
 *
 * Real-Time Workshop code generation for Simulink model "simpleCylinder1.mdl".
 *
 * Model Version              : 1.34
 * Real-Time Workshop version : 6.5  (R2006b)  03-Aug-2006
 * C source code generated on : Thu Nov 26 15:47:16 2020
 */
#include "rt_logging_mmi.h"
#include "simpleCylinder1_capi.h"
#include "simpleCylinder1.h"
#include "simpleCylinder1_private.h"
#include <stdio.h>
#include "simpleCylinder1_dt.h"

/* Named constants for block: '<S6>/Control Logic' */
#define simpleCylinder1_IN_running     (1)
#define simpleCylinder1_IN_to_stopped  (4)
#define simpleCylinder1_IN_to_running  (3)
#define simpleCylinder1_IN_stopped     (2)
#define simpleCylinder1_IN_ready       (1)
#define simpleCylinder1_IN_to_rest     (4)
#define simpleCylinder1_IN_rest        (2)
#define simpleCylinder1_IN_to_ready    (3)

/* Block signals (auto storage) */
BlockIO_simpleCylinder1 simpleCylinder1_B;

/* Continuous states */
ContinuousStates_simpleCylinder simpleCylinder1_X;

/* Block states (auto storage) */
D_Work_simpleCylinder1 simpleCylinder1_DWork;

/* Real-time model */
rtModel_simpleCylinder1 simpleCylinder1_rtM_;
rtModel_simpleCylinder1 *simpleCylinder1_rtM = &simpleCylinder1_rtM_;
real_T simpleCylinder1_RGND = 0.0;     /* real_T ground */

/* This function updates continuous states using the ODE4 fixed-step
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
  (void) memcpy(y,x,
                nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  simpleCylinder1_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++)
    x[i] = y[i] + (temp*f0[i]);
  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  simpleCylinder1_output(0);
  simpleCylinder1_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++)
    x[i] = y[i] + (temp*f1[i]);
  rtsiSetdX(si, f2);
  simpleCylinder1_output(0);
  simpleCylinder1_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++)
    x[i] = y[i] + (h*f2[i]);
  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  simpleCylinder1_output(0);
  simpleCylinder1_derivatives();

  /* tnew = t + h
   ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Output and update for enable system:
 *   '<S7>/Enabled Subsystem1'
 *   '<S7>/Enabled Subsystem2'
 */
void simpleCylinde_EnabledSubsystem1(boolean_T rtu_0, real_T rtu_1,
  rtModel_simpleCylinder1 *simpleCylinder1_rtM, rtB_EnabledSubsystem1_simpleCyl
  *localB, rtDW_EnabledSubsystem1_simpleCy *localDW)
{
  /* detect enable/disable transitions */
  if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
    CondStates prevEnableState = (CondStates) localDW->EnabledSubsystem1_MODE;
    CondStates enableState;

    {
      localDW->EnabledSubsystem1_MODE = (rtu_0) ? SUBSYS_ENABLED :
        SUBSYS_DISABLED;
    }

    enableState = (CondStates) localDW->EnabledSubsystem1_MODE;
    if (enableState == SUBSYS_ENABLED) {
      if (prevEnableState == SUBSYS_DISABLED) {
        /* SUBSYS_BECOMING_ENABLED */
        /* (system enable function is empty) */
        localDW->EnabledSubsystem1_MODE = (int_T) SUBSYS_ENABLED;
      }
    } else {
      if (prevEnableState == SUBSYS_ENABLED) {
        /* SUBSYS_BECOMING_DISABLED */
        /* (system disable function is empty) */
        localDW->EnabledSubsystem1_MODE = (int_T) SUBSYS_DISABLED;
      }
    }
  }

  /* run blocks if enabled */
  if (localDW->EnabledSubsystem1_MODE == SUBSYS_ENABLED) {
    {
      /* Inport: '<S13>/In1' */
      localB->In1 = rtu_1;
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
        srUpdateBC(localDW->EnabledSubsystem1_SubsysRanBC);
      }
    }
  }
}

/* Model output function */
void simpleCylinder1_output(int_T tid)
{
  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(simpleCylinder1_rtM)) {
    simpleCylinder1_rtM->Timing.t[0] = rtsiGetT(&simpleCylinder1_rtM->solverInfo);
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&simpleCylinder1_rtM->solverInfo,
                          ((simpleCylinder1_rtM->Timing.clockTick0+1)*
      simpleCylinder1_rtM->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (simpleCylinder1_DWork.EnabledSubsystem1.EnabledSubsystem1_SubsysRanBC);
  srClearBC
    (simpleCylinder1_DWork.EnabledSubsystem2.EnabledSubsystem1_SubsysRanBC);
  srClearBC(simpleCylinder1_DWork.chirp_enable_SubsysRanBC);
  srClearBC(simpleCylinder1_DWork.sine_SubsysRanBC);
  srClearBC(simpleCylinder1_DWork.square_SubsysRanBC);
  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
    {
      SimStruct *rts = simpleCylinder1_rtM->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    {
      int32_T yOffset;
      real_T tmp;
      int32_T i;
      int32_T i_0;

      /* Lookup: '<Root>/right7' */
      simpleCylinder1_B.right7 = rt_Lookup(simpleCylinder1_P.right7_XData, 2,
        simpleCylinder1_B.PCI2[1], simpleCylinder1_P.right7_YData);

      /* Switch: '<S4>/SwitchControl' incorporates:
       *  Constant: '<Root>/Constant14'
       *  Constant: '<Root>/Constant15'
       *  Constant: '<S4>/Constant'
       */
      if (simpleCylinder1_P.Constant_Value_m >
          simpleCylinder1_P.SwitchControl_Threshold) {
        simpleCylinder1_B.SwitchControl = simpleCylinder1_P.Constant14_Value;
      } else {
        simpleCylinder1_B.SwitchControl = simpleCylinder1_P.Constant15_Value;
      }

      for (i = 0; i < 5; i++) {
        /* Memory: '<S15>/Memory' */
        simpleCylinder1_B.Memory[i] = simpleCylinder1_DWork.Memory_PreviousInput
          [i];

        /* Logic: '<S15>/Logical Operator1' */
        simpleCylinder1_B.LogicalOperator1[i] = !(simpleCylinder1_B.Memory[i] !=
          0.0);
        simpleCylinder1_B.Assignment1[i] = simpleCylinder1_P.Constant3_Value[i];
      }

      /* Assignment: '<S15>/Assignment1' incorporates:
       *  Constant: '<Root>/a'
       *  Constant: '<S15>/Constant4'
       */
      yOffset = (int32_T)simpleCylinder1_P.a_Value - 1;
      simpleCylinder1_B.Assignment1[yOffset] = simpleCylinder1_P.Constant4_Value;
      for (i_0 = 0; i_0 < 5; i_0++) {
        /* Logic: '<S15>/Logical Operator2' */
        simpleCylinder1_B.LogicalOperator2[i_0] = (boolean_T)
          ((simpleCylinder1_B.Assignment1[i_0] != 0.0) ^
           simpleCylinder1_B.LogicalOperator1[i_0]);
      }

      /* Sum: '<S15>/Sum of Elements' */
      tmp = (real_T)simpleCylinder1_B.LogicalOperator2[0];
      tmp += (real_T)simpleCylinder1_B.LogicalOperator2[1];
      tmp += (real_T)simpleCylinder1_B.LogicalOperator2[2];
      tmp += (real_T)simpleCylinder1_B.LogicalOperator2[3];
      tmp += (real_T)simpleCylinder1_B.LogicalOperator2[4];
      simpleCylinder1_B.SumofElements = tmp;
    }
  }

  {
    real_T deltaT;
    real_T rateLimiterRate[5];
    real_T riseValLimit;
    real_T fallValLimit;
    real_T deltaT_0;
    real_T rateLimiterRate_0;
    real_T riseValLimit_0;
    real_T fallValLimit_0;
    real_T deltaT_1;
    real_T riseValLimit_1;
    real_T fallValLimit_1;
    boolean_T cg_in;
    real_T cg_in_0;
    boolean_T cg_in_1;
    real_T cg_in_2;
    boolean_T cg_in_3;
    real_T cg_in_4;
    int32_T i;
    int32_T i_0;
    int32_T i_1;
    int32_T i_2;
    int32_T i_3;
    real_T tmp;
    real_T tmp_0;
    real_T tmp_1;
    real_T rateLimiterRate_12_52_idx;
    real_T rateLimiterRate_12_52_idx_0;
    real_T tmp_2;
    real_T tmp_3;
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* Sum: '<S15>/Subtract' incorporates:
       *  Constant: '<S15>/Constant1'
       */
      simpleCylinder1_B.Subtract = simpleCylinder1_B.Width -
        simpleCylinder1_P.Constant1_Value;

      /* RelationalOperator: '<S15>/Relational Operator' */
      simpleCylinder1_B.RelationalOperator = (simpleCylinder1_B.SumofElements ==
        simpleCylinder1_B.Subtract);
      for (i_0 = 0; i_0 < 5; i_0++) {
        /* Switch: '<S15>/Switch' incorporates:
         *  Constant: '<S15>/Constant3'
         */
        if (simpleCylinder1_B.RelationalOperator) {
          simpleCylinder1_B.Switch[i_0] = simpleCylinder1_P.Constant3_Value[i_0];
        } else {
          simpleCylinder1_B.Switch[i_0] = simpleCylinder1_B.Assignment1[i_0];
        }
      }
    }

    /* RateLimiter: '<S15>/Rate Limiter' */
    if (simpleCylinder1_DWork.LastMajorTime == rtInf) {
      for (i_1 = 0; i_1 < 5; i_1++) {
        simpleCylinder1_B.RateLimiter[i_1] = simpleCylinder1_B.Switch[i_1];
      }
    } else {
      deltaT = simpleCylinder1_rtM->Timing.t[0] -
        simpleCylinder1_DWork.LastMajorTime;
      riseValLimit = deltaT * simpleCylinder1_P.RateLimiter_RisingLim;
      for (i_2 = 0; i_2 < 5; i_2++) {
        rateLimiterRate[i_2] = simpleCylinder1_B.Switch[i_2] -
          simpleCylinder1_DWork.PrevY[i_2];
      }

      fallValLimit = deltaT * simpleCylinder1_P.RateLimiter_FallingLim;
      for (i = 0; i < 5; i++) {
        if (rateLimiterRate[i] > riseValLimit) {
          simpleCylinder1_B.RateLimiter[i] = simpleCylinder1_DWork.PrevY[i] +
            riseValLimit;
        } else if (rateLimiterRate[i] < fallValLimit) {
          simpleCylinder1_B.RateLimiter[i] = simpleCylinder1_DWork.PrevY[i] +
            fallValLimit;
        } else {
          simpleCylinder1_B.RateLimiter[i] = simpleCylinder1_B.Switch[i];
        }
      }
    }

    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* Gain: '<S7>/Gain' incorporates:
       *  Constant: '<S7>/Sin_fuzhi'
       */
      simpleCylinder1_B.Gain = simpleCylinder1_P.Sin_fuzhi_Value *
        simpleCylinder1_P.Gain_Gain;
    }

    for (i_3 = 0; i_3 < 5; i_3++) {
      /* DataTypeConversion: '<S7>/Data Type Conversion' */
      simpleCylinder1_B.DataTypeConversion_c[i_3] = (boolean_T)
        (simpleCylinder1_B.RateLimiter[i_3] != 0.0 ? 1U : 0U);
    }

    /* SignalConversion: '<S7>/HiddenBuf_InsertedFor_sine_at_inport_4' */
    cg_in = simpleCylinder1_B.DataTypeConversion_c[0];
    simpleCylinder1_B.HiddenBuf_InsertedFor_sine_at_i = cg_in;
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
      if (simpleCylinder1_B.HiddenBuf_InsertedFor_sine_at_i) {
        if (simpleCylinder1_DWork.sine_MODE == SUBSYS_DISABLED) {
          /* Initial conditions for enable system: '<S7>/sine' */

          /* InitializeConditions for Memory: '<S18>/Memory' */
          simpleCylinder1_DWork.Memory_PreviousInput_l =
            simpleCylinder1_P.Memory_X0_j;
        }

        simpleCylinder1_DWork.sine_MODE = SUBSYS_ENABLED;
      } else if (simpleCylinder1_DWork.sine_MODE == SUBSYS_ENABLED) {
        simpleCylinder1_DWork.sine_MODE = SUBSYS_DISABLED;
      }
    }

    if (simpleCylinder1_DWork.sine_MODE == SUBSYS_ENABLED) {
      /* Outputs for enable system: '<S7>/sine' */
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
          simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
        /* Memory: '<S18>/Memory' */
        simpleCylinder1_B.Memory_h =
          simpleCylinder1_DWork.Memory_PreviousInput_l;

        /* Gain: '<S18>/Gain1' incorporates:
         *  Constant: '<S7>/Sin_pinlv'
         */
        simpleCylinder1_B.Gain1_f = simpleCylinder1_P.Sin_pinlv_Value *
          simpleCylinder1_P.Gain1_Gain_i;

        /* Sum: '<S18>/Sum1' */
        simpleCylinder1_B.Sum1 = simpleCylinder1_B.Gain1_f -
          simpleCylinder1_B.Memory_h;
      }

      /* Clock Block: '<S18>/Clock'
       */
      simpleCylinder1_B.Clock_n = simpleCylinder1_rtM->Timing.t[0];

      /* Product: '<S18>/Product2' */
      simpleCylinder1_B.Product2_l = simpleCylinder1_B.Sum1 *
        simpleCylinder1_B.Clock_n;

      /* Abs: '<S18>/Abs' */
      simpleCylinder1_B.Abs = fabs(simpleCylinder1_B.Product2_l);
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
          simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
        /* Math Block: '<S18>/Math Function1'
         */
        /* Operator : rem */
        {
          real_T u2Fix;
          real_T uDiv;
          real_T uDivFix;

          {
            real_T t;
            t = floor(fabs(simpleCylinder1_P.mod_Value));
            u2Fix = ((simpleCylinder1_P.mod_Value < 0.0) ? -t : t);
          }

          if (simpleCylinder1_P.mod_Value == 0.0) {
            simpleCylinder1_B.MathFunction1 = rtNaN;
          } else if (simpleCylinder1_P.mod_Value == u2Fix ) {
            /* Integer denominator.  Use conventional formula.*/
            uDiv = simpleCylinder1_P.Sin_xiangwei_Value /
              simpleCylinder1_P.mod_Value;

            {
              real_T t;
              t = floor(fabs(uDiv));
              uDivFix = ((uDiv < 0.0) ? -t : t);
            }

            simpleCylinder1_B.MathFunction1 =
              (simpleCylinder1_P.Sin_xiangwei_Value - uDivFix *
               simpleCylinder1_P.mod_Value);
          } else {
            /* Noninteger denominator. Check for nearly integer quotient.*/
            real_T uDivRound;
            uDiv = simpleCylinder1_P.Sin_xiangwei_Value /
              simpleCylinder1_P.mod_Value;

            {
              real_T t;
              t = floor((fabs(uDiv) + 0.5));
              uDivRound = ((uDiv < 0.0) ? -t : t);
            }

            if (fabs((uDiv - uDivRound)) <= DBL_EPSILON * fabs(uDiv)) {
              simpleCylinder1_B.MathFunction1 = 0.0;
            } else {
              {
                real_T t;
                t = floor(fabs(uDiv));
                uDivFix = ((uDiv < 0.0) ? -t : t);
              }

              simpleCylinder1_B.MathFunction1 = (uDiv - uDivFix) *
                simpleCylinder1_P.mod_Value;
            }
          }
        }
      }

      if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
          simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
        /* Gain: '<S18>/Gain2' */
        simpleCylinder1_B.Gain2_o = simpleCylinder1_B.MathFunction1 *
          simpleCylinder1_P.Gain2_Gain_m;

        /* RelationalOperator: '<S18>/Relational Operator2' */
        simpleCylinder1_B.RelationalOperator2 = (simpleCylinder1_B.Memory_h !=
          simpleCylinder1_B.Gain1_f);
      }

      /* Math Block: '<S18>/Math Function'
       */
      /* Operator : rem */
      {
        real_T u2Fix;
        real_T uDiv;
        real_T uDivFix;

        {
          real_T t;
          t = floor(fabs(simpleCylinder1_P.Constant2_Value_h));
          u2Fix = ((simpleCylinder1_P.Constant2_Value_h < 0.0) ? -t : t);
        }

        if (simpleCylinder1_P.Constant2_Value_h == 0.0) {
          simpleCylinder1_B.MathFunction_f = rtNaN;
        } else if (simpleCylinder1_P.Constant2_Value_h == u2Fix ) {
          /* Integer denominator.  Use conventional formula.*/
          uDiv = simpleCylinder1_B.Abs / simpleCylinder1_P.Constant2_Value_h;

          {
            real_T t;
            t = floor(fabs(uDiv));
            uDivFix = ((uDiv < 0.0) ? -t : t);
          }

          simpleCylinder1_B.MathFunction_f = (simpleCylinder1_B.Abs - uDivFix *
            simpleCylinder1_P.Constant2_Value_h);
        } else {
          /* Noninteger denominator. Check for nearly integer quotient.*/
          real_T uDivRound;
          uDiv = simpleCylinder1_B.Abs / simpleCylinder1_P.Constant2_Value_h;

          {
            real_T t;
            t = floor((fabs(uDiv) + 0.5));
            uDivRound = ((uDiv < 0.0) ? -t : t);
          }

          if (fabs((uDiv - uDivRound)) <= DBL_EPSILON * fabs(uDiv)) {
            simpleCylinder1_B.MathFunction_f = 0.0;
          } else {
            {
              real_T t;
              t = floor(fabs(uDiv));
              uDivFix = ((uDiv < 0.0) ? -t : t);
            }

            simpleCylinder1_B.MathFunction_f = (uDiv - uDivFix) *
              simpleCylinder1_P.Constant2_Value_h;
          }
        }
      }

      /* RelationalOperator: '<S18>/Relational Operator1' incorporates:
       *  Constant: '<S18>/Constant3'
       */
      simpleCylinder1_B.RelationalOperator1 = (simpleCylinder1_B.MathFunction_f <=
        simpleCylinder1_P.Constant3_Value_c);

      /* Logic: '<S18>/Logical Operator' */
      simpleCylinder1_B.LogicalOperator_e =
        (simpleCylinder1_B.RelationalOperator2 &&
         simpleCylinder1_B.RelationalOperator1);

      /* Switch: '<S18>/Switch' */
      if (simpleCylinder1_B.LogicalOperator_e) {
        simpleCylinder1_B.Switch_d = simpleCylinder1_B.Gain1_f;
      } else {
        simpleCylinder1_B.Switch_d = simpleCylinder1_B.Memory_h;
      }

      /* Product: '<S18>/Product1' */
      simpleCylinder1_B.Product1_a = simpleCylinder1_B.Switch_d *
        simpleCylinder1_B.Clock_n;

      /* Sum: '<S18>/Sum3' */
      simpleCylinder1_B.Sum3 = simpleCylinder1_B.Product1_a +
        simpleCylinder1_B.Gain2_o;

      /* Trigonometry: '<S18>/Trigonometric Function' */
      simpleCylinder1_B.TrigonometricFunction_b = sin(simpleCylinder1_B.Sum3);

      /* Product: '<S18>/Product3' */
      simpleCylinder1_B.Product3_m = simpleCylinder1_B.Gain *
        simpleCylinder1_B.TrigonometricFunction_b;

      /* Sum: '<S18>/Sum2' incorporates:
       *  Constant: '<S7>/Sin_bias'
       */
      simpleCylinder1_B.Sum2_i = simpleCylinder1_B.Product3_m +
        simpleCylinder1_P.Sin_bias_Value;
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
        srUpdateBC(simpleCylinder1_DWork.sine_SubsysRanBC);
      }
    }

    /* Gain: '<S7>/Gain1' */
    simpleCylinder1_B.Gain1 = simpleCylinder1_B.Sum2_i *
      simpleCylinder1_P.Gain1_Gain;

    /* Product: '<S7>/Product4' */
    cg_in_0 = simpleCylinder1_B.RateLimiter[0];
    simpleCylinder1_B.Product4 = cg_in_0 * simpleCylinder1_B.Gain1;
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* Gain: '<S7>/Gain6' incorporates:
       *  Constant: '<S7>/Square_fuzhi'
       */
      simpleCylinder1_B.Gain6 = simpleCylinder1_P.Square_fuzhi_Value *
        simpleCylinder1_P.Gain6_Gain;
    }

    /* SignalConversion: '<S7>/HiddenBuf_InsertedFor_square_at_inport_3' */
    cg_in_1 = simpleCylinder1_B.DataTypeConversion_c[1];
    simpleCylinder1_B.HiddenBuf_InsertedFor_square_at = cg_in_1;
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
      if (simpleCylinder1_B.HiddenBuf_InsertedFor_square_at) {
        if (simpleCylinder1_DWork.square_MODE == SUBSYS_DISABLED) {
        }

        simpleCylinder1_DWork.square_MODE = SUBSYS_ENABLED;
      } else if (simpleCylinder1_DWork.square_MODE == SUBSYS_ENABLED) {
        simpleCylinder1_DWork.square_MODE = SUBSYS_DISABLED;
      }
    }

    if (simpleCylinder1_DWork.square_MODE == SUBSYS_ENABLED) {
      /* Output and update for enable system: '<S7>/square' */

      /* Clock Block: '<S19>/Clock'
       */
      simpleCylinder1_B.Clock_h = simpleCylinder1_rtM->Timing.t[0];
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
          simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
        /* Math: '<S19>/Math Function' incorporates:
         *  Constant: '<S7>/Square_zhouqi'
         */
        simpleCylinder1_B.MathFunction = 1.0 /
          simpleCylinder1_P.Square_zhouqi_Value;

        /* Gain: '<S19>/Square Gain' */
        simpleCylinder1_B.SquareGain = simpleCylinder1_B.MathFunction *
          simpleCylinder1_P.SquareGain_Gain;
      }

      /* Product: '<S19>/Product2' */
      simpleCylinder1_B.Product2 = simpleCylinder1_B.SquareGain *
        simpleCylinder1_B.Clock_h;

      /* Trigonometry: '<S19>/Trigonometric Function' */
      simpleCylinder1_B.TrigonometricFunction = sin(simpleCylinder1_B.Product2);

      /* Signum: '<S19>/Sign' */
      simpleCylinder1_B.Sign = rt_SGN(simpleCylinder1_B.TrigonometricFunction);

      /* Product: '<S19>/Product4' */
      simpleCylinder1_B.Product4_h = simpleCylinder1_B.Gain6 *
        simpleCylinder1_B.Sign;

      /* Sum: '<S19>/Sum2' incorporates:
       *  Constant: '<S7>/Square_bias'
       */
      simpleCylinder1_B.Sum2_pe = simpleCylinder1_B.Product4_h +
        simpleCylinder1_P.Square_bias_Value;
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
        srUpdateBC(simpleCylinder1_DWork.square_SubsysRanBC);
      }
    }

    /* Gain: '<S7>/Gain2' */
    simpleCylinder1_B.Gain2 = simpleCylinder1_B.Sum2_pe *
      simpleCylinder1_P.Gain2_Gain;

    /* Product: '<S7>/Product5' */
    cg_in_2 = simpleCylinder1_B.RateLimiter[1];
    simpleCylinder1_B.Product5 = cg_in_2 * simpleCylinder1_B.Gain2;
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* Memory: '<S6>/Memory' */
      simpleCylinder1_B.Memory_l = simpleCylinder1_DWork.Memory_PreviousInput_m;

      /* DataTypeConversion: '<S6>/Data Type Conversion3' incorporates:
       *  Constant: '<Root>/constant12'
       */
      simpleCylinder1_B.DataTypeConversion3 = simpleCylinder1_P.constant12_Value;

      /* Logic: '<S6>/OR1' incorporates:
       *  Constant: '<Root>/constant11'
       *  Constant: '<Root>/constant12'
       */
      simpleCylinder1_B.OR1 = ((simpleCylinder1_P.constant12_Value != 0.0) ||
        (simpleCylinder1_P.constant11_Value != 0.0));

      /* DataTypeConversion: '<S6>/Data Type Conversion2' */
      simpleCylinder1_B.DataTypeConversion2 = (real_T)simpleCylinder1_B.OR1;

      /* Memory: '<S6>/Memory1' */
      simpleCylinder1_B.Memory1 = simpleCylinder1_DWork.Memory1_PreviousInput;

      /* Stateflow Block: '<S6>/Control Logic'
       */
      if (simpleCylinder1_DWork.ControlLogic.is_active_c1_simpleCylinder1 == 0) {
        simpleCylinder1_DWork.ControlLogic.is_active_c1_simpleCylinder1 = 1U;
        simpleCylinder1_DWork.ControlLogic.is_active_run_mode = 1U;
        simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
          simpleCylinder1_IN_stopped;
        simpleCylinder1_DWork.ControlLogic.is_active_ready_mode = 1U;
        simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
          simpleCylinder1_IN_rest;
      } else {
        switch (simpleCylinder1_DWork.ControlLogic.is_run_mode) {
         case simpleCylinder1_IN_running:
          if (!((boolean_T)simpleCylinder1_B.DataTypeConversion3 != 0)) {
            simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
              simpleCylinder1_IN_to_stopped;
          } else {
            simpleCylinder1_B.start = 1.0;
            simpleCylinder1_B.start_sts = 2.0;
          }

          break;

         case simpleCylinder1_IN_stopped:
          if (((boolean_T)simpleCylinder1_B.DataTypeConversion3 != 0) &&
              (simpleCylinder1_DWork.ControlLogic.is_ready_mode ==
               simpleCylinder1_IN_ready)) {
            simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
              simpleCylinder1_IN_to_running;
          } else {
            simpleCylinder1_B.start = 0.0;
            simpleCylinder1_B.start_sts = 0.0;
          }

          break;

         case simpleCylinder1_IN_to_running:
          if (simpleCylinder1_B.DataTypeConversion3 ==
              simpleCylinder1_B.Memory_l) {
            simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
              simpleCylinder1_IN_running;
          } else if (!((boolean_T)simpleCylinder1_B.DataTypeConversion3 != 0)) {
            simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
              simpleCylinder1_IN_to_stopped;
          } else {
            simpleCylinder1_B.start = 1.0;
            simpleCylinder1_B.start_sts = 1.0;
          }

          break;

         case simpleCylinder1_IN_to_stopped:
          if (((boolean_T)simpleCylinder1_B.DataTypeConversion3 != 0) &&
              (simpleCylinder1_DWork.ControlLogic.is_ready_mode ==
               simpleCylinder1_IN_ready)) {
            simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
              simpleCylinder1_IN_to_running;
          } else if (simpleCylinder1_B.DataTypeConversion3 ==
                     simpleCylinder1_B.Memory_l) {
            simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
              simpleCylinder1_IN_stopped;
          } else {
            simpleCylinder1_B.start = 0.0;
            simpleCylinder1_B.start_sts = 3.0;
          }

          break;

         default:
          simpleCylinder1_DWork.ControlLogic.is_run_mode = (uint8_T)
            simpleCylinder1_IN_stopped;
          break;
        }

        switch (simpleCylinder1_DWork.ControlLogic.is_ready_mode) {
         case simpleCylinder1_IN_ready:
          if ((!((boolean_T)simpleCylinder1_B.DataTypeConversion2 != 0)) &&
              (simpleCylinder1_DWork.ControlLogic.is_run_mode ==
               simpleCylinder1_IN_stopped)) {
            simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
              simpleCylinder1_IN_to_rest;
          } else {
            simpleCylinder1_B.ready = 1.0;
            simpleCylinder1_B.ready_sts = 2.0;
          }

          break;

         case simpleCylinder1_IN_rest:
          if ((boolean_T)simpleCylinder1_B.DataTypeConversion2 != 0) {
            simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
              simpleCylinder1_IN_to_ready;
          } else {
            simpleCylinder1_B.ready = 0.0;
            simpleCylinder1_B.ready_sts = 0.0;
          }

          break;

         case simpleCylinder1_IN_to_ready:
          if (simpleCylinder1_B.DataTypeConversion2 == simpleCylinder1_B.Memory1)
          {
            simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
              simpleCylinder1_IN_ready;
          } else if ((!((boolean_T)simpleCylinder1_B.DataTypeConversion2 != 0)) &&
                     (simpleCylinder1_DWork.ControlLogic.is_run_mode ==
                      simpleCylinder1_IN_stopped)) {
            simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
              simpleCylinder1_IN_to_rest;
          } else {
            simpleCylinder1_B.ready = 1.0;
            simpleCylinder1_B.ready_sts = 1.0;
          }

          break;

         case simpleCylinder1_IN_to_rest:
          if ((boolean_T)simpleCylinder1_B.DataTypeConversion2 != 0) {
            simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
              simpleCylinder1_IN_to_ready;
          } else if (simpleCylinder1_B.DataTypeConversion2 ==
                     simpleCylinder1_B.Memory1) {
            simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
              simpleCylinder1_IN_rest;
          } else {
            simpleCylinder1_B.ready = 0.0;
            simpleCylinder1_B.ready_sts = 3.0;
          }

          break;

         default:
          simpleCylinder1_DWork.ControlLogic.is_ready_mode = (uint8_T)
            simpleCylinder1_IN_rest;
          break;
        }
      }

      /* DataTypeConversion: '<S6>/Data Type Conversion' */
      simpleCylinder1_B.DataTypeConversion = simpleCylinder1_B.start;
    }

    /* RateLimiter: '<S6>/Start Limiter' */
    if (simpleCylinder1_DWork.LastMajorTime_p == rtInf) {
      simpleCylinder1_B.StartLimiter = simpleCylinder1_B.DataTypeConversion;
    } else {
      deltaT_0 = simpleCylinder1_rtM->Timing.t[0] -
        simpleCylinder1_DWork.LastMajorTime_p;
      riseValLimit_0 = deltaT_0 * simpleCylinder1_P.StartLimiter_RisingLim;
      rateLimiterRate_0 = simpleCylinder1_B.DataTypeConversion -
        simpleCylinder1_DWork.PrevY_g;
      if (rateLimiterRate_0 > riseValLimit_0) {
        simpleCylinder1_B.StartLimiter = simpleCylinder1_DWork.PrevY_g +
          riseValLimit_0;
      } else {
        fallValLimit_0 = deltaT_0 * simpleCylinder1_P.StartLimiter_FallingLim;
        if (rateLimiterRate_0 < fallValLimit_0) {
          simpleCylinder1_B.StartLimiter = simpleCylinder1_DWork.PrevY_g +
            fallValLimit_0;
        } else {
          simpleCylinder1_B.StartLimiter = simpleCylinder1_B.DataTypeConversion;
        }
      }
    }

    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* Logic: '<S6>/Logical Operator2' */
      simpleCylinder1_B.LogicalOperator2_f = !(simpleCylinder1_B.ready != 0.0);

      /* DataTypeConversion: '<S6>/Data Type Conversion1' */
      simpleCylinder1_B.DataTypeConversion1 = (real_T)
        simpleCylinder1_B.LogicalOperator2_f;
    }

    /* RateLimiter: '<S6>/Ready Limiter' */
    tmp = simpleCylinder1_B.ready;
    tmp_0 = simpleCylinder1_B.DataTypeConversion1;
    if (simpleCylinder1_DWork.LastMajorTime_e == rtInf) {
      simpleCylinder1_B.ReadyLimiter[0] = tmp;
      simpleCylinder1_B.ReadyLimiter[1] = tmp_0;
    } else {
      deltaT_1 = simpleCylinder1_rtM->Timing.t[0] -
        simpleCylinder1_DWork.LastMajorTime_e;
      riseValLimit_1 = deltaT_1 * simpleCylinder1_P.ReadyLimiter_RisingLim;
      rateLimiterRate_12_52_idx = tmp - simpleCylinder1_DWork.PrevY_m[0];
      rateLimiterRate_12_52_idx_0 = tmp_0 - simpleCylinder1_DWork.PrevY_m[1];
      fallValLimit_1 = deltaT_1 * simpleCylinder1_P.ReadyLimiter_FallingLim;
      if (rateLimiterRate_12_52_idx > riseValLimit_1) {
        simpleCylinder1_B.ReadyLimiter[0] = simpleCylinder1_DWork.PrevY_m[0] +
          riseValLimit_1;
      } else if (rateLimiterRate_12_52_idx < fallValLimit_1) {
        simpleCylinder1_B.ReadyLimiter[0] = simpleCylinder1_DWork.PrevY_m[0] +
          fallValLimit_1;
      } else {
        simpleCylinder1_B.ReadyLimiter[0] = tmp;
      }

      if (rateLimiterRate_12_52_idx_0 > riseValLimit_1) {
        simpleCylinder1_B.ReadyLimiter[1] = simpleCylinder1_DWork.PrevY_m[1] +
          riseValLimit_1;
      } else if (rateLimiterRate_12_52_idx_0 < fallValLimit_1) {
        simpleCylinder1_B.ReadyLimiter[1] = simpleCylinder1_DWork.PrevY_m[1] +
          fallValLimit_1;
      } else {
        simpleCylinder1_B.ReadyLimiter[1] = tmp_0;
      }
    }

    /* Lookup: '<S6>/fade_in_fade_out' */
    tmp_1 = simpleCylinder1_B.StartLimiter;
    tmp_2 = simpleCylinder1_B.ReadyLimiter[0];
    tmp_3 = simpleCylinder1_B.ReadyLimiter[1];
    simpleCylinder1_B.fade_in_fade_out[0] = rt_Lookup
      (simpleCylinder1_P.fade_in_fade_out_XData, 1001, tmp_1,
       simpleCylinder1_P.fade_in_fade_out_YData);
    simpleCylinder1_B.fade_in_fade_out[1] = rt_Lookup
      (simpleCylinder1_P.fade_in_fade_out_XData, 1001, tmp_2,
       simpleCylinder1_P.fade_in_fade_out_YData);
    simpleCylinder1_B.fade_in_fade_out[2] = rt_Lookup
      (simpleCylinder1_P.fade_in_fade_out_XData, 1001, tmp_3,
       simpleCylinder1_P.fade_in_fade_out_YData);

    /* Logic: '<S7>/AND' */
    cg_in_3 = simpleCylinder1_B.DataTypeConversion_c[2];
    cg_in_4 = simpleCylinder1_B.fade_in_fade_out[0];
    simpleCylinder1_B.AND = (cg_in_3 && (cg_in_4 != 0.0));

    /* SignalConversion: '<S7>/HiddenBuf_InsertedFor_chirp_enable_at_inport_0' */
    simpleCylinder1_B.HiddenBuf_InsertedFor_chirp_ena = simpleCylinder1_B.AND;

    /* Outputs for enable SubSystem: '<S7>/chirp_enable' incorporates:
     *  Constant: '<S16>/sweep_mode'
     */
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
      if (simpleCylinder1_B.HiddenBuf_InsertedFor_chirp_ena > 0U) {
        simpleCylinder1_DWork.chirp_enable_MODE = SUBSYS_ENABLED;
      } else if (simpleCylinder1_DWork.chirp_enable_MODE == SUBSYS_ENABLED) {
        simpleCylinder1_DWork.chirp_enable_MODE = SUBSYS_DISABLED;
      }
    }

    if (simpleCylinder1_DWork.chirp_enable_MODE == SUBSYS_ENABLED) {
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
          simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
        /* MultiPortSwitch: '<S16>/Multiport Switch' */
        if ((int32_T)simpleCylinder1_P.sweep_mode_Value == 1) {
          simpleCylinder1_B.MultiportSwitch_p = 0.0;
        } else {
          simpleCylinder1_B.MultiportSwitch_p = 0.0;
        }

        /* Gain: '<S16>/Chirp_Gain' */
        simpleCylinder1_B.Chirp_Gain = simpleCylinder1_B.MultiportSwitch_p *
          simpleCylinder1_P.Chirp_Gain_Gain;
      }

      if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
        srUpdateBC(simpleCylinder1_DWork.chirp_enable_SubsysRanBC);
      }
    }

    /* end of Outputs for SubSystem: '<S7>/chirp_enable' */
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* Gain: '<S7>/Gain5' */
      simpleCylinder1_B.Gain5 = simpleCylinder1_B.Chirp_Gain *
        simpleCylinder1_P.Gain5_Gain;
    }
  }

  /* Product: '<S7>/Product9' */
  simpleCylinder1_B.Product9 = simpleCylinder1_B.RateLimiter[2] *
    simpleCylinder1_B.Gain5;

  /* StateSpace Block: '<S17>/2-5' */
  {
    simpleCylinder1_B.u = simpleCylinder1_P.u_C*simpleCylinder1_X.u_CSTATE[7];
  }

  /* Gain: '<S17>/scale_gain' */
  simpleCylinder1_B.scale_gain = simpleCylinder1_B.u *
    simpleCylinder1_P.scale_gain_Gain;

  /* StateSpace Block: '<S17>/2-10' */
  {
    simpleCylinder1_B.u0 = simpleCylinder1_P.u0_C*simpleCylinder1_X.u0_CSTATE[7];
  }

  /* Gain: '<S17>/scale_gain1' */
  simpleCylinder1_B.scale_gain1 = simpleCylinder1_B.u0 *
    simpleCylinder1_P.scale_gain1_Gain;

  /* StateSpace Block: '<S17>/2-20' */
  {
    simpleCylinder1_B.u0_n = simpleCylinder1_P.u0_C_k*
      simpleCylinder1_X.u0_CSTATE_d[7];
  }

  /* Gain: '<S17>/scale_gain2' */
  simpleCylinder1_B.scale_gain2 = simpleCylinder1_B.u0_n *
    simpleCylinder1_P.scale_gain2_Gain;

  /* StateSpace Block: '<S17>/2-30' */
  {
    simpleCylinder1_B.u0_o = simpleCylinder1_P.u0_C_b*
      simpleCylinder1_X.u0_CSTATE_c[7];
  }

  /* Gain: '<S17>/scale_gain3' */
  simpleCylinder1_B.scale_gain3 = simpleCylinder1_B.u0_o *
    simpleCylinder1_P.scale_gain3_Gain;

  /* StateSpace Block: '<S17>/2-60' */
  {
    simpleCylinder1_B.u0_g = simpleCylinder1_P.u0_C_i*
      simpleCylinder1_X.u0_CSTATE_b[7];
  }

  {
    real_T cg_in[5];
    int32_T i;

    /* Gain: '<S17>/scale_gain4' */
    simpleCylinder1_B.scale_gain4 = simpleCylinder1_B.u0_g *
      simpleCylinder1_P.scale_gain4_Gain;

    /* SignalConversion: '<S7>/TmpHiddenBufferAtSelector7Inport1' */
    cg_in[0] = simpleCylinder1_B.scale_gain;
    cg_in[1] = simpleCylinder1_B.scale_gain1;
    cg_in[2] = simpleCylinder1_B.scale_gain2;
    cg_in[3] = simpleCylinder1_B.scale_gain3;
    cg_in[4] = simpleCylinder1_B.scale_gain4;
    for (i = 0; i < 5; i++) {
      simpleCylinder1_B.TmpHiddenBufferAtSelector7Inpor[i] = cg_in[i];
    }
  }

  {
    int32_T uOffset;

    /* Selector: '<S7>/Selector7' incorporates:
     *  Constant: '<S7>/rand_freq_sel'
     */
    uOffset = (int32_T)simpleCylinder1_P.rand_freq_sel_Value - 1;
    simpleCylinder1_B.Selector7 =
      simpleCylinder1_B.TmpHiddenBufferAtSelector7Inpor[uOffset];

    /* Gain: '<S7>/random_gain' */
    simpleCylinder1_B.random_gain = simpleCylinder1_B.Selector7 *
      simpleCylinder1_P.random_gain_Gain;

    /* SignalConversion: '<S7>/HiddenBuf_InsertedFor_Enabled Subsystem1_at_inport_1' */
    simpleCylinder1_B.HiddenBuf_InsertedFor_EnabledSu =
      simpleCylinder1_B.DataTypeConversion_c[3];
  }

  /* SubSystem Block: '<S7>/Enabled Subsystem1'
   */
  simpleCylinde_EnabledSubsystem1
    (simpleCylinder1_B.HiddenBuf_InsertedFor_EnabledSu,
     simpleCylinder1_B.random_gain, simpleCylinder1_rtM,
     &simpleCylinder1_B.EnabledSubsystem1,
     &simpleCylinder1_DWork.EnabledSubsystem1);

  /* Gain: '<S7>/Gain3' */
  simpleCylinder1_B.Gain3 = simpleCylinder1_B.EnabledSubsystem1.In1 *
    simpleCylinder1_P.Gain3_Gain;

  /* Product: '<S7>/Product1' */
  simpleCylinder1_B.Product1 = simpleCylinder1_B.RateLimiter[3] *
    simpleCylinder1_B.Gain3;

  /* SignalConversion: '<S7>/HiddenBuf_InsertedFor_Enabled Subsystem2_at_inport_1' */
  simpleCylinder1_B.HiddenBuf_InsertedFor_Enabled_d =
    simpleCylinder1_B.DataTypeConversion_c[4];

  /* SubSystem Block: '<S7>/Enabled Subsystem2'
   */
  simpleCylinde_EnabledSubsystem1
    (simpleCylinder1_B.HiddenBuf_InsertedFor_Enabled_d,
     simpleCylinder1_B.random_gain, simpleCylinder1_rtM,
     &simpleCylinder1_B.EnabledSubsystem2,
     &simpleCylinder1_DWork.EnabledSubsystem2);

  /* Gain: '<S7>/Gain4' */
  simpleCylinder1_B.Gain4 = simpleCylinder1_B.EnabledSubsystem2.In1 *
    simpleCylinder1_P.Gain4_Gain;

  /* Product: '<S7>/Product6' */
  simpleCylinder1_B.Product6 = simpleCylinder1_B.RateLimiter[4] *
    simpleCylinder1_B.Gain4;

  /* Sum: '<S7>/Sum2' */
  simpleCylinder1_B.Sum2 = (((simpleCylinder1_B.Product4 +
    simpleCylinder1_B.Product5) + simpleCylinder1_B.Product9) +
    simpleCylinder1_B.Product1) + simpleCylinder1_B.Product6;

  /* Product: '<Root>/Product5' */
  simpleCylinder1_B.Product5_m = simpleCylinder1_B.Sum2 *
    simpleCylinder1_B.fade_in_fade_out[0];

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S8>/internal_sig_acc_gain'
   */
  simpleCylinder1_B.Product1_o = simpleCylinder1_P.internal_sig_acc_gain_Valu *
    simpleCylinder1_B.Product5_m;
  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* DiscreteTransferFcn Block: '<S8>/Discrete inverse fit'
     */
    simpleCylinder1_B.Discreteinversefit =
      simpleCylinder1_P.Discreteinversefit_D*simpleCylinder1_B.Product1_o;

    {
      int_T nx = 6;
      const real_T *x = &simpleCylinder1_DWork.Discreteinversefit_DSTATE[0];
      const real_T *Cmtx = &simpleCylinder1_P.Discreteinversefit_C[0];
      while (nx--) {
        simpleCylinder1_B.Discreteinversefit += (*Cmtx) * (*x++);
        Cmtx += 1;
      }
    }
  }

  {
    real_T rtsaturate_U0DataInY0Container;

    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/standby_position'
     *  Constant: '<Root>/standby_position3'
     *  Constant: '<S8>/internal_sig_pos_gain'
     *  Constant: '<S8>/sel '
     */
    if ((int32_T)simpleCylinder1_B.SwitchControl == 1) {
      /* MultiPortSwitch: '<S8>/Multiport Switch' */
      if ((int32_T)simpleCylinder1_B.SwitchControl == 1) {
        /* Product: '<Root>/Product1' */
        simpleCylinder1_B.Product1_h = simpleCylinder1_P.standby_position3_Value*
          simpleCylinder1_B.fade_in_fade_out[2];

        /* Product: '<Root>/Product' */
        simpleCylinder1_B.Product_a = simpleCylinder1_P.standby_position_Value
          *simpleCylinder1_B.fade_in_fade_out[1];

        /* Sum: '<Root>/Sum' */
        simpleCylinder1_B.Sum = simpleCylinder1_B.Product_a +
          simpleCylinder1_B.Product1_h;

        /* Sum: '<S8>/Sum1' */
        simpleCylinder1_B.Sum1_c = simpleCylinder1_B.Product5_m +
          simpleCylinder1_B.Sum;

        /* Product: '<S8>/Product' */
        simpleCylinder1_B.Product_k =
          simpleCylinder1_P.internal_sig_pos_gain_Valu *
          simpleCylinder1_B.Sum1_c;
        simpleCylinder1_B.MultiportSwitch_e = simpleCylinder1_B.Product_k;
      } else {
        /* MultiPortSwitch: '<S8>/Multiport Switch1' */
        if ((int32_T)simpleCylinder1_P.sel_Value == 1) {
          simpleCylinder1_B.MultiportSwitch1 = simpleCylinder1_B.Product1_o;
        } else {
          simpleCylinder1_B.MultiportSwitch1 =
            simpleCylinder1_B.Discreteinversefit;
        }

        simpleCylinder1_B.MultiportSwitch_e = simpleCylinder1_B.MultiportSwitch1;
      }

      simpleCylinder1_B.MultiportSwitch = simpleCylinder1_B.MultiportSwitch_e;
    } else {
      simpleCylinder1_B.MultiportSwitch = 0.0;
    }

    /* Saturate: '<Root>/Saturation4' */
    rtsaturate_U0DataInY0Container = rt_SATURATE
      (simpleCylinder1_B.MultiportSwitch, simpleCylinder1_P.Saturation4_LowerSat,
       simpleCylinder1_P.Saturation4_UpperSat);
    simpleCylinder1_B.Saturation4 = rtsaturate_U0DataInY0Container;

    /* Sum: '<Root>/Sum7' */
    simpleCylinder1_B.Sum7 = simpleCylinder1_B.Saturation4 -
      simpleCylinder1_B.right7;

    /* Sum: '<Root>/Sum6' */
    simpleCylinder1_B.Sum6 = simpleCylinder1_B.Sum7 - 0.0;

    /* Product: '<Root>/Product6' incorporates:
     *  Constant: '<Root>/Constant18'
     */
    simpleCylinder1_B.Product6_o = simpleCylinder1_P.Constant18_Value *
      simpleCylinder1_B.Sum6;
  }

  /* Integrator Block: '<Root>/Integrator'
   */
  simpleCylinder1_B.Integrator = simpleCylinder1_X.Integrator_CSTATE;

  /* Product: '<Root>/Product3' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  simpleCylinder1_B.Product3 = simpleCylinder1_P.Constant2_Value *
    simpleCylinder1_B.Integrator;

  /* Derivative Block: '<Root>/Derivative' */
  {
    real_T t = simpleCylinder1_rtM->Timing.t[0];
    real_T timeStampA = simpleCylinder1_DWork.Derivative_RWORK.TimeStampA;
    real_T timeStampB = simpleCylinder1_DWork.Derivative_RWORK.TimeStampB;
    if (timeStampA >= t && timeStampB >= t) {
      simpleCylinder1_B.Derivative = 0.0;
    } else {
      real_T deltaT;
      real_T *lastBank = &simpleCylinder1_DWork.Derivative_RWORK.TimeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastBank += 2;
        }
      } else if (timeStampA >= t) {
        lastBank += 2;
      }

      deltaT = t - *lastBank++;
      simpleCylinder1_B.Derivative = (simpleCylinder1_B.Sum6 - *lastBank++) /
        deltaT;
    }
  }

  {
    real_T rtsaturate_U0DataInY0Container;

    /* Product: '<Root>/Product4' incorporates:
     *  Constant: '<Root>/Constant16'
     */
    simpleCylinder1_B.Product4_i = simpleCylinder1_P.Constant16_Value *
      simpleCylinder1_B.Derivative;

    /* Sum: '<Root>/Add' */
    simpleCylinder1_B.Add = (simpleCylinder1_B.Product6_o +
      simpleCylinder1_B.Product3) + simpleCylinder1_B.Product4_i;

    /* RelationalOperator: '<S2>/Compare' incorporates:
     *  Constant: '<S2>/Constant'
     */
    simpleCylinder1_B.Compare = (simpleCylinder1_B.fade_in_fade_out[1] ==
      simpleCylinder1_P.Constant_Value);

    /* RelationalOperator: '<S3>/Compare' incorporates:
     *  Constant: '<S3>/Constant'
     */
    simpleCylinder1_B.Compare_l = (simpleCylinder1_B.fade_in_fade_out[0] ==
      simpleCylinder1_P.Constant_Value_e);

    /* Logic: '<Root>/Logical Operator' */
    simpleCylinder1_B.LogicalOperator = ((simpleCylinder1_B.Compare != 0U) &&
      (simpleCylinder1_B.Compare_l != 0U));

    /* RelationalOperator: '<S9>/Relational Operator' incorporates:
     *  Constant: '<S9>/c'
     */
    simpleCylinder1_B.RelationalOperator_n = (simpleCylinder1_B.LogicalOperator ==
      simpleCylinder1_P.c_Value);

    /* Switch: '<S9>/Switch9' */
    if (simpleCylinder1_B.RelationalOperator_n) {
      /* Saturate: '<S9>/Saturation2' */
      rtsaturate_U0DataInY0Container = rt_SATURATE(simpleCylinder1_B.Add,
        simpleCylinder1_P.Saturation2_LowerSat,
        simpleCylinder1_P.Saturation2_UpperSat);
      simpleCylinder1_B.Saturation2 = rtsaturate_U0DataInY0Container;
      simpleCylinder1_B.Switch9 = simpleCylinder1_B.Saturation2;
    } else {
      simpleCylinder1_B.Switch9 = 0.0;
    }

    /* Gain: '<S9>/Gain1' */
    simpleCylinder1_B.Gain1_h = simpleCylinder1_B.Switch9 *
      simpleCylinder1_P.Gain1_Gain_p;

    /* Gain: '<S9>/Gain2' */
    simpleCylinder1_B.Gain2_j = simpleCylinder1_B.Gain1_h *
      simpleCylinder1_P.Gain2_Gain_b;
    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* UnitDelay: '<S9>/Unit Delay' */
      simpleCylinder1_B.UnitDelay = simpleCylinder1_DWork.UnitDelay_DSTATE;
    }

    /* Sum: '<S9>/Sum11' */
    simpleCylinder1_B.Sum11 = simpleCylinder1_B.Gain2_j +
      simpleCylinder1_B.UnitDelay;
  }

  {
    real_T rtsaturate_U0DataInY0Container;

    /* Switch: '<S5>/SwitchControl' incorporates:
     *  Constant: '<Root>/standby_position1'
     *  Constant: '<Root>/standby_position4'
     *  Constant: '<S5>/Constant'
     */
    if (simpleCylinder1_P.Constant_Value_d >
        simpleCylinder1_P.SwitchControl_Threshold_b) {
      /* Saturate: '<S9>/Saturation1' */
      rtsaturate_U0DataInY0Container = rt_SATURATE(simpleCylinder1_B.Sum11,
        simpleCylinder1_P.Saturation1_LowerSat,
        simpleCylinder1_P.Saturation1_UpperSat);
      simpleCylinder1_B.Saturation1 = rtsaturate_U0DataInY0Container;

      /* Sum: '<Root>/Sum5' */
      simpleCylinder1_B.Sum5 = (simpleCylinder1_B.Add +
        simpleCylinder1_B.Saturation1) +
        simpleCylinder1_P.standby_position4_Value;
      simpleCylinder1_B.SwitchControl_l = simpleCylinder1_B.Sum5;
    } else {
      simpleCylinder1_B.SwitchControl_l =
        simpleCylinder1_P.standby_position1_Value;
    }

    /* Gain: '<Root>/gain3' */
    simpleCylinder1_B.gain3 = simpleCylinder1_B.SwitchControl_l *
      simpleCylinder1_P.gain3_Gain;
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* Level2 S-Function Block: '<Root>/DA2' (acl6126) */
    {
      SimStruct *rts = simpleCylinder1_rtM->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }
  }

  /* ok to acquire for <S10>/S-Function */
  simpleCylinder1_DWork.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S11>/S-Function */
  simpleCylinder1_DWork.SFunction_IWORK_b.AcquireOK = 1;

  /* SignalGenerator Block: '<Root>/Signal Generator2'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator2_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator2 =
      simpleCylinder1_P.SignalGenerator2_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator3'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator3_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator3 =
      simpleCylinder1_P.SignalGenerator3_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator4'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator4_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator4 =
      simpleCylinder1_P.SignalGenerator4_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator5'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator5_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator5 =
      simpleCylinder1_P.SignalGenerator5_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator6'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator6_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator6 =
      simpleCylinder1_P.SignalGenerator6_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator7'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator7_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator7 =
      simpleCylinder1_P.SignalGenerator7_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator8'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator8_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator8 =
      simpleCylinder1_P.SignalGenerator8_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator9'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator9_Frequency*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator9 =
      simpleCylinder1_P.SignalGenerator9_Amplitude*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator10'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator10_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator10 =
      simpleCylinder1_P.SignalGenerator10_Amplitud*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator11'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator11_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator11 =
      simpleCylinder1_P.SignalGenerator11_Amplitud*sin2PiFT;
  }

  {
    real_T cg_in[6];
    int32_T i;

    /* Product: '<S1>/Product1' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    cg_in[0] = simpleCylinder1_B.SignalGenerator6;
    cg_in[1] = simpleCylinder1_B.SignalGenerator7;
    cg_in[2] = simpleCylinder1_B.SignalGenerator8;
    cg_in[3] = simpleCylinder1_B.SignalGenerator9;
    cg_in[4] = simpleCylinder1_B.SignalGenerator10;
    cg_in[5] = simpleCylinder1_B.SignalGenerator11;
    for (i = 0; i < 6; i++) {
      simpleCylinder1_B.Product1_i[i] = cg_in[i] *
        simpleCylinder1_P.Constant2_Value_n[i];
    }
  }

  /* SignalGenerator Block: '<Root>/Signal Generator12'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator12_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator12 =
      simpleCylinder1_P.SignalGenerator12_Amplitud*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator13'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator13_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator13 =
      simpleCylinder1_P.SignalGenerator13_Amplitud*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator14'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator14_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator14 =
      simpleCylinder1_P.SignalGenerator14_Amplitud*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator15'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator15_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator15 =
      simpleCylinder1_P.SignalGenerator15_Amplitud*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator16'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator16_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator16 =
      simpleCylinder1_P.SignalGenerator16_Amplitud*sin2PiFT;
  }

  /* SignalGenerator Block: '<Root>/Signal Generator17'
   */
  {
    real_T sin2PiFT = sin(6.2831853071795862E+000*
                          simpleCylinder1_P.SignalGenerator17_Frequenc*
                          simpleCylinder1_rtM->Timing.t[0]);
    simpleCylinder1_B.SignalGenerator17 =
      simpleCylinder1_P.SignalGenerator17_Amplitud*sin2PiFT;
  }

  {
    real_T cg_in[6];
    real_T cg_in_0[36];
    int32_T i;
    int32_T i_0;
    int32_T i_1;
    real_T tmp;

    /* Product: '<S1>/Product' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    cg_in[0] = simpleCylinder1_B.SignalGenerator12;
    cg_in[1] = simpleCylinder1_B.SignalGenerator13;
    cg_in[2] = simpleCylinder1_B.SignalGenerator14;
    cg_in[3] = simpleCylinder1_B.SignalGenerator15;
    cg_in[4] = simpleCylinder1_B.SignalGenerator16;
    cg_in[5] = simpleCylinder1_B.SignalGenerator17;
    for (i = 0; i < 6; i++) {
      simpleCylinder1_B.Product[i] = cg_in[i] *
        simpleCylinder1_P.Constant1_Value_j;
    }

    /* DataTypeConversion: '<S1>/Data Type Conversion8' incorporates:
     *  Constant: '<S1>/Constant3'
     */
    cg_in_0[0] = simpleCylinder1_B.MultiportSwitch;
    cg_in_0[1] = simpleCylinder1_B.right7;
    cg_in_0[2] = simpleCylinder1_B.SignalGenerator2;
    cg_in_0[3] = simpleCylinder1_B.SignalGenerator3;
    cg_in_0[4] = simpleCylinder1_B.SignalGenerator4;
    cg_in_0[5] = simpleCylinder1_B.SignalGenerator5;
    for (i_0 = 0; i_0 < 6; i_0++) {
      cg_in_0[i_0 + 6] = simpleCylinder1_B.Product1_i[i_0];
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      cg_in_0[i_0 + 12] = simpleCylinder1_B.Product[i_0];
    }

    cg_in_0[18] = simpleCylinder1_B.MultiportSwitch;
    cg_in_0[19] = simpleCylinder1_B.right7;
    cg_in_0[20] = simpleCylinder1_B.SignalGenerator2;
    cg_in_0[21] = simpleCylinder1_B.SignalGenerator3;
    cg_in_0[22] = simpleCylinder1_B.SignalGenerator4;
    cg_in_0[23] = simpleCylinder1_B.SignalGenerator5;
    for (i_0 = 0; i_0 < 6; i_0++) {
      cg_in_0[i_0 + 24] = simpleCylinder1_B.Product1_i[i_0];
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      cg_in_0[i_0 + 30] = simpleCylinder1_B.Product[i_0];
    }

    for (i_1 = 0; i_1 < 36; i_1++) {
      simpleCylinder1_B.DataTypeConversion8[i_1] = cg_in_0[i_1];

      /* Sum: '<S1>/Sum2' */
      simpleCylinder1_B.Sum2_p[i_1] = simpleCylinder1_P.Constant3_Value_b +
        simpleCylinder1_B.DataTypeConversion8[i_1];

      /* Gain: '<S1>/Gain' */
      simpleCylinder1_B.Gain_m[i_1] = simpleCylinder1_B.Sum2_p[i_1] *
        simpleCylinder1_P.Gain_Gain_e;

      /* DataTypeConversion: '<S1>/Data Type Conversion15' */
      tmp = simpleCylinder1_B.Gain_m[i_1];
      simpleCylinder1_B.DataTypeConversion15[i_1] = (uint16_T)(tmp <= 65535.0 ?
        tmp >= 0.0 ? tmp : 0.0 : 65535.0);
    }
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* Pack: <S1>/Pack1 */
    (void) memcpy(simpleCylinder1_B.Pack1,simpleCylinder1_B.DataTypeConversion15,
                  72);

    /* Unpack: <S1>/encoded data */
    (void) memcpy(simpleCylinder1_B.encodeddata,simpleCylinder1_B.Pack1,
                  72);
  }

  /* Clock Block: '<S1>/Clock'
   */
  simpleCylinder1_B.Clock = simpleCylinder1_rtM->Timing.t[0];

  {
    real_T cg_in[10];
    int32_T i;
    int32_T i_0;

    /* Gain: '<S1>/Encoded_data' */
    cg_in[0] = simpleCylinder1_B.Clock;
    for (i = 0; i < 9; i++) {
      cg_in[i + 1] = simpleCylinder1_B.encodeddata[i];
    }

    for (i_0 = 0; i_0 < 10; i_0++) {
      simpleCylinder1_B.Encoded_data[i_0] = cg_in[i_0] *
        simpleCylinder1_P.Encoded_data_Gain;
    }

    /* Gain: '<Root>/gain1' */
    simpleCylinder1_B.gain1 = simpleCylinder1_B.MultiportSwitch *
      simpleCylinder1_P.gain1_Gain;
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* Gain: '<Root>/gain2' */
    simpleCylinder1_B.gain2 = simpleCylinder1_B.right7 *
      simpleCylinder1_P.gain2_Gain;
  }

  {
    int32_T i;
    for (i = 0; i < 5; i++) {
      /* Rounding: '<S15>/Rounding Function1' */
      simpleCylinder1_B.RoundingFunction1[i] = ceil
        (simpleCylinder1_B.RateLimiter[i]);
    }
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* UniformRandomNumber Block: '<S7>/random'
     */
    simpleCylinder1_B.random = simpleCylinder1_DWork.random_RWORK.NextOutput;
  }

  UNUSED_PARAMETER(tid);
}

/* Model update function */
void simpleCylinder1_update(int_T tid)
{
  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    {
      int32_T i;
      for (i = 0; i < 5; i++) {
        /* Update for Memory: '<S15>/Memory' */
        simpleCylinder1_DWork.Memory_PreviousInput[i] =
          simpleCylinder1_B.RoundingFunction1[i];
      }
    }
  }

  {
    real_T cg_in;
    int32_T i;

    /* Update for RateLimiter: '<S15>/Rate Limiter' */
    for (i = 0; i < 5; i++) {
      simpleCylinder1_DWork.PrevY[i] = simpleCylinder1_B.RateLimiter[i];
    }

    simpleCylinder1_DWork.LastMajorTime = simpleCylinder1_rtM->Timing.t[0];
    if (simpleCylinder1_DWork.sine_MODE == SUBSYS_ENABLED) {
      /* Update for enable system: '<S7>/sine' */
      if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
          simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
        /* Update for Memory: '<S18>/Memory' */
        simpleCylinder1_DWork.Memory_PreviousInput_l =
          simpleCylinder1_B.Switch_d;
      }
    }

    if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
        simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
      /* Update for Memory: '<S6>/Memory' */
      simpleCylinder1_DWork.Memory_PreviousInput_m =
        simpleCylinder1_B.StartLimiter;

      /* Update for Memory: '<S6>/Memory1' */
      cg_in = simpleCylinder1_B.fade_in_fade_out[1];
      simpleCylinder1_DWork.Memory1_PreviousInput = cg_in;
    }

    /* Update for RateLimiter: '<S6>/Start Limiter' */
    simpleCylinder1_DWork.PrevY_g = simpleCylinder1_B.StartLimiter;
    simpleCylinder1_DWork.LastMajorTime_p = simpleCylinder1_rtM->Timing.t[0];

    /* Update for RateLimiter: '<S6>/Ready Limiter' */
    simpleCylinder1_DWork.PrevY_m[0] = simpleCylinder1_B.ReadyLimiter[0];
    simpleCylinder1_DWork.PrevY_m[1] = simpleCylinder1_B.ReadyLimiter[1];
    simpleCylinder1_DWork.LastMajorTime_e = simpleCylinder1_rtM->Timing.t[0];
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* DiscreteTransferFcn Block: '<S8>/Discrete inverse fit' */
    {
      int_T i;
      const real_T *Amtx = &simpleCylinder1_P.Discreteinversefit_A[0];
      real_T *x = &simpleCylinder1_DWork.Discreteinversefit_DSTATE[0];
      real_T xtmp = simpleCylinder1_B.Product1_o;
      for (i=5; i>0; i--) {
        xtmp += Amtx[i]*x[i];
        x[i] = x[i-1];
      }

      x[0] = xtmp + Amtx[0]*x[0];
    }
  }

  /* Derivative Block: '<Root>/Derivative' */
  {
    real_T timeStampA = simpleCylinder1_DWork.Derivative_RWORK.TimeStampA;
    real_T timeStampB = simpleCylinder1_DWork.Derivative_RWORK.TimeStampB;
    real_T *lastBank = &simpleCylinder1_DWork.Derivative_RWORK.TimeStampA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastBank += 2;
      } else if (timeStampA >= timeStampB) {
        lastBank += 2;
      }
    }

    *lastBank++ = simpleCylinder1_rtM->Timing.t[0];
    *lastBank++ = simpleCylinder1_B.Sum6;
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for UnitDelay: '<S9>/Unit Delay' */
    simpleCylinder1_DWork.UnitDelay_DSTATE = simpleCylinder1_B.Sum11;
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.001s, 0.0s] */
    /* UniformRandomNumber Block: '<S7>/random' */
    simpleCylinder1_DWork.random_RWORK.NextOutput = rt_Urand((uint32_T *)
      &simpleCylinder1_DWork.random_IWORK.RandSeed) *
      (simpleCylinder1_P.random_Max - simpleCylinder1_P.random_Min) +
      simpleCylinder1_P.random_Min;
  }

  if (rtmIsMajorTimeStep(simpleCylinder1_rtM)) {
    rt_ertODEUpdateContinuousStates(&simpleCylinder1_rtM->solverInfo);
  }

  /* Update absolute time for base rate */
  if (!(++simpleCylinder1_rtM->Timing.clockTick0))
    ++simpleCylinder1_rtM->Timing.clockTickH0;
  simpleCylinder1_rtM->Timing.t[0] = simpleCylinder1_rtM->Timing.clockTick0 *
    simpleCylinder1_rtM->Timing.stepSize0 +
    simpleCylinder1_rtM->Timing.clockTickH0 *
    simpleCylinder1_rtM->Timing.stepSize0 * 4294967296.0;
  if (rtmIsMajorTimeStep(simpleCylinder1_rtM) &&
      simpleCylinder1_rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    if (!(++simpleCylinder1_rtM->Timing.clockTick1))
      ++simpleCylinder1_rtM->Timing.clockTickH1;
    simpleCylinder1_rtM->Timing.t[1] = simpleCylinder1_rtM->Timing.clockTick1 *
      simpleCylinder1_rtM->Timing.stepSize1 +
      simpleCylinder1_rtM->Timing.clockTickH1 *
      simpleCylinder1_rtM->Timing.stepSize1 * 4294967296.0;
  }

  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void simpleCylinder1_derivatives(void)
{
  /* StateSpace Block: '<S17>/2-5' */
  {
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[0] = simpleCylinder1_P.u_B*simpleCylinder1_B.random;
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[0] += (simpleCylinder1_P.u_A[0])*simpleCylinder1_X.u_CSTATE[0]+
      (simpleCylinder1_P.u_A[1])*simpleCylinder1_X.u_CSTATE[1]
      + (simpleCylinder1_P.u_A[2])*simpleCylinder1_X.u_CSTATE[8];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[1] = (simpleCylinder1_P.u_A[3])*simpleCylinder1_X.u_CSTATE[0] +
      (simpleCylinder1_P.u_A[4])*simpleCylinder1_X.u_CSTATE[9];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[2] = (simpleCylinder1_P.u_A[5])*simpleCylinder1_X.u_CSTATE[1] +
      (simpleCylinder1_P.u_A[6])*simpleCylinder1_X.u_CSTATE[2]
      + (simpleCylinder1_P.u_A[7])*simpleCylinder1_X.u_CSTATE[3]
      + (simpleCylinder1_P.u_A[8])*simpleCylinder1_X.u_CSTATE[10];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[3] = (simpleCylinder1_P.u_A[9])*simpleCylinder1_X.u_CSTATE[2] +
      (simpleCylinder1_P.u_A[10])*simpleCylinder1_X.u_CSTATE[11];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[4] = (simpleCylinder1_P.u_A[11])*simpleCylinder1_X.u_CSTATE[3]+
      (simpleCylinder1_P.u_A[12])*simpleCylinder1_X.u_CSTATE[4]
      + (simpleCylinder1_P.u_A[13])*simpleCylinder1_X.u_CSTATE[5]
      + (simpleCylinder1_P.u_A[14])*simpleCylinder1_X.u_CSTATE[12];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[5] = (simpleCylinder1_P.u_A[15])*simpleCylinder1_X.u_CSTATE[4]+
      (simpleCylinder1_P.u_A[16])*simpleCylinder1_X.u_CSTATE[13];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[6] = (simpleCylinder1_P.u_A[17])*simpleCylinder1_X.u_CSTATE[5]+
      (simpleCylinder1_P.u_A[18])*simpleCylinder1_X.u_CSTATE[6]
      + (simpleCylinder1_P.u_A[19])*simpleCylinder1_X.u_CSTATE[7]
      + (simpleCylinder1_P.u_A[20])*simpleCylinder1_X.u_CSTATE[14];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[7] = (simpleCylinder1_P.u_A[21])*simpleCylinder1_X.u_CSTATE[6]+
      (simpleCylinder1_P.u_A[22])*simpleCylinder1_X.u_CSTATE[15];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[8] = (simpleCylinder1_P.u_A[23])*simpleCylinder1_X.u_CSTATE[0];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[9] = (simpleCylinder1_P.u_A[24])*simpleCylinder1_X.u_CSTATE[1];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[10] = (simpleCylinder1_P.u_A[25])*simpleCylinder1_X.u_CSTATE[2];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[11] = (simpleCylinder1_P.u_A[26])*simpleCylinder1_X.u_CSTATE[3];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[12] = (simpleCylinder1_P.u_A[27])*simpleCylinder1_X.u_CSTATE[4];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[13] = (simpleCylinder1_P.u_A[28])*simpleCylinder1_X.u_CSTATE[5];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[14] = (simpleCylinder1_P.u_A[29])*simpleCylinder1_X.u_CSTATE[6];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u_CSTATE[15] = (simpleCylinder1_P.u_A[30])*simpleCylinder1_X.u_CSTATE[7];
  }

  /* StateSpace Block: '<S17>/2-10' */
  {
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[0] = simpleCylinder1_P.u0_B*simpleCylinder1_B.random;
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[0] += (simpleCylinder1_P.u0_A[0])*simpleCylinder1_X.u0_CSTATE
      [0] + (simpleCylinder1_P.u0_A[1])*simpleCylinder1_X.u0_CSTATE[1]
      + (simpleCylinder1_P.u0_A[2])*simpleCylinder1_X.u0_CSTATE[8];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[1] = (simpleCylinder1_P.u0_A[3])*simpleCylinder1_X.u0_CSTATE
      [0] + (simpleCylinder1_P.u0_A[4])*simpleCylinder1_X.u0_CSTATE[9];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[2] = (simpleCylinder1_P.u0_A[5])*simpleCylinder1_X.u0_CSTATE
      [1] + (simpleCylinder1_P.u0_A[6])*simpleCylinder1_X.u0_CSTATE[2]
      + (simpleCylinder1_P.u0_A[7])*simpleCylinder1_X.u0_CSTATE[3]
      + (simpleCylinder1_P.u0_A[8])*simpleCylinder1_X.u0_CSTATE[10];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[3] = (simpleCylinder1_P.u0_A[9])*simpleCylinder1_X.u0_CSTATE
      [2] + (simpleCylinder1_P.u0_A[10])*simpleCylinder1_X.u0_CSTATE[11];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[4] = (simpleCylinder1_P.u0_A[11])*simpleCylinder1_X.u0_CSTATE
      [3] + (simpleCylinder1_P.u0_A[12])*simpleCylinder1_X.u0_CSTATE[4]
      + (simpleCylinder1_P.u0_A[13])*simpleCylinder1_X.u0_CSTATE[5]
      + (simpleCylinder1_P.u0_A[14])*simpleCylinder1_X.u0_CSTATE[12];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[5] = (simpleCylinder1_P.u0_A[15])*simpleCylinder1_X.u0_CSTATE
      [4] + (simpleCylinder1_P.u0_A[16])*simpleCylinder1_X.u0_CSTATE[13];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[6] = (simpleCylinder1_P.u0_A[17])*simpleCylinder1_X.u0_CSTATE
      [5] + (simpleCylinder1_P.u0_A[18])*simpleCylinder1_X.u0_CSTATE[6]
      + (simpleCylinder1_P.u0_A[19])*simpleCylinder1_X.u0_CSTATE[7]
      + (simpleCylinder1_P.u0_A[20])*simpleCylinder1_X.u0_CSTATE[14];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[7] = (simpleCylinder1_P.u0_A[21])*simpleCylinder1_X.u0_CSTATE
      [6] + (simpleCylinder1_P.u0_A[22])*simpleCylinder1_X.u0_CSTATE[15];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[8] = (simpleCylinder1_P.u0_A[23])*simpleCylinder1_X.u0_CSTATE
      [0];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[9] = (simpleCylinder1_P.u0_A[24])*simpleCylinder1_X.u0_CSTATE
      [1];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[10] = (simpleCylinder1_P.u0_A[25])*
      simpleCylinder1_X.u0_CSTATE[2];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[11] = (simpleCylinder1_P.u0_A[26])*
      simpleCylinder1_X.u0_CSTATE[3];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[12] = (simpleCylinder1_P.u0_A[27])*
      simpleCylinder1_X.u0_CSTATE[4];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[13] = (simpleCylinder1_P.u0_A[28])*
      simpleCylinder1_X.u0_CSTATE[5];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[14] = (simpleCylinder1_P.u0_A[29])*
      simpleCylinder1_X.u0_CSTATE[6];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE[15] = (simpleCylinder1_P.u0_A[30])*
      simpleCylinder1_X.u0_CSTATE[7];
  }

  /* StateSpace Block: '<S17>/2-20' */
  {
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[0] = simpleCylinder1_P.u0_B_i*simpleCylinder1_B.random;
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[0] += (simpleCylinder1_P.u0_A_o[0])*
      simpleCylinder1_X.u0_CSTATE_d[0]
      + (simpleCylinder1_P.u0_A_o[1])*simpleCylinder1_X.u0_CSTATE_d[1]
      + (simpleCylinder1_P.u0_A_o[2])*simpleCylinder1_X.u0_CSTATE_d[8];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[1] = (simpleCylinder1_P.u0_A_o[3])*
      simpleCylinder1_X.u0_CSTATE_d[0]
      + (simpleCylinder1_P.u0_A_o[4])*simpleCylinder1_X.u0_CSTATE_d[9];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[2] = (simpleCylinder1_P.u0_A_o[5])*
      simpleCylinder1_X.u0_CSTATE_d[1]
      + (simpleCylinder1_P.u0_A_o[6])*simpleCylinder1_X.u0_CSTATE_d[2]
      + (simpleCylinder1_P.u0_A_o[7])*simpleCylinder1_X.u0_CSTATE_d[3]
      + (simpleCylinder1_P.u0_A_o[8])*simpleCylinder1_X.u0_CSTATE_d[10];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[3] = (simpleCylinder1_P.u0_A_o[9])*
      simpleCylinder1_X.u0_CSTATE_d[2]
      + (simpleCylinder1_P.u0_A_o[10])*simpleCylinder1_X.u0_CSTATE_d[11];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[4] = (simpleCylinder1_P.u0_A_o[11])*
      simpleCylinder1_X.u0_CSTATE_d[3]
      + (simpleCylinder1_P.u0_A_o[12])*simpleCylinder1_X.u0_CSTATE_d[4]
      + (simpleCylinder1_P.u0_A_o[13])*simpleCylinder1_X.u0_CSTATE_d[5]
      + (simpleCylinder1_P.u0_A_o[14])*simpleCylinder1_X.u0_CSTATE_d[12];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[5] = (simpleCylinder1_P.u0_A_o[15])*
      simpleCylinder1_X.u0_CSTATE_d[4]
      + (simpleCylinder1_P.u0_A_o[16])*simpleCylinder1_X.u0_CSTATE_d[13];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[6] = (simpleCylinder1_P.u0_A_o[17])*
      simpleCylinder1_X.u0_CSTATE_d[5]
      + (simpleCylinder1_P.u0_A_o[18])*simpleCylinder1_X.u0_CSTATE_d[6]
      + (simpleCylinder1_P.u0_A_o[19])*simpleCylinder1_X.u0_CSTATE_d[7]
      + (simpleCylinder1_P.u0_A_o[20])*simpleCylinder1_X.u0_CSTATE_d[14];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[7] = (simpleCylinder1_P.u0_A_o[21])*
      simpleCylinder1_X.u0_CSTATE_d[6]
      + (simpleCylinder1_P.u0_A_o[22])*simpleCylinder1_X.u0_CSTATE_d[15];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[8] = (simpleCylinder1_P.u0_A_o[23])*
      simpleCylinder1_X.u0_CSTATE_d[0];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[9] = (simpleCylinder1_P.u0_A_o[24])*
      simpleCylinder1_X.u0_CSTATE_d[1];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[10] = (simpleCylinder1_P.u0_A_o[25])*
      simpleCylinder1_X.u0_CSTATE_d[2];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[11] = (simpleCylinder1_P.u0_A_o[26])*
      simpleCylinder1_X.u0_CSTATE_d[3];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[12] = (simpleCylinder1_P.u0_A_o[27])*
      simpleCylinder1_X.u0_CSTATE_d[4];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[13] = (simpleCylinder1_P.u0_A_o[28])*
      simpleCylinder1_X.u0_CSTATE_d[5];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[14] = (simpleCylinder1_P.u0_A_o[29])*
      simpleCylinder1_X.u0_CSTATE_d[6];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_d[15] = (simpleCylinder1_P.u0_A_o[30])*
      simpleCylinder1_X.u0_CSTATE_d[7];
  }

  /* StateSpace Block: '<S17>/2-30' */
  {
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[0] = simpleCylinder1_P.u0_B_d*simpleCylinder1_B.random;
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[0] += (simpleCylinder1_P.u0_A_e[0])*
      simpleCylinder1_X.u0_CSTATE_c[0]
      + (simpleCylinder1_P.u0_A_e[1])*simpleCylinder1_X.u0_CSTATE_c[1]
      + (simpleCylinder1_P.u0_A_e[2])*simpleCylinder1_X.u0_CSTATE_c[8];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[1] = (simpleCylinder1_P.u0_A_e[3])*
      simpleCylinder1_X.u0_CSTATE_c[0]
      + (simpleCylinder1_P.u0_A_e[4])*simpleCylinder1_X.u0_CSTATE_c[9];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[2] = (simpleCylinder1_P.u0_A_e[5])*
      simpleCylinder1_X.u0_CSTATE_c[1]
      + (simpleCylinder1_P.u0_A_e[6])*simpleCylinder1_X.u0_CSTATE_c[2]
      + (simpleCylinder1_P.u0_A_e[7])*simpleCylinder1_X.u0_CSTATE_c[3]
      + (simpleCylinder1_P.u0_A_e[8])*simpleCylinder1_X.u0_CSTATE_c[10];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[3] = (simpleCylinder1_P.u0_A_e[9])*
      simpleCylinder1_X.u0_CSTATE_c[2]
      + (simpleCylinder1_P.u0_A_e[10])*simpleCylinder1_X.u0_CSTATE_c[11];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[4] = (simpleCylinder1_P.u0_A_e[11])*
      simpleCylinder1_X.u0_CSTATE_c[3]
      + (simpleCylinder1_P.u0_A_e[12])*simpleCylinder1_X.u0_CSTATE_c[4]
      + (simpleCylinder1_P.u0_A_e[13])*simpleCylinder1_X.u0_CSTATE_c[5]
      + (simpleCylinder1_P.u0_A_e[14])*simpleCylinder1_X.u0_CSTATE_c[12];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[5] = (simpleCylinder1_P.u0_A_e[15])*
      simpleCylinder1_X.u0_CSTATE_c[4]
      + (simpleCylinder1_P.u0_A_e[16])*simpleCylinder1_X.u0_CSTATE_c[13];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[6] = (simpleCylinder1_P.u0_A_e[17])*
      simpleCylinder1_X.u0_CSTATE_c[5]
      + (simpleCylinder1_P.u0_A_e[18])*simpleCylinder1_X.u0_CSTATE_c[6]
      + (simpleCylinder1_P.u0_A_e[19])*simpleCylinder1_X.u0_CSTATE_c[7]
      + (simpleCylinder1_P.u0_A_e[20])*simpleCylinder1_X.u0_CSTATE_c[14];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[7] = (simpleCylinder1_P.u0_A_e[21])*
      simpleCylinder1_X.u0_CSTATE_c[6]
      + (simpleCylinder1_P.u0_A_e[22])*simpleCylinder1_X.u0_CSTATE_c[15];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[8] = (simpleCylinder1_P.u0_A_e[23])*
      simpleCylinder1_X.u0_CSTATE_c[0];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[9] = (simpleCylinder1_P.u0_A_e[24])*
      simpleCylinder1_X.u0_CSTATE_c[1];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[10] = (simpleCylinder1_P.u0_A_e[25])*
      simpleCylinder1_X.u0_CSTATE_c[2];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[11] = (simpleCylinder1_P.u0_A_e[26])*
      simpleCylinder1_X.u0_CSTATE_c[3];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[12] = (simpleCylinder1_P.u0_A_e[27])*
      simpleCylinder1_X.u0_CSTATE_c[4];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[13] = (simpleCylinder1_P.u0_A_e[28])*
      simpleCylinder1_X.u0_CSTATE_c[5];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[14] = (simpleCylinder1_P.u0_A_e[29])*
      simpleCylinder1_X.u0_CSTATE_c[6];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_c[15] = (simpleCylinder1_P.u0_A_e[30])*
      simpleCylinder1_X.u0_CSTATE_c[7];
  }

  /* StateSpace Block: '<S17>/2-60' */
  {
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[0] = simpleCylinder1_P.u0_B_m*simpleCylinder1_B.random;
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[0] += (simpleCylinder1_P.u0_A_g[0])*
      simpleCylinder1_X.u0_CSTATE_b[0]
      + (simpleCylinder1_P.u0_A_g[1])*simpleCylinder1_X.u0_CSTATE_b[1]
      + (simpleCylinder1_P.u0_A_g[2])*simpleCylinder1_X.u0_CSTATE_b[8];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[1] = (simpleCylinder1_P.u0_A_g[3])*
      simpleCylinder1_X.u0_CSTATE_b[0]
      + (simpleCylinder1_P.u0_A_g[4])*simpleCylinder1_X.u0_CSTATE_b[9];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[2] = (simpleCylinder1_P.u0_A_g[5])*
      simpleCylinder1_X.u0_CSTATE_b[1]
      + (simpleCylinder1_P.u0_A_g[6])*simpleCylinder1_X.u0_CSTATE_b[2]
      + (simpleCylinder1_P.u0_A_g[7])*simpleCylinder1_X.u0_CSTATE_b[3]
      + (simpleCylinder1_P.u0_A_g[8])*simpleCylinder1_X.u0_CSTATE_b[10];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[3] = (simpleCylinder1_P.u0_A_g[9])*
      simpleCylinder1_X.u0_CSTATE_b[2]
      + (simpleCylinder1_P.u0_A_g[10])*simpleCylinder1_X.u0_CSTATE_b[11];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[4] = (simpleCylinder1_P.u0_A_g[11])*
      simpleCylinder1_X.u0_CSTATE_b[3]
      + (simpleCylinder1_P.u0_A_g[12])*simpleCylinder1_X.u0_CSTATE_b[4]
      + (simpleCylinder1_P.u0_A_g[13])*simpleCylinder1_X.u0_CSTATE_b[5]
      + (simpleCylinder1_P.u0_A_g[14])*simpleCylinder1_X.u0_CSTATE_b[12];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[5] = (simpleCylinder1_P.u0_A_g[15])*
      simpleCylinder1_X.u0_CSTATE_b[4]
      + (simpleCylinder1_P.u0_A_g[16])*simpleCylinder1_X.u0_CSTATE_b[13];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[6] = (simpleCylinder1_P.u0_A_g[17])*
      simpleCylinder1_X.u0_CSTATE_b[5]
      + (simpleCylinder1_P.u0_A_g[18])*simpleCylinder1_X.u0_CSTATE_b[6]
      + (simpleCylinder1_P.u0_A_g[19])*simpleCylinder1_X.u0_CSTATE_b[7]
      + (simpleCylinder1_P.u0_A_g[20])*simpleCylinder1_X.u0_CSTATE_b[14];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[7] = (simpleCylinder1_P.u0_A_g[21])*
      simpleCylinder1_X.u0_CSTATE_b[6]
      + (simpleCylinder1_P.u0_A_g[22])*simpleCylinder1_X.u0_CSTATE_b[15];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[8] = (simpleCylinder1_P.u0_A_g[23])*
      simpleCylinder1_X.u0_CSTATE_b[0];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[9] = (simpleCylinder1_P.u0_A_g[24])*
      simpleCylinder1_X.u0_CSTATE_b[1];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[10] = (simpleCylinder1_P.u0_A_g[25])*
      simpleCylinder1_X.u0_CSTATE_b[2];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[11] = (simpleCylinder1_P.u0_A_g[26])*
      simpleCylinder1_X.u0_CSTATE_b[3];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[12] = (simpleCylinder1_P.u0_A_g[27])*
      simpleCylinder1_X.u0_CSTATE_b[4];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[13] = (simpleCylinder1_P.u0_A_g[28])*
      simpleCylinder1_X.u0_CSTATE_b[5];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[14] = (simpleCylinder1_P.u0_A_g[29])*
      simpleCylinder1_X.u0_CSTATE_b[6];
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->u0_CSTATE_b[15] = (simpleCylinder1_P.u0_A_g[30])*
      simpleCylinder1_X.u0_CSTATE_b[7];
  }

  /* Integrator Block: '<Root>/Integrator' */
  {
    ((StateDerivatives_simpleCylinder *) simpleCylinder1_rtM->ModelData.derivs
      )->Integrator_CSTATE = simpleCylinder1_B.Sum6;
  }
}

/* Model initialize function */
void simpleCylinder1_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */
  /* initialize real-time model */
  (void) memset((char_T *)simpleCylinder1_rtM,0,
                sizeof(rtModel_simpleCylinder1));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&simpleCylinder1_rtM->solverInfo,
                          &simpleCylinder1_rtM->Timing.simTimeStep);
    rtsiSetTPtr(&simpleCylinder1_rtM->solverInfo, &rtmGetTPtr
                (simpleCylinder1_rtM));
    rtsiSetStepSizePtr(&simpleCylinder1_rtM->solverInfo,
                       &simpleCylinder1_rtM->Timing.stepSize0);
    rtsiSetdXPtr(&simpleCylinder1_rtM->solverInfo,
                 &simpleCylinder1_rtM->ModelData.derivs);
    rtsiSetContStatesPtr(&simpleCylinder1_rtM->solverInfo,
                         &simpleCylinder1_rtM->ModelData.contStates);
    rtsiSetNumContStatesPtr(&simpleCylinder1_rtM->solverInfo,
      &simpleCylinder1_rtM->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&simpleCylinder1_rtM->solverInfo, (&rtmGetErrorStatus
      (simpleCylinder1_rtM)));
    rtsiSetRTModelPtr(&simpleCylinder1_rtM->solverInfo, simpleCylinder1_rtM);
  }

  rtsiSetSimTimeStep(&simpleCylinder1_rtM->solverInfo, MAJOR_TIME_STEP);
  simpleCylinder1_rtM->ModelData.intgData.y =
    simpleCylinder1_rtM->ModelData.odeY;
  simpleCylinder1_rtM->ModelData.intgData.f[0] =
    simpleCylinder1_rtM->ModelData.odeF[0];
  simpleCylinder1_rtM->ModelData.intgData.f[1] =
    simpleCylinder1_rtM->ModelData.odeF[1];
  simpleCylinder1_rtM->ModelData.intgData.f[2] =
    simpleCylinder1_rtM->ModelData.odeF[2];
  simpleCylinder1_rtM->ModelData.intgData.f[3] =
    simpleCylinder1_rtM->ModelData.odeF[3];
  simpleCylinder1_rtM->ModelData.contStates = ((real_T *) &simpleCylinder1_X);
  rtsiSetSolverData(&simpleCylinder1_rtM->solverInfo, (void *)
                    &simpleCylinder1_rtM->ModelData.intgData);
  rtsiSetSolverName(&simpleCylinder1_rtM->solverInfo,"ode4");
  simpleCylinder1_rtM->solverInfoPtr = (&simpleCylinder1_rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = simpleCylinder1_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    simpleCylinder1_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    simpleCylinder1_rtM->Timing.sampleTimes =
      (&simpleCylinder1_rtM->Timing.sampleTimesArray[0]);
    simpleCylinder1_rtM->Timing.offsetTimes =
      (&simpleCylinder1_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    simpleCylinder1_rtM->Timing.sampleTimes[0] = (0.0);
    simpleCylinder1_rtM->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    simpleCylinder1_rtM->Timing.offsetTimes[0] = (0.0);
    simpleCylinder1_rtM->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(simpleCylinder1_rtM, &simpleCylinder1_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = simpleCylinder1_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    simpleCylinder1_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(simpleCylinder1_rtM, -1);
  simpleCylinder1_rtM->Timing.stepSize0 = 0.001;
  simpleCylinder1_rtM->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    simpleCylinder1_rtM->rtwLogInfo = &rt_DataLoggingInfo;
    rtliSetLogFormat(simpleCylinder1_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(simpleCylinder1_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(simpleCylinder1_rtM->rtwLogInfo, 1);
    rtliSetLogVarNameModifier(simpleCylinder1_rtM->rtwLogInfo, "rt_");
    rtliSetLogT(simpleCylinder1_rtM->rtwLogInfo, "tout");
    rtliSetLogX(simpleCylinder1_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(simpleCylinder1_rtM->rtwLogInfo, "");
    rtliSetSigLog(simpleCylinder1_rtM->rtwLogInfo, "");
    rtliSetLogXSignalInfo(simpleCylinder1_rtM->rtwLogInfo, NULL);
    rtliSetLogXSignalPtrs(simpleCylinder1_rtM->rtwLogInfo, NULL);
    rtliSetLogY(simpleCylinder1_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(simpleCylinder1_rtM->rtwLogInfo, NULL);
    rtliSetLogYSignalPtrs(simpleCylinder1_rtM->rtwLogInfo, NULL);
  }

  /* external mode info */
  simpleCylinder1_rtM->Sizes.checksums[0] = (3265415862U);
  simpleCylinder1_rtM->Sizes.checksums[1] = (1073593435U);
  simpleCylinder1_rtM->Sizes.checksums[2] = (3391688401U);
  simpleCylinder1_rtM->Sizes.checksums[3] = (1356482253U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[14];
    simpleCylinder1_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = (sysRanDType *)
      &simpleCylinder1_DWork.EnabledSubsystem1.EnabledSubsystem1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &simpleCylinder1_DWork.EnabledSubsystem2.EnabledSubsystem1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &simpleCylinder1_DWork.chirp_enable_SubsysRanBC;
    systemRan[11] = (sysRanDType *)&simpleCylinder1_DWork.sine_SubsysRanBC;
    systemRan[12] = (sysRanDType *)&simpleCylinder1_DWork.square_SubsysRanBC;
    systemRan[13] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(&rt_ExtModeInfo,
      &simpleCylinder1_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(&rt_ExtModeInfo, simpleCylinder1_rtM->Sizes.checksums);
    rteiSetTPtr(&rt_ExtModeInfo, rtmGetTPtr(simpleCylinder1_rtM));
  }

  simpleCylinder1_rtM->solverInfoPtr = (&simpleCylinder1_rtM->solverInfo);
  simpleCylinder1_rtM->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&simpleCylinder1_rtM->solverInfo, 0.001);
  rtsiSetSolverMode(&simpleCylinder1_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  simpleCylinder1_rtM->ModelData.blockIO = ((void *) &simpleCylinder1_B);
  (void) memset(((void *) &simpleCylinder1_B),0,
                sizeof(BlockIO_simpleCylinder1));

  {
    int_T i;
    void *pVoidBlockIORegion;
    pVoidBlockIORegion = (void *)(&simpleCylinder1_B.PCI2[0]);
    for (i = 0; i < 267; i++) {
      ((real_T*)pVoidBlockIORegion)[i] = 0.0;
    }

    pVoidBlockIORegion = (void *)(&simpleCylinder1_B.Saturation2);
    for (i = 0; i < 39; i++) {
      ((real_T*)pVoidBlockIORegion)[i] = 0.0;
    }

    ((real_T*)&simpleCylinder1_B.EnabledSubsystem2.In1)[0] = 0.0;
    ((real_T*)&simpleCylinder1_B.EnabledSubsystem1.In1)[0] = 0.0;
  }

  /* parameters */
  simpleCylinder1_rtM->ModelData.defaultParam = ((real_T *) &simpleCylinder1_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &simpleCylinder1_X;
    simpleCylinder1_rtM->ModelData.contStates = (x);
    (void) memset((char_T *)x,0,
                  sizeof(ContinuousStates_simpleCylinder));
  }

  /* states (dwork) */
  simpleCylinder1_rtM->Work.dwork = ((void *) &simpleCylinder1_DWork);
  (void) memset((char_T *) &simpleCylinder1_DWork,0,
                sizeof(D_Work_simpleCylinder1));

  {
    int_T i;
    real_T *dwork_ptr = (real_T *)
      &simpleCylinder1_DWork.Discreteinversefit_DSTATE[0];
    for (i = 0; i < 26; i++) {
      dwork_ptr[i] = 0.0;
    }
  }

  {
    int_T i;
    real_T *dwork_ptr = (real_T *)
      &simpleCylinder1_DWork.Derivative_RWORK.TimeStampA;
    for (i = 0; i < 5; i++) {
      dwork_ptr[i] = 0.0;
    }
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo,0,
                  sizeof(dtInfo));
    simpleCylinder1_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    simpleCylinder1_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  simpleCylinder1_InitializeDataMapInfo(simpleCylinder1_rtM);

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &simpleCylinder1_rtM->NonInlinedSFcns.sfcnInfo;
    simpleCylinder1_rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(simpleCylinder1_rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &simpleCylinder1_rtM->Sizes.numSampTimes);
    rtssSetTPtrPtr(sfcnInfo, &rtmGetTPtr(simpleCylinder1_rtM));
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(simpleCylinder1_rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (simpleCylinder1_rtM));
    rtssSetStepSizePtr(sfcnInfo, &simpleCylinder1_rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(simpleCylinder1_rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &simpleCylinder1_rtM->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &simpleCylinder1_rtM->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &simpleCylinder1_rtM->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &simpleCylinder1_rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &simpleCylinder1_rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &simpleCylinder1_rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &simpleCylinder1_rtM->solverInfoPtr);
  }

  simpleCylinder1_rtM->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)&simpleCylinder1_rtM->NonInlinedSFcns.childSFunctions
                  [0],0,
                  2*sizeof(SimStruct));
    simpleCylinder1_rtM->childSfunctions =
      (&simpleCylinder1_rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    simpleCylinder1_rtM->childSfunctions[0] =
      (&simpleCylinder1_rtM->NonInlinedSFcns.childSFunctions[0]);
    simpleCylinder1_rtM->childSfunctions[1] =
      (&simpleCylinder1_rtM->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: simpleCylinder1/<Root>/PCI-2 (pci1716) */
    {
      SimStruct *rts = simpleCylinder1_rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = simpleCylinder1_rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = simpleCylinder1_rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = simpleCylinder1_rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod,0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset,0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &simpleCylinder1_rtM->NonInlinedSFcns.blkInfo2[0]);
        ssSetRTWSfcnInfo(rts, simpleCylinder1_rtM->sfcnInfo);
      }

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &simpleCylinder1_rtM->NonInlinedSFcns.methods2[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) simpleCylinder1_B.PCI2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-2");
      ssSetPath(rts, "simpleCylinder1/PCI-2");
      ssSetRTModel(rts,simpleCylinder1_rtM);
      ssSetParentSS(rts, NULL);
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&simpleCylinder1_P.PCI2_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&simpleCylinder1_P.PCI2_P2_Size[0]);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &simpleCylinder1_DWork.PCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn0.dWork;
        ssSetSFcnDWork(rts, dWorkRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &simpleCylinder1_DWork.PCI2_IWORK[0]);
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

    /* Level2 S-Function Block: simpleCylinder1/<Root>/DA2 (acl6126) */
    {
      SimStruct *rts = simpleCylinder1_rtM->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod,0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset,0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &simpleCylinder1_rtM->NonInlinedSFcns.blkInfo2[1]);
        ssSetRTWSfcnInfo(rts, simpleCylinder1_rtM->sfcnInfo);
      }

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &simpleCylinder1_rtM->NonInlinedSFcns.methods2[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &simpleCylinder1_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &simpleCylinder1_B.gain3;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &simpleCylinder1_RGND;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = &simpleCylinder1_RGND;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &simpleCylinder1_RGND;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = &simpleCylinder1_RGND;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "DA2");
      ssSetPath(rts, "simpleCylinder1/DA2");
      ssSetRTModel(rts,simpleCylinder1_rtM);
      ssSetParentSS(rts, NULL);
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &simpleCylinder1_rtM->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)&simpleCylinder1_P.DA2_P1_Size[0]);
        ssSetSFcnParam(rts, 1, (mxArray*)&simpleCylinder1_P.DA2_P2_Size[0]);
        ssSetSFcnParam(rts, 2, (mxArray*)&simpleCylinder1_P.DA2_P3_Size[0]);
      }

      /* registration */
      acl6126(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 0);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 0);
      _ssSetInputPortConnected(rts, 3, 0);
      _ssSetInputPortConnected(rts, 4, 0);
      _ssSetInputPortConnected(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
    }
  }
}

/* Model terminate function */
void simpleCylinder1_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
  {
    SimStruct *rts = simpleCylinder1_rtM->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/DA2' (acl6126) */
  {
    SimStruct *rts = simpleCylinder1_rtM->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* External mode */
  rtExtModeShutdown(2);
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  simpleCylinder1_output(tid);
}

void MdlUpdate(int_T tid)
{
  simpleCylinder1_update(tid);
}

void MdlInitializeSizes(void)
{
  simpleCylinder1_rtM->Sizes.numContStates = (81);/* Number of continuous states */
  simpleCylinder1_rtM->Sizes.numY = (0);/* Number of model outputs */
  simpleCylinder1_rtM->Sizes.numU = (0);/* Number of model inputs */
  simpleCylinder1_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  simpleCylinder1_rtM->Sizes.numSampTimes = (2);/* Number of sample times */
  simpleCylinder1_rtM->Sizes.numBlocks = (209);/* Number of blocks */
  simpleCylinder1_rtM->Sizes.numBlockIO = (155);/* Number of block outputs */
  simpleCylinder1_rtM->Sizes.numBlockPrms = (2332);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  {
    int32_T i;
    for (i = 0; i < 5; i++) {
      /* InitializeConditions for Memory: '<S15>/Memory' */
      simpleCylinder1_DWork.Memory_PreviousInput[i] =
        simpleCylinder1_P.Memory_X0;
    }
  }

  /* InitializeConditions for RateLimiter: '<S15>/Rate Limiter' */
  simpleCylinder1_DWork.LastMajorTime = rtInf;

  /* InitializeConditions for Memory: '<S6>/Memory' */
  simpleCylinder1_DWork.Memory_PreviousInput_m = simpleCylinder1_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S6>/Memory1' */
  simpleCylinder1_DWork.Memory1_PreviousInput = simpleCylinder1_P.Memory1_X0;

  /* Initialize code for chart: '<S6>/Control Logic' */
  simpleCylinder1_DWork.ControlLogic.is_active_ready_mode = 0U;
  simpleCylinder1_DWork.ControlLogic.is_ready_mode = 0U;
  simpleCylinder1_DWork.ControlLogic.is_active_run_mode = 0U;
  simpleCylinder1_DWork.ControlLogic.is_run_mode = 0U;
  simpleCylinder1_DWork.ControlLogic.is_active_c1_simpleCylinder1 = 0U;
  simpleCylinder1_B.start = 0.0;
  simpleCylinder1_B.start_sts = 0.0;
  simpleCylinder1_B.ready_sts = 0.0;
  simpleCylinder1_B.ready = 0.0;

  /* InitializeConditions for RateLimiter: '<S6>/Start Limiter' */
  simpleCylinder1_DWork.LastMajorTime_p = rtInf;

  /* InitializeConditions for RateLimiter: '<S6>/Ready Limiter' */
  simpleCylinder1_DWork.LastMajorTime_e = rtInf;

  /* StateSpace Block: '<S17>/2-5' */
  {
    int_T i1;
    real_T *xc = &simpleCylinder1_X.u_CSTATE[0];
    for (i1=0; i1 < 16; i1++) {
      xc[i1] = simpleCylinder1_P.u_X0;
    }
  }

  /* StateSpace Block: '<S17>/2-10' */
  {
    int_T i1;
    real_T *xc = &simpleCylinder1_X.u0_CSTATE[0];
    for (i1=0; i1 < 16; i1++) {
      xc[i1] = simpleCylinder1_P.u0_X0;
    }
  }

  /* StateSpace Block: '<S17>/2-20' */
  {
    int_T i1;
    real_T *xc = &simpleCylinder1_X.u0_CSTATE_d[0];
    for (i1=0; i1 < 16; i1++) {
      xc[i1] = simpleCylinder1_P.u0_X0_d;
    }
  }

  /* StateSpace Block: '<S17>/2-30' */
  {
    int_T i1;
    real_T *xc = &simpleCylinder1_X.u0_CSTATE_c[0];
    for (i1=0; i1 < 16; i1++) {
      xc[i1] = simpleCylinder1_P.u0_X0_n;
    }
  }

  /* StateSpace Block: '<S17>/2-60' */
  {
    int_T i1;
    real_T *xc = &simpleCylinder1_X.u0_CSTATE_b[0];
    for (i1=0; i1 < 16; i1++) {
      xc[i1] = simpleCylinder1_P.u0_X0_m;
    }
  }

  /* Integrator Block: '<Root>/Integrator' */
  simpleCylinder1_X.Integrator_CSTATE = simpleCylinder1_P.Integrator_IC;

  /* Derivative Block: '<Root>/Derivative' */
  simpleCylinder1_DWork.Derivative_RWORK.TimeStampA = rtInf;
  simpleCylinder1_DWork.Derivative_RWORK.TimeStampB = rtInf;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
  simpleCylinder1_DWork.UnitDelay_DSTATE = simpleCylinder1_P.UnitDelay_X0;
}

void MdlStart(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-2' (pci1716) */
  {
    SimStruct *rts = simpleCylinder1_rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != NULL)
      return;
  }

  /* Width Block: '<S15>/Width' */
  simpleCylinder1_B.Width = (real_T)5;
  simpleCylinder1_DWork.sine_MODE = SUBSYS_DISABLED;

  /* Start for enable system: '<S7>/sine' */

  /* Initial conditions for enable system: '<S7>/sine' */

  /* InitializeConditions for Memory: '<S18>/Memory' */
  simpleCylinder1_DWork.Memory_PreviousInput_l = simpleCylinder1_P.Memory_X0_j;
  simpleCylinder1_DWork.square_MODE = SUBSYS_DISABLED;

  /* Start for enable SubSystem: '<S7>/chirp_enable' */
  simpleCylinder1_DWork.chirp_enable_MODE = SUBSYS_DISABLED;

  /* end of Start for SubSystem: '<S7>/chirp_enable' */

  /* Level2 S-Function Block: '<Root>/DA2' (acl6126) */
  {
    SimStruct *rts = simpleCylinder1_rtM->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != NULL)
      return;
  }

  /* S-Function Block: <S10>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,1)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s1"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s2"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s3"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s4"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s5"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s6"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s7"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s8"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s9"));
        rl32eAddSignal(5, rl32eGetSignalNo("DataSentHost/Encoded_data/s10"));
        rl32eSetScope(5, 4, 1000);
        rl32eSetScope(5, 40, 0);
        rl32eSetScope(5, 7, 1);
        rl32eSetScope(5, 0, 3);
        rl32eSetScope(5, 3, rl32eGetSignalNo("DataSentHost/Encoded_data/s1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 10, -1);
        xpceScopeAcqOK(5, &simpleCylinder1_DWork.SFunction_IWORK.AcquireOK);
      }
    }
  }

  /* S-Function Block: <S11>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,1)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s1"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s2"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s3"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s4"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s5"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s6"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s7"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s8"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s9"));
        rl32eAddSignal(4, rl32eGetSignalNo("DataSentHost/Encoded_data/s10"));
        rl32eSetScope(4, 4, 1000);
        rl32eSetScope(4, 40, 0);
        rl32eSetScope(4, 7, 1);
        rl32eSetScope(4, 0, 3);
        rl32eSetScope(4, 3, rl32eGetSignalNo("DataSentHost/Encoded_data/s1"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 10, -1);
        xpceScopeAcqOK(4, &simpleCylinder1_DWork.SFunction_IWORK_b.AcquireOK);
      }
    }
  }

  /* UniformRandomNumber Block: '<S7>/random' */
  {
    uint32_T *RandSeed = (uint32_T *)
      &simpleCylinder1_DWork.random_IWORK.RandSeed;
    uint32_T r, t;
    *RandSeed = (uint32_T)simpleCylinder1_P.random_Seed;
    r = *RandSeed >> 16;
    t = *RandSeed & RT_BIT16;
    *RandSeed = ((*RandSeed - (r << 16) - t) << 16) + t + r;
    if (*RandSeed < 1) {
      *RandSeed = SEED0;
    }

    if (*RandSeed > MAXSEED) {
      *RandSeed = MAXSEED;
    }

    simpleCylinder1_DWork.random_RWORK.NextOutput
      = rt_Urand(RandSeed++) * (simpleCylinder1_P.random_Max -
      simpleCylinder1_P.random_Min) + simpleCylinder1_P.random_Min;
  }

  simpleCylinder1_DWork.EnabledSubsystem1.EnabledSubsystem1_SubsysRanBC =
    SUBSYS_RAN_BC_DISABLE;
  simpleCylinder1_DWork.EnabledSubsystem2.EnabledSubsystem1_SubsysRanBC =
    SUBSYS_RAN_BC_DISABLE;
  simpleCylinder1_DWork.chirp_enable_SubsysRanBC = SUBSYS_RAN_BC_DISABLE;
  simpleCylinder1_DWork.sine_SubsysRanBC = SUBSYS_RAN_BC_DISABLE;
  simpleCylinder1_DWork.square_SubsysRanBC = SUBSYS_RAN_BC_DISABLE;

  /* user code (Start function Trailer) */
  rl32eSetScope(5, 8, 5);
  rl32eSetScope(4, 8, 4);
  MdlInitialize();
}

rtModel_simpleCylinder1 *simpleCylinder1(void)
{
  simpleCylinder1_initialize(1);
  return simpleCylinder1_rtM;
}

void MdlTerminate(void)
{
  simpleCylinder1_terminate();
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
