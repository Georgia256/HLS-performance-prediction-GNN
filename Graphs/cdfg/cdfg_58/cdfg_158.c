#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1535115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, long long p_5, signed char p_7[5][1], long p_13,
                long p_15)
{
  char v_23;
  char v_21;
  unsigned char v_19;
  unsigned short v_17;
  int v_11;
  unsigned long long v_9;
  unsigned char v;
  signed char result;
  v_23 = (char)10;
  v_19 = (unsigned char)134;
  v_11 = (int)p_7[2][0];
  v_21 = (char)(((37 >> ((int)p_7[1][0] & 7)) - (int)(! v_23)) & ! ((int)v_23 % 62205));
  if (- ((unsigned long)v_19 | 4294954890UL) * 23614UL >= (unsigned long)(
      (long)(((float)v_21 - p) + (float)(p_13 % (long)((int)v_19 + 125))) - ! (
      (long)p_7[2][0] + p_13))) {
    v_9 = (unsigned long long)p_15;
    v = (unsigned char)((v_9 / (unsigned long long)((long)v_11 * p_13 + 313L)) * 18446744073709521620ULL);
    result = (signed char)((int)(! (~ v)) / ((int)((unsigned char)((p + (float)p_5) / (
                                                                   (float)(
                                                                   45455U ^ (unsigned int)p_7[3][0]) + 701.f))) + 250));
  }
  else {
    v_17 = (unsigned short)65475;
    result = (signed char)(1 / (long long)(((29L - p_13) - (long)v_17) + 311L));
  }
  return result;
}

