#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 734479234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned long long p_5, unsigned long long p_7,
          unsigned long long p_13, long long p_15)
{
  unsigned int v_19;
  short v_17;
  signed char v_11;
  unsigned long v_9;
  short v;
  float result;
  v_19 = 4294939369U;
  v_9 = 261824665UL;
  v_17 = (short)(p_5 & (unsigned long long)(3549189842UL / (unsigned long)(
                                            - v_19 + 484U)));
  if (-103 > (int)v_17) result = (float)(-45131U);
  else {
    v_11 = (signed char)(~ (! p_15));
    v = (short)((unsigned long long)v_11 * - (203626872ULL & p_13));
    result = (float)(0ULL % (((p_5 + p_7) + (unsigned long long)(v_9 + (unsigned long)v)) + 481ULL));
  }
  return result;
}

