#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 91087745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[5], float p_4[2][2], double p_9, unsigned long p_11[4],
           int p_15)
{
  long long v_21;
  long long v_19;
  unsigned char v_17;
  long long v_13;
  char v_7;
  long long v;
  double result;
  v_21 = (long long)p_9;
  v_19 = -8929651LL;
  v_17 = (unsigned char)p_4[1][0];
  v = -1026558263LL;
  result = -8947132670.47;
  if ((long long)(! ((int)((unsigned char)result) * 121)) * -16075LL != (long long)(- (
      ((int)v_17 % -451076934) / -47))) {
    v_17 = (unsigned char)99;
    v_19 = (long long)(- p[3]);
    v_7 = (char)((long long)p_11[0] * ! (! v_19));
  }
  else {
    v_7 = (char)v_21;
    v_21 = 18333311LL;
    v = ~ (v_19 * v_21);
  }
  if ((unsigned long long)(~ p_11[2]) / 18446744072946807876ULL - (unsigned long long)(
      (int)((unsigned char)(- p_9)) * (int)(! v_17)) < (unsigned long long)(
      4294951454UL % (unsigned long)((- p_15 - 30191) + 545))) result = (double)(
                                                               (int)((short)-6303748256.35) % (
                                                               (int)p[1] + 1024));
  else {
    v_13 = (long long)p_15;
    v_7 = (char)((long long)(! p_11[3] / ((p_11[0] >> ((int)v_7 & 31)) + 900UL)) * (
                 (long long)-2.09564184137e+38f * (v_13 ^ 35858LL)));
    result = (double)(- p_4[0][0] + (float)(v * (long long)v_7)) - - (- p_9);
  }
  return result;
}

