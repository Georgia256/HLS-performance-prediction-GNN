#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 910605651
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, signed char p_4, double p_6, unsigned char p_8,
           unsigned short p_10)
{
  long v_15;
  char v_13;
  long v;
  double result;
  v_15 = -24659L;
  v_13 = (char)p_8;
  v = 499094099L;
  result = (0. + (p_6 - p_6)) - (double)(64745L * (v_15 % (long)((int)v_13 + 476)));
  if ((long)p_8 < (long)(- (result + (double)p_10)) * (v / (long)((int)v_13 + 867) - -32L)) 
    result = (double)p;
  else result = (double)(- ((long long)p_4 + -46296LL) % ((long long)(
                                                          -5179012772.01 - - p_6) + 626LL));
  return result;
}

