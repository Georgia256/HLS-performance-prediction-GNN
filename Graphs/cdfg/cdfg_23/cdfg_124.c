#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1021750294
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, char p_9, float p_17)
{
  int v_19;
  long v_15;
  unsigned char v_13;
  unsigned int v_11;
  int v_7;
  long long v_5;
  long long v;
  double result;
  v_19 = (int)p_17;
  v_13 = (unsigned char)p_9;
  v_7 = 39519;
  v_5 = (long long)p;
  v = (long long)p;
  result = 7789737890.21;
  if (-657.813271192 != (double)v_13) {
    v_11 = (unsigned int)(-9. - (result / ((double)v_5 + 50.)) * (double)(
                                956119378LL >> ((int)p_9 & 63)));
    v_13 = (unsigned char)p_9;
    v_7 = -114;
  }
  else {
    v = (long long)v_19;
    result = (double)(- ((long long)p_17 + (118LL - v)));
    v_11 = (unsigned int)(-520.231872559f * (float)(0U - (unsigned int)(- p_9)));
  }
  while ((float)(v % (long long)(p + 142U) << (v_5 & 63LL)) * 466.14654541f <= (float)(
         - (v_5 >> (v_7 & 63)) - (long long)(- ((unsigned int)p_9 + v_11)))) {
    v_15 = (int)v_13 + 1053241823;
    v_5 = (v_5 + -12284LL) + 15368LL;
    result = (double)((float)(((unsigned long)v_15 + 39241UL) & (unsigned long)(- p_9)) / 1387.38769531f);
    v_7 = (int)((unsigned long long)((long long)(- v_11) + -55197LL) * (
                (unsigned long long)p * 18446744073709523656ULL + (unsigned long long)(
                (long long)p_9 + v_5)));
  }
  while_0_break: ;
  return result;
}

