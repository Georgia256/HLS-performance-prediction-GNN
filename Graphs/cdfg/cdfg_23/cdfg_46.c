#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 9668017
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long p_4)
{
  long long v_9;
  unsigned int v_7;
  long long v;
  unsigned long result;
  v_9 = 37220LL;
  v_7 = 4065775174U;
  result = 7887UL;
  v = (long long)result;
  if (- ((v - 20463LL) ^ (long long)v_7) == v_9) result = (unsigned long)p;
  else result = (unsigned long)(2.54804646383e+38 * (0. / ((double)p_4 / (
                                                           p + 105.) + 526.)));
  return result;
}

