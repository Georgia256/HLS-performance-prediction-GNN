#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 593016163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, long long p_4, double p_6, unsigned short p_8,
                  long long p_11)
{
  unsigned char v_13;
  unsigned long long v;
  unsigned long result;
  v_13 = (unsigned char)213;
  v = (unsigned long long)p;
  v = - ((unsigned long long)(p_4 * (long long)v_13) * v);
  if (((unsigned long long)((int)p_8 ^ -19705) * (v * 21274ULL)) / (unsigned long long)(
      (p_11 + (long long)p_6) / 221LL + 258LL) < (unsigned long long)(
      4294939705UL + (unsigned long)((float)p_8 - - p))) result = (unsigned long)p;
  else result = (unsigned long)((double)p_4 * p_6);
  return result;
}

