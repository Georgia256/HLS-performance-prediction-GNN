#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 246841096
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(void)
{
  unsigned long v_4;
  char v;
  double result;
  v_4 = 3232004134UL;
  v = (char)v_4;
  result = (double)v;
  return result;
}

