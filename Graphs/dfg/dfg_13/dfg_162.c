#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 486217474
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, float p_5)
{
  unsigned long long v_11;
  int v_9;
  short v_7;
  short v;
  long result;
  v_11 = 18446744073709513184ULL;
  v_7 = (short)8449;
  v_9 = (int)v_11;
  v = (short)-22149;
  v = (short)(~ (((28875ULL - (unsigned long long)p_5) - (unsigned long long)(
                  (int)v / ((int)v + 359))) * (unsigned long long)(((int)v | (int)v_7) / (
                                                                   - v_9 + 569))));
  result = (long)(((long long)(! v) * ((p * -27039LL) / -6326204272LL)) * 77LL);
  return result;
}

