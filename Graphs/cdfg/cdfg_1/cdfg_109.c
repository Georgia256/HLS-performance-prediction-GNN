#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 873679262
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, char p_11, float p_17)
{
  unsigned int v_15;
  unsigned short v_13;
  float v_9;
  int v_6;
  double v_4;
  long long v;
  long result;
  v_15 = (unsigned int)p_11;
  v_9 = 6.77682157224e+37f;
  v_6 = (int)p;
  v = 17062LL;
  v_13 = (unsigned short)p_17;
  if ((long long)(~ (421 % ((int)v_13 + 44))) > (33611LL * v) % (long long)(
                                                ! v_15 + 625U) - (long long)p_17) {
    v_4 = (double)3626770540UL;
    v = (long long)(- v_9);
    result = (long)(((double)v / (v_4 + 1015.) + ((double)v_6 + p)) * (
                    75. - p * 1.84467440737e+19));
  }
  else {
    v_9 = (float)p;
    v_9 = - (- v_9 / 910.f);
    result = ! (446365610L / ((long)((float)p_11 * v_9) + 265L));
  }
  return result;
}

