#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 608306864
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, double p_5, int p_7, double p_11,
                       unsigned long long p_13)
{
  long v_19;
  signed char v_17;
  double v_15;
  unsigned long long v_9;
  long long v;
  unsigned long long result;
  v_17 = (signed char)p_5;
  v_15 = (double)p_7;
  v_9 = 34079ULL;
  v_19 = 34450L;
  if (~ (v_9 * (unsigned long long)v_19 + 483ULL) > p_13) {
    v = (long long)((int)p_5 - ! (p_7 / -29));
    result = (unsigned long long)((long long)p / (- v + 171LL));
  }
  else {
    v = (long long)(! (- ((int)v_17 * p_7)));
    v_9 = ~ ((unsigned long long)v * (p_13 + (unsigned long long)v_15));
    result = v_9 - (484114381ULL * v_9) % (unsigned long long)((-50256L + (long)p_11) + 351L);
  }
  return result;
}

