#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949954484
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p[2][1][5])
{
  unsigned long long v_5;
  unsigned char v;
  double result;
  v_5 = (unsigned long long)p[0][0][1];
  v = (unsigned char)p[0][0][0];
  result = (double)((unsigned long long)p[1][0][2] % ((v_5 & 4182603741ULL) + 435ULL) & 18446744072824483208ULL);
  result = (double)((((int)v - (int)((unsigned char)result)) + ((int)p[0][0][3] - 54)) - (int)result);
  return result;
}

