#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906328455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p[2][1][1], float p_9, char p_11, short p_13,
          int p_15)
{
  signed char v_27;
  char v_25;
  float v_23;
  double v_21;
  unsigned long long v_19;
  int v_17;
  short v_7;
  int v_5;
  unsigned long v;
  short result;
  v_27 = (signed char)-106;
  v_25 = (char)2;
  v_23 = -3891403264.f;
  v_21 = -7586317980.97;
  v_19 = 33056ULL;
  v_17 = (int)p[0][0][0];
  v_5 = -65142;
  v = (unsigned long)p_13;
  result = (short)p_9;
  if ((int)v_21 > (int)v_23 - (122 ^ p_15) / ((int)v_25 / ((int)v_27 + 294) + 802)) {
    v_7 = (short)(p[1][0][0] * (! p[0][0][0] + (unsigned long long)(907 - (int)p_13)));
    v_5 = (int)(- p_9 / ((float)((int)p_11 * (int)result) + 354.f)) - (
          (int)p_13 / (p_15 + 717) + (int)(- p_9));
    result = (short)((unsigned long)(~ v_7) + ~ ((unsigned long)v_7 + v));
  }
  else {
    v = (unsigned long)(6870ULL - v_19);
    result = (short)((unsigned long long)(- (~ p_15)) / ((unsigned long long)(
                                                         v_5 | v_17) / 18446744073525687412ULL + 207ULL));
    v_7 = (short)40;
  }
  while ((unsigned long long)(~ v) < (unsigned long long)(-17587.f / (
                                                          (float)p[1][0][0] / -8331504640.f + 356.f)) % (
                                     (p[0][0][0] ^ (unsigned long long)result) + 500ULL)) {
    v = (unsigned long)(((int)((short)-2.02087966262e+38f) | (int)(- v_7)) + (
                        - v_5 | - v_5));
    v_5 = (int)p[0][0][0];
    result = (short)v_5;
  }
  while_0_break: ;
  return result;
}

