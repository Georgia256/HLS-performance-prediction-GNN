#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 265245534
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, int p_7, int p_15, int p_17, int p_19)
{
  unsigned long long v_13;
  double v_11;
  unsigned int v_9;
  unsigned long long v_5;
  unsigned long long v;
  int result;
  v_11 = -1.92844153718e+38;
  v_9 = (unsigned int)p_7;
  v_5 = 24012ULL;
  v = (unsigned long long)p_17;
  result = p_17;
  if ((float)((unsigned long)(~ (3284894619U - (unsigned int)result)) * ~ (
              858427180UL & (unsigned long)p_17)) != (float)(v_9 - 4294902494U) + -90.2920761108f) {
    result = (int)((signed char)(- v_11 * (double)p_7)) + -122;
    v_13 = (unsigned long long)p_15;
    v_13 = (unsigned long long)(1.07553396621e+14f - (float)(v_13 * 41705ULL ^ (unsigned long long)(
                                                             p_15 | (int)p)));
  }
  else {
    v_5 = (unsigned long long)p_19;
    v_13 = (unsigned long long)(! (p_15 % (p_17 + 734) + (result << 31L)));
    result = ~ (~ p_7);
  }
  while ((unsigned long long)(! ((int)(- p) + (int)(! p))) != (9ULL << (
                                                               - v & 63ULL)) / (
                                                              (! v_5 - (unsigned long long)(
                                                               p_7 - -105)) + 502ULL)) {
    result = (int)v_11 % -251041206;
    v_9 = (unsigned int)(~ (-57620LL % (long long)((int)p + 837)) & (long long)v_9);
    v = ~ (v_13 % (v_5 + 9ULL) ^ (unsigned long long)(! p));
    v_5 = (unsigned long long)p_15;
  }
  while_0_break: ;
  return result;
}

