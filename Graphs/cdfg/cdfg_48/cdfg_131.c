#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 566162241
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p[2][4][2], short p_13, long long p_15, unsigned long p_19)
{
  long long v_23;
  unsigned short v_21;
  float v_17;
  long long v_10;
  long v_8;
  unsigned char v_6;
  double v_4;
  long v;
  long result;
  v_23 = 904285060LL;
  v_21 = (unsigned short)17895;
  v_17 = (float)p_19;
  v_8 = -153553371L;
  v_6 = (unsigned char)p[0][3][1];
  v_4 = 8.23831451564e+37;
  v_10 = (long long)v_4 - ~ v_23 % -1032809614LL;
  if (((long long)(26427 * (int)p_13) | (v_10 - p_15)) * (long long)(
      246 ^ (int)((unsigned char)((float)p[0][1][0] / (v_17 + 242.f)))) == (long long)(
      4294967269UL - - p_19 / (unsigned long)(((int)v_21 | 68) + 188))) {
    v_4 = (double)(~ v_10);
    v = (long)(! (~ v_6)) * (- v_8 + 5810L);
    result = (long)((double)v / (v_4 + 727.));
  }
  else result = (long)(! (p[0][1][1] << 16));
  return result;
}

