#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536131135
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p[5][4], short p_7, float p_9, long long p_11, float p_23)
{
  signed char v_27;
  char v_25;
  unsigned long long v_21;
  double v_19;
  short v_17;
  unsigned long long v_15;
  unsigned short v_13;
  unsigned short v_5;
  unsigned long long v;
  int result;
  v_27 = (signed char)-50;
  v_25 = (char)-106;
  v_21 = (unsigned long long)p_7;
  v_19 = -395.140687962;
  v_13 = (unsigned short)p_9;
  result = (int)p_7;
  while ((int)v_25 + p[1][1] / 145 > 0) {
    v_27 = (int)v_27 % -32176;
    v_19 = (double)p_23;
    v_13 = (unsigned short)(~ 950577208U);
    v_25 = (char)(~ p[3][0]);
  }
  while_0_break: ;
  if ((unsigned long long)(((46757LL - (long long)p[3][3]) + (long long)(
                            (int)p_7 ^ 95)) / ((long long)v_19 + 412LL)) > 
      (v_21 % 125ULL + (unsigned long long)(p_9 + p_23)) - (unsigned long long)p_7) {
    v_5 = (unsigned short)10792;
    v = (unsigned long long)((int)v_5 << ((long long)(result / ((int)p_7 + 96)) / (
                                          (long long)p_9 / (p_11 + 261LL) + 804LL) & 15LL));
    result = (int)((unsigned long long)((-15617 + p[1][3]) + 240) ^ (
                                                                    33ULL | v) % (
                                                                    18446744073709490807ULL * (unsigned long long)v_5 + 624ULL));
  }
  else {
    v_17 = (short)-7179;
    v_15 = (unsigned long long)((0 - (int)((signed char)3.28439265129e+38f)) / (
                                (int)p_7 + 135));
    result = (int)((unsigned long long)(- (! v_13)) - ! (v_15 - (unsigned long long)v_17));
  }
  return result;
}

