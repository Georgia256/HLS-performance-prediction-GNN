#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 630411012
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(void)
{
  short v_4;
  short v;
  double result;
  v_4 = (short)-14801;
  v = v_4;
  result = (double)(~ (- v));
  return result;
}

