#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 222437098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(void)
{
  double v;
  unsigned short result;
  v = -449.205321307;
  result = (unsigned short)v;
  result = (unsigned short)(-1L - (long)((99 & (int)result) * (int)(! result)));
  return result;
}

