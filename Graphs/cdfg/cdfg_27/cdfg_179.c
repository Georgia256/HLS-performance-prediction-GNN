#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1060509326
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p[5][3][2], long long p_7[5][1][2], short p_15)
{
  double v_19;
  unsigned char v_17;
  char v_13;
  signed char v_11;
  double v_9;
  unsigned int v_5;
  double v;
  int result;
  v_19 = (double)p[2][1][1];
  v_13 = (char)p_7[0][0][0];
  v_11 = (signed char)p_15;
  v = (double)p_7[3][0][0];
  if (-775LL / (((p_7[3][0][0] + 16174LL) & (long long)(60 - (int)v_13)) + 1006LL) == (long long)v_19) {
    v_9 = (double)(! ((int)((signed char)v) / ((int)v_11 + 327)) ^ -19 % (
                                                                   (int)v_13 + 691));
    v_5 = (unsigned int)(! ((int)(28871. * v_9) + 37778));
    v = (double)(~ 1976010927);
  }
  else {
    v_17 = (unsigned char)v_11;
    v_5 = (unsigned int)((double)((-83 + (int)p_15) * (int)v_17) / (v_19 + 468.));
    v = (double)(- (5340066304.f * (float)(244LL + p_7[2][0][0])));
  }
  if ((- v + (double)(v_5 - (unsigned int)p[2][2][0])) + (double)(p_7[0][0][1] >> 58) < (double)v_5) 
    result = 57;
  else {
    v = v;
    result = (int)(- (- (v - (double)p[0][2][0])));
    result = - (! result) * (result / ((int)(~ p[4][2][0]) + 954));
  }
  return result;
}

