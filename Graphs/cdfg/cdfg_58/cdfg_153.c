#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 81014623
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, unsigned long p_7, float p_11[2][2], double p_13)
{
  double v_9;
  double v_5;
  double v;
  long long result;
  v = -2.17156085868e+38;
  result = 246168079LL;
  while ((int)((unsigned short)((p - (float)result) - -962910912.f)) * 34966 != 72) {
    v_9 = (int)((unsigned char)v) + 121;
    v = - (- (- p_13));
    v_5 = (double)-327221388L;
    result = (long long)((double)((-28071 + (int)v_5) / ((int)p + 726)) + (
                         (double)p_7 * v_9 + (double)p_11[1][0]));
  }
  while_0_break: ;
  return result;
}

