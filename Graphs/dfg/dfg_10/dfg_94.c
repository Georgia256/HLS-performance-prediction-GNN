#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402341419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned long p_5[2][3][3], unsigned short p_9[5][3][1],
           long p_13[1][4][5], unsigned short p_15)
{
  long long v_19;
  unsigned long long v_17;
  long v_11;
  unsigned short v_7;
  float v;
  double result;
  v_17 = 18446744073684913081ULL;
  v_11 = (long)p_9[3][1][0];
  v_19 = (long long)(~ (-185705897L));
  v_7 = (unsigned short)(((unsigned long long)(v_11 >> ((p_13[0][2][3] - (long)p_15) & 31L)) & (
                          ((unsigned long long)p_15 - v_17) | (unsigned long long)(
                          (long long)p_5[0][0][0] / (v_19 + 896LL)))) - (unsigned long long)(
                         (float)(! (! v_17)) * -2.12720390742e+38f));
  v = (float)(((unsigned long long)((unsigned long)p - - p_5[1][0][0]) % (
               ((unsigned long long)v_7 - 18446744073709531703ULL) + 346ULL)) / (unsigned long long)(
              (int)p_9[1][1][0] + 962));
  result = (double)((int)((short)(12557.f / (((49332.f - v) - (float)(
                                              (int)p - (int)((char)-721.069821586))) + 163.f))) % -21987);
  return result;
}

