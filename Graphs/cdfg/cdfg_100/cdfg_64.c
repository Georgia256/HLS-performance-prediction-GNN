#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918192671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, char p_4, double p_9, unsigned int p_11,
           long long p_13)
{
  short v_7;
  unsigned char v;
  double result;
  v_7 = (short)p_11;
  v = (unsigned char)(! (! (-(char)61)));
  if ((long long)((long)(((int)((unsigned char)-1.06998781092e+38) >> (
                          (int)v & 7)) * (int)v_7) * (-5942L / ((long)p_9 + 110L))) == 
      (long long)((unsigned long)((unsigned int)v + p_11) * 4294948270UL) - ~ (
      p_13 ^ 13LL)) {
    result = (double)p;
    result = - (result / ((double)p + 131.));
    result = -2.54577515573e+38 - (double)(! ((unsigned long)result % 4294938872UL));
  }
  else result = (double)p_4;
  return result;
}

