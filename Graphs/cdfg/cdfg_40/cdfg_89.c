#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 456105728
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned char p_5[4][1], long p_9, int p_11,
                  short p_15)
{
  unsigned short v_19;
  unsigned short v_17;
  double v_13;
  unsigned long v_7;
  long long v;
  unsigned long result;
  v_19 = (unsigned short)28811;
  v_17 = (unsigned short)45591;
  v_13 = -3.17644012509e+38;
  v_7 = 199489902UL;
  v = 1043125516LL;
  result = (unsigned long)p;
  while ((unsigned long)p_9 > (result / (unsigned long)(p_9 + 238L) + (unsigned long)(- p_11)) - (unsigned long)(
                              ((int)v_17 / -11543) * (int)((double)result * v_13))) {
    v_7 = (float)v_19 * 824.215209961f;
    v_13 = (double)((int)((signed char)-887.675996515) | -104);
    v = 23637LL;
    v_17 = (unsigned short)(- ((long long)p_9 % (v + 294LL) - -18847LL));
  }
  while_0_break: ;
  if ((unsigned long)(171270838U % (unsigned int)((int)p_15 + 369)) > 
      (- v_7 + (unsigned long)(-9551 - p_11)) % (unsigned long)((int)(- p) + 57)) {
    result = (unsigned long)(((v + (long long)p_5[1][0]) % (long long)(
                              (int)(~ p_5[3][0]) + 751)) / 159LL);
    result = ! ((unsigned long)p * result) * (unsigned long)p;
    result = (result / (unsigned long)((int)p + 415) - 409UL) * (unsigned long)6.98101633833e+37;
  }
  else {
    v_13 = (double)8761LL;
    v_7 = (unsigned long)((double)(! p_9) + -2.69046297678e+38) * (((unsigned long)p_11 - result) - (unsigned long)(- v_13));
    result = - (~ v_7);
  }
  return result;
}

