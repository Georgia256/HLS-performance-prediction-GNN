#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 49286627
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned short p_7, short p_9, unsigned long p_11[3][5],
          signed char p_13)
{
  unsigned long long v_23;
  int v_21;
  float v_19;
  short v_17;
  unsigned long v_15;
  long v_5;
  unsigned long v;
  float result;
  v_23 = (unsigned long long)p_7;
  v_19 = (float)p_9;
  v_17 = (short)-32471;
  v_15 = 4075108026UL;
  v_5 = -10862L;
  result = (float)p_9;
  while (- (v_15 * p_11[2][4] & (unsigned long)(! p_7)) > (unsigned long)(
         -5022582272.f - (float)((unsigned long)v_17 / 4294928978UL + (unsigned long)(
                                 (int)((unsigned short)-3802104687.32) - 55695)))) {
    v_5 = (long)(! v_23);
    v_21 = (int)p_13;
    v_15 = (unsigned long)((long long)((float)v_21 * v_19 - (float)(- p_11[0][4])) * (
                           (long long)(v_5 - (long)p_7) * 2038926157816313175LL));
  }
  while_0_break: ;
  if (((p_11[0][4] * p_11[2][4]) / (unsigned long)((long)p_7 / -44841L + 29L)) / (
      (unsigned long)(~ v_5) % (~ p_11[2][0] + 506UL) + 709UL) == 4294943642UL) {
    result = (float)(559189662U / ((unsigned int)p + 311U));
    result = (float)(- (-354.93358396 * (double)(result - -276074848.f)));
  }
  else {
    result = (float)(~ ((int)p_9 / ((int)((short)((double)result / 1.39605323511e+37)) + 435)));
    v = (unsigned long)(! p_7);
    result = (float)(((double)p / -1.43868621164e+38) / (double)(result + 878.f) - (double)(- (
                     v + (unsigned long)v_5)));
  }
  return result;
}

