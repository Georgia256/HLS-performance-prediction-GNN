#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 121352059
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, long p_4, short p_13)
{
  unsigned char v_11;
  unsigned long long v_9;
  unsigned long v_7;
  unsigned int v;
  unsigned int result;
  v_9 = (unsigned long long)p_13;
  v_7 = 57280UL;
  v = (unsigned int)p_13;
  result = 4294936646U;
  while ((unsigned long)(! (! p_4)) == (unsigned long)v) {
    v_11 = v_9 << ((v_7 + 148UL) & 63UL);
    v_9 = (unsigned long long)(- ((int)p_13 * (int)(- v_11)));
    v_7 = 22808UL;
    v = (unsigned int)p_4;
  }
  while_0_break: ;
  result = (unsigned int)((long long)(- ((float)result / -7804764672.f)) + (
                          112LL + (long long)result * p));
  return result;
}

