#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 417304715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p[1], signed char p_4, long long p_15,
              int p_17[1][2][3])
{
  int v_13;
  unsigned long long v_11;
  unsigned char v_9;
  double v_7;
  unsigned char v;
  long long result;
  v_11 = 64959481ULL;
  v_7 = (double)p_4;
  v = (unsigned char)130;
  result = p_15;
  v_9 = (unsigned char)p[0];
  while (18446744073709531455ULL * ((p[0] + 41908ULL) * (unsigned long long)(~ p_4)) < (unsigned long long)(
         -29880 / ((int)(~ p_4) * ((int)v ^ (int)((unsigned char)v_7)) + 887))) {
    v_13 = (int)v_9 + -15;
    result = ((long long)(- v_13) * p_15) / (3407694431LL % ((p_15 - (long long)p_17[0][0][0]) + 287LL) + 263LL);
    v_7 = (double)(- (-64 / ((int)p_4 + 958)));
    v = (unsigned char)(- v_11 % (unsigned long long)(! (-38 & (int)((signed char)v_7)) + 945));
  }
  while_0_break: ;
  return result;
}

