#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732862572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, int p_4, unsigned long long p_6,
                       long long p_13, short p_17)
{
  int v_15;
  short v_11;
  int v_9;
  short v;
  unsigned long long result;
  v_15 = p_4;
  v_9 = -284868430;
  result = p_6;
  v_11 = (short)(((unsigned long long)p_17 / (p_6 + 1001ULL)) / (result + 812ULL));
  if (10699 <= v_15) result = (unsigned long long)(50180LL % (- p + 209LL)) / (
                              ((unsigned long long)(p_4 - -4225) + ! p_6) + 887ULL);
  else {
    v = v_11;
    v_11 = (short)(((-18254LL + (long long)v_9) - 26606LL) % (((long long)(
                                                               (unsigned int)v % 3724029364U) + p_13) + 593LL));
    result = (unsigned long long)((long)(~ v) % ((38357L * (long)v_9 - (long)(- v_11)) + 60L));
  }
  return result;
}

