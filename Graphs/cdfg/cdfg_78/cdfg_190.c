#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 414674809
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p[3][3][2], unsigned char p_4,
                  signed char p_11[5][3], unsigned char p_15[1][1][5],
                  unsigned char p_17)
{
  double v_21;
  unsigned char v_19;
  unsigned short v_13;
  unsigned long v_9;
  unsigned int v_7;
  char v;
  unsigned long result;
  v_21 = 1.89608112565e+38;
  v_19 = (unsigned char)p[2][2][0];
  if ((double)(~ ((long long)((int)p_17 * (int)p_4) - -44369LL)) == - (
      (double)(! v_19) * (v_21 - (double)p[0][1][0]))) {
    v_13 = (unsigned short)(~ (! ((int)p_15[0][0][3] << 7)));
    v_9 = (unsigned long)(~ (unsigned char)132);
  }
  else {
    v_9 = (unsigned long)(- (~ (! p_4)));
    v_13 = (unsigned short)48.7172851562f;
  }
  if (-26179 != (int)(1.13516464288 * (double)((long long)(~ p_4) / (
                                               (long long)v_13 / -43248LL + 659LL)))) 
    result = (unsigned long)p[2][2][1];
  else {
    v = (char)v_9;
    v_7 = (unsigned int)p[1][0][1];
    result = (unsigned long)((unsigned int)p_4 % ((unsigned int)((int)v * (int)v) / (
                                                  (407789702U + v_7) + 163U) + 133U));
  }
  return result;
}

