#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 939544332
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned short p_15, float p_19[1][3][3])
{
  unsigned long long v_17;
  long v_13;
  unsigned long long v_11;
  signed char v_9;
  unsigned long v_6;
  double v_4;
  unsigned short v;
  unsigned char result;
  v_17 = 18446744073709527580ULL;
  v_13 = -929553532L;
  v_11 = (unsigned long long)p;
  v_9 = (signed char)-38;
  v_6 = (unsigned long)p_15;
  v_4 = (double)p;
  result = (unsigned char)169;
  if ((v_17 - 1680ULL) * (unsigned long long)(((unsigned long)p_19[0][2][2] | v_6) + (unsigned long)(
                                              (unsigned int)1.18881953489e+38 / 419747573U)) != (unsigned long long)(
      (int)v_9 % -53512)) {
    v_11 = (unsigned long long)v_13;
    v_6 = (unsigned long)v_4;
    v_9 = (signed char)(- (- (~ p)));
  }
  else {
    v_4 = (double)(~ (! (v_11 + (unsigned long long)v_13)));
    v_13 = (long)v_4;
    v_9 = (signed char)(~ v_13 % ((long)(v_4 * (double)((unsigned long long)p_15 - 44435ULL)) + 929L));
  }
  if ((unsigned long long)1.34146119832e+38 >= - (v_11 - 54036ULL)) {
    v_4 = (double)((int)((unsigned char)(217.632174388 + (double)((unsigned long)v_9 + 4294910164UL))) * (int)result);
    v = (unsigned short)((unsigned long)v_4 / ((87UL - v_6) + 65UL) & (unsigned long)(
                         (int)((unsigned char)v_4) + (int)p));
    result = (unsigned char)v;
  }
  else result = (unsigned char)(- (- 2.33992764476e+38f));
  return result;
}

