#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 926159199
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned short p_5, unsigned long p_7, float p_9,
                signed char p_11)
{
  long long v_15;
  int v_13;
  long long v;
  signed char result;
  v_13 = (int)p_7;
  v_15 = -823LL;
  if ((long long)p_7 != ! ((long long)((long)p_9 | 572734506L) / ((long long)v_13 / (
                                                                  v_15 + 892LL) + 364LL))) {
    v = (long long)p;
    result = (signed char)v;
  }
  else result = (signed char)(- p_5);
  return result;
}

