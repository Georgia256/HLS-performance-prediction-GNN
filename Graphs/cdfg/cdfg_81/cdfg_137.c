#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554935665
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[2][5], unsigned long long p_9, unsigned char p_13,
           long long p_15, signed char p_17[5])
{
  unsigned short v_19;
  unsigned int v_11;
  long v_7;
  long v_4;
  unsigned long v;
  double result;
  v_19 = (unsigned short)37717;
  v_11 = (unsigned int)p[0][4];
  v_7 = (long)p[0][3];
  v_4 = (long)(((unsigned long long)v_11 + p_9) * 18446744073709551615ULL);
  if ((unsigned long long)(- (35087 ^ (int)p_17[3])) - ((unsigned long long)(
                                                        49389 / ((int)v_19 + 682)) + p_9) <= (unsigned long long)(! (
      -6095258481LL * (26850LL % (long long)((int)p_17[2] + 360))))) {
    v = (unsigned long)(v_4 & ((long)(~ p[1][0]) + v_7 / ((long)6648866304.f + 637L)));
    result = (double)v;
    result = (double)((unsigned long)result * v);
  }
  else {
    v_11 = (unsigned int)(! p_15);
    result = (double)((503845484ULL * p_9) % (unsigned long long)((v_11 - (unsigned int)p_13) + 825U) + 18446744073709524490ULL);
  }
  return result;
}

