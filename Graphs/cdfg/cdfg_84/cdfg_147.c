#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893732422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, unsigned long long p_5, float p_11,
           long long p_13, long long p_15)
{
  long v_9;
  signed char v_7;
  signed char v;
  double result;
  v_7 = (signed char)p_5;
  v = (signed char)-59;
  result = -2.85666795408e+38;
  v_9 = (long)(~ ((unsigned long long)(p_13 - p_15) ^ 18446744073709536508ULL));
  while ((unsigned long long)p % ((unsigned long long)v / (p_5 + 532ULL) + 889ULL) == (unsigned long long)(
         ~ ((int)((signed char)result) + (int)v_7) / 51)) {
    v_9 -= 442L;
    v_7 = (signed char)-53;
    result = (double)p_11;
    v = (signed char)p;
  }
  while_0_break: ;
  return result;
}

