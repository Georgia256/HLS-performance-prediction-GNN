#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 897062658
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, unsigned int p_5[2], unsigned char p_15, float p_17,
                float p_21[3][2][5])
{
  unsigned long v_23;
  long long v_19;
  float v_13;
  signed char v_11;
  double v_9;
  long v_7;
  long v;
  signed char result;
  v_23 = (unsigned long)p;
  v_19 = 83971674LL;
  v_13 = 3.0274851044e+38f;
  v_9 = (double)p_15;
  v_7 = (long)p_17;
  v = (long)p_17;
  if ((double)((unsigned long long)1.32362335754e+38f << 10ULL) + ((double)(- v_7) + (
                                                                   631.843050619 - (double)p)) < (double)(
      ((float)(-883719296LL + (long long)v_23) + ((float)v - p)) * (float)(
      v_19 + -360562720LL))) {
    result = (signed char)(29UL * ~ (4294926876UL - (unsigned long)v_13));
    v_9 = (double)(-160);
    v_11 = (signed char)(- ((float)p_5[1] * - v_13));
  }
  else {
    v_11 = (signed char)p_21[1][0][4];
    v_19 = 11LL;
    result = (signed char)((long long)((int)((float)p_15 + 6168724480.f) & (
                                       (int)((signed char)p_17) + 2)) % (
                           ! (! v_19) + 165LL));
  }
  while ((float)((unsigned long)((unsigned int)result / 994721394U) / (unsigned long)(
                 v + 229L)) + (4557177.f - p) / ((float)(- p_5[1]) + 564.f) < 118.f) {
    v_7 = (unsigned long)v_9 << 8UL;
    v = 14329L;
    v_9 = (double)(-25331L * ((long)3731024262.6 - (long)p * v));
    v = (long)((double)v_11 * ((double)(-82L - v_7) / (((double)p - 6.11559335867e+37) + 325.)));
  }
  while_0_break: ;
  return result;
}

