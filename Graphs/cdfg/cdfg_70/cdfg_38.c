#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 773003252
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, long p_9[4])
{
  unsigned long long v_7;
  double v_4;
  int v;
  double result;
  v_7 = (unsigned long long)p;
  v_4 = (double)p_9[3];
  if (v_7 != (unsigned long long)p_9[0]) {
    v_7 = (unsigned long long)(! p);
    v_4 = (double)(- ((unsigned long long)p & v_7) / ((unsigned long long)(
                                                      (double)(14420UL + (unsigned long)v_4) * - v_4) + 240ULL));
    v = (int)(- (- v_4));
  }
  else v = (int)((unsigned long)(- ((unsigned int)-2.25497592026e+38 + 4264768548U)) * 4294967213UL);
  result = (double)v;
  return result;
}

