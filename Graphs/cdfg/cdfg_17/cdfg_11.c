#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 713130835
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p[4], unsigned long long p_5[5][1])
{
  unsigned int v_9;
  unsigned long long v_7;
  unsigned char v;
  int result;
  v_9 = 6603U;
  v_7 = (unsigned long long)p[1];
  v = (unsigned char)167;
  result = -886884233;
  while ((unsigned long long)(0 % ((int)p[3] + 231)) != (27955ULL % (
                                                         (unsigned long long)result / (
                                                         p_5[3][0] + 820ULL) + 554ULL)) % (
                                                        ! p_5[1][0] + 324ULL)) {
    v_9 = (unsigned long long)v_9 & (v_7 + 12463ULL);
    v_7 = (unsigned long long)p[2];
    v = (unsigned char)p[3];
    result = (int)(((835591514ULL + p_5[0][0]) & 47026ULL) & v_7);
  }
  while_0_break: ;
  result = 234 + (int)(~ (- v));
  return result;
}

