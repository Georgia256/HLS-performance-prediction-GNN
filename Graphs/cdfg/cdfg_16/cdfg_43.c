#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918061802
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p[4][3][1], unsigned int p_4, long p_6[2][4], signed char p_8,
         unsigned long long p_10)
{
  signed char v_13;
  float v;
  char result;
  v_13 = (signed char)114;
  result = (char)p[2][1][0];
  v = (float)result;
  if ((unsigned long long)(~ (719797691LL * (long long)p_4) / (long long)(
                           p_6[1][3] + 117L)) != ((unsigned long long)p_8 % (
                                                  p_10 + 408ULL)) % (
                                                 (unsigned long long)(
                                                 (float)p_6[1][0] / (
                                                 v + 165.f)) + 77ULL) + (unsigned long long)(
                                                 p_4 - (unsigned int)v_13)) 
    result = (char)p[0][1][0];
  else result = (char)2.82894474872e+38;
  return result;
}

