#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 795221248
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, float p_5[5][1], int p_9, double p_11, long p_13)
{
  unsigned long v_15;
  double v_7;
  short v;
  unsigned long result;
  v_15 = 213557405UL;
  if (v_15 == 116UL) {
    v_7 = (double)(((float)(- p_13) / (p_5[3][0] + 592.f)) * ((float)(~ p_13) + -1.80943148602e+38f));
    v_7 = - (v_7 * (double)p_9 + - p_11);
    v = (short)((double)p_5[3][0] * (- v_7 / (double)(p + 166.f)));
  }
  else {
    v = (short)18032;
    v = (short)((unsigned int)((int)((short)p_5[3][0]) / ((int)v + 884)) * 19302U);
  }
  result = (unsigned long)(- (- ((float)v / (p + 173.f))));
  return result;
}

