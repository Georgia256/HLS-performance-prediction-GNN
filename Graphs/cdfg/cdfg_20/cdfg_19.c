#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 491884321
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, long long p_11, float p_13,
          unsigned long long p_21[2][3], double p_25)
{
  long v_23;
  int v_19;
  unsigned long long v_17;
  int v_15;
  unsigned char v_9;
  unsigned short v_7;
  long v_5;
  unsigned long long v;
  short result;
  v_23 = 35014L;
  v_17 = 18446744072808879006ULL;
  v_9 = (unsigned char)76;
  v_7 = (unsigned short)15113;
  v_5 = (long)p_21[0][2];
  v_19 = (int)p_13;
  if ((((unsigned long long)v_19 | p) + (unsigned long long)(~ p_11)) * 64426ULL != (unsigned long long)(
      (double)((unsigned long long)v_19 % (v_17 + 155ULL) - 3821109354ULL) * (
      ((double)p_13 + p_25) + (double)v_23))) {
    v = (unsigned long long)((- v_5 + (long)(! v_7)) >> ((long long)(
                                                         -32480 / ((int)v_9 + 739)) / (
                                                         p_11 % -56LL + 442LL) & 31LL));
    v = v;
    result = (short)(~ (! (p * v)));
  }
  else {
    v_19 = (int)(- p_21[0][0] / (unsigned long long)(! v_23 + 830L));
    v_15 = ! (- v_19);
    result = (short)((unsigned long long)(0 - (int)p_13 % (v_15 + 691)) * v_17);
  }
  return result;
}

