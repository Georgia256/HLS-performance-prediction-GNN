#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 644279028
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[2][2][4], short p_9, signed char p_11[3], int p_13,
              unsigned long long p_15)
{
  unsigned long v_19;
  double v_17;
  unsigned short v_6;
  unsigned long long v_4;
  signed char v;
  long long result;
  v_19 = 3386744121UL;
  v_17 = 245.354760105;
  v_4 = 18446744073709549912ULL;
  v = (signed char)p[0][1][0];
  v_6 = (unsigned short)(- p[0][1][1]);
  v = (signed char)(p_15 & (p_15 % ((unsigned long long)(- v_17) + 666ULL) - (unsigned long long)(
                            - v_19 + (unsigned long)v)));
  result = (long long)((unsigned long long)v % (((v_4 - (unsigned long long)v_6) % (
                                                 (unsigned long long)(
                                                 p[1][0][3] + (double)p_9) + 722ULL) ^ (unsigned long long)(
                                                 (421275692L | (long)p_9) >> (
                                                 ((int)p_11[2] + p_13) & 31))) + 192ULL));
  result = - (~ (~ result));
  return result;
}

