#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1041234098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned long long p_4, signed char p_17)
{
  double v_15;
  long long v_13;
  double v_11;
  long long v_9;
  unsigned long long v_7;
  unsigned char v;
  double result;
  v_15 = 598.07216241;
  v_11 = (double)p;
  v_9 = 587011921LL;
  v = (unsigned char)51;
  result = (double)p_4;
  v_7 = 18446744073709551612ULL;
  while ((unsigned long long)((int)result ^ (int)(- p) * (int)(~ p)) != 
         p_4 % (((unsigned long long)v * v_7 & (unsigned long long)(v_9 - -20049LL)) + 16ULL)) {
    v_13 = (unsigned int)v_11 % 546433004U;
    result = (double)(255 << ((v_13 % ((long long)v_15 + 295LL)) / (long long)(
                              (unsigned int)p_17 * 4294944922U + 770U) & 7LL));
    v_7 = (unsigned long long)v_13;
    v = (unsigned char)225;
  }
  while_0_break: ;
  return result;
}

