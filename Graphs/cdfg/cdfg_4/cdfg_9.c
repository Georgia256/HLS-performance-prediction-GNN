#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 722342693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, double p_11, unsigned long long p_13, long p_17[4][5],
        unsigned char p_21)
{
  char v_25;
  long long v_23;
  float v_19;
  double v_15;
  char v_9;
  short v_7;
  double v_4;
  double v;
  int result;
  v_25 = (char)(-127-1);
  v_23 = 7648LL;
  v_19 = (float)p_17[2][4];
  v_15 = p_11;
  v_4 = (double)p_13;
  v = (double)p_17[1][2];
  result = -1072614157;
  if (((long long)p_17[1][2] % (v_23 + 554LL) - (long long)(4294955894UL ^ (unsigned long)v_4)) - (
      v_23 * (long long)v_25 - (long long)(~ p_21)) < (long long)(p_17[2][4] / (long)(
                                                                  (int)p_21 + 301))) {
    v_4 = (double)(- v_23);
    result = (int)((double)(((float)p_17[2][1] / (v_19 + 657.f)) * (float)p_21) + (
                   (double)(- v_19) - v));
    v_7 = (short)p_11;
  }
  else {
    v_15 = (double)(-22 << (p_13 & 7ULL));
    v_7 = (short)((p_11 * -28770. - (p_11 + -2.21430874371e+38)) + - (- p_11));
    v = (double)((long long)p_21 / ((17164LL - (long long)p_11) + 775LL));
  }
  while (v != (double)((int)((char)(- v_4)) + (int)p)) {
    result = (int)v_7 ^ 183;
    v_9 = (char)v_15;
    v_7 = (short)(~ (! p_13));
    v_4 = (double)((-30 ^ ((int)v_7 - (int)v_9)) << ((int)(p_11 * 8058758105.75 - 22494.) & 31));
  }
  while_0_break: ;
  return result;
}

