#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071806746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, char p_4, unsigned char p_6[2][4][3], char p_13,
        long long p_15[1])
{
  long long v_21;
  long v_19;
  float v_17;
  long long v_11;
  unsigned long v_9;
  unsigned char v;
  int result;
  v_21 = (long long)p_4;
  v_17 = 279.597564697f;
  v_11 = 52231LL;
  v_9 = (unsigned long)p_6[0][3][1];
  v = (unsigned char)p;
  result = (int)p;
  while (- v_17 <= 214.f) {
    v_19 = v_21 / -681794973LL;
    v_21 = (long long)result;
    v_11 = ((long long)p - (long long)v_19 / (v_21 + 349LL)) / 1693LL;
    v_17 = (float)((long long)(! (v_19 * (long)v)) ^ ! (~ p_15[0]));
  }
  while_0_break: ;
  if ((long long)p >= ~ (p_15[0] << ((int)p_6[0][0][0] & 63)) + ((long long)v_17 | p_15[0]) / (
                                                                p_15[0] / 118LL + 356LL)) 
    result = (int)p;
  else {
    result = (int)((long long)v_9 % (! v_11 % (long long)((int)(! p_13) + 158) + 459LL));
    v = (unsigned char)(~ (! (! (char)-64)));
    result = (int)((long long)p_4 * (((long long)result * 54455LL) / (long long)(
                                     ((int)p_6[1][1][0] + (int)v) + 706)));
  }
  return result;
}

