#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175969342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, long p_5, unsigned short p_7, float p_11, signed char p_13)
{
  char v_15;
  signed char v_9;
  long long v;
  int result;
  v_15 = (char)p_7;
  result = (int)p_5;
  v = (long long)p_11;
  v_9 = (signed char)(((long)((int)p_13 / ((int)((signed char)((float)result / (
                                                               p_11 + 432.f))) + 822)) - (
                       (224L | p_5) + (long)((int)v_15 * 28385))) / (long)(
                      (int)p_7 + 827));
  result = (int)(((((long long)p + v) + (long long)((unsigned long)p_5 * 4294932245UL)) * (long long)(
                  ((int)p_7 + (int)v_9) - (-10566 + (int)((short)p_11)))) % (
                 (long long)(p_11 - - ((float)v_9 / -115.558807373f)) + 374LL));
  return result;
}

