#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 242954125
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, float p_13[4], unsigned short p_15[5][5])
{
  int v_10;
  unsigned int v_8;
  unsigned int v_6;
  signed char v_4;
  unsigned long long v;
  float result;
  v_10 = -43705;
  v_8 = (unsigned int)p_13[2];
  v_6 = (unsigned int)p_15[0][4];
  v = 44294ULL;
  result = p_13[2];
  v_4 = (signed char)((float)((long long)(~ p_15[2][2]) ^ ((long long)p_15[1][3] | -621198649LL)) - (
                      (p_13[3] - (float)p) - 21765.f));
  while (- (v - 18446744073709551599ULL) < (unsigned long long)v_4) {
    v_4 = (unsigned int)v_10 | v_8 / (v_6 % 349662518U + 894U);
    v_8 = (unsigned int)(((int)p >> (((int)p ^ 61105) & 15)) >> ((int)(
                                                                 p_13[0] + (float)(~ v)) & 31));
    v_10 = (int)v_8;
    v = ~ 116ULL;
  }
  while_0_break: ;
  return result;
}

