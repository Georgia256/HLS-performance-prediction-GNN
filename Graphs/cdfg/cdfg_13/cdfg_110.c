#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 105504759
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, long p_5)
{
  double v;
  short result;
  result = (short)28151;
  v = (double)(! p_5);
  result = (short)((double)p + (- v - (double)(p_5 + (long)result)));
  return result;
}

