#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 791381252
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, int p_4, int p_9, short p_13, unsigned short p_15)
{
  long long v_25;
  float v_23;
  long v_21;
  int v_19;
  char v_17;
  unsigned long long v_11;
  unsigned long v_7;
  long long v;
  float result;
  v_25 = -57659LL;
  v_23 = (float)p_4;
  v_21 = (long)p_4;
  v_19 = -3822;
  v_17 = (char)p_13;
  v = 688LL;
  if (v_25 <= (long long)((unsigned int)v_17 / (~ (4294922482U * (unsigned int)p_13) + 689U))) {
    v = (long long)(~ (91 * (int)(~ p_15)));
    v_11 = (unsigned long long)((unsigned long)(- p_13) - 960034547UL);
    v_7 = (unsigned long)((double)p_9 / ((double)v / 2.76149286898e+38 + 343.) - (double)(~ v_11));
  }
  else {
    v_19 = (int)((long long)((int)(! p_15) * (-10 * v_19)) + ~ v * (long long)(
                                                             v_23 * -117.f));
    v_17 = (char)p_4;
    v_7 = (unsigned long)((unsigned long long)((unsigned int)(100 * (int)v_17) % (
                                               ((unsigned int)v_19 + 14950U) + 143U)) - (
                          3505919229ULL + (18446744073709511246ULL ^ (unsigned long long)v_21)));
  }
  result = (float)((long long)(! ((int)p * -117)) * ((long long)(-20 + p_4) / (
                                                     v / (long long)(
                                                     v_7 + 261UL) + 991LL)));
  return result;
}

