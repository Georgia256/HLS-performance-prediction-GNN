#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071847782
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, int p_5, char p_7, unsigned long p_11)
{
  unsigned int v_13;
  short v_9;
  signed char v;
  double result;
  v_13 = (unsigned int)p_7;
  v_9 = (short)19937;
  if ((float)v_9 / (((float)p_11 - -5940961792.f) + 185.f) >= (float)(! (- (
      (unsigned long)v_13 + 3916714947UL)))) v = (signed char)(~ (p_5 | 26));
  else v = (signed char)p_7;
  result = (double)(! ((long)(! v) - p));
  return result;
}

