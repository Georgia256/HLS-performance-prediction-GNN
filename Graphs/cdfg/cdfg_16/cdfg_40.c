#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 322197286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, signed char p_7, long p_11, double p_15,
          unsigned long long p_19[1])
{
  unsigned int v_27;
  unsigned long long v_25;
  float v_23;
  unsigned char v_21;
  float v_17;
  char v_13;
  int v_9;
  char v_5;
  signed char v;
  short result;
  v_27 = (unsigned int)p_19[0];
  v_25 = 296447375ULL;
  v_23 = -2.18718690276e+38f;
  v_21 = (unsigned char)p;
  v_17 = 26.0862789154f;
  v_13 = (char)p_11;
  v_9 = (int)p_11;
  while ((double)p_7 < - ((double)p_7 - p_15) + (double)((float)((int)v_21 & -1002255244) - (
                                                         v_23 - (float)p_19[0]))) {
    v_27 = (float)v_27 + (float)v_25 * -2.13832373849e+38f;
    v_25 = (unsigned long long)(! (! (- -49803LL)));
    v_9 = (int)(- (- (p_19[0] & (unsigned long long)p_7)));
    v_21 = (unsigned char)55;
  }
  while_0_break: ;
  if ((int)v_13 >> 4U != (int)(- p_15 / (double)(v_17 + 642.f) - (double)p_19[0])) {
    v = p;
    result = (short)v;
  }
  else {
    v = (signed char)((-1819978L - (long)(! v_9)) * ! (p_11 << 13L));
    v_5 = (char)v;
    result = (short)((int)(~ v_5) / ((int)(- (- p_7)) + 294));
  }
  return result;
}

