#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554974490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p[3][5], long p_5, int p_7[3],
                  unsigned short p_9, double p_11)
{
  long v_21;
  unsigned long long v_19;
  unsigned int v_17;
  unsigned char v_15;
  short v_13;
  long long v;
  unsigned long result;
  v_21 = -815503679L;
  v_19 = 18446744073709528839ULL;
  v_17 = 50141U;
  v_15 = (unsigned char)p_5;
  v_13 = (short)p_11;
  result = 746411084UL;
  while (~ (18298L | (long)((int)p_9 + (int)v_15)) == (long)((-1499190400.f - (float)v_17) * (float)(
                                                             result % 4294967196UL)) % 679934373L) {
    v_19 = (unsigned long long)v_21 ^ (v_19 + 99ULL);
    v_15 = (unsigned char)(p[0][4] / (long long)((int)v_13 + 788) >> (
                           -78 % (p_7[1] + 971) & 63));
    v_21 = (long)((unsigned long)v_13 % 15430UL);
    v_17 = (unsigned int)(~ (! (674880100LL / (p[0][3] + 722LL))));
  }
  while_0_break: ;
  if ((long long)p_7[0] % (-141LL % (((long long)p_9 - -50143LL) + 841LL) + 923LL) <= (long long)(
      (double)((int)((short)p_11) + (int)v_13) / ((double)p[1][3] * -147.825320342 + 724.) - (double)(
      14016LL - ! p[0][2]))) result = (unsigned long)((unsigned long long)(
                                                      944510920 / ((int)3023253504.f + 540)) + 18446744073709542527ULL);
  else {
    v = (long long)((unsigned long long)((p[1][0] & p[1][1]) * (p[1][4] + (long long)p_5)) / (
                    0 % 3129ULL + 821ULL));
    result = (unsigned long)(! v);
  }
  return result;
}

