#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 259782082
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned long long p_11)
{
  unsigned int v_9;
  unsigned long v_7;
  unsigned int v_5;
  long v;
  long result;
  v_7 = (unsigned long)p;
  v_5 = (unsigned int)p_11;
  v = 198261233L;
  result = (long)p;
  v_9 = (unsigned int)((unsigned long long)result * (- p_11 + 18446744073709551572ULL));
  while (52ULL > (unsigned long long)((long)((float)p + -2.09723847265e+38f) + ! v) * (
                 (unsigned long long)v_5 % 18446744073709519102ULL - 18678ULL)) {
    v = (float)v_9 - -3.044503263e+38f;
    result = 396035332L;
    v_9 = (unsigned int)p;
    v_5 = (unsigned int)v_7;
  }
  while_0_break: ;
  return result;
}

