#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106244264
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p)
{
  short v;
  int result;
  v = (short)3936;
  v = (short)((-1.55943240969e+38 + (double)((int)p + 38525)) / ((double)((unsigned long)v) + 376.));
  result = (int)(- v);
  return result;
}

