#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 88104611
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, signed char p_4,
                   unsigned long long p_9)
{
  float v_7;
  int v;
  unsigned short result;
  v = (int)p_4;
  result = (unsigned short)p;
  v_7 = (float)(! 4294917112U);
  result = (unsigned short)((- p % (unsigned long long)(((int)p_4 - v) + 924)) % (
                            ((unsigned long long)v_7 / (p_9 + 349ULL) - (unsigned long long)(
                             (long long)result * -962419839LL)) + 344ULL));
  return result;
}

