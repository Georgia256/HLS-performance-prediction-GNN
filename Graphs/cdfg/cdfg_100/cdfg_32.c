#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 794213092
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, long long p_13)
{
  unsigned short v_11;
  long v_9;
  float v_7;
  short v_4;
  unsigned long long v;
  unsigned short result;
  v_11 = (unsigned short)p;
  v_7 = (float)p_13;
  v_4 = p;
  v = (unsigned long long)p_13;
  result = (unsigned short)(! p_13);
  while (v < (unsigned long long)(! (! ((int)v_4 / ((int)p + 895))))) {
    v_9 = (double)v_7 + 905.970465925;
    result = (unsigned short)(! ((-15630 / ((int)p + 306)) / -44));
    v_7 = (float)(- (~ (36499ULL + (unsigned long long)1.68314407675e+38f)));
    v = (unsigned long long)(~ (v_9 / 46643L) / (long)((int)(! v_11) % (
                                                       ((int)p << ((int)p & 15)) + 595) + 724));
  }
  while_0_break: ;
  return result;
}

