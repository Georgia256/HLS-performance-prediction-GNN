#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 956064139
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, unsigned long long p_5, unsigned int p_7,
           char p_9, unsigned long long p_11)
{
  unsigned long v_13;
  double v;
  double result;
  v_13 = (unsigned long)p_7;
  if (~ v_13 == 0UL) v = (double)(! 4294962284UL);
  else v = -272.085047161 / ((double)p_5 + 817.);
  result = - (v * (double)p + (double)(18446744073709513970ULL >> 23));
  return result;
}

