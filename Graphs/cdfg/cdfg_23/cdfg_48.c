#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 619570761
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p[5][4][1], unsigned short p_7)
{
  unsigned short v_5;
  short v;
  double result;
  v_5 = p_7;
  v = (short)15747;
  result = (double)p_7;
  result = (double)((long)result * ((long)v * p[4][0][0]) - ((51006L + p[3][0][0]) - (long)(
                                                             (int)((unsigned short)result) * (int)v_5)));
  return result;
}

