#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 220322496
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, float p_11, int p_17, long long p_19)
{
  int v_15;
  unsigned long v_13;
  signed char v_9;
  unsigned int v_7;
  unsigned long v_5;
  double v;
  double result;
  v_13 = (unsigned long)p;
  v_9 = (signed char)p_17;
  v_7 = 4252233541U;
  v_5 = 4294933728UL;
  v = 73.7015222078;
  result = 1075575210.36;
  v = ((315470194. - v) / ((double)(~ p_19) + 349.)) / (- (-59.3751649624 - v) + 201.);
  while ((int)p < (int)((signed char)(- ((double)((unsigned long)v * v_5) + -1.14139429962e+14)))) {
    v_7 += 45653U;
    v_15 = (int)p_11 - p_17 / ((int)(~ v_9) + 522);
    result = (double)(v_5 & (unsigned long)(- v_15 * (p_17 ^ 7335)));
    v = ((4294911816. + v) / (double)(p_11 + 954.f)) * (double)(~ (v_13 + (unsigned long)p));
  }
  while_0_break: ;
  return result;
}

