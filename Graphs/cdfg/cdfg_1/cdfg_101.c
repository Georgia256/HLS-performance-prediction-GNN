#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 92039588
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, int p_5, unsigned int p_9[2][2][1],
                       unsigned int p_11, unsigned int p_15)
{
  int v_19;
  double v_17;
  signed char v_13;
  double v_7;
  unsigned long long v;
  unsigned long long result;
  v_19 = -839548537;
  v_17 = -175.613565883;
  if (229.992322042 >= (double)(1 / (! v_19 / -116434622 + 158))) v = 
                                                                  (783374417ULL / (unsigned long long)(
                                                                   ((int)p & p_5) + 133)) / 948ULL;
  else {
    v_7 = (double)(! (-521928381ULL));
    v_13 = (signed char)(1 + (long)v_17);
    v = (unsigned long long)(- v_7 / ((double)((p_9[0][1][0] + p_11) / (
                                               (unsigned int)v_13 * p_15 + 906U)) + 244.));
  }
  result = v;
  return result;
}

