#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732416112
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned long long p_7, short p_9,
              unsigned char p_13)
{
  short v_15;
  unsigned char v_11;
  char v_5;
  unsigned int v;
  long long result;
  v_15 = p_9;
  v_11 = (unsigned char)124;
  v_5 = (char)p;
  result = 25892LL;
  v = 4294948242U;
  if ((int)v_11 >= (int)v_5) {
    v = 103U;
    result = (long long)(((unsigned long)(v * 792U) + 471314259UL) << (
                         ~ v & 31U));
  }
  else {
    result = (long long)(((unsigned int)-244.811114448 - v) % 348832651U + (unsigned int)(
                         (double)result + 3.32316145227e+18));
    v_5 = (char)((result - (long long)(97 / ((int)v_11 + 507))) | (long long)(
                 (int)(! p_13) - (int)v_15));
    result = (long long)(((unsigned long long)(p / (unsigned long)((int)v_5 + 943)) + ! p_7) * (unsigned long long)p_9);
  }
  return result;
}

