#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017622940
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, int p_9, unsigned int p_11, float p_13,
                  unsigned long long p_15)
{
  double v_19;
  unsigned long v_17;
  unsigned char v_7;
  unsigned long v_5;
  unsigned int v;
  unsigned long result;
  v_19 = 818.291853416;
  v_17 = 4294955936UL;
  v_7 = (unsigned char)p_15;
  v_5 = 4294908239UL;
  if ((unsigned long long)((- v_17 % (unsigned long)(((int)((signed char)v_19) & 72) + 368)) / 3168UL) > (
      7115117093ULL ^ (18446744073709551556ULL * p_15 - 2267172560ULL))) {
    v_5 = 3483981536UL / (! (v_5 + (unsigned long)p_11) + 549UL);
    v = 4294906729U;
    result = ((unsigned long)(~ p_11) ^ 0) * (unsigned long)v_7;
  }
  else {
    v_5 = (unsigned long)(~ (~ ((long)p_13 % -17140L)));
    result = 4294967295UL + (unsigned long)(- (- p_13));
    v = 226304598U % ((unsigned int)p_13 + 320U);
  }
  while ((double)p <= - (- (-1.03684753841e+37 - (double)v))) {
    v_7 = v_5 - 31590UL;
    v_5 = (unsigned long)(- -11132);
    result = 6UL;
    v = (unsigned int)((int)v_7 | 57541) * ((unsigned int)p_9 * p_11) + (unsigned int)(
        (int)((unsigned char)(p_13 + (float)p_15)) ^ (int)v_7);
  }
  while_0_break: ;
  return result;
}

