/*
 * ceshi20210224_17.c
 *
 * Code generation for model "ceshi20210224_17".
 *
 * Model version              : 1.152
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 12 20:04:50 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "ceshi20210224_17_capi.h"
#include "ceshi20210224_17.h"
#include "ceshi20210224_17_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define ceshi20210224_17_CALL_EVENT    (-1)
#define ceshi20210224_17_IN_on1        ((uint8_T)1U)
#define ceshi20210224_17_IN_on2        ((uint8_T)2U)
#define ceshi20210224_17_IN_on3        ((uint8_T)3U)
#define ceshi20210224_17_IN_on4        ((uint8_T)4U)
#define ceshi20210224_17_IN_on5        ((uint8_T)5U)
#define ceshi2021022_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<Root>/Chart2' */
#define ceshi20210224_17_IN_on4_f      ((uint8_T)3U)
#define ceshi20210224_17_IN_on5_o      ((uint8_T)4U)

const real_T ceshi20210224_17_RGND = 0.0;/* real_T ground */

/* Block signals (auto storage) */
B_ceshi20210224_17_T ceshi20210224_17_B;

/* Continuous states */
X_ceshi20210224_17_T ceshi20210224_17_X;

/* Block states (auto storage) */
DW_ceshi20210224_17_T ceshi20210224_17_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ceshi20210224_17_T ceshi20210224_17_PrevZCX;

/* Real-time model */
RT_MODEL_ceshi20210224_17_T ceshi20210224_17_M_;
RT_MODEL_ceshi20210224_17_T *const ceshi20210224_17_M = &ceshi20210224_17_M_;

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

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
  int_T nXc = 9;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  ceshi20210224_17_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  ceshi20210224_17_output();
  ceshi20210224_17_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  ceshi20210224_17_output();
  ceshi20210224_17_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  ceshi20210224_17_output();
  ceshi20210224_17_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ceshi20210224_17_Subsystem_Init(B_Subsystem_ceshi20210224_17_T *localB,
  P_Subsystem_ceshi20210224_17_T *localP, X_Subsystem_ceshi20210224_17_T *localX)
{
  /* InitializeConditions for Integrator: '<S11>/Integrator' */
  localX->Integrator_CSTATE = localP->Integrator_IC;

  /* SystemInitialize for Outport: '<S11>/Out1' */
  localB->Integrator = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ceshi20210224_Subsystem_Disable(DW_Subsystem_ceshi20210224_17_T *localDW)
{
  localDW->Subsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ceshi20210224_1_Subsystem_Start(DW_Subsystem_ceshi20210224_17_T *localDW)
{
  localDW->Subsystem_MODE = false;
}

/*
 * Outputs for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ceshi20210224_17_Subsystem(RT_MODEL_ceshi20210224_17_T * const
  ceshi20210224_17_M, real_T rtu_Enable, real_T rtu_In2,
  B_Subsystem_ceshi20210224_17_T *localB, DW_Subsystem_ceshi20210224_17_T
  *localDW, P_Subsystem_ceshi20210224_17_T *localP,
  X_Subsystem_ceshi20210224_17_T *localX, ZCE_Subsystem_ceshi20210224_1_T
  *localZCE)
{
  boolean_T zcEvent;
  ZCEventType zcEvent_0;

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M) && rtmIsMajorTimeStep
      (ceshi20210224_17_M)) {
    if (rtu_Enable > 0.0) {
      if (!localDW->Subsystem_MODE) {
        localDW->Subsystem_MODE = true;
      }
    } else {
      if (localDW->Subsystem_MODE) {
        ceshi20210224_Subsystem_Disable(localDW);
      }
    }
  }

  if (localDW->Subsystem_MODE) {
    /* Integrator: '<S11>/Integrator' */
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      zcEvent_0 = rt_ZCFcn(FALLING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE,
                           (rtu_In2));
      zcEvent = (zcEvent_0 != NO_ZCEVENT);

      /* evaluate zero-crossings */
      if (zcEvent) {
        localX->Integrator_CSTATE = localP->Integrator_IC;
      }
    }

    localB->Integrator = localX->Integrator_CSTATE;

    /* End of Integrator: '<S11>/Integrator' */
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      srUpdateBC(localDW->Subsystem_SubsysRanBC);
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
}

/*
 * Derivatives for enable system:
 *    '<Root>/Subsystem'
 *    '<Root>/Subsystem1'
 */
void ceshi20210224_1_Subsystem_Deriv(real_T rtu_In1,
  DW_Subsystem_ceshi20210224_17_T *localDW, XDot_Subsystem_ceshi20210224__T
  *localXdot)
{
  if (localDW->Subsystem_MODE) {
    /* Derivatives for Integrator: '<S11>/Integrator' */
    localXdot->Integrator_CSTATE = rtu_In1;
  } else {
    localXdot->Integrator_CSTATE = 0.0;
  }
}

