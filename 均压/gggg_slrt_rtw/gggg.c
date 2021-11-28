/*
 * gggg.c
 *
 * Code generation for model "gggg".
 *
 * Model version              : 1.108
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 26 00:09:20 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "gggg_capi.h"
#include "gggg.h"
#include "gggg_private.h"

/* Named constants for Chart: '<S2>/Chart' */
#define gggg_CALL_EVENT_l              (-1)
#define gggg_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define gggg_IN_on1                    ((uint8_T)1U)
#define gggg_IN_on3                    ((uint8_T)2U)
#define gggg_IN_on4                    ((uint8_T)3U)
#define gggg_IN_route                  ((uint8_T)1U)

/* Named constants for Chart: '<S2>/Chart1' */
#define gggg_IN_enable                 ((uint8_T)1U)

/* Block signals (auto storage) */
B_gggg_T gggg_B;

/* Continuous states */
X_gggg_T gggg_X;

/* Block states (auto storage) */
DW_gggg_T gggg_DW;

/* Real-time model */
RT_MODEL_gggg_T gggg_M_;
RT_MODEL_gggg_T *const gggg_M = &gggg_M_;

/* Forward declaration for local functions */
static void gggg_dec2bin(uint8_T d, char_T s_data[], int32_T s_sizes[2]);

/* Forward declaration for local functions */
static void gggg_dec2bin_i(real_T d, char_T s_data[], int32_T s_sizes[2]);

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
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  gggg_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  gggg_output();
  gggg_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  gggg_output();
  gggg_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  gggg_output();
  gggg_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for atomic system:
 *    '<S2>/DI'
 *    '<S2>/DI1'
 */
void gggg_DI(uint8_T rtu_a, B_DI_gggg_T *localB)
{
  char_T BASE[8];
  int32_T a2;
  int32_T a4;
  int32_T a5;
  int32_T a6;
  int32_T a7;
  int32_T a8;
  int32_T firstcol;
  boolean_T p;
  char_T A_data[8];
  int32_T A_sizes_idx_1;
  boolean_T exitg1;

  /* MATLAB Function 'Subsystem/DI': '<S6>:1' */
  /* '<S6>:1:4' */
  /* '<S6>:1:2' */
  A_sizes_idx_1 = 8;
  for (firstcol = 0; firstcol < 8; firstcol++) {
    A_data[firstcol] = '0';
  }

  for (firstcol = 0; firstcol < 8; firstcol++) {
    if ((1 << firstcol & rtu_a) != 0) {
      A_data[7 - firstcol] = '1';
    }
  }

  firstcol = 8;
  a2 = 1;
  exitg1 = false;
  while ((!exitg1) && (a2 <= 7)) {
    p = false;
    if (A_data[a2 - 1] != '0') {
      p = true;
    }

    if (p) {
      firstcol = a2;
      exitg1 = true;
    } else {
      a2++;
    }
  }

  if (firstcol > 1) {
    for (a2 = firstcol; a2 < 9; a2++) {
      A_data[a2 - firstcol] = A_data[a2 - 1];
    }

    A_sizes_idx_1 = 9 - firstcol;
    for (firstcol = 0; firstcol < A_sizes_idx_1; firstcol++) {
      BASE[firstcol] = A_data[firstcol];
    }

    for (firstcol = 0; firstcol < A_sizes_idx_1; firstcol++) {
      A_data[firstcol] = BASE[firstcol];
    }
  }

  /* '<S6>:1:4' */
  for (firstcol = 0; firstcol < 8; firstcol++) {
    BASE[firstcol] = '0';
  }

  /* '<S6>:1:5' */
  /* '<S6>:1:6' */
  for (firstcol = 0; firstcol < A_sizes_idx_1; firstcol++) {
    /* '<S6>:1:6' */
    /* '<S6>:1:7' */
    BASE[(firstcol - A_sizes_idx_1) + 8] = A_data[firstcol];
  }

  /* '<S6>:1:11' */
  firstcol = 0;
  if (BASE[0] == '1') {
    firstcol = 1;
  }

  /* '<S6>:1:12' */
  a2 = 0;
  if (BASE[1] == '1') {
    a2 = 1;
  }

  /* '<S6>:1:13' */
  A_sizes_idx_1 = 0;
  if (BASE[2] == '1') {
    A_sizes_idx_1 = 1;
  }

  /* '<S6>:1:14' */
  a4 = 0;
  if (BASE[3] == '1') {
    a4 = 1;
  }

  /* '<S6>:1:15' */
  a5 = 0;
  if (BASE[4] == '1') {
    a5 = 1;
  }

  /* '<S6>:1:16' */
  a6 = 0;
  if (BASE[5] == '1') {
    a6 = 1;
  }

  /* '<S6>:1:17' */
  a7 = 0;
  if (BASE[6] == '1') {
    a7 = 1;
  }

  /* '<S6>:1:18' */
  a8 = 0;
  if (BASE[7] == '1') {
    a8 = 1;
  }

  /* '<S6>:1:20' */
  localB->result[0] = a8;
  localB->result[1] = a7;
  localB->result[2] = a6;
  localB->result[3] = a5;
  localB->result[4] = a4;
  localB->result[5] = A_sizes_idx_1;
  localB->result[6] = a2;
  localB->result[7] = firstcol;
}

/*
 * System initialize for enable system:
 *    '<S2>/Subsystem1'
 *    '<S2>/Subsystem2'
 */
