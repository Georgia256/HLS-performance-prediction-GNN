#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 112154526
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, char p_4, short p_6, unsigned short p_8,
                unsigned short p_13)
{
  unsigned char v_19;
  int v_17;
  unsigned char v_15;
  int v_11;
  float v;
  signed char result;
  v_19 = (unsigned char)p;
  v_17 = (int)p_13;
  v_15 = (unsigned char)227;
  v_11 = (int)p_13;
  v = -1971525120.f;
  result = (signed char)p_8;
  while ((37756L & (long)result) * (long)(! v_11) + (long)((int)p_13 / (
                                                           (int)p_13 + 944) + v_11) > (long)p_4) {
    v_19 = (int)v_19 >> ((int)v_15 % 38273 & 7);
    v_17 = 60327 * - (v_17 + (int)p_4);
    v_15 = (unsigned char)224;
    v_11 = ! ((int)p / ((int)p_6 + 159) - ((int)p_13 + (int)p_13));
  }
  while_0_break: ;
  if (v > -13.f) result = (signed char)((int)p + (int)(~ p_4) / 17294);
  else result = (signed char)((long long)(~ (! p_6)) + (long long)(! p_8));
  return result;
}

