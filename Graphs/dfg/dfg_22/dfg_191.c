#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 690547989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, float p_5[4], short p_9, short p_13, short p_15)
{
  unsigned long long v_19;
  long long v_17;
  double v_11;
  double v_7;
  unsigned char v;
  int result;
  v_19 = (unsigned long long)p_15;
  v_17 = 60310LL;
  v = (unsigned char)202;
  result = -463049527;
  v_7 = (double)v;
  v_11 = (double)((unsigned long long)((long long)(- p_9) ^ -28392LL) ^ (
                  (unsigned long long)v_17 + ((unsigned long long)p_13 * v_19) / (unsigned long long)(
                                             result + 136)));
  v_7 = (double)(((int)p_9 | (188 | (-14961 ^ (int)-7348867072.f))) % (
                 (int)((double)((4294902197UL / ((unsigned long)v_11 + 798UL)) / (unsigned long)(
                                ((int)p_13 - (int)v) + 565)) + (double)p_15 / (
                                                               (double)p_5[2] * v_7 + 384.)) + 274));
  result = (int)((unsigned long)((int)v / ((int)((unsigned char)((double)(! p) - (
                                                                 (double)p_5[1] + v_7))) + 839)) % 4294934861UL);
  return result;
}