void gggg_Subsystem1_Init(B_Subsystem1_gggg_T *localB, P_Subsystem1_gggg_T
  *localP)
{
  /* SystemInitialize for Outport: '<S8>/Out1' */
  localB->Add = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S2>/Subsystem1'
 *    '<S2>/Subsystem2'
 */
void gggg_Subsystem1_Disable(DW_Subsystem1_gggg_T *localDW)
{
  localDW->Subsystem1_MODE = false;
}

/*
 * Start for enable system:
 *    '<S2>/Subsystem1'
 *    '<S2>/Subsystem2'
 */
void gggg_Subsystem1_Start(DW_Subsystem1_gggg_T *localDW)
{
  localDW->Subsystem1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S2>/Subsystem1'
 *    '<S2>/Subsystem2'
 */
void gggg_Subsystem1(RT_MODEL_gggg_T * const gggg_M, boolean_T rtu_Enable,
                     real_T rtu_In1, B_Subsystem1_gggg_T *localB,
                     DW_Subsystem1_gggg_T *localDW, P_Subsystem1_gggg_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S2>/Subsystem1' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  if (rtmIsMajorTimeStep(gggg_M) && rtmIsMajorTimeStep(gggg_M)) {
    if (rtu_Enable) {
      if (!localDW->Subsystem1_MODE) {
        localDW->Subsystem1_MODE = true;
      }
    } else {
      if (localDW->Subsystem1_MODE) {
        gggg_Subsystem1_Disable(localDW);
      }
    }
  }

  if (localDW->Subsystem1_MODE) {
    /* Sum: '<S8>/Add' incorporates:
     *  Constant: '<S8>/Constant'
     */
    localB->Add = rtu_In1 + localP->Constant_Value;
    if (rtmIsMajorTimeStep(gggg_M)) {
      srUpdateBC(localDW->Subsystem1_SubsysRanBC);
    }
  }

  /* End of Outputs for SubSystem: '<S2>/Subsystem1' */
}

/* Function for MATLAB Function: '<S2>/V_S_1' */
static void gggg_dec2bin(uint8_T d, char_T s_data[], int32_T s_sizes[2])
{
  int32_T firstcol;
  int32_T j;
  boolean_T p;
  char_T s_data_0[8];
  boolean_T exitg1;
  s_sizes[0] = 1;
  s_sizes[1] = 8;
  for (firstcol = 0; firstcol < 8; firstcol++) {
    s_data[firstcol] = '0';
  }

  for (firstcol = 0; firstcol < 8; firstcol++) {
    if ((1 << firstcol & d) != 0) {
      s_data[7 - firstcol] = '1';
    }
  }

  firstcol = 8;
  j = 1;
  exitg1 = false;
  while ((!exitg1) && (j <= 7)) {
    p = false;
    if (s_data[j - 1] != '0') {
      p = true;
    }

    if (p) {
      firstcol = j;
      exitg1 = true;
    } else {
      j++;
    }
  }

  if (firstcol > 1) {
    for (j = firstcol; j < 9; j++) {
      s_data[j - firstcol] = s_data[j - 1];
    }

    j = 9 - firstcol;
    for (firstcol = 0; firstcol < j; firstcol++) {
      s_data_0[firstcol] = s_data[firstcol];
    }

    s_sizes[0] = 1;
    s_sizes[1] = j;
    for (firstcol = 0; firstcol < j; firstcol++) {
      s_data[firstcol] = s_data_0[firstcol];
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S2>/V_S_1'
 *    '<S2>/V_S_2'
 */
void gggg_V_S_1(uint8_T rtu_a, uint8_T rtu_b, uint8_T rtu_c, uint8_T rtu_d,
                uint8_T rtu_e, uint8_T rtu_f, uint8_T rtu_g, uint8_T rtu_h,
                B_V_S_1_gggg_T *localB)
{
  char_T BASE[8];
  char_T Vbin[32];
  real_T R;
  int32_T i;
  real_T p2;
  real_T b_p2;
  char_T A_data[8];
  int32_T A_sizes[2];
  char_T B_data[8];
  int32_T B_sizes[2];
  char_T C_data[8];
  int32_T C_sizes[2];
  char_T D_data[8];
  int32_T D_sizes[2];
  char_T E_data[8];
  int32_T E_sizes[2];
  char_T F_data[8];
  int32_T F_sizes[2];
  char_T G_data[8];
  int32_T G_sizes[2];
  char_T H_data[8];
  int32_T H_sizes[2];
  char_T BASE_0;

  /* MATLAB Function 'Subsystem/V_S_1': '<S10>:1' */
  /* '<S10>:1:12' */
  /* '<S10>:1:2' */
  gggg_dec2bin(rtu_a, A_data, A_sizes);

  /* '<S10>:1:3' */
  gggg_dec2bin(rtu_b, B_data, B_sizes);

  /* '<S10>:1:4' */
  gggg_dec2bin(rtu_c, C_data, C_sizes);

  /* '<S10>:1:5' */
  gggg_dec2bin(rtu_d, D_data, D_sizes);

  /* '<S10>:1:6' */
  gggg_dec2bin(rtu_e, E_data, E_sizes);

  /* '<S10>:1:7' */
  gggg_dec2bin(rtu_f, F_data, F_sizes);

  /* '<S10>:1:8' */
  gggg_dec2bin(rtu_g, G_data, G_sizes);

  /* '<S10>:1:9' */
  gggg_dec2bin(rtu_h, H_data, H_sizes);

  /*  速度 */
  /* '<S10>:1:12' */
  for (i = 0; i < 8; i++) {
    BASE[i] = '0';
  }

  /* '<S10>:1:13' */
  /* '<S10>:1:14' */
  for (i = 0; i < A_sizes[1]; i++) {
    /* '<S10>:1:14' */
    /* '<S10>:1:15' */
    BASE[(i - A_sizes[1]) + 8] = A_data[i];
  }

  /* '<S10>:1:17' */
  /* '<S10>:1:19' */
  for (i = 0; i < 8; i++) {
    BASE_0 = BASE[i];
    A_data[i] = BASE_0;
    BASE[i] = '0';
  }

  /* '<S10>:1:20' */
  /* '<S10>:1:21' */
  for (i = 0; i < B_sizes[1]; i++) {
    /* '<S10>:1:21' */
    /* '<S10>:1:22' */
    BASE[(i - B_sizes[1]) + 8] = B_data[i];
  }

  /* '<S10>:1:24' */
  /* '<S10>:1:26' */
  for (i = 0; i < 8; i++) {
    BASE_0 = BASE[i];
    B_data[i] = BASE_0;
    BASE[i] = '0';
  }

  /* '<S10>:1:27' */
  /* '<S10>:1:28' */
  for (i = 0; i < C_sizes[1]; i++) {
    /* '<S10>:1:28' */
    /* '<S10>:1:29' */
    BASE[(i - C_sizes[1]) + 8] = C_data[i];
  }

  /* '<S10>:1:31' */
  /* '<S10>:1:33' */
  for (i = 0; i < 8; i++) {
    BASE_0 = BASE[i];
    C_data[i] = BASE_0;
    BASE[i] = '0';
  }

  /* '<S10>:1:34' */
  /* '<S10>:1:35' */
  for (i = 0; i < D_sizes[1]; i++) {
    /* '<S10>:1:35' */
    /* '<S10>:1:36' */
    BASE[(i - D_sizes[1]) + 8] = D_data[i];
  }

  /* '<S10>:1:40' */
  for (i = 0; i < 8; i++) {
    Vbin[i] = BASE[i];
    Vbin[i + 8] = C_data[i];
    Vbin[i + 16] = B_data[i];
    Vbin[i + 24] = A_data[i];
  }

  /* '<S10>:1:41' */
  R = 0.0;
  p2 = 1.0;
  for (i = 0; i < 32; i++) {
    if (Vbin[31 - i] == '1') {
      R += p2;
    }

    p2 += p2;
  }

  if (rtu_d < 128) {
    /* '<S10>:1:42' */
    /* bin2dec('10000000')=128 */
    /* '<S10>:1:43' */
    p2 = R;
  } else {
    /* '<S10>:1:45' */
    R--;

    /* '<S10>:1:46' */
    p2 = -(4.294967295E+9 - R);

    /* bin2dec('11111111111111111111111111111111')（一共32位）=4294967295 */
  }

  /*  位移 */
  /* '<S10>:1:50' */
  for (i = 0; i < 8; i++) {
    BASE[i] = '0';
  }

  /* '<S10>:1:51' */
  /* '<S10>:1:52' */
  for (i = 0; i < E_sizes[1]; i++) {
    /* '<S10>:1:52' */
    /* '<S10>:1:53' */
    BASE[(i - E_sizes[1]) + 8] = E_data[i];
  }

  /* '<S10>:1:55' */
  /* '<S10>:1:57' */
  for (i = 0; i < 8; i++) {
    BASE_0 = BASE[i];
    A_data[i] = BASE_0;
    BASE[i] = '0';
  }

  /* '<S10>:1:58' */
  /* '<S10>:1:59' */
  for (i = 0; i < F_sizes[1]; i++) {
    /* '<S10>:1:59' */
    /* '<S10>:1:60' */
    BASE[(i - F_sizes[1]) + 8] = F_data[i];
  }

  /* '<S10>:1:62' */
  /* '<S10>:1:64' */
  for (i = 0; i < 8; i++) {
    BASE_0 = BASE[i];
    B_data[i] = BASE_0;
    BASE[i] = '0';
  }

  /* '<S10>:1:65' */
  /* '<S10>:1:66' */
  for (i = 0; i < G_sizes[1]; i++) {
    /* '<S10>:1:66' */
    /* '<S10>:1:67' */
    BASE[(i - G_sizes[1]) + 8] = G_data[i];
  }

  /* '<S10>:1:69' */
  /* '<S10>:1:71' */
  for (i = 0; i < 8; i++) {
    BASE_0 = BASE[i];
    C_data[i] = BASE_0;
    BASE[i] = '0';
  }

  /* '<S10>:1:72' */
  /* '<S10>:1:73' */
  for (i = 0; i < H_sizes[1]; i++) {
    /* '<S10>:1:73' */
    /* '<S10>:1:74' */
    BASE[(i - H_sizes[1]) + 8] = H_data[i];
  }

  /* '<S10>:1:78' */
  for (i = 0; i < 8; i++) {
    Vbin[i] = BASE[i];
    Vbin[i + 8] = C_data[i];
    Vbin[i + 16] = B_data[i];
    Vbin[i + 24] = A_data[i];
  }

  /* '<S10>:1:79' */
  R = 0.0;
  b_p2 = 1.0;
  for (i = 0; i < 32; i++) {
    if (Vbin[31 - i] == '1') {
      R += b_p2;
    }

    b_p2 += b_p2;
  }

  if (!(rtu_h < 128)) {
    /* '<S10>:1:83' */
    R--;

    /* '<S10>:1:84' */
    R = -(4.294967295E+9 - R);

    /* bin2dec('11111111111111111111111111111111')（一共32位）=4294967295 */
  } else {
    /* '<S10>:1:80' */
    /* bin2dec('10000000')=128 */
    /* '<S10>:1:81' */
  }

  localB->V = p2;
  localB->S = R;
}

/* Function for MATLAB Function: '<S2>/anti_v' */
static void gggg_dec2bin_i(real_T d, char_T s_data[], int32_T s_sizes[2])
{
  real_T di;
  real_T olddi;
  int32_T firstcol;
  int32_T b_j;
  boolean_T p;
  char_T s_data_0[52];
  boolean_T exitg1;
  boolean_T exitg2;
  s_sizes[0] = 1;
  s_sizes[1] = 52;
  for (firstcol = 0; firstcol < 52; firstcol++) {
    s_data[firstcol] = '0';
  }

  di = d;
  firstcol = 52;
  exitg2 = false;
  while ((!exitg2) && (firstcol > 0)) {
    olddi = di;
    di = floor(di / 2.0);
    if (2.0 * di < olddi) {
      s_data[firstcol - 1] = '1';
    }

    if (di > 0.0) {
      firstcol--;
    } else {
      exitg2 = true;
    }
  }

  firstcol = 52;
  b_j = 1;
  exitg1 = false;
  while ((!exitg1) && (b_j <= 51)) {
    p = false;
    if (s_data[b_j - 1] != '0') {
      p = true;
    }

    if (p) {
      firstcol = b_j;
      exitg1 = true;
    } else {
      b_j++;
    }
  }

  if (firstcol > 1) {
    for (b_j = firstcol; b_j < 53; b_j++) {
      s_data[b_j - firstcol] = s_data[b_j - 1];
    }

    b_j = 53 - firstcol;
    for (firstcol = 0; firstcol < b_j; firstcol++) {
      s_data_0[firstcol] = s_data[firstcol];
    }

    s_sizes[0] = 1;
    s_sizes[1] = b_j;
    for (firstcol = 0; firstcol < b_j; firstcol++) {
      s_data[firstcol] = s_data_0[firstcol];
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S2>/anti_v'
 *    '<S2>/anti_v1'
 */
void gggg_anti_v(real_T rtu_v, B_anti_v_gggg_T *localB)
{
  real_T d;
  char_T BASE[32];
  int32_T b_i;
  real_T p2;
  real_T b_p2;
  real_T c_p2;
  real_T d_p2;
  static const int8_T e[8] = { 24, 25, 26, 27, 28, 29, 30, 31 };

  static const int8_T f[8] = { 16, 17, 18, 19, 20, 21, 22, 23 };

  static const int8_T g[8] = { 8, 9, 10, 11, 12, 13, 14, 15 };

  static const int8_T h[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

  char_T Vbin_data[52];
  int32_T Vbin_sizes[2];

  /* MATLAB Function 'Subsystem/anti_v': '<S12>:1' */
  /* '<S12>:1:3' */
  if (rtu_v >= 0.0) {
    /* '<S12>:1:2' */
    /* '<S12>:1:3' */
    for (b_i = 0; b_i < 32; b_i++) {
      BASE[b_i] = '0';
    }

    /* 一共32位 */
    /* '<S12>:1:4' */
    gggg_dec2bin_i(rtu_v, Vbin_data, Vbin_sizes);

    /* '<S12>:1:5' */
    /* '<S12>:1:6' */
    for (b_i = 0; b_i < Vbin_sizes[1]; b_i++) {
      /* '<S12>:1:6' */
      /* '<S12>:1:7' */
      BASE[(b_i - Vbin_sizes[1]) + 32] = Vbin_data[b_i];
    }

    /* '<S12>:1:9' */
  } else {
    /* '<S12>:1:11' */
    for (b_i = 0; b_i < 32; b_i++) {
      BASE[b_i] = '0';
    }

    /* 一共32位 */
    /* '<S12>:1:12' */
    /* bin2dec('11111111111111111111111111111111')（一共32位）=4294967295 */
    /* '<S12>:1:13' */
    gggg_dec2bin_i((4.294967295E+9 + rtu_v) + 1.0, Vbin_data, Vbin_sizes);

    /* '<S12>:1:14' */
    /* '<S12>:1:15' */
    for (b_i = 0; b_i < Vbin_sizes[1]; b_i++) {
      /* '<S12>:1:15' */
      /* '<S12>:1:16' */
      BASE[(b_i - Vbin_sizes[1]) + 32] = Vbin_data[b_i];
    }

    /* '<S12>:1:18' */
  }

  /* '<S12>:1:20' */
  /* '<S12>:1:21' */
  /* '<S12>:1:22' */
  /* '<S12>:1:23' */
  /* '<S12>:1:24' */
  d = 0.0;
  p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[h[7 - b_i]] == '1') {
      d += p2;
    }

    p2 += p2;
  }

  /* '<S12>:1:25' */
  p2 = 0.0;
  b_p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[g[7 - b_i]] == '1') {
      p2 += b_p2;
    }

    b_p2 += b_p2;
  }

  /* '<S12>:1:26' */
  b_p2 = 0.0;
  c_p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[f[7 - b_i]] == '1') {
      b_p2 += c_p2;
    }

    c_p2 += c_p2;
  }

  /* '<S12>:1:27' */
  c_p2 = 0.0;
  d_p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[e[7 - b_i]] == '1') {
      c_p2 += d_p2;
    }

    d_p2 += d_p2;
  }

  localB->a = c_p2;
  localB->b = b_p2;
  localB->c = p2;
  localB->d = d;
}