/* Model output function */
void ceshi20210224_17_output(void)
{
  real_T currentTime;
  real_T deltaT;
  real_T *lastU;
  boolean_T zcEvent;
  int32_T i;
  real_T u2;
  boolean_T guard1 = false;
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* set solver stop time */
    if (!(ceshi20210224_17_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&ceshi20210224_17_M->solverInfo,
                            ((ceshi20210224_17_M->Timing.clockTickH0 + 1) *
        ceshi20210224_17_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&ceshi20210224_17_M->solverInfo,
                            ((ceshi20210224_17_M->Timing.clockTick0 + 1) *
        ceshi20210224_17_M->Timing.stepSize0 +
        ceshi20210224_17_M->Timing.clockTickH0 *
        ceshi20210224_17_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ceshi20210224_17_M)) {
    ceshi20210224_17_M->Timing.t[0] = rtsiGetT(&ceshi20210224_17_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(ceshi20210224_17_DW.Subsystem_d.Subsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ceshi20210224_17_DW.Subsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ceshi20210224_17_DW.Subsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ceshi20210224_17_DW.Subsystem4_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ceshi20210224_17_DW.Subsystem_SubsysRanBC);
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Constant: '<Root>/c' */
    ceshi20210224_17_B.c = ceshi20210224_17_P.c_Value;

    /* Constant: '<Root>/锁定' */
    ceshi20210224_17_B.u = ceshi20210224_17_P._Value;

    /* Constant: '<Root>/解锁' */
    ceshi20210224_17_B.u_g = ceshi20210224_17_P._Value_k;
  }

  /* S-Function (canac2objreceivex): '<S21>/tonggai1808Receive' */
  {
    /*------------ S-Function Block: <S21>/tonggai1808Receive ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 0, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&ceshi20210224_17_B.tonggai1808Receive), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S21>/CAN bit-unpacking 2 */
  {
    const uint32_T *y = (const uint32_T *)&ceshi20210224_17_B.tonggai1808Receive;

    /* Output Port 1 */
    ceshi20210224_17_B.CANbitunpacking2_o1 = (boolean_T)
      (y[0] & 0x1);

    /* Output Port 2 */
    ceshi20210224_17_B.CANbitunpacking2_o2 = (boolean_T)
      ((y[0] & (0x1 << 1)) >> 1);

    /* Output Port 3 */
    ceshi20210224_17_B.CANbitunpacking2_o3 = (boolean_T)
      ((y[0] & (0x1 << 2)) >> 2);

    /* Output Port 4 */
    ceshi20210224_17_B.CANbitunpacking2_o4 = (boolean_T)
      ((y[0] & (0x1 << 3)) >> 3);

    /* Output Port 5 */
    ceshi20210224_17_B.CANbitunpacking2_o5 = (boolean_T)
      ((y[0] & (0x1 << 4)) >> 4);

    /* Output Port 6 */
    ceshi20210224_17_B.CANbitunpacking2_o6 = (boolean_T)
      ((y[0] & (0x1 << 5)) >> 5);

    /* Output Port 7 */
    ceshi20210224_17_B.CANbitunpacking2_o7 = (boolean_T)
      ((y[0] & (0x1 << 6)) >> 6);

    /* Output Port 8 */
    ceshi20210224_17_B.CANbitunpacking2_o8 = (boolean_T)
      ((y[0] & (0x1 << 7)) >> 7);

    /* Output Port 9 */
    ceshi20210224_17_B.CANbitunpacking2_o9 = (boolean_T)
      ((y[0] & (0x1 << 8)) >> 8);

    /* Output Port 10 */
    ceshi20210224_17_B.CANbitunpacking2_o10 = (boolean_T)
      ((y[0] & (0x1 << 9)) >> 9);

    /* Output Port 11 */
    ceshi20210224_17_B.CANbitunpacking2_o11 = (boolean_T)
      ((y[0] & (0x1 << 10)) >> 10);

    /* Output Port 12 */
    ceshi20210224_17_B.CANbitunpacking2_o12 = (boolean_T)
      ((y[0] & (0x1 << 11)) >> 11);

    /* Output Port 13 */
    ceshi20210224_17_B.CANbitunpacking2_o13 = (boolean_T)
      ((y[0] & (0x1 << 12)) >> 12);

    /* Output Port 14 */
    ceshi20210224_17_B.CANbitunpacking2_o14 = (boolean_T)
      ((y[0] & (0x1 << 13)) >> 13);

    /* Output Port 15 */
    ceshi20210224_17_B.CANbitunpacking2_o15 = (boolean_T)
      ((y[0] & (0x1 << 14)) >> 14);

    /* Output Port 16 */
    ceshi20210224_17_B.CANbitunpacking2_o16 = (boolean_T)
      ((y[0] & (0x1 << 15)) >> 15);
  }

  /* Logic: '<S21>/Logical Operator1' */
  ceshi20210224_17_B.LogicalOperator1[0] =
    !ceshi20210224_17_B.CANbitunpacking2_o1;
  ceshi20210224_17_B.LogicalOperator1[1] =
    !ceshi20210224_17_B.CANbitunpacking2_o2;
  ceshi20210224_17_B.LogicalOperator1[2] =
    !ceshi20210224_17_B.CANbitunpacking2_o3;
  ceshi20210224_17_B.LogicalOperator1[3] =
    !ceshi20210224_17_B.CANbitunpacking2_o4;
  ceshi20210224_17_B.LogicalOperator1[4] =
    !ceshi20210224_17_B.CANbitunpacking2_o5;
  ceshi20210224_17_B.LogicalOperator1[5] =
    !ceshi20210224_17_B.CANbitunpacking2_o6;
  ceshi20210224_17_B.LogicalOperator1[6] =
    !ceshi20210224_17_B.CANbitunpacking2_o7;
  ceshi20210224_17_B.LogicalOperator1[7] =
    !ceshi20210224_17_B.CANbitunpacking2_o8;
  ceshi20210224_17_B.LogicalOperator1[8] =
    !ceshi20210224_17_B.CANbitunpacking2_o9;
  ceshi20210224_17_B.LogicalOperator1[9] =
    !ceshi20210224_17_B.CANbitunpacking2_o10;
  ceshi20210224_17_B.LogicalOperator1[10] =
    !ceshi20210224_17_B.CANbitunpacking2_o11;
  ceshi20210224_17_B.LogicalOperator1[11] =
    !ceshi20210224_17_B.CANbitunpacking2_o12;
  ceshi20210224_17_B.LogicalOperator1[12] =
    !ceshi20210224_17_B.CANbitunpacking2_o13;
  ceshi20210224_17_B.LogicalOperator1[13] =
    !ceshi20210224_17_B.CANbitunpacking2_o14;
  ceshi20210224_17_B.LogicalOperator1[14] =
    !ceshi20210224_17_B.CANbitunpacking2_o15;
  ceshi20210224_17_B.LogicalOperator1[15] =
    !ceshi20210224_17_B.CANbitunpacking2_o16;

  /* Step: '<S21>/Step' */
  currentTime = ceshi20210224_17_M->Timing.t[0];
  if (currentTime < ceshi20210224_17_P.Step_Time) {
    ceshi20210224_17_B.Step = ceshi20210224_17_P.Step_Y0;
  } else {
    ceshi20210224_17_B.Step = ceshi20210224_17_P.Step_YFinal;
  }

  /* End of Step: '<S21>/Step' */

  /* Product: '<S21>/Product' */
  for (i = 0; i < 16; i++) {
    ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[i] = (real_T)
      ceshi20210224_17_B.LogicalOperator1[i] * ceshi20210224_17_B.Step;
  }

  /* End of Product: '<S21>/Product' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Constant: '<Root>/旋松' */
    ceshi20210224_17_B.u_g4 = ceshi20210224_17_P._Value_f;

    /* Constant: '<Root>/预旋松' */
    ceshi20210224_17_B.u_h = ceshi20210224_17_P._Value_f1;
  }

  /* Switch: '<Root>/Switch5' */
  if (ceshi20210224_17_B.u_g4 > ceshi20210224_17_P.Switch5_Threshold) {
    /* Logic: '<Root>/Logical Operator3' */
    ceshi20210224_17_B.LogicalOperator3 =
      !(ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[10] != 0.0);

    /* Product: '<Root>/Product3' incorporates:
     *  Constant: '<Root>/constant1'
     */
    ceshi20210224_17_B.Product3 = ceshi20210224_17_P.constant1_Value * (real_T)
      ceshi20210224_17_B.LogicalOperator3;
    ceshi20210224_17_B.Switch5 = ceshi20210224_17_B.Product3;
  } else {
    /* Logic: '<Root>/Logical Operator2' */
    ceshi20210224_17_B.LogicalOperator2_m =
      !(ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[11] != 0.0);

    /* Product: '<Root>/Product2' */
    ceshi20210224_17_B.Product2 = ceshi20210224_17_B.u_h * (real_T)
      ceshi20210224_17_B.LogicalOperator2_m;
    ceshi20210224_17_B.Switch5 = ceshi20210224_17_B.Product2;
  }

  /* End of Switch: '<Root>/Switch5' */

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/旋松1'
   */
  if (ceshi20210224_17_P.ManualSwitch_CurrentSetting == 1) {
    ceshi20210224_17_B.ManualSwitch = ceshi20210224_17_B.Switch5;
  } else {
    ceshi20210224_17_B.ManualSwitch = ceshi20210224_17_P.u_Value;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Constant: '<Root>/旋紧' */
    ceshi20210224_17_B.u_gp = ceshi20210224_17_P._Value_n;
  }

  /* Level2 S-Function Block: '<Root>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* S-Function (canac2objreceivex): '<S21>/yalichuanganqi3402' */
    {
      /*------------ S-Function Block: <S21>/yalichuanganqi3402 ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        unsigned long time;
        uint8_T p_data[8];
        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data_mbx( 1, 3, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&ceshi20210224_17_B.yalichuanganqi3402_o1), p_data, 8);
        }

        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data_mbx( 1, 6, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&ceshi20210224_17_B.yalichuanganqi3402_o2), p_data, 8);
        }
      }
    }

    /* Bit Unpacking: <S21>/CAN bit-unpacking 7 */
    {
      const uint32_T *y = (const uint32_T *)
        &ceshi20210224_17_B.yalichuanganqi3402_o1;

      /* Output Port 1 */
      ceshi20210224_17_B.CANbitunpacking7_o1 = (uint16_T)
        (y[0] & 0xffff);

      /* Output Port 2 */
      ceshi20210224_17_B.CANbitunpacking7_o2 = (uint16_T)
        ((y[0] & (0xffff << 16)) >> 16);

      /* Output Port 3 */
      ceshi20210224_17_B.CANbitunpacking7_o3 = (uint16_T)
        (y[1] & 0xffff);

      /* Output Port 4 */
      ceshi20210224_17_B.CANbitunpacking7_o4 = (uint16_T)
        ((y[1] & (0xffff << 16)) >> 16);
    }

    /* DataTypeConversion: '<S21>/Data Type Conversion49' */
    ceshi20210224_17_B.DataTypeConversion49 =
      ceshi20210224_17_B.CANbitunpacking7_o1;

    /* Lookup_n-D: '<S21>/1-D Lookup Table1' */
    ceshi20210224_17_B.uDLookupTable1 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion49,
       ceshi20210224_17_P.uDLookupTable1_bp01Data,
       ceshi20210224_17_P.uDLookupTable1_tableData, 1U);

    /* DataTypeConversion: '<S21>/Data Type Conversion51' */
    ceshi20210224_17_B.DataTypeConversion51 =
      ceshi20210224_17_B.CANbitunpacking7_o3;

    /* Lookup_n-D: '<S21>/1-D Lookup Table3' */
    ceshi20210224_17_B.uDLookupTable3 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion51,
       ceshi20210224_17_P.uDLookupTable3_bp01Data,
       ceshi20210224_17_P.uDLookupTable3_tableData, 1U);

    /* Bit Unpacking: <S21>/CAN bit-unpacking 6 */
    {
      const uint32_T *y = (const uint32_T *)
        &ceshi20210224_17_B.yalichuanganqi3402_o2;

      /* Output Port 1 */
      ceshi20210224_17_B.CANbitunpacking6_o1 = (uint16_T)
        (y[0] & 0xffff);

      /* Output Port 2 */
      ceshi20210224_17_B.CANbitunpacking6_o2 = (uint16_T)
        ((y[0] & (0xffff << 16)) >> 16);
    }

    /* DataTypeConversion: '<S21>/Data Type Conversion53' */
    ceshi20210224_17_B.DataTypeConversion53 =
      ceshi20210224_17_B.CANbitunpacking6_o1;

    /* Lookup_n-D: '<S21>/1-D Lookup Table5' */
    ceshi20210224_17_B.uDLookupTable5 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion53,
       ceshi20210224_17_P.uDLookupTable5_bp01Data,
       ceshi20210224_17_P.uDLookupTable5_tableData, 1U);

    /* S-Function (canac2objreceivex): '<S21>/liuliangji_fuqiuyeweiji3402' */
    {
      /*------------ S-Function Block: <S21>/liuliangji_fuqiuyeweiji3402 ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        unsigned long time;
        uint8_T p_data[8];
        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data_mbx( 1, 4, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&ceshi20210224_17_B.liuliangji), p_data, 8);
        }

        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data_mbx( 1, 7, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&ceshi20210224_17_B.liuliangji_fuqiuyeweiji3402_o2), p_data,
                 8);
        }
      }
    }

    /* Bit Unpacking: <S21>/CAN bit-unpacking 5 */
    {
      const uint32_T *y = (const uint32_T *)&ceshi20210224_17_B.liuliangji;

      /* Output Port 1 */
      ceshi20210224_17_B.CANbitunpacking5_o1 = (uint16_T)
        (y[0] & 0xffff);

      /* Output Port 2 */
      ceshi20210224_17_B.CANbitunpacking5_o2 = (uint16_T)
        ((y[0] & (0xffff << 16)) >> 16);

      /* Output Port 3 */
      ceshi20210224_17_B.CANbitunpacking5_o3 = (uint16_T)
        (y[1] & 0xffff);
    }

    /* Constant: '<Root>/启停' */
    ceshi20210224_17_B.u_c = ceshi20210224_17_P._Value_n5;

    /* Constant: '<Root>/开1关0' */
    ceshi20210224_17_B.u0 = ceshi20210224_17_P.u0_Value;

    /* Constant: '<Root>/阀开口' */
    ceshi20210224_17_B.u_i = ceshi20210224_17_P._Value_l;
  }

  /* S-Function (canac2objreceivex): '<S21>/kaiguangaiweiyi3402' */
  {
    /*------------ S-Function Block: <S21>/kaiguangaiweiyi3402 ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 2, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&ceshi20210224_17_B.kaiguangaiweiyi3402), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S21>/CAN bit-unpacking 4 */
  {
    const uint32_T *y = (const uint32_T *)
      &ceshi20210224_17_B.kaiguangaiweiyi3402;

    /* Output Port 1 */
    ceshi20210224_17_B.CANbitunpacking4_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    ceshi20210224_17_B.CANbitunpacking4_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  ceshi20210224_17_B.DataTypeConversion = ceshi20210224_17_B.CANbitunpacking4_o1;

  /* Lookup: '<Root>/right1' */
  ceshi20210224_17_B.right1 = rt_Lookup(ceshi20210224_17_P.right1_XData, 2,
    ceshi20210224_17_B.DataTypeConversion, ceshi20210224_17_P.right1_YData);

  /* Switch: '<Root>/Switch6' incorporates:
   *  Constant: '<Root>/阀开口3'
   *  Constant: '<Root>/阀开口4'
   */
  if (ceshi20210224_17_B.right1 > ceshi20210224_17_P.Switch6_Threshold) {
    ceshi20210224_17_B.Switch6 = ceshi20210224_17_P.u_Value_p;
  } else {
    ceshi20210224_17_B.Switch6 = ceshi20210224_17_P.u_Value_l;
  }

  /* End of Switch: '<Root>/Switch6' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Chart: '<Root>/Chart' */
    /* Gateway: Chart */
    ceshi20210224_17_DW.sfEvent_c = ceshi20210224_17_CALL_EVENT;
    if (ceshi20210224_17_DW.temporalCounter_i1 < 63U) {
      ceshi20210224_17_DW.temporalCounter_i1++;
    }

    /* During: Chart */
    if (ceshi20210224_17_DW.is_active_c3_ceshi20210224_17 == 0U) {
      /* Entry: Chart */
      ceshi20210224_17_DW.is_active_c3_ceshi20210224_17 = 1U;

      /* Entry Internal: Chart */
      /* Transition: '<S1>:2' */
      ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi20210224_17_IN_on1;

      /* Entry 'on1': '<S1>:1' */
      ceshi20210224_17_B.fa = ceshi20210224_17_B.Switch6;
      ceshi20210224_17_B.kaigaixinhao = 0.0;
      ceshi20210224_17_B.guangaixinhao = 0.0;
    } else {
      switch (ceshi20210224_17_DW.is_c3_ceshi20210224_17) {
       case ceshi20210224_17_IN_on1:
        /* During 'on1': '<S1>:1' */
        zcEvent = ((ceshi20210224_17_B.u0 == 0.0) && (ceshi20210224_17_B.u_c ==
                    1.0) && (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga
                             [6] == 0.0));
        if (zcEvent) {
          /* Transition: '<S1>:11' */
          ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi20210224_17_IN_on3;
          ceshi20210224_17_DW.temporalCounter_i1 = 0U;

          /* Entry 'on3': '<S1>:4' */
          ceshi20210224_17_B.fa = 0.0 - ceshi20210224_17_B.u_i;
        } else {
          zcEvent = ((ceshi20210224_17_B.u0 == 1.0) && (ceshi20210224_17_B.u_c ==
                      1.0) &&
                     (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[4] ==
                      0.0));
          if (zcEvent) {
            /* Transition: '<S1>:5' */
            ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi20210224_17_IN_on2;
            ceshi20210224_17_DW.temporalCounter_i1 = 0U;

            /* Entry 'on2': '<S1>:3' */
            ceshi20210224_17_B.fa = ceshi20210224_17_B.u_i;
          }
        }
        break;

       case ceshi20210224_17_IN_on2:
        /* During 'on2': '<S1>:3' */
        if (ceshi20210224_17_DW.temporalCounter_i1 >= 50) {
          /* Transition: '<S1>:24' */
          ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi20210224_17_IN_on4;

          /* Entry 'on4': '<S1>:23' */
          ceshi20210224_17_B.kaigaixinhao = 1.0;
        }
        break;

       case ceshi20210224_17_IN_on3:
        /* During 'on3': '<S1>:4' */
        if (ceshi20210224_17_DW.temporalCounter_i1 >= 50) {
          /* Transition: '<S1>:26' */
          ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi20210224_17_IN_on5;

          /* Entry 'on5': '<S1>:25' */
          ceshi20210224_17_B.guangaixinhao = 1.0;
        }
        break;

       case ceshi20210224_17_IN_on4:
        /* During 'on4': '<S1>:23' */
        zcEvent = ((ceshi20210224_17_B.u_c == 0.0) ||
                   (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[4] == 1.0));
        if (zcEvent) {
          /* Transition: '<S1>:12' */
          ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S1>:1' */
          ceshi20210224_17_B.fa = ceshi20210224_17_B.Switch6;
          ceshi20210224_17_B.kaigaixinhao = 0.0;
          ceshi20210224_17_B.guangaixinhao = 0.0;
        }
        break;

       default:
        /* During 'on5': '<S1>:25' */
        zcEvent = ((ceshi20210224_17_B.u_c == 0.0) ||
                   (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[6] == 1.0));
        if (zcEvent) {
          /* Transition: '<S1>:13' */
          ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S1>:1' */
          ceshi20210224_17_B.fa = ceshi20210224_17_B.Switch6;
          ceshi20210224_17_B.kaigaixinhao = 0.0;
          ceshi20210224_17_B.guangaixinhao = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/Chart' */

    /* S-Function (canac2objreceivex): '<S21>/tonggai3402Receive' */
    {
      /*------------ S-Function Block: <S21>/tonggai3402Receive ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        unsigned long time;
        uint8_T p_data[8];
        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data_mbx( 1, 1, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&ceshi20210224_17_B.tonggai3402Receive_o1), p_data, 8);
        }

        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data_mbx( 1, 5, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&ceshi20210224_17_B.tonggai3402Receive_o2), p_data, 8);
        }
      }
    }

    /* Bit Unpacking: <S21>/CAN bit-unpacking 3 */
    {
      const uint32_T *y = (const uint32_T *)
        &ceshi20210224_17_B.tonggai3402Receive_o1;

      /* Output Port 1 */
      ceshi20210224_17_B.CANbitunpacking3_o1 = (uint16_T)
        (y[0] & 0xffff);

      /* Output Port 2 */
      ceshi20210224_17_B.CANbitunpacking3_o2 = (uint16_T)
        ((y[0] & (0xffff << 16)) >> 16);

      /* Output Port 3 */
      ceshi20210224_17_B.CANbitunpacking3_o3 = (uint16_T)
        (y[1] & 0xffff);

      /* Output Port 4 */
      ceshi20210224_17_B.CANbitunpacking3_o4 = (uint16_T)
        ((y[1] & (0xffff << 16)) >> 16);
    }

    /* DataTypeConversion: '<S21>/Data Type Conversion56' */
    ceshi20210224_17_B.DataTypeConversion56 =
      ceshi20210224_17_B.CANbitunpacking3_o1;

    /* Lookup_n-D: '<S21>/1-D Lookup Table8' */
    ceshi20210224_17_B.uDLookupTable8 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion56,
       ceshi20210224_17_P.uDLookupTable8_bp01Data,
       ceshi20210224_17_P.uDLookupTable8_tableData, 1U);

    /* DataTypeConversion: '<S21>/Data Type Conversion55' */
    ceshi20210224_17_B.DataTypeConversion55 =
      ceshi20210224_17_B.CANbitunpacking3_o2;

    /* Lookup_n-D: '<S21>/1-D Lookup Table9' */
    ceshi20210224_17_B.uDLookupTable9 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion55,
       ceshi20210224_17_P.uDLookupTable9_bp01Data,
       ceshi20210224_17_P.uDLookupTable9_tableData, 1U);

    /* Chart: '<Root>/Chart3' */
    /* Gateway: Chart3 */
    ceshi20210224_17_DW.sfEvent = ceshi20210224_17_CALL_EVENT;

    /* During: Chart3 */
    if (ceshi20210224_17_DW.is_active_c4_ceshi20210224_17 == 0U) {
      /* Entry: Chart3 */
      ceshi20210224_17_DW.is_active_c4_ceshi20210224_17 = 1U;

      /* Entry Internal: Chart3 */
      /* Transition: '<S4>:2' */
      ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on5;
    } else {
      switch (ceshi20210224_17_DW.is_c4_ceshi20210224_17) {
       case ceshi20210224_17_IN_on1:
        /* During 'on1': '<S4>:1' */
        /* Transition: '<S4>:31' */
        ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on2;

        /* Entry 'on2': '<S4>:30' */
        ceshi20210224_17_B.yuxuansongt += 0.002;
        break;

       case ceshi20210224_17_IN_on2:
        /* During 'on2': '<S4>:30' */
        zcEvent = ((ceshi20210224_17_B.u_h == 1.0) &&
                   (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[11] ==
                    0.0));
        if (zcEvent) {
          /* Transition: '<S4>:32' */
          ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on2;

          /* Entry 'on2': '<S4>:30' */
          ceshi20210224_17_B.yuxuansongt += 0.002;
        } else {
          if (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[11] == 1.0) {
            /* Transition: '<S4>:39' */
            ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on4;
          }
        }
        break;

       case ceshi20210224_17_IN_on3:
        /* During 'on3': '<S4>:34' */
        zcEvent = ((ceshi20210224_17_B.u_g4 == 1.0) &&
                   (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[10] ==
                    0.0));
        if (zcEvent) {
          /* Transition: '<S4>:36' */
          ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on3;

          /* Entry 'on3': '<S4>:34' */
          ceshi20210224_17_B.xuansongt += 0.002;
        } else {
          if (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[10] == 1.0) {
            /* Transition: '<S4>:41' */
            ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on5;
          }
        }
        break;

       case ceshi20210224_17_IN_on4:
        /* During 'on4': '<S4>:38' */
        if (ceshi20210224_17_B.u_g4 == 1.0) {
          /* Transition: '<S4>:46' */
          ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on3;

          /* Entry 'on3': '<S4>:34' */
          ceshi20210224_17_B.xuansongt += 0.002;
        }
        break;

       default:
        /* During 'on5': '<S4>:40' */
        if (ceshi20210224_17_B.u_h == 1.0) {
          /* Transition: '<S4>:33' */
          ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S4>:1' */
          ceshi20210224_17_B.yuxuansongt = 0.0;
          ceshi20210224_17_B.xuansongt = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/Chart3' */
  }

  /* StateSpace: '<Root>/Analog Filter Design1' */
  ceshi20210224_17_B.vkg = 0.0;
  ceshi20210224_17_B.vkg += ceshi20210224_17_P.AnalogFilterDesign1_C *
    ceshi20210224_17_X.AnalogFilterDesign1_CSTATE;

  /* StateSpace: '<Root>/Analog Filter Design2' */
  ceshi20210224_17_B.vgg = 0.0;
  ceshi20210224_17_B.vgg += ceshi20210224_17_P.AnalogFilterDesign2_C *
    ceshi20210224_17_X.AnalogFilterDesign2_CSTATE;

  /* Gain: '<Root>/Gain10' */
  ceshi20210224_17_B.Gain10 = ceshi20210224_17_P.Gain10_Gain *
    ceshi20210224_17_B.vgg;

  /* Switch: '<Root>/Switch4' */
  if (ceshi20210224_17_B.u0 > ceshi20210224_17_P.Switch4_Threshold) {
    ceshi20210224_17_B.zongsudu = ceshi20210224_17_B.vkg;
  } else {
    ceshi20210224_17_B.zongsudu = ceshi20210224_17_B.Gain10;
  }

  /* End of Switch: '<Root>/Switch4' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Chart: '<Root>/Chart2' */
    /* Gateway: Chart2 */
    ceshi20210224_17_DW.sfEvent_b = ceshi20210224_17_CALL_EVENT;

    /* During: Chart2 */
    if (ceshi20210224_17_DW.is_active_c2_ceshi20210224_17 == 0U) {
      /* Entry: Chart2 */
      ceshi20210224_17_DW.is_active_c2_ceshi20210224_17 = 1U;

      /* Entry Internal: Chart2 */
      /* Transition: '<S3>:2' */
      ceshi20210224_17_DW.is_c2_ceshi20210224_17 = ceshi20210224_17_IN_on1;

      /* Entry 'on1': '<S3>:1' */
      ceshi20210224_17_DW.kaigait = 0.0;
      ceshi20210224_17_B.vroute = 0.0;
    } else {
      guard1 = false;
      switch (ceshi20210224_17_DW.is_c2_ceshi20210224_17) {
       case ceshi20210224_17_IN_on1:
        /* During 'on1': '<S3>:1' */
        if (ceshi20210224_17_B.kaigaixinhao == 1.0) {
          /* Transition: '<S3>:31' */
          ceshi20210224_17_DW.is_c2_ceshi20210224_17 = ceshi20210224_17_IN_on2;

          /* Entry 'on2': '<S3>:30' */
          ceshi20210224_17_DW.kaigait += 0.002;
        }
        break;

       case ceshi20210224_17_IN_on2:
        /* During 'on2': '<S3>:30' */
        if (ceshi20210224_17_B.u_c == 1.0) {
          /* Transition: '<S3>:47' */
          if (ceshi20210224_17_DW.kaigait < 1.0) {
            /* Transition: '<S3>:32' */
            ceshi20210224_17_DW.is_c2_ceshi20210224_17 = ceshi20210224_17_IN_on2;

            /* Entry 'on2': '<S3>:30' */
            ceshi20210224_17_DW.kaigait += 0.002;
          } else {
            zcEvent = ((ceshi20210224_17_DW.kaigait >= 1.0) &&
                       (ceshi20210224_17_B.vkg >= 2.0));
            if (zcEvent) {
              /* Transition: '<S3>:39' */
              ceshi20210224_17_DW.is_c2_ceshi20210224_17 =
                ceshi20210224_17_IN_on4_f;

              /* Entry 'on4': '<S3>:38' */
              ceshi20210224_17_B.vroute = 0.0;
            } else {
              zcEvent = ((ceshi20210224_17_DW.kaigait >= 1.0) &&
                         (ceshi20210224_17_B.vkg < 2.0));
              if (zcEvent) {
                /* Transition: '<S3>:49' */
                ceshi20210224_17_DW.is_c2_ceshi20210224_17 =
                  ceshi20210224_17_IN_on5_o;

                /* Entry 'on5': '<S3>:48' */
                ceshi20210224_17_B.vroute = 1.0;
              } else {
                guard1 = true;
              }
            }
          }
        } else {
          guard1 = true;
        }
        break;

       case ceshi20210224_17_IN_on4_f:
        /* During 'on4': '<S3>:38' */
        if (ceshi20210224_17_B.u_c == 0.0) {
          /* Transition: '<S3>:50' */
          ceshi20210224_17_DW.is_c2_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S3>:1' */
          ceshi20210224_17_DW.kaigait = 0.0;
          ceshi20210224_17_B.vroute = 0.0;
        }
        break;

       default:
        /* During 'on5': '<S3>:48' */
        if (ceshi20210224_17_B.u_c == 0.0) {
          /* Transition: '<S3>:51' */
          ceshi20210224_17_DW.is_c2_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S3>:1' */
          ceshi20210224_17_DW.kaigait = 0.0;
          ceshi20210224_17_B.vroute = 0.0;
        }
        break;
      }

      if (guard1) {
        if (ceshi20210224_17_B.u_c == 0.0) {
          /* Transition: '<S3>:43' */
          ceshi20210224_17_DW.is_c2_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S3>:1' */
          ceshi20210224_17_DW.kaigait = 0.0;
          ceshi20210224_17_B.vroute = 0.0;
        }
      }
    }

    /* End of Chart: '<Root>/Chart2' */

    /* Logic: '<Root>/Logical Operator' */
    ceshi20210224_17_B.LogicalOperator = !(ceshi20210224_17_B.u_c != 0.0);

    /* Outputs for Enabled SubSystem: '<Root>/Subsystem2' incorporates:
     *  EnablePort: '<S13>/Enable'
     */
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      if (ceshi20210224_17_B.LogicalOperator) {
        if (!ceshi20210224_17_DW.Subsystem2_MODE) {
          ceshi20210224_17_DW.Subsystem2_MODE = true;
        }
      } else {
        if (ceshi20210224_17_DW.Subsystem2_MODE) {
          ceshi20210224_17_DW.Subsystem2_MODE = false;
        }
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Subsystem2' */
  }

  /* StateSpace: '<Root>/s' */
  ceshi20210224_17_B.s = 0.0;
  ceshi20210224_17_B.s += ceshi20210224_17_P.s_C * ceshi20210224_17_X.s_CSTATE;

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem2' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  if (ceshi20210224_17_DW.Subsystem2_MODE) {
    /* Sum: '<S13>/Add' incorporates:
     *  Constant: '<S13>/Constant'
     */
    ceshi20210224_17_B.Add_n = ceshi20210224_17_B.right1 +
      ceshi20210224_17_P.Constant_Value_g;
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      srUpdateBC(ceshi20210224_17_DW.Subsystem2_SubsysRanBC);
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem2' */

  /* Sum: '<Root>/Add1' */
  ceshi20210224_17_B.Add1 = ceshi20210224_17_B.right1 - ceshi20210224_17_B.Add_n;

  /* Switch: '<Root>/Switch' */
  if (ceshi20210224_17_B.Add1 > ceshi20210224_17_P.Switch_Threshold) {
    /* Sum: '<Root>/Add4' incorporates:
     *  Constant: '<Root>/s初始值1'
     */
    ceshi20210224_17_B.Add4 = ceshi20210224_17_B.s + ceshi20210224_17_P.s1_Value;
    ceshi20210224_17_B.Switch = ceshi20210224_17_B.Add4;
  } else {
    ceshi20210224_17_B.Switch = ceshi20210224_17_B.s;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Switch: '<S16>/Switch2' incorporates:
   *  Constant: '<S16>/Constant3'
   */
  if (ceshi20210224_17_B.vroute > ceshi20210224_17_P.Switch2_Threshold) {
    ceshi20210224_17_B.Switch2 = ceshi20210224_17_P.Constant3_Value;
  } else {
    ceshi20210224_17_B.Switch2 = ceshi20210224_17_B.Switch;
  }

  /* End of Switch: '<S16>/Switch2' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S16>/Constant2'
     *  Constant: '<S16>/Constant7'
     */
    if (ceshi20210224_17_B.vroute > ceshi20210224_17_P.Switch1_Threshold) {
      memcpy(&ceshi20210224_17_B.Switch1[0], &ceshi20210224_17_P.Ssx[0], 80001U *
             sizeof(real_T));
    } else {
      memcpy(&ceshi20210224_17_B.Switch1[0], &ceshi20210224_17_P.S[0], 80001U *
             sizeof(real_T));
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Switch: '<S16>/Switch6' incorporates:
     *  Constant: '<S16>/Constant1'
     *  Constant: '<S16>/Constant8'
     */
    if (ceshi20210224_17_B.vroute > ceshi20210224_17_P.Switch6_Threshold_j) {
      memcpy(&ceshi20210224_17_B.Switch6_l[0], &ceshi20210224_17_P.Vsx[0],
             80001U * sizeof(real_T));
    } else {
      memcpy(&ceshi20210224_17_B.Switch6_l[0], &ceshi20210224_17_P.V[0], 80001U *
             sizeof(real_T));
    }

    /* End of Switch: '<S16>/Switch6' */
  }

  /* Dynamic Look-Up Table Block: '<S16>/qiwangv'
   * Input0  Data Type:  Floating Point real_T
   * Input1  Data Type:  Floating Point real_T
   * Input2  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real_T_real_T( &(ceshi20210224_17_B.qiwangv),
                       &ceshi20210224_17_B.Switch6_l[0],
                       ceshi20210224_17_B.Switch2, &ceshi20210224_17_B.Switch1[0],
                       80000U);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem3' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Delay: '<S18>/Delay' */
    ceshi20210224_17_B.Delay = ceshi20210224_17_DW.Delay_DSTATE[0];

    /* Delay: '<S18>/Delay1' */
    ceshi20210224_17_B.Delay1 = ceshi20210224_17_DW.Delay1_DSTATE[0];

    /* Logic: '<S18>/Logical Operator' */
    ceshi20210224_17_B.LogicalOperator_d = ((ceshi20210224_17_B.Delay != 0.0) ||
      (ceshi20210224_17_B.Delay1 != 0.0));

    /* Outputs for Triggered SubSystem: '<S18>/Subsystem' incorporates:
     *  TriggerPort: '<S22>/Trigger'
     */
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      zcEvent = (ceshi20210224_17_B.LogicalOperator_d &&
                 (ceshi20210224_17_PrevZCX.Subsystem_Trig_ZCE != POS_ZCSIG));
      if (zcEvent) {
        /* Gain: '<S22>/Gain' */
        ceshi20210224_17_B.Gain_c = ceshi20210224_17_P.Gain_Gain *
          ceshi20210224_17_B.Delay;

        /* Sum: '<S22>/Add' */
        ceshi20210224_17_B.Add = ceshi20210224_17_B.Gain_c +
          ceshi20210224_17_B.Delay1;
        ceshi20210224_17_DW.Subsystem_SubsysRanBC = 4;
      }

      ceshi20210224_17_PrevZCX.Subsystem_Trig_ZCE =
        ceshi20210224_17_B.LogicalOperator_d;
    }

    /* End of Outputs for SubSystem: '<S18>/Subsystem' */
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      if (ceshi20210224_17_B.LogicalOperator) {
        if (!ceshi20210224_17_DW.Subsystem3_MODE) {
          ceshi20210224_17_DW.Subsystem3_MODE = true;
        }
      } else {
        if (ceshi20210224_17_DW.Subsystem3_MODE) {
          ceshi20210224_17_DW.Subsystem3_MODE = false;
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem3' */

  /* StateSpace: '<Root>/s1' */
  ceshi20210224_17_B.s1 = 0.0;
  ceshi20210224_17_B.s1 += ceshi20210224_17_P.s1_C *
    ceshi20210224_17_X.s1_CSTATE;

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem3' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (ceshi20210224_17_DW.Subsystem3_MODE) {
    /* Sum: '<S14>/Add' incorporates:
     *  Constant: '<S14>/Constant'
     */
    ceshi20210224_17_B.Add_c = ceshi20210224_17_B.right1 -
      ceshi20210224_17_P.Constant_Value_b;
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      srUpdateBC(ceshi20210224_17_DW.Subsystem3_SubsysRanBC);
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem3' */

  /* Sum: '<Root>/Add2' */
  ceshi20210224_17_B.Add2 = ceshi20210224_17_B.right1 - ceshi20210224_17_B.Add_c;

  /* Switch: '<Root>/Switch3' */
  if (ceshi20210224_17_B.Add2 > ceshi20210224_17_P.Switch3_Threshold) {
    ceshi20210224_17_B.Switch3 = ceshi20210224_17_B.s1;
  } else {
    /* Sum: '<Root>/Add3' incorporates:
     *  Constant: '<Root>/s初始值3'
     */
    ceshi20210224_17_B.Add3 = ceshi20210224_17_B.s1 -
      ceshi20210224_17_P.s3_Value;
    ceshi20210224_17_B.Switch3 = ceshi20210224_17_B.Add3;
  }

  /* End of Switch: '<Root>/Switch3' */
  /* Dynamic Look-Up Table Block: '<S17>/qiwangv1'
   * Input0  Data Type:  Floating Point real_T
   * Input1  Data Type:  Floating Point real_T
   * Input2  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real_T_real_T( &(ceshi20210224_17_B.qiwangv1), &ceshi20210224_17_P.Vgg
                       [0], ceshi20210224_17_B.Switch3, &ceshi20210224_17_P.Sgg
                       [0], 80000U);

  /* Switch: '<S18>/Switch2' */
  if (ceshi20210224_17_B.Add > ceshi20210224_17_P.Switch2_Threshold_l) {
    ceshi20210224_17_B.Switch2_n = ceshi20210224_17_B.qiwangv;
  } else {
    ceshi20210224_17_B.Switch2_n = ceshi20210224_17_B.qiwangv1;
  }

  /* End of Switch: '<S18>/Switch2' */

  /* StateSpace: '<Root>/s4' */
  ceshi20210224_17_B.s4 = 0.0;
  ceshi20210224_17_B.s4 += ceshi20210224_17_P.s4_C *
    ceshi20210224_17_X.s4_CSTATE;

  /* Step: '<Root>/Step' */
  currentTime = ceshi20210224_17_M->Timing.t[0];
  if (currentTime < ceshi20210224_17_P.Step_Time_l) {
    ceshi20210224_17_B.Step_o = ceshi20210224_17_P.Step_Y0_f;
  } else {
    ceshi20210224_17_B.Step_o = ceshi20210224_17_P.Step_YFinal_i;
  }

  /* End of Step: '<Root>/Step' */

  /* Logic: '<Root>/Logical Operator1' */
  ceshi20210224_17_B.LogicalOperator1_l = !(ceshi20210224_17_B.Step_o != 0.0);
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* SignalConversion: '<Root>/HiddenBuf_InsertedFor_Subsystem4_at_inport_1' */
    ceshi20210224_17_B.HiddenBuf_InsertedFor_Subsystem =
      ceshi20210224_17_B.LogicalOperator1_l;

    /* Outputs for Enabled SubSystem: '<Root>/Subsystem4' incorporates:
     *  EnablePort: '<S15>/Enable'
     */
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      if (ceshi20210224_17_B.HiddenBuf_InsertedFor_Subsystem) {
        if (!ceshi20210224_17_DW.Subsystem4_MODE) {
          ceshi20210224_17_DW.Subsystem4_MODE = true;
        }
      } else {
        if (ceshi20210224_17_DW.Subsystem4_MODE) {
          ceshi20210224_17_DW.Subsystem4_MODE = false;
        }
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Subsystem4' */
  }

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem4' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (ceshi20210224_17_DW.Subsystem4_MODE) {
    /* Inport: '<S15>/In1' */
    ceshi20210224_17_B.In1 = ceshi20210224_17_B.right1;
    if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
      srUpdateBC(ceshi20210224_17_DW.Subsystem4_SubsysRanBC);
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem4' */

  /* Sum: '<Root>/Add5' */
  ceshi20210224_17_B.s_k = ceshi20210224_17_B.s4 - ceshi20210224_17_B.In1;

  /* Gain: '<Root>/Gain4' */
  ceshi20210224_17_B.Gain4 = ceshi20210224_17_P.Gain4_Gain *
    ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[4];

  /* Gain: '<Root>/Gain9' */
  ceshi20210224_17_B.Gain9 = ceshi20210224_17_P.Gain9_Gain *
    ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[6];

  /* Gain: '<Root>/Gain13' */
  ceshi20210224_17_B.Gain13 = ceshi20210224_17_P.Gain13_Gain *
    ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[5];

  /* Gain: '<Root>/Gain14' */
  ceshi20210224_17_B.Gain14 = ceshi20210224_17_P.Gain14_Gain *
    ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[7];

  /* Step: '<Root>/Step1' */
  currentTime = ceshi20210224_17_M->Timing.t[0];
  if (currentTime < ceshi20210224_17_P.Step1_Time) {
    ceshi20210224_17_B.Step1 = ceshi20210224_17_P.Step1_Y0;
  } else {
    ceshi20210224_17_B.Step1 = ceshi20210224_17_P.Step1_YFinal;
  }

  /* End of Step: '<Root>/Step1' */

  /* Product: '<Root>/Product' */
  ceshi20210224_17_B.Product[0] = ceshi20210224_17_B.zongsudu *
    ceshi20210224_17_B.Step1;
  ceshi20210224_17_B.Product[1] = ceshi20210224_17_B.Switch2_n *
    ceshi20210224_17_B.Step1;
  ceshi20210224_17_B.Product[2] = ceshi20210224_17_B.s_k *
    ceshi20210224_17_B.Step1;
  ceshi20210224_17_B.Product[3] = ceshi20210224_17_B.u_c *
    ceshi20210224_17_B.Step1;
  ceshi20210224_17_B.Product[4] = ceshi20210224_17_B.Gain4 *
    ceshi20210224_17_B.Step1;
  ceshi20210224_17_B.Product[5] = ceshi20210224_17_B.Gain9 *
    ceshi20210224_17_B.Step1;
  ceshi20210224_17_B.Product[6] = ceshi20210224_17_B.Gain13 *
    ceshi20210224_17_B.Step1;
  ceshi20210224_17_B.Product[7] = ceshi20210224_17_B.Gain14 *
    ceshi20210224_17_B.Step1;
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Chart: '<Root>/Chart1' */
    /* Gateway: Chart1 */
    ceshi20210224_17_DW.sfEvent_a = ceshi20210224_17_CALL_EVENT;

    /* During: Chart1 */
    if (ceshi20210224_17_DW.is_active_c1_ceshi20210224_17 == 0U) {
      /* Entry: Chart1 */
      ceshi20210224_17_DW.is_active_c1_ceshi20210224_17 = 1U;

      /* Entry Internal: Chart1 */
      /* Transition: '<S2>:2' */
      ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on1;

      /* Entry 'on1': '<S2>:1' */
      ceshi20210224_17_B.kaigait = 0.0;
      ceshi20210224_17_B.guangait = 0.0;
    } else {
      switch (ceshi20210224_17_DW.is_c1_ceshi20210224_17) {
       case ceshi20210224_17_IN_on1:
        /* During 'on1': '<S2>:1' */
        zcEvent = ((ceshi20210224_17_B.kaigaixinhao == 1.0) &&
                   (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[4] == 0.0));
        if (zcEvent) {
          /* Transition: '<S2>:31' */
          ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on2;

          /* Entry 'on2': '<S2>:30' */
          ceshi20210224_17_B.kaigait += 0.01;
        } else {
          zcEvent = ((ceshi20210224_17_B.guangaixinhao == 1.0) &&
                     (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[6] ==
                      0.0));
          if (zcEvent) {
            /* Transition: '<S2>:35' */
            ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on3;

            /* Entry 'on3': '<S2>:34' */
            ceshi20210224_17_B.guangait += 0.01;
          }
        }
        break;

       case ceshi20210224_17_IN_on2:
        /* During 'on2': '<S2>:30' */
        zcEvent = ((ceshi20210224_17_B.kaigaixinhao == 1.0) &&
                   (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[4] == 0.0));
        if (zcEvent) {
          /* Transition: '<S2>:32' */
          ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on2;

          /* Entry 'on2': '<S2>:30' */
          ceshi20210224_17_B.kaigait += 0.01;
        } else {
          zcEvent = ((ceshi20210224_17_B.kaigaixinhao == 0.0) ||
                     (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[4] ==
                      1.0));
          if (zcEvent) {
            /* Transition: '<S2>:39' */
            ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on4;
          } else {
            if (ceshi20210224_17_B.u_c == 0.0) {
              /* Transition: '<S2>:43' */
              ceshi20210224_17_DW.is_c1_ceshi20210224_17 =
                ceshi20210224_17_IN_on1;

              /* Entry 'on1': '<S2>:1' */
              ceshi20210224_17_B.kaigait = 0.0;
              ceshi20210224_17_B.guangait = 0.0;
            }
          }
        }
        break;

       case ceshi20210224_17_IN_on3:
        /* During 'on3': '<S2>:34' */
        zcEvent = ((ceshi20210224_17_B.guangaixinhao == 1.0) &&
                   (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[6] == 0.0));
        if (zcEvent) {
          /* Transition: '<S2>:36' */
          ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on3;

          /* Entry 'on3': '<S2>:34' */
          ceshi20210224_17_B.guangait += 0.01;
        } else {
          zcEvent = ((ceshi20210224_17_B.guangaixinhao == 0.0) ||
                     (ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[6] ==
                      1.0));
          if (zcEvent) {
            /* Transition: '<S2>:41' */
            ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on5;
          } else {
            if (ceshi20210224_17_B.u_c == 0.0) {
              /* Transition: '<S2>:44' */
              ceshi20210224_17_DW.is_c1_ceshi20210224_17 =
                ceshi20210224_17_IN_on1;

              /* Entry 'on1': '<S2>:1' */
              ceshi20210224_17_B.kaigait = 0.0;
              ceshi20210224_17_B.guangait = 0.0;
            }
          }
        }
        break;

       case ceshi20210224_17_IN_on4:
        /* During 'on4': '<S2>:38' */
        if (ceshi20210224_17_B.u_c == 0.0) {
          /* Transition: '<S2>:33' */
          ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S2>:1' */
          ceshi20210224_17_B.kaigait = 0.0;
          ceshi20210224_17_B.guangait = 0.0;
        }
        break;

       default:
        /* During 'on5': '<S2>:40' */
        if (ceshi20210224_17_B.u_c == 0.0) {
          /* Transition: '<S2>:37' */
          ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi20210224_17_IN_on1;

          /* Entry 'on1': '<S2>:1' */
          ceshi20210224_17_B.kaigait = 0.0;
          ceshi20210224_17_B.guangait = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/Chart1' */

    /* SignalConversion: '<Root>/TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1' */
    ceshi20210224_17_B.u_b[0] = ceshi20210224_17_B.kaigait;
    ceshi20210224_17_B.u_b[1] = ceshi20210224_17_B.guangait;
  }

  /* Derivative: '<Root>/Derivative' */
  if ((ceshi20210224_17_DW.TimeStampA >= ceshi20210224_17_M->Timing.t[0]) &&
      (ceshi20210224_17_DW.TimeStampB >= ceshi20210224_17_M->Timing.t[0])) {
    ceshi20210224_17_B.Derivative = 0.0;
  } else {
    currentTime = ceshi20210224_17_DW.TimeStampA;
    lastU = &ceshi20210224_17_DW.LastUAtTimeA;
    if (ceshi20210224_17_DW.TimeStampA < ceshi20210224_17_DW.TimeStampB) {
      if (ceshi20210224_17_DW.TimeStampB < ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB;
      }
    } else {
      if (ceshi20210224_17_DW.TimeStampA >= ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB;
      }
    }

    deltaT = ceshi20210224_17_M->Timing.t[0] - currentTime;
    ceshi20210224_17_B.Derivative = (ceshi20210224_17_B.right1 - *lastU) /
      deltaT;
  }

  /* End of Derivative: '<Root>/Derivative' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Memory: '<Root>/Memory1' */
    ceshi20210224_17_B.Memory1 = ceshi20210224_17_DW.Memory1_PreviousInput;
  }

  /* Sum: '<Root>/chazhi1' */
  ceshi20210224_17_B.chazhi1 = ceshi20210224_17_B.qiwangv1 -
    ceshi20210224_17_B.Gain10;

  /* Gain: '<Root>/Gain6' */
  ceshi20210224_17_B.Gain6 = ceshi20210224_17_P.Gain6_Gain *
    ceshi20210224_17_B.chazhi1;

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem1' */
  ceshi20210224_17_Subsystem(ceshi20210224_17_M, ceshi20210224_17_B.Memory1,
    ceshi20210224_17_B.u_c, &ceshi20210224_17_B.Subsystem1,
    &ceshi20210224_17_DW.Subsystem1, (P_Subsystem_ceshi20210224_17_T *)
    &ceshi20210224_17_P.Subsystem1, &ceshi20210224_17_X.Subsystem1,
    &ceshi20210224_17_PrevZCX.Subsystem1);

  /* End of Outputs for SubSystem: '<Root>/Subsystem1' */

  /* Gain: '<Root>/Gain8' */
  ceshi20210224_17_B.Gain8 = ceshi20210224_17_P.Gain8_Gain *
    ceshi20210224_17_B.chazhi1;

  /* Derivative: '<Root>/Derivative4' */
  if ((ceshi20210224_17_DW.TimeStampA_g >= ceshi20210224_17_M->Timing.t[0]) &&
      (ceshi20210224_17_DW.TimeStampB_n >= ceshi20210224_17_M->Timing.t[0])) {
    ceshi20210224_17_B.Derivative4 = 0.0;
  } else {
    currentTime = ceshi20210224_17_DW.TimeStampA_g;
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_b;
    if (ceshi20210224_17_DW.TimeStampA_g < ceshi20210224_17_DW.TimeStampB_n) {
      if (ceshi20210224_17_DW.TimeStampB_n < ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_n;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_j;
      }
    } else {
      if (ceshi20210224_17_DW.TimeStampA_g >= ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_n;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_j;
      }
    }

    deltaT = ceshi20210224_17_M->Timing.t[0] - currentTime;
    ceshi20210224_17_B.Derivative4 = (ceshi20210224_17_B.Gain8 - *lastU) /
      deltaT;
  }

  /* End of Derivative: '<Root>/Derivative4' */

  /* Saturate: '<Root>/Saturation2' */
  currentTime = ceshi20210224_17_B.Derivative4;
  deltaT = ceshi20210224_17_P.Saturation2_LowerSat;
  u2 = ceshi20210224_17_P.Saturation2_UpperSat;
  if (currentTime > u2) {
    ceshi20210224_17_B.Saturation2 = u2;
  } else if (currentTime < deltaT) {
    ceshi20210224_17_B.Saturation2 = deltaT;
  } else {
    ceshi20210224_17_B.Saturation2 = currentTime;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* Logic: '<S20>/Logical Operator2' */
  ceshi20210224_17_B.LogicalOperator2 =
    !(ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[6] != 0.0);

  /* DataTypeConversion: '<S20>/Data Type Conversion' */
  ceshi20210224_17_B.DataTypeConversion_f = ceshi20210224_17_B.LogicalOperator2;

  /* RateLimiter: '<S20>/Rate Limiter1' */
  if (ceshi20210224_17_DW.LastMajorTime == (rtInf)) {
    ceshi20210224_17_B.RateLimiter1 = ceshi20210224_17_B.DataTypeConversion_f;
  } else {
    deltaT = ceshi20210224_17_M->Timing.t[0] - ceshi20210224_17_DW.LastMajorTime;
    u2 = deltaT * ceshi20210224_17_P.RateLimiter1_RisingLim;
    currentTime = ceshi20210224_17_B.DataTypeConversion_f -
      ceshi20210224_17_DW.PrevY;
    if (currentTime > u2) {
      ceshi20210224_17_B.RateLimiter1 = ceshi20210224_17_DW.PrevY + u2;
    } else {
      deltaT *= ceshi20210224_17_P.RateLimiter1_FallingLim;
      if (currentTime < deltaT) {
        ceshi20210224_17_B.RateLimiter1 = ceshi20210224_17_DW.PrevY + deltaT;
      } else {
        ceshi20210224_17_B.RateLimiter1 =
          ceshi20210224_17_B.DataTypeConversion_f;
      }
    }
  }

  /* End of RateLimiter: '<S20>/Rate Limiter1' */

  /* Sum: '<Root>/chazhi' */
  ceshi20210224_17_B.chazhi = ceshi20210224_17_B.qiwangv -
    ceshi20210224_17_B.vkg;

  /* Gain: '<Root>/Gain2' */
  ceshi20210224_17_B.Gain2 = ceshi20210224_17_P.Gain2_Gain *
    ceshi20210224_17_B.chazhi;
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Memory: '<Root>/Memory' */
    ceshi20210224_17_B.Memory = ceshi20210224_17_DW.Memory_PreviousInput;
  }

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' */
  ceshi20210224_17_Subsystem(ceshi20210224_17_M, ceshi20210224_17_B.Memory,
    ceshi20210224_17_B.u_c, &ceshi20210224_17_B.Subsystem_d,
    &ceshi20210224_17_DW.Subsystem_d, (P_Subsystem_ceshi20210224_17_T *)
    &ceshi20210224_17_P.Subsystem_d, &ceshi20210224_17_X.Subsystem_d,
    &ceshi20210224_17_PrevZCX.Subsystem_d);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Gain: '<Root>/Gain5' */
  ceshi20210224_17_B.Gain5 = ceshi20210224_17_P.Gain5_Gain *
    ceshi20210224_17_B.chazhi;

  /* Derivative: '<Root>/Derivative2' */
  if ((ceshi20210224_17_DW.TimeStampA_c >= ceshi20210224_17_M->Timing.t[0]) &&
      (ceshi20210224_17_DW.TimeStampB_f >= ceshi20210224_17_M->Timing.t[0])) {
    ceshi20210224_17_B.Derivative2 = 0.0;
  } else {
    currentTime = ceshi20210224_17_DW.TimeStampA_c;
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_a;
    if (ceshi20210224_17_DW.TimeStampA_c < ceshi20210224_17_DW.TimeStampB_f) {
      if (ceshi20210224_17_DW.TimeStampB_f < ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_f;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_p;
      }
    } else {
      if (ceshi20210224_17_DW.TimeStampA_c >= ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_f;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_p;
      }
    }

    deltaT = ceshi20210224_17_M->Timing.t[0] - currentTime;
    ceshi20210224_17_B.Derivative2 = (ceshi20210224_17_B.Gain5 - *lastU) /
      deltaT;
  }

  /* End of Derivative: '<Root>/Derivative2' */

  /* Saturate: '<Root>/Saturation1' */
  currentTime = ceshi20210224_17_B.Derivative2;
  deltaT = ceshi20210224_17_P.Saturation1_LowerSat;
  u2 = ceshi20210224_17_P.Saturation1_UpperSat;
  if (currentTime > u2) {
    ceshi20210224_17_B.Saturation1 = u2;
  } else if (currentTime < deltaT) {
    ceshi20210224_17_B.Saturation1 = deltaT;
  } else {
    ceshi20210224_17_B.Saturation1 = currentTime;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* Logic: '<S19>/Logical Operator2' */
  ceshi20210224_17_B.LogicalOperator2_g =
    !(ceshi20210224_17_B.u234wuxinhao5kaigaidaowei6kaiga[4] != 0.0);

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  ceshi20210224_17_B.DataTypeConversion_d =
    ceshi20210224_17_B.LogicalOperator2_g;

  /* RateLimiter: '<S19>/Rate Limiter' */
  if (ceshi20210224_17_DW.LastMajorTime_c == (rtInf)) {
    ceshi20210224_17_B.RateLimiter = ceshi20210224_17_B.DataTypeConversion_d;
  } else {
    deltaT = ceshi20210224_17_M->Timing.t[0] -
      ceshi20210224_17_DW.LastMajorTime_c;
    u2 = deltaT * ceshi20210224_17_P.RateLimiter_RisingLim;
    currentTime = ceshi20210224_17_B.DataTypeConversion_d -
      ceshi20210224_17_DW.PrevY_h;
    if (currentTime > u2) {
      ceshi20210224_17_B.RateLimiter = ceshi20210224_17_DW.PrevY_h + u2;
    } else {
      deltaT *= ceshi20210224_17_P.RateLimiter_FallingLim;
      if (currentTime < deltaT) {
        ceshi20210224_17_B.RateLimiter = ceshi20210224_17_DW.PrevY_h + deltaT;
      } else {
        ceshi20210224_17_B.RateLimiter = ceshi20210224_17_B.DataTypeConversion_d;
      }
    }
  }

  /* End of RateLimiter: '<S19>/Rate Limiter' */

  /* MultiPortSwitch: '<Root>/Multiport Switch2' incorporates:
   *  MultiPortSwitch: '<Root>/Multiport Switch'
   */
  if ((int32_T)ceshi20210224_17_B.u0 == 0) {
    /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
     *  Constant: '<Root>/阀开口2'
     */
    if ((int32_T)ceshi20210224_17_B.u_c == 0) {
      ceshi20210224_17_B.MultiportSwitch1 = ceshi20210224_17_P.u_Value_d;
    } else {
      /* Gain: '<Root>/Gain12' */
      ceshi20210224_17_B.Gain12 = ceshi20210224_17_P.Gain12_Gain *
        ceshi20210224_17_B.qiwangv1;

      /* Product: '<S20>/Product1' incorporates:
       *  Constant: '<Root>/Constant6'
       */
      ceshi20210224_17_B.Product1 = ceshi20210224_17_B.RateLimiter1 *
        ceshi20210224_17_P.Constant6_Value;

      /* Sum: '<Root>/Sum1' */
      ceshi20210224_17_B.Sum1 = (ceshi20210224_17_B.Gain6 +
        ceshi20210224_17_B.Subsystem1.Integrator) +
        ceshi20210224_17_B.Saturation2;

      /* Sum: '<Root>/shuchuliang1' */
      ceshi20210224_17_B.shuchuliang1 = (ceshi20210224_17_B.Sum1 +
        ceshi20210224_17_B.Product1) + ceshi20210224_17_B.Gain12;
      ceshi20210224_17_B.MultiportSwitch1 = ceshi20210224_17_B.shuchuliang1;
    }

    /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */
    ceshi20210224_17_B.shuchuliang = ceshi20210224_17_B.MultiportSwitch1;
  } else {
    if ((int32_T)ceshi20210224_17_B.u_c == 0) {
      /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
       *  Constant: '<Root>/阀开口1'
       */
      ceshi20210224_17_B.MultiportSwitch = ceshi20210224_17_P.u_Value_n;
    } else {
      /* Gain: '<Root>/Gain11' incorporates:
       *  MultiPortSwitch: '<Root>/Multiport Switch'
       */
      ceshi20210224_17_B.Gain11 = ceshi20210224_17_P.Gain11_Gain *
        ceshi20210224_17_B.qiwangv;

      /* Product: '<S19>/Product1' incorporates:
       *  Constant: '<Root>/Constant3'
       *  MultiPortSwitch: '<Root>/Multiport Switch'
       */
      ceshi20210224_17_B.Product1_j = ceshi20210224_17_B.RateLimiter *
        ceshi20210224_17_P.Constant3_Value_e;

      /* Sum: '<Root>/Sum' incorporates:
       *  MultiPortSwitch: '<Root>/Multiport Switch'
       */
      ceshi20210224_17_B.Sum = (ceshi20210224_17_B.Gain2 +
        ceshi20210224_17_B.Subsystem_d.Integrator) +
        ceshi20210224_17_B.Saturation1;

      /* Sum: '<Root>/shuchuliang2' incorporates:
       *  MultiPortSwitch: '<Root>/Multiport Switch'
       */
      ceshi20210224_17_B.shuchuliang2 = (ceshi20210224_17_B.Sum +
        ceshi20210224_17_B.Product1_j) + ceshi20210224_17_B.Gain11;

      /* MultiPortSwitch: '<Root>/Multiport Switch' */
      ceshi20210224_17_B.MultiportSwitch = ceshi20210224_17_B.shuchuliang2;
    }

    ceshi20210224_17_B.shuchuliang = ceshi20210224_17_B.MultiportSwitch;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch2' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Gain: '<Root>/Gain' */
    ceshi20210224_17_B.Gain = ceshi20210224_17_P.Gain_Gain_a *
      ceshi20210224_17_B.kaigaixinhao;

    /* Gain: '<Root>/Gain1' */
    ceshi20210224_17_B.Gain1 = ceshi20210224_17_P.Gain1_Gain *
      ceshi20210224_17_B.guangaixinhao;
  }

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/关盖'
   */
  if (ceshi20210224_17_P._Value_fb > ceshi20210224_17_P.Switch1_Threshold_i) {
    ceshi20210224_17_B.Switch1_n = ceshi20210224_17_P.Constant2_Value;
  } else {
    ceshi20210224_17_B.Switch1_n = ceshi20210224_17_B.shuchuliang;
  }

  /* End of Switch: '<Root>/Switch1' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Switch: '<Root>/Switch2' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/关盖'
     */
    if (ceshi20210224_17_P._Value_fb > ceshi20210224_17_P.Switch2_Threshold_m) {
      ceshi20210224_17_B.Switch2_k = ceshi20210224_17_P.Constant_Value;
    } else {
      ceshi20210224_17_B.Switch2_k = ceshi20210224_17_B.fa;
    }

    /* End of Switch: '<Root>/Switch2' */

    /* Constant: '<Root>/比例减压阀1' */
    ceshi20210224_17_B.u_hw = ceshi20210224_17_P.u_Value_i;
  }

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
  }

  /* ok to acquire for <S5>/S-Function */
  ceshi20210224_17_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S6>/S-Function */
  ceshi20210224_17_DW.SFunction_IWORK_g.AcquireOK = 1;

  /* ok to acquire for <S7>/S-Function */
  ceshi20210224_17_DW.SFunction_IWORK_n.AcquireOK = 1;
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* ok to acquire for <S8>/S-Function */
    ceshi20210224_17_DW.SFunction_IWORK_i.AcquireOK = 1;

    /* ok to acquire for <S9>/S-Function */
    ceshi20210224_17_DW.SFunction_IWORK_k.AcquireOK = 1;

    /* ok to acquire for <S10>/S-Function */
    ceshi20210224_17_DW.SFunction_IWORK_c.AcquireOK = 1;
  }

  /* StateSpace: '<Root>/s2' */
  ceshi20210224_17_B.s2 = 0.0;
  ceshi20210224_17_B.s2 += ceshi20210224_17_P.s2_C *
    ceshi20210224_17_X.s2_CSTATE;

  /* Derivative: '<Root>/Derivative1' */
  if ((ceshi20210224_17_DW.TimeStampA_e >= ceshi20210224_17_M->Timing.t[0]) &&
      (ceshi20210224_17_DW.TimeStampB_a >= ceshi20210224_17_M->Timing.t[0])) {
    ceshi20210224_17_B.Derivative1 = 0.0;
  } else {
    currentTime = ceshi20210224_17_DW.TimeStampA_e;
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_d;
    if (ceshi20210224_17_DW.TimeStampA_e < ceshi20210224_17_DW.TimeStampB_a) {
      if (ceshi20210224_17_DW.TimeStampB_a < ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_a;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_n;
      }
    } else {
      if (ceshi20210224_17_DW.TimeStampA_e >= ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_a;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_n;
      }
    }

    deltaT = ceshi20210224_17_M->Timing.t[0] - currentTime;
    ceshi20210224_17_B.Derivative1 = (ceshi20210224_17_B.s2 - *lastU) / deltaT;
  }

  /* End of Derivative: '<Root>/Derivative1' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
  }

  /* StateSpace: '<Root>/s3' */
  ceshi20210224_17_B.s3 = 0.0;
  ceshi20210224_17_B.s3 += ceshi20210224_17_P.s3_C *
    ceshi20210224_17_X.s3_CSTATE;

  /* Derivative: '<Root>/Derivative3' */
  if ((ceshi20210224_17_DW.TimeStampA_m >= ceshi20210224_17_M->Timing.t[0]) &&
      (ceshi20210224_17_DW.TimeStampB_p >= ceshi20210224_17_M->Timing.t[0])) {
    ceshi20210224_17_B.Derivative3 = 0.0;
  } else {
    currentTime = ceshi20210224_17_DW.TimeStampA_m;
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_i;
    if (ceshi20210224_17_DW.TimeStampA_m < ceshi20210224_17_DW.TimeStampB_p) {
      if (ceshi20210224_17_DW.TimeStampB_p < ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_p;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_b;
      }
    } else {
      if (ceshi20210224_17_DW.TimeStampA_m >= ceshi20210224_17_M->Timing.t[0]) {
        currentTime = ceshi20210224_17_DW.TimeStampB_p;
        lastU = &ceshi20210224_17_DW.LastUAtTimeB_b;
      }
    }

    deltaT = ceshi20210224_17_M->Timing.t[0] - currentTime;
    ceshi20210224_17_B.Derivative3 = (ceshi20210224_17_B.s3 - *lastU) / deltaT;
  }

  /* End of Derivative: '<Root>/Derivative3' */

  /* Gain: '<Root>/Gain3' */
  ceshi20210224_17_B.Gain3 = ceshi20210224_17_P.Gain3_Gain *
    ceshi20210224_17_B.chazhi;

  /* Gain: '<Root>/Gain7' */
  ceshi20210224_17_B.Gain7 = ceshi20210224_17_P.Gain7_Gain *
    ceshi20210224_17_B.chazhi1;
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
  }

  /* ok to acquire for <S23>/S-Function */
  ceshi20210224_17_DW.SFunction_IWORK_p.AcquireOK = 1;

  /* DataTypeConversion: '<S21>/Data Type Conversion48' */
  ceshi20210224_17_B.DataTypeConversion48 =
    ceshi20210224_17_B.CANbitunpacking4_o2;

  /* Lookup_n-D: '<S21>/1-D Lookup Table7' */
  ceshi20210224_17_B.uDLookupTable7 = look1_binlxpw
    (ceshi20210224_17_B.DataTypeConversion48,
     ceshi20210224_17_P.uDLookupTable7_bp01Data,
     ceshi20210224_17_P.uDLookupTable7_tableData, 1U);
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* DataTypeConversion: '<S21>/Data Type Conversion50' */
    ceshi20210224_17_B.DataTypeConversion50 =
      ceshi20210224_17_B.CANbitunpacking7_o2;

    /* DataTypeConversion: '<S21>/Data Type Conversion52' */
    ceshi20210224_17_B.DataTypeConversion52 =
      ceshi20210224_17_B.CANbitunpacking7_o4;

    /* DataTypeConversion: '<S21>/Data Type Conversion54' */
    ceshi20210224_17_B.DataTypeConversion54 =
      ceshi20210224_17_B.CANbitunpacking6_o2;

    /* Lookup_n-D: '<S21>/1-D Lookup Table2' */
    ceshi20210224_17_B.uDLookupTable2 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion50,
       ceshi20210224_17_P.uDLookupTable2_bp01Data,
       ceshi20210224_17_P.uDLookupTable2_tableData, 1U);

    /* Lookup_n-D: '<S21>/1-D Lookup Table4' */
    ceshi20210224_17_B.uDLookupTable4 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion52,
       ceshi20210224_17_P.uDLookupTable4_bp01Data,
       ceshi20210224_17_P.uDLookupTable4_tableData, 1U);

    /* Lookup_n-D: '<S21>/1-D Lookup Table6' */
    ceshi20210224_17_B.uDLookupTable6 = look1_binlxpw
      (ceshi20210224_17_B.DataTypeConversion54,
       ceshi20210224_17_P.uDLookupTable6_bp01Data,
       ceshi20210224_17_P.uDLookupTable6_tableData, 1U);

    /* DataTypeConversion: '<S21>/Data Type Conversion57' */
    ceshi20210224_17_B.DataTypeConversion57 =
      ceshi20210224_17_B.CANbitunpacking3_o3;

    /* DataTypeConversion: '<S21>/Data Type Conversion58' */
    ceshi20210224_17_B.DataTypeConversion58 =
      ceshi20210224_17_B.CANbitunpacking3_o4;

    /* Bit Unpacking: <S21>/CAN bit-unpacking 9 */
    {
      const uint32_T *y = (const uint32_T *)
        &ceshi20210224_17_B.tonggai3402Receive_o2;

      /* Output Port 1 */
      ceshi20210224_17_B.CANbitunpacking9_o1 = (uint16_T)
        (y[0] & 0xffff);

      /* Output Port 2 */
      ceshi20210224_17_B.CANbitunpacking9_o2 = (uint16_T)
        ((y[0] & (0xffff << 16)) >> 16);

      /* Output Port 3 */
      ceshi20210224_17_B.CANbitunpacking9_o3 = (uint16_T)
        (y[1] & 0xffff);
    }

    /* DataTypeConversion: '<S21>/Data Type Conversion59' */
    ceshi20210224_17_B.DataTypeConversion59 =
      ceshi20210224_17_B.CANbitunpacking9_o1;

    /* DataTypeConversion: '<S21>/Data Type Conversion60' */
    ceshi20210224_17_B.DataTypeConversion60 =
      ceshi20210224_17_B.CANbitunpacking9_o2;

    /* DataTypeConversion: '<S21>/Data Type Conversion61' */
    ceshi20210224_17_B.DataTypeConversion61 =
      ceshi20210224_17_B.CANbitunpacking9_o3;

    /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
     *  Constant: '<S21>/Constant'
     */
    currentTime = floor(ceshi20210224_17_P.Constant_Value_a);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion_e = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion' */

    /* DataTypeConversion: '<S21>/Data Type Conversion1' incorporates:
     *  Constant: '<S21>/Constant1'
     */
    currentTime = floor(ceshi20210224_17_P.Constant1_Value);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion1 = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion1' */

    /* DataTypeConversion: '<S21>/Data Type Conversion2' incorporates:
     *  Constant: '<S21>/Constant2'
     */
    currentTime = floor(ceshi20210224_17_P.Constant2_Value_n);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion2 = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion2' */

    /* DataTypeConversion: '<S21>/Data Type Conversion3' incorporates:
     *  Constant: '<S21>/Constant3'
     */
    currentTime = floor(ceshi20210224_17_P.Constant3_Value_j);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion3 = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion3' */

    /* DataTypeConversion: '<S21>/Data Type Conversion4' incorporates:
     *  Constant: '<S21>/Constant4'
     */
    currentTime = floor(ceshi20210224_17_P.Constant4_Value);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion4 = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion4' */

    /* DataTypeConversion: '<S21>/Data Type Conversion5' incorporates:
     *  Constant: '<S21>/Constant5'
     */
    currentTime = floor(ceshi20210224_17_P.Constant5_Value);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion5 = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion5' */

    /* DataTypeConversion: '<S21>/Data Type Conversion6' incorporates:
     *  Constant: '<S21>/Constant6'
     */
    currentTime = floor(ceshi20210224_17_P.Constant6_Value_n);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion6 = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion6' */

    /* DataTypeConversion: '<S21>/Data Type Conversion7' incorporates:
     *  Constant: '<S21>/Constant7'
     */
    currentTime = floor(ceshi20210224_17_P.Constant7_Value);
    if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
      currentTime = 0.0;
    } else {
      currentTime = fmod(currentTime, 256.0);
    }

    ceshi20210224_17_B.DataTypeConversion7 = (uint8_T)(currentTime < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
      currentTime);

    /* End of DataTypeConversion: '<S21>/Data Type Conversion7' */

    /* ManualSwitch: '<S21>/Manual Switch2' */
    if (ceshi20210224_17_P.ManualSwitch2_CurrentSetting == 1) {
      ceshi20210224_17_B.ManualSwitch2[0] =
        ceshi20210224_17_B.DataTypeConversion_e;
      ceshi20210224_17_B.ManualSwitch2[1] =
        ceshi20210224_17_B.DataTypeConversion1;
      ceshi20210224_17_B.ManualSwitch2[2] =
        ceshi20210224_17_B.DataTypeConversion2;
      ceshi20210224_17_B.ManualSwitch2[3] =
        ceshi20210224_17_B.DataTypeConversion3;
      ceshi20210224_17_B.ManualSwitch2[4] =
        ceshi20210224_17_B.DataTypeConversion4;
      ceshi20210224_17_B.ManualSwitch2[5] =
        ceshi20210224_17_B.DataTypeConversion5;
      ceshi20210224_17_B.ManualSwitch2[6] =
        ceshi20210224_17_B.DataTypeConversion6;
      ceshi20210224_17_B.ManualSwitch2[7] =
        ceshi20210224_17_B.DataTypeConversion7;
    } else {
      /* DataTypeConversion: '<S21>/Data Type Conversion30' incorporates:
       *  Constant: '<S21>/Constant30'
       */
      currentTime = floor(ceshi20210224_17_P.Constant30_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion30 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion30' */

      /* DataTypeConversion: '<S21>/Data Type Conversion31' incorporates:
       *  Constant: '<S21>/Constant31'
       */
      currentTime = floor(ceshi20210224_17_P.Constant31_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion31 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion31' */

      /* DataTypeConversion: '<S21>/Data Type Conversion24' incorporates:
       *  Constant: '<S21>/Constant24'
       */
      currentTime = floor(ceshi20210224_17_P.Constant24_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion24 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion24' */

      /* DataTypeConversion: '<S21>/Data Type Conversion25' incorporates:
       *  Constant: '<S21>/Constant25'
       */
      currentTime = floor(ceshi20210224_17_P.Constant25_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion25 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion25' */

      /* DataTypeConversion: '<S21>/Data Type Conversion26' incorporates:
       *  Constant: '<S21>/Constant26'
       */
      currentTime = floor(ceshi20210224_17_P.Constant26_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion26 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion26' */

      /* DataTypeConversion: '<S21>/Data Type Conversion27' incorporates:
       *  Constant: '<S21>/Constant27'
       */
      currentTime = floor(ceshi20210224_17_P.Constant27_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion27 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion27' */

      /* DataTypeConversion: '<S21>/Data Type Conversion28' incorporates:
       *  Constant: '<S21>/Constant28'
       */
      currentTime = floor(ceshi20210224_17_P.Constant28_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion28 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion28' */

      /* DataTypeConversion: '<S21>/Data Type Conversion29' incorporates:
       *  Constant: '<S21>/Constant29'
       */
      currentTime = floor(ceshi20210224_17_P.Constant29_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion29 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion29' */
      ceshi20210224_17_B.ManualSwitch2[0] =
        ceshi20210224_17_B.DataTypeConversion30;
      ceshi20210224_17_B.ManualSwitch2[1] =
        ceshi20210224_17_B.DataTypeConversion31;
      ceshi20210224_17_B.ManualSwitch2[2] =
        ceshi20210224_17_B.DataTypeConversion24;
      ceshi20210224_17_B.ManualSwitch2[3] =
        ceshi20210224_17_B.DataTypeConversion25;
      ceshi20210224_17_B.ManualSwitch2[4] =
        ceshi20210224_17_B.DataTypeConversion26;
      ceshi20210224_17_B.ManualSwitch2[5] =
        ceshi20210224_17_B.DataTypeConversion27;
      ceshi20210224_17_B.ManualSwitch2[6] =
        ceshi20210224_17_B.DataTypeConversion28;
      ceshi20210224_17_B.ManualSwitch2[7] =
        ceshi20210224_17_B.DataTypeConversion29;
    }

    /* End of ManualSwitch: '<S21>/Manual Switch2' */
    /* Bit Packing: <S21>/CAN bit-packing 2 */
    {
      uint32_T *y = (uint32_T *)&ceshi20210224_17_B.CANbitpacking2;
      y[0] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[0] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[1] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[2] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[3] & 0xff) << 24));
      y[1] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[4] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[5] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[6] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch2[7] & 0xff) << 24));
    }

    /* S-Function (canac2objsendx): '<S21>/kaiguangaiweiyi3402Send' */
    {
      /*------------ S-Function Block: <S21>/kaiguangaiweiyi3402Send ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object2_mbx( 1, 1, 8, (uint8_T *)
          &ceshi20210224_17_B.CANbitpacking2);
        restoreInterrupts(flags);
        ;
      }
    }

    /* ManualSwitch: '<S21>/Manual Switch4' */
    if (ceshi20210224_17_P.ManualSwitch4_CurrentSetting == 1) {
      ceshi20210224_17_B.ManualSwitch4[0] =
        ceshi20210224_17_B.DataTypeConversion_e;
      ceshi20210224_17_B.ManualSwitch4[1] =
        ceshi20210224_17_B.DataTypeConversion1;
      ceshi20210224_17_B.ManualSwitch4[2] =
        ceshi20210224_17_B.DataTypeConversion2;
      ceshi20210224_17_B.ManualSwitch4[3] =
        ceshi20210224_17_B.DataTypeConversion3;
      ceshi20210224_17_B.ManualSwitch4[4] =
        ceshi20210224_17_B.DataTypeConversion4;
      ceshi20210224_17_B.ManualSwitch4[5] =
        ceshi20210224_17_B.DataTypeConversion5;
      ceshi20210224_17_B.ManualSwitch4[6] =
        ceshi20210224_17_B.DataTypeConversion6;
      ceshi20210224_17_B.ManualSwitch4[7] =
        ceshi20210224_17_B.DataTypeConversion7;
    } else {
      /* DataTypeConversion: '<S21>/Data Type Conversion46' incorporates:
       *  Constant: '<S21>/Constant46'
       */
      currentTime = floor(ceshi20210224_17_P.Constant46_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion46 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion46' */

      /* DataTypeConversion: '<S21>/Data Type Conversion47' incorporates:
       *  Constant: '<S21>/Constant47'
       */
      currentTime = floor(ceshi20210224_17_P.Constant47_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion47 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion47' */

      /* DataTypeConversion: '<S21>/Data Type Conversion40' incorporates:
       *  Constant: '<S21>/Constant40'
       */
      currentTime = floor(ceshi20210224_17_P.Constant40_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion40 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion40' */

      /* DataTypeConversion: '<S21>/Data Type Conversion41' incorporates:
       *  Constant: '<S21>/Constant41'
       */
      currentTime = floor(ceshi20210224_17_P.Constant41_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion41 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion41' */

      /* DataTypeConversion: '<S21>/Data Type Conversion42' incorporates:
       *  Constant: '<S21>/Constant42'
       */
      currentTime = floor(ceshi20210224_17_P.Constant42_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion42 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion42' */

      /* DataTypeConversion: '<S21>/Data Type Conversion43' incorporates:
       *  Constant: '<S21>/Constant43'
       */
      currentTime = floor(ceshi20210224_17_P.Constant43_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion43 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion43' */

      /* DataTypeConversion: '<S21>/Data Type Conversion44' incorporates:
       *  Constant: '<S21>/Constant44'
       */
      currentTime = floor(ceshi20210224_17_P.Constant44_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion44 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion44' */

      /* DataTypeConversion: '<S21>/Data Type Conversion45' incorporates:
       *  Constant: '<S21>/Constant45'
       */
      currentTime = floor(ceshi20210224_17_P.Constant45_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion45 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion45' */
      ceshi20210224_17_B.ManualSwitch4[0] =
        ceshi20210224_17_B.DataTypeConversion46;
      ceshi20210224_17_B.ManualSwitch4[1] =
        ceshi20210224_17_B.DataTypeConversion47;
      ceshi20210224_17_B.ManualSwitch4[2] =
        ceshi20210224_17_B.DataTypeConversion40;
      ceshi20210224_17_B.ManualSwitch4[3] =
        ceshi20210224_17_B.DataTypeConversion41;
      ceshi20210224_17_B.ManualSwitch4[4] =
        ceshi20210224_17_B.DataTypeConversion42;
      ceshi20210224_17_B.ManualSwitch4[5] =
        ceshi20210224_17_B.DataTypeConversion43;
      ceshi20210224_17_B.ManualSwitch4[6] =
        ceshi20210224_17_B.DataTypeConversion44;
      ceshi20210224_17_B.ManualSwitch4[7] =
        ceshi20210224_17_B.DataTypeConversion45;
    }

    /* End of ManualSwitch: '<S21>/Manual Switch4' */
    /* Bit Packing: <S21>/CAN bit-packing 4 */
    {
      uint32_T *y = (uint32_T *)&ceshi20210224_17_B.CANbitpacking4;
      y[0] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[0] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[1] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[2] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[3] & 0xff) << 24));
      y[1] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[4] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[5] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[6] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch4[7] & 0xff) << 24));
    }

    /* S-Function (canac2objsendx): '<S21>/liuliangji_fuqiuyeweiji3402Send' */
    {
      /*------------ S-Function Block: <S21>/liuliangji_fuqiuyeweiji3402Send ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object2_mbx( 1, 3, 8, (uint8_T *)
          &ceshi20210224_17_B.CANbitpacking4);
        restoreInterrupts(flags);
        ;
      }
    }

    /* ManualSwitch: '<S21>/Manual Switch' */
    if (ceshi20210224_17_P.ManualSwitch_CurrentSetting_b == 1) {
      ceshi20210224_17_B.ManualSwitch_c[0] =
        ceshi20210224_17_B.DataTypeConversion_e;
      ceshi20210224_17_B.ManualSwitch_c[1] =
        ceshi20210224_17_B.DataTypeConversion1;
      ceshi20210224_17_B.ManualSwitch_c[2] =
        ceshi20210224_17_B.DataTypeConversion2;
      ceshi20210224_17_B.ManualSwitch_c[3] =
        ceshi20210224_17_B.DataTypeConversion3;
      ceshi20210224_17_B.ManualSwitch_c[4] =
        ceshi20210224_17_B.DataTypeConversion4;
      ceshi20210224_17_B.ManualSwitch_c[5] =
        ceshi20210224_17_B.DataTypeConversion5;
      ceshi20210224_17_B.ManualSwitch_c[6] =
        ceshi20210224_17_B.DataTypeConversion6;
      ceshi20210224_17_B.ManualSwitch_c[7] =
        ceshi20210224_17_B.DataTypeConversion7;
    } else {
      /* DataTypeConversion: '<S21>/Data Type Conversion8' incorporates:
       *  Constant: '<S21>/Constant8'
       */
      currentTime = floor(ceshi20210224_17_P.Constant8_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion8 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion8' */

      /* DataTypeConversion: '<S21>/Data Type Conversion9' incorporates:
       *  Constant: '<S21>/Constant9'
       */
      currentTime = floor(ceshi20210224_17_P.Constant9_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion9 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion9' */

      /* DataTypeConversion: '<S21>/Data Type Conversion10' incorporates:
       *  Constant: '<S21>/Constant10'
       */
      currentTime = floor(ceshi20210224_17_P.Constant10_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion10 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion10' */

      /* DataTypeConversion: '<S21>/Data Type Conversion11' incorporates:
       *  Constant: '<S21>/Constant11'
       */
      currentTime = floor(ceshi20210224_17_P.Constant11_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion11 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion11' */

      /* DataTypeConversion: '<S21>/Data Type Conversion12' incorporates:
       *  Constant: '<S21>/Constant12'
       */
      currentTime = floor(ceshi20210224_17_P.Constant12_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion12 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion12' */

      /* DataTypeConversion: '<S21>/Data Type Conversion13' incorporates:
       *  Constant: '<S21>/Constant13'
       */
      currentTime = floor(ceshi20210224_17_P.Constant13_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion13 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion13' */

      /* DataTypeConversion: '<S21>/Data Type Conversion14' incorporates:
       *  Constant: '<S21>/Constant14'
       */
      currentTime = floor(ceshi20210224_17_P.Constant14_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion14 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion14' */

      /* DataTypeConversion: '<S21>/Data Type Conversion15' incorporates:
       *  Constant: '<S21>/Constant15'
       */
      currentTime = floor(ceshi20210224_17_P.Constant15_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion15 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion15' */
      ceshi20210224_17_B.ManualSwitch_c[0] =
        ceshi20210224_17_B.DataTypeConversion8;
      ceshi20210224_17_B.ManualSwitch_c[1] =
        ceshi20210224_17_B.DataTypeConversion9;
      ceshi20210224_17_B.ManualSwitch_c[2] =
        ceshi20210224_17_B.DataTypeConversion10;
      ceshi20210224_17_B.ManualSwitch_c[3] =
        ceshi20210224_17_B.DataTypeConversion11;
      ceshi20210224_17_B.ManualSwitch_c[4] =
        ceshi20210224_17_B.DataTypeConversion12;
      ceshi20210224_17_B.ManualSwitch_c[5] =
        ceshi20210224_17_B.DataTypeConversion13;
      ceshi20210224_17_B.ManualSwitch_c[6] =
        ceshi20210224_17_B.DataTypeConversion14;
      ceshi20210224_17_B.ManualSwitch_c[7] =
        ceshi20210224_17_B.DataTypeConversion15;
    }

    /* End of ManualSwitch: '<S21>/Manual Switch' */
    /* Bit Packing: <S21>/CAN bit-packing  */
    {
      uint32_T *y = (uint32_T *)&ceshi20210224_17_B.CANbitpacking;
      y[0] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[0] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[1] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[2] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[3] & 0xff) << 24));
      y[1] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[4] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[5] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[6] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch_c[7] & 0xff) << 24));
    }

    /* S-Function (canac2objsendx): '<S21>/tonggai1808Send' */
    {
      /*------------ S-Function Block: <S21>/tonggai1808Send ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object_mbx( 1, 0, 8, (uint8_T *)
          &ceshi20210224_17_B.CANbitpacking);
        restoreInterrupts(flags);
        ;
      }
    }

    /* ManualSwitch: '<S21>/Manual Switch1' */
    if (ceshi20210224_17_P.ManualSwitch1_CurrentSetting == 1) {
      ceshi20210224_17_B.ManualSwitch1[0] =
        ceshi20210224_17_B.DataTypeConversion_e;
      ceshi20210224_17_B.ManualSwitch1[1] =
        ceshi20210224_17_B.DataTypeConversion1;
      ceshi20210224_17_B.ManualSwitch1[2] =
        ceshi20210224_17_B.DataTypeConversion2;
      ceshi20210224_17_B.ManualSwitch1[3] =
        ceshi20210224_17_B.DataTypeConversion3;
      ceshi20210224_17_B.ManualSwitch1[4] =
        ceshi20210224_17_B.DataTypeConversion4;
      ceshi20210224_17_B.ManualSwitch1[5] =
        ceshi20210224_17_B.DataTypeConversion5;
      ceshi20210224_17_B.ManualSwitch1[6] =
        ceshi20210224_17_B.DataTypeConversion6;
      ceshi20210224_17_B.ManualSwitch1[7] =
        ceshi20210224_17_B.DataTypeConversion7;
    } else {
      /* DataTypeConversion: '<S21>/Data Type Conversion22' incorporates:
       *  Constant: '<S21>/Constant22'
       */
      currentTime = floor(ceshi20210224_17_P.Constant22_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion22 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion22' */

      /* DataTypeConversion: '<S21>/Data Type Conversion23' incorporates:
       *  Constant: '<S21>/Constant23'
       */
      currentTime = floor(ceshi20210224_17_P.Constant23_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion23 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion23' */

      /* DataTypeConversion: '<S21>/Data Type Conversion16' incorporates:
       *  Constant: '<S21>/Constant16'
       */
      currentTime = floor(ceshi20210224_17_P.Constant16_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion16 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion16' */

      /* DataTypeConversion: '<S21>/Data Type Conversion17' incorporates:
       *  Constant: '<S21>/Constant17'
       */
      currentTime = floor(ceshi20210224_17_P.Constant17_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion17 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion17' */

      /* DataTypeConversion: '<S21>/Data Type Conversion18' incorporates:
       *  Constant: '<S21>/Constant18'
       */
      currentTime = floor(ceshi20210224_17_P.Constant18_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion18 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion18' */

      /* DataTypeConversion: '<S21>/Data Type Conversion19' incorporates:
       *  Constant: '<S21>/Constant19'
       */
      currentTime = floor(ceshi20210224_17_P.Constant19_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion19 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion19' */

      /* DataTypeConversion: '<S21>/Data Type Conversion20' incorporates:
       *  Constant: '<S21>/Constant20'
       */
      currentTime = floor(ceshi20210224_17_P.Constant20_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion20 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion20' */

      /* DataTypeConversion: '<S21>/Data Type Conversion21' incorporates:
       *  Constant: '<S21>/Constant21'
       */
      currentTime = floor(ceshi20210224_17_P.Constant21_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion21 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion21' */
      ceshi20210224_17_B.ManualSwitch1[0] =
        ceshi20210224_17_B.DataTypeConversion22;
      ceshi20210224_17_B.ManualSwitch1[1] =
        ceshi20210224_17_B.DataTypeConversion23;
      ceshi20210224_17_B.ManualSwitch1[2] =
        ceshi20210224_17_B.DataTypeConversion16;
      ceshi20210224_17_B.ManualSwitch1[3] =
        ceshi20210224_17_B.DataTypeConversion17;
      ceshi20210224_17_B.ManualSwitch1[4] =
        ceshi20210224_17_B.DataTypeConversion18;
      ceshi20210224_17_B.ManualSwitch1[5] =
        ceshi20210224_17_B.DataTypeConversion19;
      ceshi20210224_17_B.ManualSwitch1[6] =
        ceshi20210224_17_B.DataTypeConversion20;
      ceshi20210224_17_B.ManualSwitch1[7] =
        ceshi20210224_17_B.DataTypeConversion21;
    }

    /* End of ManualSwitch: '<S21>/Manual Switch1' */
    /* Bit Packing: <S21>/CAN bit-packing 1 */
    {
      uint32_T *y = (uint32_T *)&ceshi20210224_17_B.CANbitpacking1;
      y[0] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[0] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[1] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[2] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[3] & 0xff) << 24));
      y[1] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[4] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[5] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[6] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch1[7] & 0xff) << 24));
    }

    /* S-Function (canac2objsendx): '<S21>/tonggai3402Send' */
    {
      /*------------ S-Function Block: <S21>/tonggai3402Send ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object2_mbx( 1, 0, 8, (uint8_T *)
          &ceshi20210224_17_B.CANbitpacking1);
        restoreInterrupts(flags);
        ;
      }
    }

    /* ManualSwitch: '<S21>/Manual Switch3' */
    if (ceshi20210224_17_P.ManualSwitch3_CurrentSetting == 1) {
      ceshi20210224_17_B.ManualSwitch3[0] =
        ceshi20210224_17_B.DataTypeConversion_e;
      ceshi20210224_17_B.ManualSwitch3[1] =
        ceshi20210224_17_B.DataTypeConversion1;
      ceshi20210224_17_B.ManualSwitch3[2] =
        ceshi20210224_17_B.DataTypeConversion2;
      ceshi20210224_17_B.ManualSwitch3[3] =
        ceshi20210224_17_B.DataTypeConversion3;
      ceshi20210224_17_B.ManualSwitch3[4] =
        ceshi20210224_17_B.DataTypeConversion4;
      ceshi20210224_17_B.ManualSwitch3[5] =
        ceshi20210224_17_B.DataTypeConversion5;
      ceshi20210224_17_B.ManualSwitch3[6] =
        ceshi20210224_17_B.DataTypeConversion6;
      ceshi20210224_17_B.ManualSwitch3[7] =
        ceshi20210224_17_B.DataTypeConversion7;
    } else {
      /* DataTypeConversion: '<S21>/Data Type Conversion38' incorporates:
       *  Constant: '<S21>/Constant38'
       */
      currentTime = floor(ceshi20210224_17_P.Constant38_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion38 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion38' */

      /* DataTypeConversion: '<S21>/Data Type Conversion39' incorporates:
       *  Constant: '<S21>/Constant39'
       */
      currentTime = floor(ceshi20210224_17_P.Constant39_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion39 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion39' */

      /* DataTypeConversion: '<S21>/Data Type Conversion32' incorporates:
       *  Constant: '<S21>/Constant32'
       */
      currentTime = floor(ceshi20210224_17_P.Constant32_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion32 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion32' */

      /* DataTypeConversion: '<S21>/Data Type Conversion33' incorporates:
       *  Constant: '<S21>/Constant33'
       */
      currentTime = floor(ceshi20210224_17_P.Constant33_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion33 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion33' */

      /* DataTypeConversion: '<S21>/Data Type Conversion34' incorporates:
       *  Constant: '<S21>/Constant34'
       */
      currentTime = floor(ceshi20210224_17_P.Constant34_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion34 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion34' */

      /* DataTypeConversion: '<S21>/Data Type Conversion35' incorporates:
       *  Constant: '<S21>/Constant35'
       */
      currentTime = floor(ceshi20210224_17_P.Constant35_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion35 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion35' */

      /* DataTypeConversion: '<S21>/Data Type Conversion36' incorporates:
       *  Constant: '<S21>/Constant36'
       */
      currentTime = floor(ceshi20210224_17_P.Constant36_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion36 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion36' */

      /* DataTypeConversion: '<S21>/Data Type Conversion37' incorporates:
       *  Constant: '<S21>/Constant37'
       */
      currentTime = floor(ceshi20210224_17_P.Constant37_Value);
      if (rtIsNaN(currentTime) || rtIsInf(currentTime)) {
        currentTime = 0.0;
      } else {
        currentTime = fmod(currentTime, 256.0);
      }

      ceshi20210224_17_B.DataTypeConversion37 = (uint8_T)(currentTime < 0.0 ?
        (int32_T)(uint8_T)-(int8_T)(uint8_T)-currentTime : (int32_T)(uint8_T)
        currentTime);

      /* End of DataTypeConversion: '<S21>/Data Type Conversion37' */
      ceshi20210224_17_B.ManualSwitch3[0] =
        ceshi20210224_17_B.DataTypeConversion38;
      ceshi20210224_17_B.ManualSwitch3[1] =
        ceshi20210224_17_B.DataTypeConversion39;
      ceshi20210224_17_B.ManualSwitch3[2] =
        ceshi20210224_17_B.DataTypeConversion32;
      ceshi20210224_17_B.ManualSwitch3[3] =
        ceshi20210224_17_B.DataTypeConversion33;
      ceshi20210224_17_B.ManualSwitch3[4] =
        ceshi20210224_17_B.DataTypeConversion34;
      ceshi20210224_17_B.ManualSwitch3[5] =
        ceshi20210224_17_B.DataTypeConversion35;
      ceshi20210224_17_B.ManualSwitch3[6] =
        ceshi20210224_17_B.DataTypeConversion36;
      ceshi20210224_17_B.ManualSwitch3[7] =
        ceshi20210224_17_B.DataTypeConversion37;
    }

    /* End of ManualSwitch: '<S21>/Manual Switch3' */
    /* Bit Packing: <S21>/CAN bit-packing 3 */
    {
      uint32_T *y = (uint32_T *)&ceshi20210224_17_B.CANbitpacking3;
      y[0] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[0] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[1] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[2] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[3] & 0xff) << 24));
      y[1] =
        ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[4] & 0xff) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[5] & 0xff) << 8) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[6] & 0xff) << 16) |
         ((uint32_T)(ceshi20210224_17_B.ManualSwitch3[7] & 0xff) << 24));
    }

    /* S-Function (canac2objsendx): '<S21>/yalichuanganqi3402Send' */
    {
      /*------------ S-Function Block: <S21>/yalichuanganqi3402Send ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object2_mbx( 1, 2, 8, (uint8_T *)
          &ceshi20210224_17_B.CANbitpacking3);
        restoreInterrupts(flags);
        ;
      }
    }

    /* Level2 S-Function Block: '<S21>/Setup ' (canac2pcisetupx) */
    {
      SimStruct *rts = ceshi20210224_17_M->childSfunctions[2];
      sfcnOutputs(rts, 1);
    }
  }
}

/* Model update function */
void ceshi20210224_17_update(void)
{
  int_T idxDelay;
  real_T *lastU;
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    for (idxDelay = 0; idxDelay < 99; idxDelay++) {
      /* Update for Delay: '<S18>/Delay' */
      ceshi20210224_17_DW.Delay_DSTATE[idxDelay] =
        ceshi20210224_17_DW.Delay_DSTATE[idxDelay + 1];

      /* Update for Delay: '<S18>/Delay1' */
      ceshi20210224_17_DW.Delay1_DSTATE[idxDelay] =
        ceshi20210224_17_DW.Delay1_DSTATE[idxDelay + 1];
    }

    /* Update for Delay: '<S18>/Delay' */
    ceshi20210224_17_DW.Delay_DSTATE[99] = ceshi20210224_17_B.Gain4;

    /* Update for Delay: '<S18>/Delay1' */
    ceshi20210224_17_DW.Delay1_DSTATE[99] = ceshi20210224_17_B.Gain9;
  }

  /* Update for Derivative: '<Root>/Derivative' */
  if (ceshi20210224_17_DW.TimeStampA == (rtInf)) {
    ceshi20210224_17_DW.TimeStampA = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA;
  } else if (ceshi20210224_17_DW.TimeStampB == (rtInf)) {
    ceshi20210224_17_DW.TimeStampB = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB;
  } else if (ceshi20210224_17_DW.TimeStampA < ceshi20210224_17_DW.TimeStampB) {
    ceshi20210224_17_DW.TimeStampA = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA;
  } else {
    ceshi20210224_17_DW.TimeStampB = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB;
  }

  *lastU = ceshi20210224_17_B.right1;

  /* End of Update for Derivative: '<Root>/Derivative' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Update for Memory: '<Root>/Memory1' */
    ceshi20210224_17_DW.Memory1_PreviousInput = ceshi20210224_17_B.u_c;
  }

  /* Update for Derivative: '<Root>/Derivative4' */
  if (ceshi20210224_17_DW.TimeStampA_g == (rtInf)) {
    ceshi20210224_17_DW.TimeStampA_g = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_b;
  } else if (ceshi20210224_17_DW.TimeStampB_n == (rtInf)) {
    ceshi20210224_17_DW.TimeStampB_n = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_j;
  } else if (ceshi20210224_17_DW.TimeStampA_g < ceshi20210224_17_DW.TimeStampB_n)
  {
    ceshi20210224_17_DW.TimeStampA_g = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_b;
  } else {
    ceshi20210224_17_DW.TimeStampB_n = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_j;
  }

  *lastU = ceshi20210224_17_B.Gain8;

  /* End of Update for Derivative: '<Root>/Derivative4' */

  /* Update for RateLimiter: '<S20>/Rate Limiter1' */
  ceshi20210224_17_DW.PrevY = ceshi20210224_17_B.RateLimiter1;
  ceshi20210224_17_DW.LastMajorTime = ceshi20210224_17_M->Timing.t[0];
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    /* Update for Memory: '<Root>/Memory' */
    ceshi20210224_17_DW.Memory_PreviousInput = ceshi20210224_17_B.u_c;
  }

  /* Update for Derivative: '<Root>/Derivative2' */
  if (ceshi20210224_17_DW.TimeStampA_c == (rtInf)) {
    ceshi20210224_17_DW.TimeStampA_c = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_a;
  } else if (ceshi20210224_17_DW.TimeStampB_f == (rtInf)) {
    ceshi20210224_17_DW.TimeStampB_f = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_p;
  } else if (ceshi20210224_17_DW.TimeStampA_c < ceshi20210224_17_DW.TimeStampB_f)
  {
    ceshi20210224_17_DW.TimeStampA_c = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_a;
  } else {
    ceshi20210224_17_DW.TimeStampB_f = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_p;
  }

  *lastU = ceshi20210224_17_B.Gain5;

  /* End of Update for Derivative: '<Root>/Derivative2' */

  /* Update for RateLimiter: '<S19>/Rate Limiter' */
  ceshi20210224_17_DW.PrevY_h = ceshi20210224_17_B.RateLimiter;
  ceshi20210224_17_DW.LastMajorTime_c = ceshi20210224_17_M->Timing.t[0];

  /* Update for Derivative: '<Root>/Derivative1' */
  if (ceshi20210224_17_DW.TimeStampA_e == (rtInf)) {
    ceshi20210224_17_DW.TimeStampA_e = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_d;
  } else if (ceshi20210224_17_DW.TimeStampB_a == (rtInf)) {
    ceshi20210224_17_DW.TimeStampB_a = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_n;
  } else if (ceshi20210224_17_DW.TimeStampA_e < ceshi20210224_17_DW.TimeStampB_a)
  {
    ceshi20210224_17_DW.TimeStampA_e = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_d;
  } else {
    ceshi20210224_17_DW.TimeStampB_a = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_n;
  }

  *lastU = ceshi20210224_17_B.s2;

  /* End of Update for Derivative: '<Root>/Derivative1' */

  /* Update for Derivative: '<Root>/Derivative3' */
  if (ceshi20210224_17_DW.TimeStampA_m == (rtInf)) {
    ceshi20210224_17_DW.TimeStampA_m = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_i;
  } else if (ceshi20210224_17_DW.TimeStampB_p == (rtInf)) {
    ceshi20210224_17_DW.TimeStampB_p = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_b;
  } else if (ceshi20210224_17_DW.TimeStampA_m < ceshi20210224_17_DW.TimeStampB_p)
  {
    ceshi20210224_17_DW.TimeStampA_m = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeA_i;
  } else {
    ceshi20210224_17_DW.TimeStampB_p = ceshi20210224_17_M->Timing.t[0];
    lastU = &ceshi20210224_17_DW.LastUAtTimeB_b;
  }

  *lastU = ceshi20210224_17_B.s3;

  /* End of Update for Derivative: '<Root>/Derivative3' */
  if (rtmIsMajorTimeStep(ceshi20210224_17_M)) {
    rt_ertODEUpdateContinuousStates(&ceshi20210224_17_M->solverInfo);
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
  if (!(++ceshi20210224_17_M->Timing.clockTick0)) {
    ++ceshi20210224_17_M->Timing.clockTickH0;
  }

  ceshi20210224_17_M->Timing.t[0] = rtsiGetSolverStopTime
    (&ceshi20210224_17_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++ceshi20210224_17_M->Timing.clockTick1)) {
      ++ceshi20210224_17_M->Timing.clockTickH1;
    }

    ceshi20210224_17_M->Timing.t[1] = ceshi20210224_17_M->Timing.clockTick1 *
      ceshi20210224_17_M->Timing.stepSize1 +
      ceshi20210224_17_M->Timing.clockTickH1 *
      ceshi20210224_17_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void ceshi20210224_17_derivatives(void)
{
  XDot_ceshi20210224_17_T *_rtXdot;
  _rtXdot = ((XDot_ceshi20210224_17_T *) ceshi20210224_17_M->derivs);

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design1' */
  _rtXdot->AnalogFilterDesign1_CSTATE = 0.0;
  _rtXdot->AnalogFilterDesign1_CSTATE +=
    ceshi20210224_17_P.AnalogFilterDesign1_A *
    ceshi20210224_17_X.AnalogFilterDesign1_CSTATE;
  _rtXdot->AnalogFilterDesign1_CSTATE +=
    ceshi20210224_17_P.AnalogFilterDesign1_B * ceshi20210224_17_B.Derivative1;

  /* Derivatives for StateSpace: '<Root>/Analog Filter Design2' */
  _rtXdot->AnalogFilterDesign2_CSTATE = 0.0;
  _rtXdot->AnalogFilterDesign2_CSTATE +=
    ceshi20210224_17_P.AnalogFilterDesign2_A *
    ceshi20210224_17_X.AnalogFilterDesign2_CSTATE;
  _rtXdot->AnalogFilterDesign2_CSTATE +=
    ceshi20210224_17_P.AnalogFilterDesign2_B * ceshi20210224_17_B.Derivative3;

  /* Derivatives for StateSpace: '<Root>/s' */
  _rtXdot->s_CSTATE = 0.0;
  _rtXdot->s_CSTATE += ceshi20210224_17_P.s_A * ceshi20210224_17_X.s_CSTATE;
  _rtXdot->s_CSTATE += ceshi20210224_17_P.s_B * ceshi20210224_17_B.Add1;

  /* Derivatives for StateSpace: '<Root>/s1' */
  _rtXdot->s1_CSTATE = 0.0;
  _rtXdot->s1_CSTATE += ceshi20210224_17_P.s1_A * ceshi20210224_17_X.s1_CSTATE;
  _rtXdot->s1_CSTATE += ceshi20210224_17_P.s1_B * ceshi20210224_17_B.Add2;

  /* Derivatives for StateSpace: '<Root>/s4' */
  _rtXdot->s4_CSTATE = 0.0;
  _rtXdot->s4_CSTATE += ceshi20210224_17_P.s4_A * ceshi20210224_17_X.s4_CSTATE;
  _rtXdot->s4_CSTATE += ceshi20210224_17_P.s4_B * ceshi20210224_17_B.right1;

  /* Derivatives for Enabled SubSystem: '<Root>/Subsystem1' */
  ceshi20210224_1_Subsystem_Deriv(ceshi20210224_17_B.Gain7,
    &ceshi20210224_17_DW.Subsystem1, &_rtXdot->Subsystem1);

  /* End of Derivatives for SubSystem: '<Root>/Subsystem1' */

  /* Derivatives for Enabled SubSystem: '<Root>/Subsystem' */
  ceshi20210224_1_Subsystem_Deriv(ceshi20210224_17_B.Gain3,
    &ceshi20210224_17_DW.Subsystem_d, &_rtXdot->Subsystem_d);

  /* End of Derivatives for SubSystem: '<Root>/Subsystem' */

  /* Derivatives for StateSpace: '<Root>/s2' */
  _rtXdot->s2_CSTATE = 0.0;
  _rtXdot->s2_CSTATE += ceshi20210224_17_P.s2_A * ceshi20210224_17_X.s2_CSTATE;
  _rtXdot->s2_CSTATE += ceshi20210224_17_P.s2_B * ceshi20210224_17_B.right1;

  /* Derivatives for StateSpace: '<Root>/s3' */
  _rtXdot->s3_CSTATE = 0.0;
  _rtXdot->s3_CSTATE += ceshi20210224_17_P.s3_A * ceshi20210224_17_X.s3_CSTATE;
  _rtXdot->s3_CSTATE += ceshi20210224_17_P.s3_B * ceshi20210224_17_B.right1;
}

/* Model initialize function */
void ceshi20210224_17_initialize(void)
{
  /* Start for Constant: '<Root>/c' */
  ceshi20210224_17_B.c = ceshi20210224_17_P.c_Value;

  /* Start for Constant: '<Root>/锁定' */
  ceshi20210224_17_B.u = ceshi20210224_17_P._Value;

  /* Start for Constant: '<Root>/解锁' */
  ceshi20210224_17_B.u_g = ceshi20210224_17_P._Value_k;

  /* Start for Constant: '<Root>/旋松' */
  ceshi20210224_17_B.u_g4 = ceshi20210224_17_P._Value_f;

  /* Start for Constant: '<Root>/预旋松' */
  ceshi20210224_17_B.u_h = ceshi20210224_17_P._Value_f1;

  /* Start for Constant: '<Root>/旋紧' */
  ceshi20210224_17_B.u_gp = ceshi20210224_17_P._Value_n;

  /* Level2 S-Function Block: '<Root>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/启停' */
  ceshi20210224_17_B.u_c = ceshi20210224_17_P._Value_n5;

  /* Start for Constant: '<Root>/开1关0' */
  ceshi20210224_17_B.u0 = ceshi20210224_17_P.u0_Value;

  /* Start for Constant: '<Root>/阀开口' */
  ceshi20210224_17_B.u_i = ceshi20210224_17_P._Value_l;

  /* Start for Enabled SubSystem: '<Root>/Subsystem2' */
  ceshi20210224_17_DW.Subsystem2_MODE = false;

  /* End of Start for SubSystem: '<Root>/Subsystem2' */

  /* Start for Enabled SubSystem: '<Root>/Subsystem3' */
  ceshi20210224_17_DW.Subsystem3_MODE = false;

  /* End of Start for SubSystem: '<Root>/Subsystem3' */

  /* Start for Enabled SubSystem: '<Root>/Subsystem4' */
  ceshi20210224_17_DW.Subsystem4_MODE = false;

  /* End of Start for SubSystem: '<Root>/Subsystem4' */

  /* Start for Enabled SubSystem: '<Root>/Subsystem1' */
  ceshi20210224_1_Subsystem_Start(&ceshi20210224_17_DW.Subsystem1);

  /* End of Start for SubSystem: '<Root>/Subsystem1' */

  /* Start for Enabled SubSystem: '<Root>/Subsystem' */
  ceshi20210224_1_Subsystem_Start(&ceshi20210224_17_DW.Subsystem_d);

  /* End of Start for SubSystem: '<Root>/Subsystem' */

  /* Start for Constant: '<Root>/比例减压阀1' */
  ceshi20210224_17_B.u_hw = ceshi20210224_17_P.u_Value_i;

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S5>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s1"));
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s2"));
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s3"));
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s4"));
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s5"));
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s6"));
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s7"));
        rl32eAddSignal(1, rl32eGetSignalNo("Product/s8"));
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Product/s1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &ceshi20210224_17_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S6>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s5"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s6"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s7"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s8"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s9"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s10"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s11"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s12"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s13"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s14"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s15"));
        rl32eAddSignal(2, rl32eGetSignalNo("chuanganqi1/Product/s16"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s5"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s6"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s7"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s8"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s9"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s10"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s11"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s12"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s13"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("chuanganqi1/Product/s14"),
          "%15.6f");
        rl32eSetScope(2, 4, 250);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("chuanganqi1/Product/s5"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &ceshi20210224_17_DW.SFunction_IWORK_g.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S7>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("right1"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("right1"),"%15.6f");
        rl32eSetScope(3, 4, 250);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("right1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &ceshi20210224_17_DW.SFunction_IWORK_n.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S8>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo(
          "TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1/s1"));
        rl32eAddSignal(4, rl32eGetSignalNo(
          "TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1/s2"));
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
          "TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
          "TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1/s2"),
          "%15.6f");
        rl32eSetScope(4, 4, 250);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo(
          "TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1/s1"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 0.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 0.0);
        xpceScopeAcqOK(4, &ceshi20210224_17_DW.SFunction_IWORK_i.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S9>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table1"));
        rl32eAddSignal(5, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table3"));
        rl32eAddSignal(5, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table5"));
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "chuanganqi1/1-D Lookup Table1"),"%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "chuanganqi1/1-D Lookup Table3"),"%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "chuanganqi1/1-D Lookup Table5"),"%15.6f");
        rl32eSetScope(5, 4, 250);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 0.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5, &ceshi20210224_17_DW.SFunction_IWORK_k.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* S-Function Block: <S10>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table8"));
        rl32eAddSignal(6, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table9"));
        rl32eAddSignal(6, rl32eGetSignalNo("chuanganqi1/Data Type Conversion57"));
        rl32eAddSignal(6, rl32eGetSignalNo("chuanganqi1/Data Type Conversion58"));
        rl32eAddSignal(6, rl32eGetSignalNo("chuanganqi1/Data Type Conversion59"));
        rl32eAddSignal(6, rl32eGetSignalNo("chuanganqi1/Data Type Conversion60"));
        rl32eAddSignal(6, rl32eGetSignalNo("chuanganqi1/Data Type Conversion61"));
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo(
          "chuanganqi1/1-D Lookup Table8"),"%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo(
          "chuanganqi1/1-D Lookup Table9"),"%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo(
          "chuanganqi1/Data Type Conversion57"),"%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo(
          "chuanganqi1/Data Type Conversion58"),"%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo(
          "chuanganqi1/Data Type Conversion59"),"%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo(
          "chuanganqi1/Data Type Conversion60"),"%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo(
          "chuanganqi1/Data Type Conversion61"),"%15.6f");
        rl32eSetScope(6, 4, 250);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table8"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 1, 0.0);
        rl32eSetTargetScope(6, 11, 0.0);
        rl32eSetTargetScope(6, 10, 0.0);
        xpceScopeAcqOK(6, &ceshi20210224_17_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* S-Function Block: <S23>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(7)) == 0) {
      if ((i = rl32eDefScope(7,2)) != 0) {
        printf("Error creating scope 7\n");
      } else {
        rl32eAddSignal(7, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table7"));
        rl32eSetTargetScopeSigFt(7,rl32eGetSignalNo(
          "chuanganqi1/1-D Lookup Table7"),"%15.6f");
        rl32eSetScope(7, 4, 250);
        rl32eSetScope(7, 5, 0);
        rl32eSetScope(7, 6, 1);
        rl32eSetScope(7, 0, 0);
        rl32eSetScope(7, 3, rl32eGetSignalNo("chuanganqi1/1-D Lookup Table7"));
        rl32eSetScope(7, 1, 0.0);
        rl32eSetScope(7, 2, 0);
        rl32eSetScope(7, 9, 0);
        rl32eSetTargetScope(7, 1, 0.0);
        rl32eSetTargetScope(7, 11, 0.0);
        rl32eSetTargetScope(7, 10, 0.0);
        xpceScopeAcqOK(7, &ceshi20210224_17_DW.SFunction_IWORK_p.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* Bit Packing: <S21>/CAN bit-packing 2 */
  ceshi20210224_17_B.CANbitpacking2 = 0.0;

  /* Bit Packing: <S21>/CAN bit-packing 4 */
  ceshi20210224_17_B.CANbitpacking4 = 0.0;

  /* Bit Packing: <S21>/CAN bit-packing  */
  ceshi20210224_17_B.CANbitpacking = 0.0;

  /* Bit Packing: <S21>/CAN bit-packing 1 */
  ceshi20210224_17_B.CANbitpacking1 = 0.0;

  /* Bit Packing: <S21>/CAN bit-packing 3 */
  ceshi20210224_17_B.CANbitpacking3 = 0.0;

  /* Level2 S-Function Block: '<S21>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  ceshi20210224_17_PrevZCX.Subsystem_Trig_ZCE = POS_ZCSIG;
  ceshi20210224_17_PrevZCX.Subsystem1.Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  ceshi20210224_17_PrevZCX.Subsystem_d.Integrator_Reset_ZCE =
    UNINITIALIZED_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design1' */
    ceshi20210224_17_X.AnalogFilterDesign1_CSTATE =
      ceshi20210224_17_P.AnalogFilterDesign1_X0;

    /* InitializeConditions for StateSpace: '<Root>/Analog Filter Design2' */
    ceshi20210224_17_X.AnalogFilterDesign2_CSTATE =
      ceshi20210224_17_P.AnalogFilterDesign2_X0;

    /* InitializeConditions for StateSpace: '<Root>/s' */
    ceshi20210224_17_X.s_CSTATE = ceshi20210224_17_P.s_X0;
    for (i = 0; i < 100; i++) {
      /* InitializeConditions for Delay: '<S18>/Delay' */
      ceshi20210224_17_DW.Delay_DSTATE[i] =
        ceshi20210224_17_P.Delay_InitialCondition;

      /* InitializeConditions for Delay: '<S18>/Delay1' */
      ceshi20210224_17_DW.Delay1_DSTATE[i] =
        ceshi20210224_17_P.Delay1_InitialCondition;
    }

    /* InitializeConditions for StateSpace: '<Root>/s1' */
    ceshi20210224_17_X.s1_CSTATE = ceshi20210224_17_P.s1_X0;

    /* InitializeConditions for StateSpace: '<Root>/s4' */
    ceshi20210224_17_X.s4_CSTATE = ceshi20210224_17_P.s4_X0;

    /* InitializeConditions for Derivative: '<Root>/Derivative' */
    ceshi20210224_17_DW.TimeStampA = (rtInf);
    ceshi20210224_17_DW.TimeStampB = (rtInf);

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    ceshi20210224_17_DW.Memory1_PreviousInput = ceshi20210224_17_P.Memory1_X0;

    /* InitializeConditions for Derivative: '<Root>/Derivative4' */
    ceshi20210224_17_DW.TimeStampA_g = (rtInf);
    ceshi20210224_17_DW.TimeStampB_n = (rtInf);

    /* InitializeConditions for RateLimiter: '<S20>/Rate Limiter1' */
    ceshi20210224_17_DW.LastMajorTime = (rtInf);

    /* InitializeConditions for Memory: '<Root>/Memory' */
    ceshi20210224_17_DW.Memory_PreviousInput = ceshi20210224_17_P.Memory_X0;

    /* InitializeConditions for Derivative: '<Root>/Derivative2' */
    ceshi20210224_17_DW.TimeStampA_c = (rtInf);
    ceshi20210224_17_DW.TimeStampB_f = (rtInf);

    /* InitializeConditions for RateLimiter: '<S19>/Rate Limiter' */
    ceshi20210224_17_DW.LastMajorTime_c = (rtInf);

    /* InitializeConditions for StateSpace: '<Root>/s2' */
    ceshi20210224_17_X.s2_CSTATE = ceshi20210224_17_P.s2_X0;

    /* InitializeConditions for Derivative: '<Root>/Derivative1' */
    ceshi20210224_17_DW.TimeStampA_e = (rtInf);
    ceshi20210224_17_DW.TimeStampB_a = (rtInf);

    /* InitializeConditions for StateSpace: '<Root>/s3' */
    ceshi20210224_17_X.s3_CSTATE = ceshi20210224_17_P.s3_X0;

    /* InitializeConditions for Derivative: '<Root>/Derivative3' */
    ceshi20210224_17_DW.TimeStampA_m = (rtInf);
    ceshi20210224_17_DW.TimeStampB_p = (rtInf);

    /* SystemInitialize for Chart: '<Root>/Chart' */
    ceshi20210224_17_DW.sfEvent_c = ceshi20210224_17_CALL_EVENT;
    ceshi20210224_17_DW.temporalCounter_i1 = 0U;
    ceshi20210224_17_DW.is_active_c3_ceshi20210224_17 = 0U;
    ceshi20210224_17_DW.is_c3_ceshi20210224_17 = ceshi2021022_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart3' */
    ceshi20210224_17_DW.sfEvent = ceshi20210224_17_CALL_EVENT;
    ceshi20210224_17_DW.is_active_c4_ceshi20210224_17 = 0U;
    ceshi20210224_17_DW.is_c4_ceshi20210224_17 = ceshi2021022_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart2' */
    ceshi20210224_17_DW.sfEvent_b = ceshi20210224_17_CALL_EVENT;
    ceshi20210224_17_DW.is_active_c2_ceshi20210224_17 = 0U;
    ceshi20210224_17_DW.is_c2_ceshi20210224_17 = ceshi2021022_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem2' */
    /* SystemInitialize for Outport: '<S13>/Out1' */
    ceshi20210224_17_B.Add_n = ceshi20210224_17_P.Out1_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/Subsystem2' */

    /* SystemInitialize for Triggered SubSystem: '<S18>/Subsystem' */
    /* SystemInitialize for Outport: '<S22>/Out1' */
    ceshi20210224_17_B.Add = ceshi20210224_17_P.Out1_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S18>/Subsystem' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem3' */
    /* SystemInitialize for Outport: '<S14>/Out1' */
    ceshi20210224_17_B.Add_c = ceshi20210224_17_P.Out1_Y0_c;

    /* End of SystemInitialize for SubSystem: '<Root>/Subsystem3' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem4' */
    /* SystemInitialize for Outport: '<S15>/Out1' */
    ceshi20210224_17_B.In1 = ceshi20210224_17_P.Out1_Y0_n;

    /* End of SystemInitialize for SubSystem: '<Root>/Subsystem4' */

    /* SystemInitialize for Chart: '<Root>/Chart1' */
    ceshi20210224_17_DW.sfEvent_a = ceshi20210224_17_CALL_EVENT;
    ceshi20210224_17_DW.is_active_c1_ceshi20210224_17 = 0U;
    ceshi20210224_17_DW.is_c1_ceshi20210224_17 = ceshi2021022_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem1' */
    ceshi20210224_17_Subsystem_Init(&ceshi20210224_17_B.Subsystem1,
      (P_Subsystem_ceshi20210224_17_T *)&ceshi20210224_17_P.Subsystem1,
      &ceshi20210224_17_X.Subsystem1);

    /* End of SystemInitialize for SubSystem: '<Root>/Subsystem1' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem' */
    ceshi20210224_17_Subsystem_Init(&ceshi20210224_17_B.Subsystem_d,
      (P_Subsystem_ceshi20210224_17_T *)&ceshi20210224_17_P.Subsystem_d,
      &ceshi20210224_17_X.Subsystem_d);

    /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */
  }
}

/* Model terminate function */
void ceshi20210224_17_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S21>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = ceshi20210224_17_M->childSfunctions[2];
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
  ceshi20210224_17_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ceshi20210224_17_update();
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
  ceshi20210224_17_initialize();
}

void MdlTerminate(void)
{
  ceshi20210224_17_terminate();
}

/* Registration function */
RT_MODEL_ceshi20210224_17_T *ceshi20210224_17(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ceshi20210224_17_M, 0,
                sizeof(RT_MODEL_ceshi20210224_17_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ceshi20210224_17_M->solverInfo,
                          &ceshi20210224_17_M->Timing.simTimeStep);
    rtsiSetTPtr(&ceshi20210224_17_M->solverInfo, &rtmGetTPtr(ceshi20210224_17_M));
    rtsiSetStepSizePtr(&ceshi20210224_17_M->solverInfo,
                       &ceshi20210224_17_M->Timing.stepSize0);
    rtsiSetdXPtr(&ceshi20210224_17_M->solverInfo, &ceshi20210224_17_M->derivs);
    rtsiSetContStatesPtr(&ceshi20210224_17_M->solverInfo, (real_T **)
                         &ceshi20210224_17_M->contStates);
    rtsiSetNumContStatesPtr(&ceshi20210224_17_M->solverInfo,
      &ceshi20210224_17_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ceshi20210224_17_M->solverInfo,
      &ceshi20210224_17_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ceshi20210224_17_M->solverInfo,
      &ceshi20210224_17_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ceshi20210224_17_M->solverInfo,
      &ceshi20210224_17_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ceshi20210224_17_M->solverInfo, (&rtmGetErrorStatus
      (ceshi20210224_17_M)));
    rtsiSetRTModelPtr(&ceshi20210224_17_M->solverInfo, ceshi20210224_17_M);
  }

  rtsiSetSimTimeStep(&ceshi20210224_17_M->solverInfo, MAJOR_TIME_STEP);
  ceshi20210224_17_M->intgData.y = ceshi20210224_17_M->odeY;
  ceshi20210224_17_M->intgData.f[0] = ceshi20210224_17_M->odeF[0];
  ceshi20210224_17_M->intgData.f[1] = ceshi20210224_17_M->odeF[1];
  ceshi20210224_17_M->intgData.f[2] = ceshi20210224_17_M->odeF[2];
  ceshi20210224_17_M->intgData.f[3] = ceshi20210224_17_M->odeF[3];
  ceshi20210224_17_M->contStates = ((real_T *) &ceshi20210224_17_X);
  rtsiSetSolverData(&ceshi20210224_17_M->solverInfo, (void *)
                    &ceshi20210224_17_M->intgData);
  rtsiSetSolverName(&ceshi20210224_17_M->solverInfo,"ode4");
  ceshi20210224_17_M->solverInfoPtr = (&ceshi20210224_17_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ceshi20210224_17_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    ceshi20210224_17_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ceshi20210224_17_M->Timing.sampleTimes =
      (&ceshi20210224_17_M->Timing.sampleTimesArray[0]);
    ceshi20210224_17_M->Timing.offsetTimes =
      (&ceshi20210224_17_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ceshi20210224_17_M->Timing.sampleTimes[0] = (0.0);
    ceshi20210224_17_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    ceshi20210224_17_M->Timing.offsetTimes[0] = (0.0);
    ceshi20210224_17_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ceshi20210224_17_M, &ceshi20210224_17_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ceshi20210224_17_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    ceshi20210224_17_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ceshi20210224_17_M, -1);
  ceshi20210224_17_M->Timing.stepSize0 = 0.01;
  ceshi20210224_17_M->Timing.stepSize1 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    ceshi20210224_17_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ceshi20210224_17_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(ceshi20210224_17_M->rtwLogInfo, (NULL));
    rtliSetLogT(ceshi20210224_17_M->rtwLogInfo, "tout");
    rtliSetLogX(ceshi20210224_17_M->rtwLogInfo, "");
    rtliSetLogXFinal(ceshi20210224_17_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(ceshi20210224_17_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(ceshi20210224_17_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(ceshi20210224_17_M->rtwLogInfo, 0);
    rtliSetLogDecimation(ceshi20210224_17_M->rtwLogInfo, 1);
    rtliSetLogY(ceshi20210224_17_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(ceshi20210224_17_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(ceshi20210224_17_M->rtwLogInfo, (NULL));
  }

  ceshi20210224_17_M->solverInfoPtr = (&ceshi20210224_17_M->solverInfo);
  ceshi20210224_17_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&ceshi20210224_17_M->solverInfo, 0.01);
  rtsiSetSolverMode(&ceshi20210224_17_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ceshi20210224_17_M->blockIO = ((void *) &ceshi20210224_17_B);
  (void) memset(((void *) &ceshi20210224_17_B), 0,
                sizeof(B_ceshi20210224_17_T));

  /* parameters */
  ceshi20210224_17_M->defaultParam = ((real_T *)&ceshi20210224_17_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &ceshi20210224_17_X;
    ceshi20210224_17_M->contStates = (x);
    (void) memset((void *)&ceshi20210224_17_X, 0,
                  sizeof(X_ceshi20210224_17_T));
  }

  /* states (dwork) */
  ceshi20210224_17_M->dwork = ((void *) &ceshi20210224_17_DW);
  (void) memset((void *)&ceshi20210224_17_DW, 0,
                sizeof(DW_ceshi20210224_17_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  ceshi20210224_17_InitializeDataMapInfo(ceshi20210224_17_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &ceshi20210224_17_M->NonInlinedSFcns.sfcnInfo;
    ceshi20210224_17_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(ceshi20210224_17_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &ceshi20210224_17_M->Sizes.numSampTimes);
    ceshi20210224_17_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (ceshi20210224_17_M)[0]);
    ceshi20210224_17_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (ceshi20210224_17_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,ceshi20210224_17_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ceshi20210224_17_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ceshi20210224_17_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (ceshi20210224_17_M));
    rtssSetStepSizePtr(sfcnInfo, &ceshi20210224_17_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(ceshi20210224_17_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ceshi20210224_17_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &ceshi20210224_17_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &ceshi20210224_17_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &ceshi20210224_17_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ceshi20210224_17_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ceshi20210224_17_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &ceshi20210224_17_M->solverInfoPtr);
  }

  ceshi20210224_17_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&ceshi20210224_17_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  3*sizeof(SimStruct));
    ceshi20210224_17_M->childSfunctions =
      (&ceshi20210224_17_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    ceshi20210224_17_M->childSfunctions[0] =
      (&ceshi20210224_17_M->NonInlinedSFcns.childSFunctions[0]);
    ceshi20210224_17_M->childSfunctions[1] =
      (&ceshi20210224_17_M->NonInlinedSFcns.childSFunctions[1]);
    ceshi20210224_17_M->childSfunctions[2] =
      (&ceshi20210224_17_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: ceshi20210224_17/<Root>/PCI1716DIO1 (pci1716DIO) */
    {
      SimStruct *rts = ceshi20210224_17_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &ceshi20210224_17_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, ceshi20210224_17_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ceshi20210224_17_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &ceshi20210224_17_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 18);
        ssSetPortInfoForInputs(rts,
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = &ceshi20210224_17_B.c;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = &ceshi20210224_17_B.u;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = &ceshi20210224_17_B.u_g;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = &ceshi20210224_17_B.ManualSwitch;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = &ceshi20210224_17_B.u_gp;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 8);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ceshi20210224_17_B.PCI1716DIO1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            ceshi20210224_17_B.PCI1716DIO1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1716DIO1");
      ssSetPath(rts, "ceshi20210224_17/PCI1716DIO1");
      ssSetRTModel(rts,ceshi20210224_17_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ceshi20210224_17_P.PCI1716DIO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ceshi20210224_17_P.PCI1716DIO1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &ceshi20210224_17_DW.PCI1716DIO1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ceshi20210224_17_DW.PCI1716DIO1_IWORK[0]);
      }

      /* registration */
      pci1716DIO(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 0);
      _ssSetInputPortConnected(rts, 1, 0);
      _ssSetInputPortConnected(rts, 2, 0);
      _ssSetInputPortConnected(rts, 3, 0);
      _ssSetInputPortConnected(rts, 4, 0);
      _ssSetInputPortConnected(rts, 5, 0);
      _ssSetInputPortConnected(rts, 6, 0);
      _ssSetInputPortConnected(rts, 7, 0);
      _ssSetInputPortConnected(rts, 8, 0);
      _ssSetInputPortConnected(rts, 9, 0);
      _ssSetInputPortConnected(rts, 10, 0);
      _ssSetInputPortConnected(rts, 11, 0);
      _ssSetInputPortConnected(rts, 12, 0);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);
      _ssSetInputPortConnected(rts, 16, 1);
      _ssSetInputPortConnected(rts, 17, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
      ssSetInputPortBufferDstPort(rts, 16, -1);
      ssSetInputPortBufferDstPort(rts, 17, -1);
    }

    /* Level2 S-Function Block: ceshi20210224_17/<Root>/PCI-6208A DA  (da6208) */
    {
      SimStruct *rts = ceshi20210224_17_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &ceshi20210224_17_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, ceshi20210224_17_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ceshi20210224_17_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &ceshi20210224_17_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts,
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &ceshi20210224_17_B.Gain;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &ceshi20210224_17_B.Gain1;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &ceshi20210224_17_B.Switch1_n;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &ceshi20210224_17_B.Switch2_k;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs6;
          sfcnUPtrs[0] = (real_T*)&ceshi20210224_17_RGND;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.UPtrs7;
          sfcnUPtrs[0] = &ceshi20210224_17_B.u_hw;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6208A DA ");
      ssSetPath(rts, "ceshi20210224_17/PCI-6208A DA ");
      ssSetRTModel(rts,ceshi20210224_17_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ceshi20210224_17_P.PCI6208ADA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ceshi20210224_17_P.PCI6208ADA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ceshi20210224_17_P.PCI6208ADA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ceshi20210224_17_P.PCI6208ADA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ceshi20210224_17_P.PCI6208ADA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ceshi20210224_17_P.PCI6208ADA_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &ceshi20210224_17_DW.PCI6208ADA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ceshi20210224_17_DW.PCI6208ADA_IWORK[0]);
      }

      /* registration */
      da6208(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 0);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 0);
      _ssSetInputPortConnected(rts, 6, 0);
      _ssSetInputPortConnected(rts, 7, 1);

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

    /* Level2 S-Function Block: ceshi20210224_17/<S21>/Setup  (canac2pcisetupx) */
    {
      SimStruct *rts = ceshi20210224_17_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = ceshi20210224_17_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = ceshi20210224_17_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = ceshi20210224_17_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &ceshi20210224_17_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, ceshi20210224_17_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &ceshi20210224_17_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &ceshi20210224_17_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &ceshi20210224_17_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "ceshi20210224_17/chuanganqi1/Setup ");
      ssSetRTModel(rts,ceshi20210224_17_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &ceshi20210224_17_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)ceshi20210224_17_P.Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)ceshi20210224_17_P.Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)ceshi20210224_17_P.Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)ceshi20210224_17_P.Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)ceshi20210224_17_P.Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)ceshi20210224_17_P.Setup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)ceshi20210224_17_P.Setup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)ceshi20210224_17_P.Setup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)ceshi20210224_17_P.Setup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)ceshi20210224_17_P.Setup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)ceshi20210224_17_P.Setup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)ceshi20210224_17_P.Setup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)ceshi20210224_17_P.Setup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)ceshi20210224_17_P.Setup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)ceshi20210224_17_P.Setup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)ceshi20210224_17_P.Setup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)ceshi20210224_17_P.Setup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)ceshi20210224_17_P.Setup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)ceshi20210224_17_P.Setup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)ceshi20210224_17_P.Setup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)ceshi20210224_17_P.Setup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)ceshi20210224_17_P.Setup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)ceshi20210224_17_P.Setup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)ceshi20210224_17_P.Setup_P24_Size);
      }

      /* registration */
      canac2pcisetupx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  ceshi20210224_17_M->Sizes.numContStates = (9);/* Number of continuous states */
  ceshi20210224_17_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  ceshi20210224_17_M->Sizes.numY = (0);/* Number of model outputs */
  ceshi20210224_17_M->Sizes.numU = (0);/* Number of model inputs */
  ceshi20210224_17_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ceshi20210224_17_M->Sizes.numSampTimes = (2);/* Number of sample times */
  ceshi20210224_17_M->Sizes.numBlocks = (387);/* Number of blocks */
  ceshi20210224_17_M->Sizes.numBlockIO = (236);/* Number of block outputs */
  ceshi20210224_17_M->Sizes.numBlockPrms = (480345);/* Sum of parameter "widths" */
  return ceshi20210224_17_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
