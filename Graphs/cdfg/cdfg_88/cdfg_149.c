#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741946166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, char p_4[3][3][2], double p_6[1][4][5], long long p_8,
         int p_13[5])
{
  float v_15;
  unsigned long v_11;
  unsigned long long v;
  char result;
  v_15 = 2357383680.f;
  v_11 = 803551809UL;
  v = (unsigned long long)p_6[0][3][3];
  v -= (unsigned long long)(p_13[2] % ((int)((char)v_15) * (int)p_4[0][2][1] + 55));
  if (- (0.f + (float)v * 757.937988281f) != (float)(-470514516LL - (long long)(~ (
                                                     v_11 % 4294937917UL)))) 
    result = (char)(~ (~ (p ^ (long)p_4[1][1][0])));
  else {
    result = (char)((long long)(3249517579U + (unsigned int)p_6[0][3][4]) / (
                    p_8 % (long long)(p + 76L) + 236LL) + 1014019LL);
    result = result;
  }
  return result;
}

