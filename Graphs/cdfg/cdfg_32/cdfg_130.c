#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 5022068
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, unsigned int p_5, unsigned int p_7, short p_13, float p_15)
{
  signed char v_11;
  signed char v_9;
  unsigned long v;
  long result;
  v_11 = (signed char)(-127-1);
  result = (long)p_5;
  v = (unsigned long)(~ (- p_5) >> 16);
  while (v == ((unsigned long)p % (unsigned long)(p_5 * p_7 + 890U)) * 4294908826UL) {
    v_9 = (float)v_11 * 521.823120117f;
    v_11 = (signed char)((long)((int)p_13 * (int)v_9) * p - (long)(((int)p_13 / (
                                                                    (int)((short)5.3431913942e+37f) + 758)) % (
                                                                   (int)p_13 + 554)));
    result = 154765672L;
    v = (unsigned long)(((unsigned long long)((float)p_13 * p_15) * (
                         (unsigned long long)p % 18446744073709489543ULL)) * 14ULL);
  }
  while_0_break: ;
  return result;
}

