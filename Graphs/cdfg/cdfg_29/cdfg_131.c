#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981634291
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, unsigned int p_4, char p_7, short p_11, long long p_15)
{
  float v_21;
  float v_19;
  int v_17;
  double v_13;
  long long v_9;
  long long v;
  float result;
  v_21 = (float)p_4;
  v_19 = (float)p;
  v_17 = (int)p_15;
  v_13 = (double)p_11;
  v_9 = (long long)p_7;
  v = (long long)p_11;
  result = (float)p;
  while (~ (66 * (int)p_11 + (int)(! p_7)) >= ((int)((short)(- v_19)) | (int)p_11)) {
    result = (int)((unsigned short)v_21) + 64511;
    v_9 = ! ((v_9 + (long long)p) / (long long)(- p + 929));
    v_17 = (int)(~ ((unsigned long long)((double)p_15 / -3.04387317498e+38) * (
                    405841390ULL - (unsigned long long)p_7)));
    v_19 = (float)(((double)(p_4 + (unsigned int)p_11) / (- v_13 + 593.)) * (double)(
                   -159LL + (long long)(221884057U % (unsigned int)((int)p_11 + 992))));
  }
  while_0_break: ;
  while (~ ((v % (long long)((int)p_7 + 911)) % ((v - v_9) + 233LL)) > (long long)(
         (double)(- ((float)p_11 - -3.24717240143e+38f)) + v_13 * ((double)p_15 - 5038182488.26))) {
    result = (int)v_19 + (v_17 - 39);
    v_17 = (int)((long long)(p_4 % 58U) / (! v + 281LL) - (long long)p_7);
    v_19 = (float)(((long long)v_17 ^ p_15) / 71LL);
    v_9 = ! (~ (43486LL + v));
  }
  while_0_break_0: ;
  return result;
}

