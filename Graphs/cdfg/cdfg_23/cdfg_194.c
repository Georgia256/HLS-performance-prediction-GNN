#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 803902510
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, unsigned short p_5, float p_9, int p_17,
                short p_23[1][1])
{
  signed char v_21;
  signed char v_19;
  char v_15;
  short v_13;
  short v_11;
  unsigned long long v_7;
  unsigned long v;
  signed char result;
  v_21 = (signed char)-68;
  v_19 = (signed char)p;
  v_13 = (short)-2943;
  v = 3376966240UL;
  result = (signed char)p_5;
  if ((! ((int)result + (int)p_5) & (0 - (int)p_5 % ((int)p_23[0][0] + 769))) != (int)6683483648.f) {
    result = (signed char)-99;
    v_7 = (unsigned long long)result;
  }
  else {
    v_15 = (char)((- v - (unsigned long)(- v_13)) % (unsigned long)(! (
                                                                    174 - p) + 93));
    v_11 = (short)((int)v_13 + ((int)v_15 * p_17 + (int)v_19 * (int)v_21));
    v_7 = (unsigned long long)v_11;
  }
  if ((float)v_7 <= - p_9 - 60262.f) result = (signed char)p;
  else {
    result = (signed char)(! ((long)p_5 / -77144341L));
    v = 238308543UL;
    result = (signed char)(- (((unsigned long)result + v) / ((unsigned long)9.33046314158e+37f + 44UL)));
  }
  return result;
}

