#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 799222113
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned long p_4, short p_11, float p_13,
                  long long p_17[4][2][1])
{
  char v_19;
  char v_15;
  long v_9;
  double v_7;
  int v;
  unsigned long result;
  v_19 = (char)p_11;
  v_9 = -487885096L;
  v_7 = 738.801839805;
  v = (int)p_13;
  result = 49435UL;
  if (48. <= - v_7) {
    result = 81915578UL * (unsigned long)(- ((float)p + p_13));
    v_7 = (double)((- p_13 / -1.84467440737e+19f) * (float)((-104LL - p_17[1][0][0]) + - p_17[1][1][0]));
    v_15 = (char)(p * (long)p_11);
  }
  else {
    v = (int)(- (- (- v_19)));
    v_15 = (char)p_13;
    v_9 = (long)(249315100ULL * (unsigned long long)((long long)((unsigned long)p / (
                                                                 result + 753UL)) * (
                                                     p_17[2][0][0] + (long long)p)));
  }
  while ((double)(88L + p) + - ((double)p_4 - -209.107153159) > (double)(
         (float)((long long)(v % ((int)v_7 + 392)) | -474526516LL) - 7964170752.f)) {
    v_9 = (long)((long long)(~ ((long)v_15 * v_9)) & ~ (~ p_17[0][1][0]));
    v_9 = (long)((v_7 - (double)p_11) - (double)(- p_13)) + (long)p_11 * v_9;
    v = (int)((p_4 % 80UL) / (p_4 + 899UL) - (unsigned long)((int)(- v_7) ^ 561690));
  }
  while_0_break: ;
  return result;
}

