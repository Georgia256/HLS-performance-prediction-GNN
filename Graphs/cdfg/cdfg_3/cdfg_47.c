#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 917913524
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned long long p_4[1][4], long long p_9[2][3])
{
  unsigned long long v_7;
  long v;
  double result;
  v_7 = (unsigned long long)p_9[1][0];
  v = -294051662L;
  result = 1.17885158854e+38;
  result = - (- result + (double)(v_7 * (unsigned long long)p_9[1][0]));
  result = - ((result - (double)p) * (double)(p_4[0][3] / (unsigned long long)(
                                              v + 845L)));
  return result;
}

