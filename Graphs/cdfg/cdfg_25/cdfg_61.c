#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 892300900
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned int p_9, int p_13)
{
  signed char v_11;
  unsigned long long v_7;
  char v_5;
  short v;
  float result;
  v_11 = (signed char)p;
  v_7 = (unsigned long long)p_9;
  v = (short)16991;
  v_5 = (char)(- (- v_7) + (unsigned long long)((p_9 / (unsigned int)(
                                                 (int)v_11 + 302)) / (unsigned int)(
                                                - p_13 + 277)));
  result = (float)(((unsigned long)p - (unsigned long)((unsigned int)v * 32247U)) % (unsigned long)(
                   - (54755 / ((int)v_5 + 769)) + 1009));
  return result;
}

