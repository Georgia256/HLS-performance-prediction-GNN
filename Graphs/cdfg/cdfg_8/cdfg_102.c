#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 903229735
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, long long p_4, unsigned int p_7)
{
  short v;
  int result;
  v = p;
  result = (int)(((float)(29157 % ((int)p + 324)) - ((float)p_4 - 2.69382790545e+38f)) - (float)(
                 (unsigned int)(! v) / (- p_7 + 731U)));
  return result;
}

