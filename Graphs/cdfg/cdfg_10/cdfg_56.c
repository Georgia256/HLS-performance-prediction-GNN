#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 786051455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned long long p_5, unsigned char p_7,
              int p_13, unsigned int p_15[4][5])
{
  unsigned long long v_11;
  char v_9;
  long long v;
  long long result;
  v_11 = 131202298ULL;
  v_9 = (char)p_15[0][2];
  v = -39048LL;
  result = 53900LL;
  while (p_5 - 18446744073709551564ULL != ((unsigned long long)p % (p_5 + 8ULL)) / (unsigned long long)(
                                          (int)(~ p_7) + 816) + (unsigned long long)v_9) {
    v = v_11 - 18446744073709487417ULL;
    result = 4191020682LL;
    v_11 = (unsigned long long)p;
    v_9 = (char)((unsigned int)p_13 | p_15[1][2]);
  }
  while_0_break: ;
  result = ((result | 15603LL) - v) / (long long)((int)p + 49);
  return result;
}

