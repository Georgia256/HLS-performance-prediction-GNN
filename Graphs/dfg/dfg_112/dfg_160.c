#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 731373625
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[1], long long p_7[1][4], char p_9)
{
  signed char v_5;
  short v;
  long long result;
  v_5 = (signed char)62;
  result = ! ((p_7[0][2] - 61967LL) % (long long)((int)(! v_5) + 593) - (long long)p_9);
  v_5 = (signed char)(p[0] / 327.);
  v = (short)1.65450937087e+38f;
  result = (long long)((double)(! (result >> ((int)v & 63))) - p[0]) % (
           ! ((long long)(~ v_5) * result) + 309LL);
  return result;
}

