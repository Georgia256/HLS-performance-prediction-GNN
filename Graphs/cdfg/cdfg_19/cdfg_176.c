#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1006030959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, char p_7, signed char p_9, double p_11, int p_17)
{
  unsigned long v_25;
  float v_23;
  short v_21;
  unsigned char v_19;
  unsigned long long v_15;
  unsigned short v_13;
  char v_4;
  double v;
  unsigned int result;
  v_25 = (unsigned long)p_17;
  v_23 = (float)p_11;
  v_21 = (short)p_7;
  v = (double)p_17;
  result = (unsigned int)p_17;
  v_13 = (unsigned short)v_25;
  if ((int)((double)(! ((int)p_7 + 12596)) - (- p - 764244741. * p_11)) < 
      p_17 / ((int)p_7 + 835) - (int)(- ((float)v_21 / (v_23 + 149.f)))) {
    v_4 = (char)((int)((unsigned short)((p - (double)p_7) - ((double)p_9 + p_11))) * (int)v_13);
    v = (double)v_4;
    result = (unsigned int)(- v);
  }
  else {
    v_19 = (unsigned char)(- (~ (result % (unsigned int)(p_17 + 812))));
    v_15 = (unsigned long long)(~ (((int)((unsigned char)v) * (int)v_19) * 13996));
    result = (unsigned int)((unsigned long long)(! ((int)v_13 % ((int)((unsigned short)p_11) + 579))) + (
                            (unsigned long long)-5521241600.f - (v_15 >> (
                                                                 p_17 & 63))));
  }
  return result;
}