/* Model output function */
void gggg_output(void)
{
  boolean_T sf_internal_predicateOutput;
  real_T u0;
  real_T u1;
  real_T u2;
  if (rtmIsMajorTimeStep(gggg_M)) {
    /* set solver stop time */
    if (!(gggg_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&gggg_M->solverInfo, ((gggg_M->Timing.clockTickH0 +
        1) * gggg_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&gggg_M->solverInfo, ((gggg_M->Timing.clockTick0 + 1)
        * gggg_M->Timing.stepSize0 + gggg_M->Timing.clockTickH0 *
        gggg_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(gggg_M)) {
    gggg_M->Timing.t[0] = rtsiGetT(&gggg_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(gggg_DW.Subsystem1.Subsystem1_SubsysRanBC);

  /* ok to acquire for <S1>/S-Function */
  gggg_DW.SFunction_IWORK.AcquireOK = 1;
  if (rtmIsMajorTimeStep(gggg_M)) {
    /* Memory: '<S3>/Memory' */
    gggg_B.Memory = gggg_DW.Memory_PreviousInput;

    /* Memory: '<S3>/Memory2' */
    gggg_B.Memory2 = gggg_DW.Memory2_PreviousInput;

    /* Logic: '<S3>/Logical Operator2' */
    gggg_B.LogicalOperator2 = ((gggg_B.Memory != 0.0) || (gggg_B.Memory2 != 0.0));

    /* Constant: '<Root>/旋紧1' */
    gggg_B.u = gggg_P.u_Value;

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/Constant'
     */
    if (gggg_B.LogicalOperator2) {
      gggg_B.Switch = gggg_P.Constant_Value;
    } else {
      gggg_B.Switch = gggg_B.u;
    }

    /* End of Switch: '<S3>/Switch' */

    /* S-Function (canac2objreceivex): '<S2>/receive2' */
    {
      /*------------ S-Function Block: <S2>/receive2 ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        unsigned long time;
        uint8_T p_data[8];
        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data2_mbx( 1, 2, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&gggg_B.receive2), p_data, 8);
        }
      }
    }

    /* Bit Unpacking: <S2>/CAN bit-unpacking 1 */
    {
      const uint32_T *y = (const uint32_T *)&gggg_B.receive2;

      /* Output Port 1 */
      gggg_B.CANbitunpacking1 = (uint8_T)
        ((y[0] & (0xff << 16)) >> 16);
    }

    /* MATLAB Function: '<S2>/DI' */
    gggg_DI(gggg_B.CANbitunpacking1, &gggg_B.sf_DI);

    /* S-Function (canac2objreceivex): '<S2>/receive3' */
    {
      /*------------ S-Function Block: <S2>/receive3 ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        unsigned long time;
        uint8_T p_data[8];
        flags = saveAndDisableInterrupts();
        stat = CANPC_read_rcv_data2_mbx( 1, 3, p_data, &time );
        restoreInterrupts(flags);
        if (stat > 0 || stat == -1 || stat == -2) {
          memcpy( (&gggg_B.receive3), p_data, 8);
        }
      }
    }

    /* Bit Unpacking: <S2>/CAN bit-unpacking 4 */
    {
      const uint32_T *y = (const uint32_T *)&gggg_B.receive3;

      /* Output Port 1 */
      gggg_B.CANbitunpacking4 = (uint8_T)
        ((y[0] & (0xff << 16)) >> 16);
    }

    /* MATLAB Function: '<S2>/DI1' */
    gggg_DI(gggg_B.CANbitunpacking4, &gggg_B.sf_DI1);

    /* Logic: '<S2>/Logical Operator2' */
    gggg_B.LogicalOperator2_a = ((gggg_B.sf_DI.result[0] != 0.0) ||
      (gggg_B.sf_DI1.result[0] != 0.0));

    /* Logic: '<S2>/Logical Operator3' */
    gggg_B.LogicalOperator3 = ((gggg_B.sf_DI.result[1] != 0.0) ||
      (gggg_B.sf_DI1.result[1] != 0.0));

    /* Logic: '<S2>/Logical Operator4' */
    gggg_B.LogicalOperator4 = ((gggg_B.sf_DI.result[2] != 0.0) ||
      (gggg_B.sf_DI1.result[2] != 0.0));

    /* Constant: '<Root>/预旋松1' */
    gggg_B.u_k = gggg_P.u_Value_f;

    /* Constant: '<Root>/旋松1' */
    gggg_B.u_i = gggg_P.u_Value_n;

    /* Chart: '<S2>/Chart1' */
    /* Gateway: Subsystem/Chart1 */
    gggg_DW.sfEvent = gggg_CALL_EVENT_l;

    /* During: Subsystem/Chart1 */
    if (gggg_DW.is_active_c6_gggg == 0U) {
      /* Entry: Subsystem/Chart1 */
      gggg_DW.is_active_c6_gggg = 1U;

      /* Entry Internal: Subsystem/Chart1 */
      gggg_DW.is_c6_gggg = gggg_IN_enable;

      /* Entry Internal 'enable': '<S5>:24' */
      gggg_DW.is_active_enable1 = 1U;

      /* Entry Internal 'enable1': '<S5>:9' */
      /* Transition: '<S5>:2' */
      gggg_DW.is_enable1 = gggg_IN_on1;

      /* Entry 'on1': '<S5>:1' */
      gggg_B.xuanjin_enable = 1.0;
      gggg_DW.is_active_enable2 = 1U;

      /* Entry Internal 'enable2': '<S5>:65' */
      /* Transition: '<S5>:64' */
      gggg_DW.is_enable2 = gggg_IN_on1;

      /* Entry 'on1': '<S5>:63' */
      gggg_B.yuxuansong_enable = 1.0;
      gggg_DW.is_active_enable3 = 1U;

      /* Entry Internal 'enable3': '<S5>:69' */
      /* Transition: '<S5>:70' */
      gggg_DW.is_enable3 = gggg_IN_on1;

      /* Entry 'on1': '<S5>:72' */
      gggg_B.xuansong_enable = 1.0;
    } else {
      /* During 'enable': '<S5>:24' */
      /* During 'enable1': '<S5>:9' */
      switch (gggg_DW.is_enable1) {
       case gggg_IN_on1:
        /* During 'on1': '<S5>:1' */
        if (gggg_B.LogicalOperator2_a) {
          /* Transition: '<S5>:6' */
          gggg_DW.is_enable1 = gggg_IN_on3;

          /* Entry 'on3': '<S5>:5' */
          gggg_B.xuanjin_enable = 0.0;
        }
        break;

       case gggg_IN_on3:
        /* During 'on3': '<S5>:5' */
        sf_internal_predicateOutput = ((gggg_B.u_k == 1.0) || (gggg_B.u_i == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S5>:19' */
          gggg_DW.is_enable1 = gggg_IN_on4;

          /* Entry 'on4': '<S5>:18' */
          gggg_B.xuanjin_enable = 1.0;
        }
        break;

       default:
        /* During 'on4': '<S5>:18' */
        if (!gggg_B.LogicalOperator2_a) {
          /* Transition: '<S5>:57' */
          gggg_DW.is_enable1 = gggg_IN_on1;

          /* Entry 'on1': '<S5>:1' */
          gggg_B.xuanjin_enable = 1.0;
        }
        break;
      }

      /* During 'enable2': '<S5>:65' */
      switch (gggg_DW.is_enable2) {
       case gggg_IN_on1:
        /* During 'on1': '<S5>:63' */
        if (gggg_B.LogicalOperator3) {
          /* Transition: '<S5>:58' */
          gggg_DW.is_enable2 = gggg_IN_on3;

          /* Entry 'on3': '<S5>:62' */
          gggg_B.yuxuansong_enable = 0.0;
        }
        break;

       case gggg_IN_on3:
        /* During 'on3': '<S5>:62' */
        sf_internal_predicateOutput = ((gggg_B.u_i == 1.0) || (gggg_B.u == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S5>:60' */
          gggg_DW.is_enable2 = gggg_IN_on4;

          /* Entry 'on4': '<S5>:61' */
          gggg_B.yuxuansong_enable = 1.0;
        }
        break;

       default:
        /* During 'on4': '<S5>:61' */
        if (!gggg_B.LogicalOperator3) {
          /* Transition: '<S5>:59' */
          gggg_DW.is_enable2 = gggg_IN_on1;

          /* Entry 'on1': '<S5>:63' */
          gggg_B.yuxuansong_enable = 1.0;
        }
        break;
      }

      /* During 'enable3': '<S5>:69' */
      switch (gggg_DW.is_enable3) {
       case gggg_IN_on1:
        /* During 'on1': '<S5>:72' */
        if (gggg_B.LogicalOperator4) {
          /* Transition: '<S5>:66' */
          gggg_DW.is_enable3 = gggg_IN_on3;

          /* Entry 'on3': '<S5>:68' */
          gggg_B.xuansong_enable = 0.0;
        }
        break;

       case gggg_IN_on3:
        /* During 'on3': '<S5>:68' */
        if (gggg_B.u == 1.0) {
          /* Transition: '<S5>:73' */
          gggg_DW.is_enable3 = gggg_IN_on4;

          /* Entry 'on4': '<S5>:71' */
          gggg_B.xuansong_enable = 1.0;
        }
        break;

       default:
        /* During 'on4': '<S5>:71' */
        if (!gggg_B.LogicalOperator4) {
          /* Transition: '<S5>:67' */
          gggg_DW.is_enable3 = gggg_IN_on1;

          /* Entry 'on1': '<S5>:72' */
          gggg_B.xuansong_enable = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<S2>/Chart1' */

    /* Product: '<Root>/Product4' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    gggg_B.Product4 = gggg_B.Switch * gggg_P.Constant7_Value_j *
      gggg_B.xuanjin_enable;

    /* Memory: '<S3>/Memory1' */
    gggg_B.Memory1 = gggg_DW.Memory1_PreviousInput;

    /* Logic: '<S3>/Logical Operator1' */
    gggg_B.LogicalOperator1 = ((gggg_B.Memory1 != 0.0) || (gggg_B.Memory2 != 0.0));

    /* Switch: '<S3>/Switch2' incorporates:
     *  Constant: '<S3>/Constant2'
     */
    if (gggg_B.LogicalOperator1) {
      gggg_B.Switch2 = gggg_P.Constant2_Value_j;
    } else {
      gggg_B.Switch2 = gggg_B.u_k;
    }

    /* End of Switch: '<S3>/Switch2' */

    /* Product: '<Root>/Product2' incorporates:
     *  Constant: '<Root>/Constant5'
     */
    gggg_B.Product2 = gggg_B.Switch2 * gggg_P.Constant5_Value_a *
      gggg_B.yuxuansong_enable;

    /* Logic: '<S3>/Logical Operator' */
    gggg_B.LogicalOperator = ((gggg_B.Memory1 != 0.0) || (gggg_B.Memory != 0.0));

    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    if (gggg_B.LogicalOperator) {
      gggg_B.Switch1 = gggg_P.Constant1_Value_g;
    } else {
      gggg_B.Switch1 = gggg_B.u_i;
    }

    /* End of Switch: '<S3>/Switch1' */

    /* Product: '<Root>/Product3' incorporates:
     *  Constant: '<Root>/Constant6'
     */
    gggg_B.Product3 = gggg_B.Switch1 * gggg_P.Constant6_Value_e *
      gggg_B.xuansong_enable;

    /* Sum: '<Root>/Add2' */
    gggg_B.u_g = (gggg_B.Product4 + gggg_B.Product2) + gggg_B.Product3;

    /* Delay: '<S2>/Delay' */
    gggg_B.Delay = gggg_DW.Delay_DSTATE[0];
  }

  /* StateSpace: '<S2>/s1' */
  gggg_B.s1 = 0.0;
  gggg_B.s1 += gggg_P.s1_C * gggg_X.s1_CSTATE;

  /* Gain: '<S2>/Gain3' */
  gggg_B.Gain3 = gggg_P.Gain3_Gain * gggg_B.s1;

  /* Gain: '<S2>/Gain4' */
  gggg_B.u_h = gggg_P.Gain4_Gain * gggg_B.Gain3;

  /* Outputs for Enabled SubSystem: '<S2>/Subsystem2' */
  gggg_Subsystem1(gggg_M, gggg_B.Delay, gggg_B.u_h, &gggg_B.Subsystem2,
                  &gggg_DW.Subsystem2, (P_Subsystem1_gggg_T *)&gggg_P.Subsystem2);

  /* End of Outputs for SubSystem: '<S2>/Subsystem2' */

  /* Sum: '<S2>/Add1' */
  gggg_B.Add1 = gggg_B.u_h - gggg_B.Subsystem2.Add;

  /* Gain: '<S2>/Gain6' */
  gggg_B.Gain6 = gggg_P.Gain6_Gain * gggg_B.Add1;

  /* StateSpace: '<S2>/s4' */
  gggg_B.s4 = 0.0;
  gggg_B.s4 += gggg_P.s4_C * gggg_X.s4_CSTATE;

  /* Gain: '<S2>/Gain9' */
  gggg_B.Gain9 = gggg_P.Gain9_Gain * gggg_B.s4;

  /* Gain: '<S2>/Gain10' */
  gggg_B.u_n = gggg_P.Gain10_Gain * gggg_B.Gain9;

  /* Outputs for Enabled SubSystem: '<S2>/Subsystem1' */
  gggg_Subsystem1(gggg_M, gggg_B.Delay, gggg_B.u_n, &gggg_B.Subsystem1,
                  &gggg_DW.Subsystem1, (P_Subsystem1_gggg_T *)&gggg_P.Subsystem1);

  /* End of Outputs for SubSystem: '<S2>/Subsystem1' */

  /* Sum: '<S2>/Add2' */
  gggg_B.Add2 = gggg_B.u_n - gggg_B.Subsystem1.Add;

  /* Gain: '<S2>/Gain11' */
  gggg_B.Gain11 = gggg_P.Gain11_Gain * gggg_B.Add2;
  if (rtmIsMajorTimeStep(gggg_M)) {
  }

  /* StateSpace: '<S2>/s3' */
  gggg_B.s3 = 0.0;
  gggg_B.s3 += gggg_P.s3_C * gggg_X.s3_CSTATE;

  /* Gain: '<S2>/Gain' */
  gggg_B.Gain = gggg_P.Gain_Gain * gggg_B.s3;

  /* Gain: '<S2>/Gain2' */
  gggg_B.u_no = gggg_P.Gain2_Gain * gggg_B.Gain;

  /* StateSpace: '<S2>/s5' */
  gggg_B.s5 = 0.0;
  gggg_B.s5 += gggg_P.s5_C * gggg_X.s5_CSTATE;

  /* Gain: '<S2>/Gain7' */
  gggg_B.Gain7 = gggg_P.Gain7_Gain * gggg_B.s5;

  /* Gain: '<S2>/Gain8' */
  gggg_B.u_j = gggg_P.Gain8_Gain * gggg_B.Gain7;
  if (rtmIsMajorTimeStep(gggg_M)) {
    /* ManualSwitch: '<Root>/Manual Switch' incorporates:
     *  Constant: '<Root>/Constant4'
     */
    if (gggg_P.ManualSwitch_CurrentSetting == 1) {
      gggg_B.ManualSwitch = gggg_B.u_g;
    } else {
      gggg_B.ManualSwitch = gggg_P.Constant4_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch' */
  }

  /* S-Function (canac2objreceivex): '<S2>/receive1' */
  {
    /*------------ S-Function Block: <S2>/receive1 ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mbx( 1, 1, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&gggg_B.receive1), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S2>/CAN bit-unpacking 2 */
  {
    const uint32_T *y = (const uint32_T *)&gggg_B.receive1;

    /* Output Port 1 */
    gggg_B.CANbitunpacking2_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    gggg_B.CANbitunpacking2_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    gggg_B.CANbitunpacking2_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    gggg_B.CANbitunpacking2_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    gggg_B.CANbitunpacking2_o5 = (uint8_T)
      (y[1] & 0xff);

    /* Output Port 6 */
    gggg_B.CANbitunpacking2_o6 = (uint8_T)
      ((y[1] & (0xff << 8)) >> 8);

    /* Output Port 7 */
    gggg_B.CANbitunpacking2_o7 = (uint8_T)
      ((y[1] & (0xff << 16)) >> 16);

    /* Output Port 8 */
    gggg_B.CANbitunpacking2_o8 = (uint8_T)
      ((y[1] & (0xff << 24)) >> 24);
  }

  /* MATLAB Function: '<S2>/V_S_2' */
  gggg_V_S_1(gggg_B.CANbitunpacking2_o1, gggg_B.CANbitunpacking2_o2,
             gggg_B.CANbitunpacking2_o3, gggg_B.CANbitunpacking2_o4,
             gggg_B.CANbitunpacking2_o5, gggg_B.CANbitunpacking2_o6,
             gggg_B.CANbitunpacking2_o7, gggg_B.CANbitunpacking2_o8,
             &gggg_B.sf_V_S_2);
  if (rtmIsMajorTimeStep(gggg_M)) {
  }

  /* S-Function (canac2objreceivex): '<S2>/receive' */
  {
    /*------------ S-Function Block: <S2>/receive ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data2_mbx( 1, 0, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&gggg_B.receive), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S2>/CAN bit-unpacking 3 */
  {
    const uint32_T *y = (const uint32_T *)&gggg_B.receive;

    /* Output Port 1 */
    gggg_B.CANbitunpacking3_o1 = (uint8_T)
      (y[0] & 0xff);

    /* Output Port 2 */
    gggg_B.CANbitunpacking3_o2 = (uint8_T)
      ((y[0] & (0xff << 8)) >> 8);

    /* Output Port 3 */
    gggg_B.CANbitunpacking3_o3 = (uint8_T)
      ((y[0] & (0xff << 16)) >> 16);

    /* Output Port 4 */
    gggg_B.CANbitunpacking3_o4 = (uint8_T)
      ((y[0] & (0xff << 24)) >> 24);

    /* Output Port 5 */
    gggg_B.CANbitunpacking3_o5 = (uint8_T)
      (y[1] & 0xff);

    /* Output Port 6 */
    gggg_B.CANbitunpacking3_o6 = (uint8_T)
      ((y[1] & (0xff << 8)) >> 8);

    /* Output Port 7 */
    gggg_B.CANbitunpacking3_o7 = (uint8_T)
      ((y[1] & (0xff << 16)) >> 16);

    /* Output Port 8 */
    gggg_B.CANbitunpacking3_o8 = (uint8_T)
      ((y[1] & (0xff << 24)) >> 24);
  }

  /* MATLAB Function: '<S2>/V_S_1' */
  gggg_V_S_1(gggg_B.CANbitunpacking3_o1, gggg_B.CANbitunpacking3_o2,
             gggg_B.CANbitunpacking3_o3, gggg_B.CANbitunpacking3_o4,
             gggg_B.CANbitunpacking3_o5, gggg_B.CANbitunpacking3_o6,
             gggg_B.CANbitunpacking3_o7, gggg_B.CANbitunpacking3_o8,
             &gggg_B.sf_V_S_1);
  if (rtmIsMajorTimeStep(gggg_M)) {
    /* Chart: '<S2>/Chart' */
    /* Gateway: Subsystem/Chart */
    gggg_DW.sfEvent_n = gggg_CALL_EVENT_l;
    if (gggg_DW.temporalCounter_i1 < 15U) {
      gggg_DW.temporalCounter_i1++;
    }

    /* During: Subsystem/Chart */
    if (gggg_DW.is_active_c4_gggg == 0U) {
      /* Entry: Subsystem/Chart */
      gggg_DW.is_active_c4_gggg = 1U;

      /* Entry Internal: Subsystem/Chart */
      gggg_DW.is_c4_gggg = gggg_IN_route;

      /* Entry Internal 'route': '<S4>:9' */
      /* Transition: '<S4>:2' */
      gggg_DW.is_route = gggg_IN_on1;
      gggg_DW.temporalCounter_i1 = 0U;

      /* Entry 'on1': '<S4>:1' */
      gggg_B.route1 = 1.0;
      gggg_B.route2 = 0.0;
    } else {
      /* During 'route': '<S4>:9' */
      switch (gggg_DW.is_route) {
       case gggg_IN_on1:
        /* During 'on1': '<S4>:1' */
        if (gggg_DW.temporalCounter_i1 >= 10) {
          /* Transition: '<S4>:6' */
          gggg_DW.is_route = gggg_IN_on3;
          gggg_DW.temporalCounter_i1 = 0U;

          /* Entry 'on3': '<S4>:5' */
          gggg_B.route1 = 0.0;
          gggg_B.route2 = 1.0;
        }
        break;

       case gggg_IN_on3:
        /* During 'on3': '<S4>:5' */
        if (gggg_DW.temporalCounter_i1 >= 10) {
          /* Transition: '<S4>:19' */
          gggg_DW.is_route = gggg_IN_on4;

          /* Entry 'on4': '<S4>:18' */
          gggg_B.route1 = 0.0;
          gggg_B.route2 = 2.0;
        }
        break;

       default:
        /* During 'on4': '<S4>:18' */
        break;
      }
    }

    /* End of Chart: '<S2>/Chart' */

    /* Switch: '<S2>/Switch2' incorporates:
     *  Constant: '<S2>/Constant21'
     */
    if (gggg_B.route1 > gggg_P.Switch2_Threshold) {
      gggg_B.Switch2_i = gggg_P.Constant21_Value;
    } else {
      gggg_B.Switch2_i = 0.0;
    }

    /* End of Switch: '<S2>/Switch2' */

    /* DataTypeConversion: '<S2>/Data Type Conversion' */
    u0 = floor(gggg_B.Switch2_i);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    gggg_B.DataTypeConversion = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S2>/Data Type Conversion' */
    /* Bit Packing: <S2>/CAN bit-packing 1 */
    {
      uint32_T *y = (uint32_T *)&gggg_B.CANbitpacking1;
      y[0] =
        (uint32_T)(gggg_B.DataTypeConversion & 0xff);
    }

    /* S-Function (canac2objsendx): '<S2>/Send' */
    {
      /*------------ S-Function Block: <S2>/Send ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object2_mbx( 1, 0, 8, (uint8_T *)
          &gggg_B.CANbitpacking1);
        restoreInterrupts(flags);
        ;
      }
    }

    /* Delay: '<S2>/Delay1' */
    gggg_B.Delay1 = gggg_DW.Delay1_DSTATE[0];

    /* Logic: '<S2>/Logical Operator1' */
    gggg_B.LogicalOperator1_c = ((gggg_B.sf_DI.result[0] != 0.0) ||
      (gggg_B.sf_DI1.result[0] != 0.0));

    /* Logic: '<S2>/Logical Operator' */
    gggg_B.LogicalOperator_b = !gggg_B.LogicalOperator1_c;

    /* Logic: '<S2>/Logical Operator6' incorporates:
     *  Constant: '<Root>/复位'
     */
    gggg_B.LogicalOperator6 = ((gggg_P._Value != 0.0) &&
      gggg_B.LogicalOperator_b);

    /* Switch: '<S2>/Switch1' incorporates:
     *  Constant: '<S2>/Constant31'
     *  ManualSwitch: '<S2>/Manual Switch3'
     */
    if (gggg_B.LogicalOperator6) {
      gggg_B.Switch1_a = gggg_P.Constant31_Value;
    } else {
      if (gggg_P.ManualSwitch3_CurrentSetting == 1) {
        /* ManualSwitch: '<S2>/Manual Switch3' incorporates:
         *  Constant: '<S2>/Constant12'
         */
        gggg_B.ManualSwitch3 = gggg_P.Constant12_Value;
      } else {
        /* ManualSwitch: '<S2>/Manual Switch3' */
        gggg_B.ManualSwitch3 = gggg_B.ManualSwitch;
      }

      gggg_B.Switch1_a = gggg_B.ManualSwitch3;
    }

    /* End of Switch: '<S2>/Switch1' */

    /* Gain: '<S2>/Gain13' */
    gggg_B.Gain13 = gggg_P.Gain13_Gain * gggg_B.Switch1_a;

    /* Gain: '<S2>/Gain12' */
    gggg_B.Gain12 = gggg_P.Gain12_Gain * gggg_B.Gain13;

    /* Saturate: '<S2>/Saturation1' */
    u0 = gggg_B.Gain12;
    u1 = gggg_P.Saturation1_LowerSat;
    u2 = gggg_P.Saturation1_UpperSat;
    if (u0 > u2) {
      gggg_B.Saturation1 = u2;
    } else if (u0 < u1) {
      gggg_B.Saturation1 = u1;
    } else {
      gggg_B.Saturation1 = u0;
    }

    /* End of Saturate: '<S2>/Saturation1' */

    /* MATLAB Function: '<S2>/anti_v1' */
    gggg_anti_v(gggg_B.Saturation1, &gggg_B.sf_anti_v1);

    /* MultiPortSwitch: '<S2>/Multiport Switch1' */
    if ((int32_T)gggg_B.route2 == 0) {
      /* DataTypeConversion: '<S2>/Data Type Conversion32' incorporates:
       *  Constant: '<S2>/Constant29'
       */
      u0 = floor(gggg_P.Constant29_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion32 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion32' */

      /* DataTypeConversion: '<S2>/Data Type Conversion9' incorporates:
       *  Constant: '<S2>/Constant13'
       */
      u0 = floor(gggg_P.Constant13_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion9 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion9' */

      /* DataTypeConversion: '<S2>/Data Type Conversion8' incorporates:
       *  Constant: '<S2>/Constant11'
       */
      u0 = floor(gggg_P.Constant11_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion8 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion8' */

      /* DataTypeConversion: '<S2>/Data Type Conversion13' incorporates:
       *  Constant: '<S2>/Constant19'
       */
      u0 = floor(gggg_P.Constant19_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion13 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion13' */

      /* DataTypeConversion: '<S2>/Data Type Conversion28' incorporates:
       *  Constant: '<S2>/Constant25'
       */
      u0 = floor(gggg_P.Constant25_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion28 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion28' */

      /* DataTypeConversion: '<S2>/Data Type Conversion29' incorporates:
       *  Constant: '<S2>/Constant26'
       */
      u0 = floor(gggg_P.Constant26_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion29 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion29' */

      /* DataTypeConversion: '<S2>/Data Type Conversion30' incorporates:
       *  Constant: '<S2>/Constant27'
       */
      u0 = floor(gggg_P.Constant27_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion30 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion30' */

      /* DataTypeConversion: '<S2>/Data Type Conversion31' incorporates:
       *  Constant: '<S2>/Constant28'
       */
      u0 = floor(gggg_P.Constant28_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion31 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion31' */
      gggg_B.MultiportSwitch1[0] = gggg_B.DataTypeConversion32;
      gggg_B.MultiportSwitch1[1] = gggg_B.DataTypeConversion9;
      gggg_B.MultiportSwitch1[2] = gggg_B.DataTypeConversion8;
      gggg_B.MultiportSwitch1[3] = gggg_B.DataTypeConversion13;
      gggg_B.MultiportSwitch1[4] = gggg_B.DataTypeConversion28;
      gggg_B.MultiportSwitch1[5] = gggg_B.DataTypeConversion29;
      gggg_B.MultiportSwitch1[6] = gggg_B.DataTypeConversion30;
      gggg_B.MultiportSwitch1[7] = gggg_B.DataTypeConversion31;
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion26' */
      u0 = floor(gggg_B.Delay1);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion26 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion26' */

      /* DataTypeConversion: '<S2>/Data Type Conversion27' incorporates:
       *  Constant: '<S2>/Constant22'
       */
      u0 = floor(gggg_P.Constant22_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion27 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion27' */

      /* DataTypeConversion: '<S2>/Data Type Conversion10' incorporates:
       *  Constant: '<S2>/Constant14'
       */
      u0 = floor(gggg_P.Constant14_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion10 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion10' */

      /* DataTypeConversion: '<S2>/Data Type Conversion11' incorporates:
       *  Constant: '<S2>/Constant15'
       */
      u0 = floor(gggg_P.Constant15_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion11 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion11' */

      /* DataTypeConversion: '<S2>/Data Type Conversion12' */
      u0 = floor(gggg_B.sf_anti_v1.a);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion12 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion12' */

      /* DataTypeConversion: '<S2>/Data Type Conversion14' */
      u0 = floor(gggg_B.sf_anti_v1.b);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion14 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion14' */

      /* DataTypeConversion: '<S2>/Data Type Conversion15' */
      u0 = floor(gggg_B.sf_anti_v1.c);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion15 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion15' */

      /* DataTypeConversion: '<S2>/Data Type Conversion25' */
      u0 = floor(gggg_B.sf_anti_v1.d);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion25 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion25' */
      gggg_B.MultiportSwitch1[0] = gggg_B.DataTypeConversion26;
      gggg_B.MultiportSwitch1[1] = gggg_B.DataTypeConversion27;
      gggg_B.MultiportSwitch1[2] = gggg_B.DataTypeConversion10;
      gggg_B.MultiportSwitch1[3] = gggg_B.DataTypeConversion11;
      gggg_B.MultiportSwitch1[4] = gggg_B.DataTypeConversion12;
      gggg_B.MultiportSwitch1[5] = gggg_B.DataTypeConversion14;
      gggg_B.MultiportSwitch1[6] = gggg_B.DataTypeConversion15;
      gggg_B.MultiportSwitch1[7] = gggg_B.DataTypeConversion25;
    }

    /* End of MultiPortSwitch: '<S2>/Multiport Switch1' */
    /* Bit Packing: <S2>/CAN bit-packing 3 */
    {
      uint32_T *y = (uint32_T *)&gggg_B.CANbitpacking3;
      y[0] =
        ((uint32_T)(gggg_B.MultiportSwitch1[0] & 0xff) |
         ((uint32_T)(gggg_B.MultiportSwitch1[1] & 0xff) << 8) |
         ((uint32_T)(gggg_B.MultiportSwitch1[2] & 0xff) << 16) |
         ((uint32_T)(gggg_B.MultiportSwitch1[3] & 0xff) << 24));
      y[1] =
        ((uint32_T)(gggg_B.MultiportSwitch1[4] & 0xff) |
         ((uint32_T)(gggg_B.MultiportSwitch1[5] & 0xff) << 8) |
         ((uint32_T)(gggg_B.MultiportSwitch1[6] & 0xff) << 16) |
         ((uint32_T)(gggg_B.MultiportSwitch1[7] & 0xff) << 24));
    }

    /* S-Function (canac2objsendx): '<S2>/Send1' */
    {
      /*------------ S-Function Block: <S2>/Send1 ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object2_mbx( 1, 2, 8, (uint8_T *)
          &gggg_B.CANbitpacking3);
        restoreInterrupts(flags);
        ;
      }
    }

    /* ManualSwitch: '<S2>/Manual Switch' incorporates:
     *  Constant: '<S2>/Constant23'
     *  Constant: '<S2>/Constant8'
     */
    if (gggg_P.ManualSwitch_CurrentSetting_c == 1) {
      gggg_B.ManualSwitch_l = gggg_P.Constant23_Value;
    } else {
      gggg_B.ManualSwitch_l = gggg_P.Constant8_Value;
    }

    /* End of ManualSwitch: '<S2>/Manual Switch' */

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant9'
     *  ManualSwitch: '<S2>/Manual Switch1'
     */
    if (gggg_B.LogicalOperator6) {
      gggg_B.Switch_d = gggg_P.Constant9_Value;
    } else {
      if (gggg_P.ManualSwitch1_CurrentSetting == 1) {
        /* ManualSwitch: '<S2>/Manual Switch1' incorporates:
         *  Constant: '<S2>/Constant10'
         */
        gggg_B.ManualSwitch1 = gggg_P.Constant10_Value;
      } else {
        /* ManualSwitch: '<S2>/Manual Switch1' */
        gggg_B.ManualSwitch1 = gggg_B.ManualSwitch;
      }

      gggg_B.Switch_d = gggg_B.ManualSwitch1;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Gain: '<S2>/Gain5' */
    gggg_B.Gain5 = gggg_P.Gain5_Gain * gggg_B.Switch_d;

    /* Gain: '<S2>/Gain1' */
    gggg_B.Gain1 = gggg_P.Gain1_Gain * gggg_B.Gain5;

    /* Saturate: '<S2>/Saturation' */
    u0 = gggg_B.Gain1;
    u1 = gggg_P.Saturation_LowerSat;
    u2 = gggg_P.Saturation_UpperSat;
    if (u0 > u2) {
      gggg_B.Saturation = u2;
    } else if (u0 < u1) {
      gggg_B.Saturation = u1;
    } else {
      gggg_B.Saturation = u0;
    }

    /* End of Saturate: '<S2>/Saturation' */

    /* MATLAB Function: '<S2>/anti_v' */
    gggg_anti_v(gggg_B.Saturation, &gggg_B.sf_anti_v);

    /* MultiPortSwitch: '<S2>/Multiport Switch4' */
    if ((int32_T)gggg_B.route2 == 0) {
      /* DataTypeConversion: '<S2>/Data Type Conversion7' incorporates:
       *  Constant: '<S2>/Constant7'
       */
      u0 = floor(gggg_P.Constant7_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion7 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion7' */

      /* DataTypeConversion: '<S2>/Data Type Conversion16' incorporates:
       *  Constant: '<S2>/Constant16'
       */
      u0 = floor(gggg_P.Constant16_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion16 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion16' */

      /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
       *  Constant: '<S2>/Constant1'
       */
      u0 = floor(gggg_P.Constant1_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion1 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion1' */

      /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
       *  Constant: '<S2>/Constant2'
       */
      u0 = floor(gggg_P.Constant2_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion2 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion2' */

      /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
       *  Constant: '<S2>/Constant3'
       */
      u0 = floor(gggg_P.Constant3_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion3 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion3' */

      /* DataTypeConversion: '<S2>/Data Type Conversion4' incorporates:
       *  Constant: '<S2>/Constant4'
       */
      u0 = floor(gggg_P.Constant4_Value_a);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion4 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion4' */

      /* DataTypeConversion: '<S2>/Data Type Conversion5' incorporates:
       *  Constant: '<S2>/Constant5'
       */
      u0 = floor(gggg_P.Constant5_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion5 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion5' */

      /* DataTypeConversion: '<S2>/Data Type Conversion6' incorporates:
       *  Constant: '<S2>/Constant6'
       */
      u0 = floor(gggg_P.Constant6_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion6 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion6' */
      gggg_B.MultiportSwitch4[0] = gggg_B.DataTypeConversion7;
      gggg_B.MultiportSwitch4[1] = gggg_B.DataTypeConversion16;
      gggg_B.MultiportSwitch4[2] = gggg_B.DataTypeConversion1;
      gggg_B.MultiportSwitch4[3] = gggg_B.DataTypeConversion2;
      gggg_B.MultiportSwitch4[4] = gggg_B.DataTypeConversion3;
      gggg_B.MultiportSwitch4[5] = gggg_B.DataTypeConversion4;
      gggg_B.MultiportSwitch4[6] = gggg_B.DataTypeConversion5;
      gggg_B.MultiportSwitch4[7] = gggg_B.DataTypeConversion6;
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion23' */
      u0 = floor(gggg_B.ManualSwitch_l);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion23 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion23' */

      /* DataTypeConversion: '<S2>/Data Type Conversion24' incorporates:
       *  Constant: '<S2>/Constant24'
       */
      u0 = floor(gggg_P.Constant24_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion24 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion24' */

      /* DataTypeConversion: '<S2>/Data Type Conversion17' incorporates:
       *  Constant: '<S2>/Constant17'
       */
      u0 = floor(gggg_P.Constant17_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion17 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion17' */

      /* DataTypeConversion: '<S2>/Data Type Conversion18' incorporates:
       *  Constant: '<S2>/Constant18'
       */
      u0 = floor(gggg_P.Constant18_Value);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion18 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion18' */

      /* DataTypeConversion: '<S2>/Data Type Conversion19' */
      u0 = floor(gggg_B.sf_anti_v.a);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion19 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion19' */

      /* DataTypeConversion: '<S2>/Data Type Conversion20' */
      u0 = floor(gggg_B.sf_anti_v.b);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion20 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion20' */

      /* DataTypeConversion: '<S2>/Data Type Conversion21' */
      u0 = floor(gggg_B.sf_anti_v.c);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion21 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion21' */

      /* DataTypeConversion: '<S2>/Data Type Conversion22' */
      u0 = floor(gggg_B.sf_anti_v.d);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 256.0);
      }

      gggg_B.DataTypeConversion22 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
        -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

      /* End of DataTypeConversion: '<S2>/Data Type Conversion22' */
      gggg_B.MultiportSwitch4[0] = gggg_B.DataTypeConversion23;
      gggg_B.MultiportSwitch4[1] = gggg_B.DataTypeConversion24;
      gggg_B.MultiportSwitch4[2] = gggg_B.DataTypeConversion17;
      gggg_B.MultiportSwitch4[3] = gggg_B.DataTypeConversion18;
      gggg_B.MultiportSwitch4[4] = gggg_B.DataTypeConversion19;
      gggg_B.MultiportSwitch4[5] = gggg_B.DataTypeConversion20;
      gggg_B.MultiportSwitch4[6] = gggg_B.DataTypeConversion21;
      gggg_B.MultiportSwitch4[7] = gggg_B.DataTypeConversion22;
    }

    /* End of MultiPortSwitch: '<S2>/Multiport Switch4' */
    /* Bit Packing: <S2>/CAN bit-packing 2 */
    {
      uint32_T *y = (uint32_T *)&gggg_B.CANbitpacking2;
      y[0] =
        ((uint32_T)(gggg_B.MultiportSwitch4[0] & 0xff) |
         ((uint32_T)(gggg_B.MultiportSwitch4[1] & 0xff) << 8) |
         ((uint32_T)(gggg_B.MultiportSwitch4[2] & 0xff) << 16) |
         ((uint32_T)(gggg_B.MultiportSwitch4[3] & 0xff) << 24));
      y[1] =
        ((uint32_T)(gggg_B.MultiportSwitch4[4] & 0xff) |
         ((uint32_T)(gggg_B.MultiportSwitch4[5] & 0xff) << 8) |
         ((uint32_T)(gggg_B.MultiportSwitch4[6] & 0xff) << 16) |
         ((uint32_T)(gggg_B.MultiportSwitch4[7] & 0xff) << 24));
    }

    /* S-Function (canac2objsendx): '<S2>/Send2' */
    {
      /*------------ S-Function Block: <S2>/Send2 ------------*/
      if (!g_xpccanac2busstatusx[1-1]) {
        int_T stat;
        EFLAGS_T flags;
        flags = saveAndDisableInterrupts();
        stat = CANPC_write_object2_mbx( 1, 1, 8, (uint8_T *)
          &gggg_B.CANbitpacking2);
        restoreInterrupts(flags);
        ;
      }
    }

    /* Level2 S-Function Block: '<S2>/Setup ' (canac2pcisetupx) */
    {
      SimStruct *rts = gggg_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }
  }
}

/* Model update function */
void gggg_update(void)
{
  int_T idxDelay;
  if (rtmIsMajorTimeStep(gggg_M)) {
    /* Update for Memory: '<S3>/Memory' */
    gggg_DW.Memory_PreviousInput = gggg_B.Switch2;

    /* Update for Memory: '<S3>/Memory2' */
    gggg_DW.Memory2_PreviousInput = gggg_B.Switch1;

    /* Update for Memory: '<S3>/Memory1' */
    gggg_DW.Memory1_PreviousInput = gggg_B.Switch;

    /* Update for Delay: '<S2>/Delay' */
    for (idxDelay = 0; idxDelay < 249; idxDelay++) {
      gggg_DW.Delay_DSTATE[idxDelay] = gggg_DW.Delay_DSTATE[idxDelay + 1];
    }

    gggg_DW.Delay_DSTATE[249] = gggg_B.LogicalOperator6;

    /* End of Update for Delay: '<S2>/Delay' */

    /* Update for Delay: '<S2>/Delay1' */
    for (idxDelay = 0; idxDelay < 9; idxDelay++) {
      gggg_DW.Delay1_DSTATE[idxDelay] = gggg_DW.Delay1_DSTATE[idxDelay + 1];
    }

    gggg_DW.Delay1_DSTATE[9] = gggg_B.ManualSwitch_l;

    /* End of Update for Delay: '<S2>/Delay1' */
  }

  if (rtmIsMajorTimeStep(gggg_M)) {
    rt_ertODEUpdateContinuousStates(&gggg_M->solverInfo);
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
  if (!(++gggg_M->Timing.clockTick0)) {
    ++gggg_M->Timing.clockTickH0;
  }

  gggg_M->Timing.t[0] = rtsiGetSolverStopTime(&gggg_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++gggg_M->Timing.clockTick1)) {
      ++gggg_M->Timing.clockTickH1;
    }

    gggg_M->Timing.t[1] = gggg_M->Timing.clockTick1 * gggg_M->Timing.stepSize1 +
      gggg_M->Timing.clockTickH1 * gggg_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void gggg_derivatives(void)
{
  XDot_gggg_T *_rtXdot;
  _rtXdot = ((XDot_gggg_T *) gggg_M->derivs);

  /* Derivatives for StateSpace: '<S2>/s1' */
  _rtXdot->s1_CSTATE = 0.0;
  _rtXdot->s1_CSTATE += gggg_P.s1_A * gggg_X.s1_CSTATE;
  _rtXdot->s1_CSTATE += gggg_P.s1_B * gggg_B.sf_V_S_1.V;

  /* Derivatives for StateSpace: '<S2>/s4' */
  _rtXdot->s4_CSTATE = 0.0;
  _rtXdot->s4_CSTATE += gggg_P.s4_A * gggg_X.s4_CSTATE;
  _rtXdot->s4_CSTATE += gggg_P.s4_B * gggg_B.sf_V_S_2.V;

  /* Derivatives for StateSpace: '<S2>/s3' */
  _rtXdot->s3_CSTATE = 0.0;
  _rtXdot->s3_CSTATE += gggg_P.s3_A * gggg_X.s3_CSTATE;
  _rtXdot->s3_CSTATE += gggg_P.s3_B * gggg_B.sf_V_S_1.S;

  /* Derivatives for StateSpace: '<S2>/s5' */
  _rtXdot->s5_CSTATE = 0.0;
  _rtXdot->s5_CSTATE += gggg_P.s5_A * gggg_X.s5_CSTATE;
  _rtXdot->s5_CSTATE += gggg_P.s5_B * gggg_B.sf_V_S_2.S;
}

/* Model initialize function */
void gggg_initialize(void)
{
  /* S-Function Block: <S1>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem/Gain6"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem/Gain11"));
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Subsystem/Gain6"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &gggg_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Start for Constant: '<Root>/旋紧1' */
  gggg_B.u = gggg_P.u_Value;

  /* Start for Constant: '<Root>/预旋松1' */
  gggg_B.u_k = gggg_P.u_Value_f;

  /* Start for Constant: '<Root>/旋松1' */
  gggg_B.u_i = gggg_P.u_Value_n;

  /* Start for Enabled SubSystem: '<S2>/Subsystem2' */
  gggg_Subsystem1_Start(&gggg_DW.Subsystem2);

  /* End of Start for SubSystem: '<S2>/Subsystem2' */

  /* Start for Enabled SubSystem: '<S2>/Subsystem1' */
  gggg_Subsystem1_Start(&gggg_DW.Subsystem1);

  /* End of Start for SubSystem: '<S2>/Subsystem1' */

  /* Bit Packing: <S2>/CAN bit-packing 1 */
  gggg_B.CANbitpacking1 = 0.0;

  /* Bit Packing: <S2>/CAN bit-packing 3 */
  gggg_B.CANbitpacking3 = 0.0;

  /* Bit Packing: <S2>/CAN bit-packing 2 */
  gggg_B.CANbitpacking2 = 0.0;

  /* Level2 S-Function Block: '<S2>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = gggg_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  {
    int32_T i;

    /* InitializeConditions for Memory: '<S3>/Memory' */
    gggg_DW.Memory_PreviousInput = gggg_P.Memory_X0;

    /* InitializeConditions for Memory: '<S3>/Memory2' */
    gggg_DW.Memory2_PreviousInput = gggg_P.Memory2_X0;

    /* InitializeConditions for Memory: '<S3>/Memory1' */
    gggg_DW.Memory1_PreviousInput = gggg_P.Memory1_X0;

    /* InitializeConditions for StateSpace: '<S2>/s1' */
    gggg_X.s1_CSTATE = gggg_P.s1_X0;

    /* InitializeConditions for Delay: '<S2>/Delay' */
    for (i = 0; i < 250; i++) {
      gggg_DW.Delay_DSTATE[i] = gggg_P.Delay_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S2>/Delay' */

    /* InitializeConditions for StateSpace: '<S2>/s4' */
    gggg_X.s4_CSTATE = gggg_P.s4_X0;

    /* InitializeConditions for StateSpace: '<S2>/s3' */
    gggg_X.s3_CSTATE = gggg_P.s3_X0;

    /* InitializeConditions for StateSpace: '<S2>/s5' */
    gggg_X.s5_CSTATE = gggg_P.s5_X0;

    /* InitializeConditions for Delay: '<S2>/Delay1' */
    for (i = 0; i < 10; i++) {
      gggg_DW.Delay1_DSTATE[i] = gggg_P.Delay1_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S2>/Delay1' */

    /* SystemInitialize for Chart: '<S2>/Chart1' */
    gggg_DW.sfEvent = gggg_CALL_EVENT_l;
    gggg_DW.is_active_enable1 = 0U;
    gggg_DW.is_enable1 = gggg_IN_NO_ACTIVE_CHILD;
    gggg_DW.is_active_enable2 = 0U;
    gggg_DW.is_enable2 = gggg_IN_NO_ACTIVE_CHILD;
    gggg_DW.is_active_enable3 = 0U;
    gggg_DW.is_enable3 = gggg_IN_NO_ACTIVE_CHILD;
    gggg_DW.is_active_c6_gggg = 0U;
    gggg_DW.is_c6_gggg = gggg_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Enabled SubSystem: '<S2>/Subsystem2' */
    gggg_Subsystem1_Init(&gggg_B.Subsystem2, (P_Subsystem1_gggg_T *)
                         &gggg_P.Subsystem2);

    /* End of SystemInitialize for SubSystem: '<S2>/Subsystem2' */

    /* SystemInitialize for Enabled SubSystem: '<S2>/Subsystem1' */
    gggg_Subsystem1_Init(&gggg_B.Subsystem1, (P_Subsystem1_gggg_T *)
                         &gggg_P.Subsystem1);

    /* End of SystemInitialize for SubSystem: '<S2>/Subsystem1' */

    /* SystemInitialize for Chart: '<S2>/Chart' */
    gggg_DW.sfEvent_n = gggg_CALL_EVENT_l;
    gggg_DW.is_route = gggg_IN_NO_ACTIVE_CHILD;
    gggg_DW.temporalCounter_i1 = 0U;
    gggg_DW.is_active_c4_gggg = 0U;
    gggg_DW.is_c4_gggg = gggg_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void gggg_terminate(void)
{
  /* Level2 S-Function Block: '<S2>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = gggg_M->childSfunctions[0];
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
  gggg_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  gggg_update();
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
  gggg_initialize();
}

void MdlTerminate(void)
{
  gggg_terminate();
}

/* Registration function */
RT_MODEL_gggg_T *gggg(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)gggg_M, 0,
                sizeof(RT_MODEL_gggg_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&gggg_M->solverInfo, &gggg_M->Timing.simTimeStep);
    rtsiSetTPtr(&gggg_M->solverInfo, &rtmGetTPtr(gggg_M));
    rtsiSetStepSizePtr(&gggg_M->solverInfo, &gggg_M->Timing.stepSize0);
    rtsiSetdXPtr(&gggg_M->solverInfo, &gggg_M->derivs);
    rtsiSetContStatesPtr(&gggg_M->solverInfo, (real_T **) &gggg_M->contStates);
    rtsiSetNumContStatesPtr(&gggg_M->solverInfo, &gggg_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&gggg_M->solverInfo,
      &gggg_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&gggg_M->solverInfo,
      &gggg_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&gggg_M->solverInfo,
      &gggg_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&gggg_M->solverInfo, (&rtmGetErrorStatus(gggg_M)));
    rtsiSetRTModelPtr(&gggg_M->solverInfo, gggg_M);
  }

  rtsiSetSimTimeStep(&gggg_M->solverInfo, MAJOR_TIME_STEP);
  gggg_M->intgData.y = gggg_M->odeY;
  gggg_M->intgData.f[0] = gggg_M->odeF[0];
  gggg_M->intgData.f[1] = gggg_M->odeF[1];
  gggg_M->intgData.f[2] = gggg_M->odeF[2];
  gggg_M->intgData.f[3] = gggg_M->odeF[3];
  gggg_M->contStates = ((real_T *) &gggg_X);
  rtsiSetSolverData(&gggg_M->solverInfo, (void *)&gggg_M->intgData);
  rtsiSetSolverName(&gggg_M->solverInfo,"ode4");
  gggg_M->solverInfoPtr = (&gggg_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = gggg_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    gggg_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    gggg_M->Timing.sampleTimes = (&gggg_M->Timing.sampleTimesArray[0]);
    gggg_M->Timing.offsetTimes = (&gggg_M->Timing.offsetTimesArray[0]);

    /* task periods */
    gggg_M->Timing.sampleTimes[0] = (0.0);
    gggg_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    gggg_M->Timing.offsetTimes[0] = (0.0);
    gggg_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(gggg_M, &gggg_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = gggg_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    gggg_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(gggg_M, -1);
  gggg_M->Timing.stepSize0 = 0.002;
  gggg_M->Timing.stepSize1 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    gggg_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(gggg_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(gggg_M->rtwLogInfo, (NULL));
    rtliSetLogT(gggg_M->rtwLogInfo, "tout");
    rtliSetLogX(gggg_M->rtwLogInfo, "");
    rtliSetLogXFinal(gggg_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(gggg_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(gggg_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(gggg_M->rtwLogInfo, 0);
    rtliSetLogDecimation(gggg_M->rtwLogInfo, 1);
    rtliSetLogY(gggg_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(gggg_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(gggg_M->rtwLogInfo, (NULL));
  }

  gggg_M->solverInfoPtr = (&gggg_M->solverInfo);
  gggg_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&gggg_M->solverInfo, 0.002);
  rtsiSetSolverMode(&gggg_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  gggg_M->blockIO = ((void *) &gggg_B);
  (void) memset(((void *) &gggg_B), 0,
                sizeof(B_gggg_T));

  /* parameters */
  gggg_M->defaultParam = ((real_T *)&gggg_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &gggg_X;
    gggg_M->contStates = (x);
    (void) memset((void *)&gggg_X, 0,
                  sizeof(X_gggg_T));
  }

  /* states (dwork) */
  gggg_M->dwork = ((void *) &gggg_DW);
  (void) memset((void *)&gggg_DW, 0,
                sizeof(DW_gggg_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  gggg_InitializeDataMapInfo(gggg_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &gggg_M->NonInlinedSFcns.sfcnInfo;
    gggg_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(gggg_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &gggg_M->Sizes.numSampTimes);
    gggg_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(gggg_M)[0]);
    gggg_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(gggg_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,gggg_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(gggg_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(gggg_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(gggg_M));
    rtssSetStepSizePtr(sfcnInfo, &gggg_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(gggg_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &gggg_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &gggg_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &gggg_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &gggg_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &gggg_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &gggg_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &gggg_M->solverInfoPtr);
  }

  gggg_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&gggg_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    gggg_M->childSfunctions = (&gggg_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    gggg_M->childSfunctions[0] = (&gggg_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: gggg/<S2>/Setup  (canac2pcisetupx) */
    {
      SimStruct *rts = gggg_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = gggg_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = gggg_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = gggg_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &gggg_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, gggg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &gggg_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &gggg_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &gggg_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &gggg_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &gggg_M->
          NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "gggg/Subsystem/Setup ");
      ssSetRTModel(rts,gggg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &gggg_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)gggg_P.Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)gggg_P.Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)gggg_P.Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)gggg_P.Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)gggg_P.Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)gggg_P.Setup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)gggg_P.Setup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)gggg_P.Setup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)gggg_P.Setup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)gggg_P.Setup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)gggg_P.Setup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)gggg_P.Setup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)gggg_P.Setup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)gggg_P.Setup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)gggg_P.Setup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)gggg_P.Setup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)gggg_P.Setup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)gggg_P.Setup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)gggg_P.Setup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)gggg_P.Setup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)gggg_P.Setup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)gggg_P.Setup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)gggg_P.Setup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)gggg_P.Setup_P24_Size);
      }

      /* registration */
      canac2pcisetupx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  gggg_M->Sizes.numContStates = (4);   /* Number of continuous states */
  gggg_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  gggg_M->Sizes.numY = (0);            /* Number of model outputs */
  gggg_M->Sizes.numU = (0);            /* Number of model inputs */
  gggg_M->Sizes.sysDirFeedThru = (0);  /* The model is not direct feedthrough */
  gggg_M->Sizes.numSampTimes = (2);    /* Number of sample times */
  gggg_M->Sizes.numBlocks = (196);     /* Number of blocks */
  gggg_M->Sizes.numBlockIO = (134);    /* Number of block outputs */
  gggg_M->Sizes.numBlockPrms = (167);  /* Sum of parameter "widths" */
  return gggg_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
