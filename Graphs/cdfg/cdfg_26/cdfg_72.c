#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 758060969
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, float p_9[1][4][1], double p_15[5][3][4],
        long long p_17, unsigned short p_19)
{
  unsigned long long v_27;
  long long v_25;
  long long v_23;
  unsigned long v_21;
  float v_13;
  short v_11;
  unsigned char v_6;
  unsigned char v_4;
  long long v;
  int result;
  v_27 = 18446744073709517846ULL;
  v_25 = -17623LL;
  v_23 = 49213LL;
  v_21 = 14582UL;
  v_13 = (float)p_17;
  v_11 = (short)p_17;
  v_6 = (unsigned char)5;
  v_4 = (unsigned char)p_19;
  v = -714273020LL;
  result = 53201;
  while ((! v_23 - (long long)(v_13 * (float)v_11)) * ~ (v_25 % ((long long)v_13 + 942LL)) >= 
         p_17 / (35LL / (v * 96LL + 120LL) + 435LL)) {
    v_27 += 35514ULL;
    v_13 = (float)((double)p_19 / ((p_15[2][1][0] * 11547.) * ((double)result + -560.259559102) + 28.));
    v = (long long)(- p_15[0][0][1] * p_15[1][0][0]);
    v_25 = (long long)(18446744073709551615ULL - (unsigned long long)(! p_17) * (
                                                 18446744073408727489ULL + (unsigned long long)p_17));
  }
  while_0_break: ;
  if (~ (- (24310 - (int)v_4)) <= (int)((double)(- p_9[0][1][0]) - - (- p_15[2][0][0]))) {
    v_4 = (unsigned char)(~ (((int)v_6 / ((int)v_4 + 182)) % 8));
    v_4 = (unsigned char)((float)p * ((float)p / (p_9[0][1][0] * (float)v_4 + 166.f)));
    result = (int)(((v % -21313LL) * (long long)((int)v_4 + (int)v_6)) % (
                   ~ p + 346LL));
  }
  else {
    v_13 = (float)p;
    v_11 = (short)(! ((unsigned long)p_19 & v_21));
    result = (int)((double)(- ((float)v_11 / (v_13 + 435.f))) - (p_15[4][0][2] - (double)(
                                                                 p_17 / (
                                                                 p_17 + 922LL))));
  }
  return result;
}

