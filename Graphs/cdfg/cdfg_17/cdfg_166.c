#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 390154116
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, unsigned long long p_4, unsigned long p_6, long p_8,
          unsigned int p_10)
{
  float v_15;
  signed char v_13;
  signed char v;
  short result;
  v_15 = -9991211008.f;
  v_13 = (signed char)-61;
  v = (signed char)p_8;
  result = (short)-652;
  if ((p_4 / (unsigned long long)(p + 385)) * 18446744073709551552ULL <= (unsigned long long)(
      ~ p_8 * (long)(4293563648.f - (float)v_13 / (v_15 + 493.f)))) {
    result = (short)p_8;
    result = (short)((((unsigned long)1.16848614743e+38f - p_6) + (unsigned long)result) + (unsigned long)result);
  }
  else {
    v_13 = (signed char)(((unsigned long)p_10 - (unsigned long)p_8) * (unsigned long)result - (unsigned long)v);
    v = (signed char)p_4;
    result = (short)(((11419U % (p_10 + 263U)) / (unsigned int)((int)v / (
                                                                (int)v_13 + 987) + 657)) / (
                     p_10 + 867U));
  }
  result = (short)(((int)result / 41727 - 166) / (((p >> (p_4 & 31ULL)) + (int)result) + 925));
  return result;
}

