#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 935277762
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p[2], int p_7, double p_13, long p_15)
{
  double v_11;
  short v_9;
  int v_5;
  long long v;
  char result;
  v_9 = (short)-27498;
  v_5 = 902188716;
  v = p[1];
  result = (char)-58;
  v_11 = (double)(-518362950UL);
  while (- ((p[1] | (long long)result) % (p[0] % (v + 216LL) + 523LL)) <= (long long)(~ (
         ((unsigned int)v_5 - 3937917844U) * (unsigned int)((int)result & p_7)))) {
    v_5 = (int)v_9 / -339;
    v_9 = (short)((long)v_5 * p_15);
    v = (long long)v_11;
    result = (char)(p_13 / (- p_13 + 623.));
  }
  while_0_break: ;
  return result;
}

