#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 709879965
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, long long p_4, long long p_6, long p_9, int p_11)
{
  unsigned int v_13;
  unsigned char v;
  long result;
  v_13 = (unsigned int)p;
  v = (unsigned char)((unsigned long)(p_9 / (long)(~ p_11 + 540)) + (unsigned long)v_13);
  if (-7225516319.89 * (double)v >= (double)v) result = (long)((long long)(
                                                               ((int)p - (int)p) - 195) % (
                                                               - (p_4 * p_6) + 811LL));
  else result = 89L;
  return result;
}

