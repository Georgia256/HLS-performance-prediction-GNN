#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1020705468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long p_4[5][2][2], double p_7[5][4][4], short p_9,
         double p_11)
{
  unsigned short v_13;
  long long v;
  long result;
  v_13 = (unsigned short)(- p_7[3][1][3]);
  if (239437095ULL >= (unsigned long long)(4294917256UL % (! p_4[4][0][1] + 220UL)) / (
                      ! ((unsigned long long)v_13 / 748669584ULL) + 566ULL)) {
    v = (long long)((-27465. - (p_7[4][3][3] - 56.)) * (double)((int)p_9 | (int)((short)p_11)));
    result = (long)((long long)(~ p) / (((long long)((unsigned long)p * p_4[0][1][0]) + ! v) + 561LL));
  }
  else result = (long)(~ p_9);
  return result;
}

