#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958558293
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, float p_5, short p_7,
                  unsigned long long p_9, short p_13)
{
  unsigned long long v_15;
  char v_11;
  signed char v;
  unsigned long result;
  v_15 = 18446744073709545142ULL;
  v_11 = (char)p_5;
  if (621ULL < (~ p_9 | (unsigned long long)(~ v_11)) % ((unsigned long long)(
                                                         33784 / ((int)p_13 + 570)) % (
                                                         - v_15 + 148ULL) + 247ULL)) {
    v = (signed char)(-46 % ((int)((signed char)((double)p_5 + -2.83974591611e+38)) + 615) - (
                      (int)p_7 | 56));
    result = (unsigned long)((unsigned int)((int)-3334299136.f ^ ((int)v + (int)p)) * 952865890U);
  }
  else result = (unsigned long)p_5;
  return result;
}

