#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 459507164
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, signed char p_5, signed char p_7,
                       long long p_9, unsigned long p_13[5][1])
{
  unsigned char v_11;
  char v;
  unsigned long long result;
  v_11 = (unsigned char)75;
  v = (char)p;
  if ((long long)v - ((long long)p_7 & p_9) / (long long)((int)v_11 + 148) <= (long long)(
      4146018623UL % (~ (p_13[3][0] - p_13[2][0]) + 911UL))) v = (char)(~ (
                                                             p % (p + 977LL) + (long long)(- p_5)));
  else v = (char)p_7;
  result = (unsigned long long)(58295L / ((long)v * (35566L / (long)(
                                                     (int)v + 794)) + 46L));
  return result;
}

