#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 12598354
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long long p_5, double p_7, long long p_11)
{
  char v_13;
  short v_9;
  unsigned int v;
  long result;
  v_13 = (char)p;
  v_9 = (short)p;
  v = (unsigned int)((-9722891264LL + (long long)v_9 * p_11) * (long long)v_13);
  result = (long)(- v / (unsigned int)((int)p / 160 + 179) ^ (unsigned int)(
                  (double)(-978.596801758f - (float)p_5) + p_7));
  return result;
}

