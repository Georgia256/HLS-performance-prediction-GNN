#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 368038447
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, char p_5[3][4], signed char p_15,
          unsigned char p_17, unsigned int p_21[5][4])
{
  char v_29;
  int v_27;
  signed char v_25;
  unsigned int v_23;
  double v_19;
  unsigned long long v_13;
  unsigned long v_11;
  long v_9;
  unsigned short v_7;
  int v;
  float result;
  v_29 = (char)24;
  v_27 = 100886434;
  v_25 = (signed char)-15;
  v_23 = (unsigned int)p_15;
  v_19 = (double)p_17;
  v_11 = (unsigned long)p_21[3][3];
  v_9 = (long)p_17;
  v_7 = (unsigned short)p_17;
  v = (int)p_17;
  while (- (~ (40907UL + (unsigned long)v_25)) == (unsigned long)v_9) {
    v_7 = (long long)v_27 / 51962LL;
    v_9 = (long)-0.f;
    v_23 = (unsigned int)(205 / (((-20092 + (int)((short)974807552.f)) ^ (int)v_29) + 723));
    v_25 = (signed char)((float)p_5[1][3] / 2.62117631425e+38f + (float)(
                         (unsigned int)p_5[1][1] % (~ v_23 + 416U)));
  }
  while_0_break: ;
  if ((unsigned int)(- (- v_19 / ((double)((unsigned int)p_15 * p_21[3][1]) + 732.))) <= 
      v_23 - (unsigned int)(~ (~ v_25))) {
    v = (int)p_5[0][1];
    result = (float)((unsigned long long)v % ((p & p) + 58ULL) - 2075ULL);
  }
  else {
    v_13 = (unsigned long long)(((int)(- v_7) - (int)v_7) % (((int)(- p_17) - - v) + 451));
    v_7 = (unsigned short)(~ ((unsigned long long)((unsigned long)v_9 % (
                                                   v_11 + 114UL)) + v_13 % (unsigned long long)(
                                                                    (int)p_15 + 613)));
    result = (float)v_7;
  }
  return result;
}

