#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 130427112
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned long long p_7, signed char p_11[2][1],
                  unsigned char p_13, int p_23)
{
  long v_29;
  long long v_27;
  short v_25;
  unsigned short v_21;
  short v_19;
  unsigned char v_17;
  float v_15;
  signed char v_9;
  float v_5;
  char v;
  unsigned long result;
  v_29 = (long)p_7;
  v_27 = (long long)p;
  v_25 = (short)-21091;
  v_21 = (unsigned short)p_23;
  v_9 = (signed char)-4;
  if ((int)(- v_9) < -113) {
    v_17 = (unsigned char)0;
    result = (unsigned long)p;
    v_19 = (short)result;
  }
  else {
    v_9 = (signed char)((unsigned long long)(~ ((int)p_13 * (int)v_25)) % (
                        ((unsigned long long)(v_27 * 26916LL) - p_7 % (unsigned long long)(
                                                                v_29 + 944L)) + 348ULL));
    v_19 = (short)((unsigned long)(- (- p_11[1][0])) ^ 53314UL);
    v_17 = (unsigned char)(~ ((unsigned long)((int)p_11[0][0] - 30) / (
                              (33726UL & (unsigned long)v_21) + 171UL)));
  }
  if (290UL == (unsigned long)v_21) {
    v_5 = (float)(- (-4 / ((int)p_11[1][0] + 549) + (int)-1.7370330193e+38f));
    v = (char)(! (! (p_7 * (unsigned long long)v_9)));
    result = (unsigned long)((int)(! v) | ((int)(- p) - (int)((signed char)v_5) % 115));
  }
  else {
    v_15 = (float)((int)v_17 >> (((int)v_19 % 14728 - ((int)v_21 + p_23)) & 7));
    result = (unsigned long)((unsigned int)(5904.f * (v_15 / 14279.f)) + 30498U);
    result = ! (! (result / (unsigned long)((int)p_13 + 657)));
  }
  return result;
}

