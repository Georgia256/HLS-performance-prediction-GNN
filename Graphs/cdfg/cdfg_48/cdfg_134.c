#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 352616753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p[4][5][3])
{
  signed char v;
  short result;
  v = (signed char)p[0][2][1];
  result = (short)3740;
  if (~ ((int)result * (int)p[3][1][1] - (int)v) > (int)v) result = (short)4690;
  else result = (short)((double)p[3][4][0] / 1.60954939934e+38);
  result = (short)(~ (~ ((int)result / ((int)result + 766))));
  return result;
}

