#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 174596773
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned int p_7, short p_9[5][3],
                 double p_11, int p_13)
{
  unsigned long long v_17;
  unsigned short v_15;
  unsigned char v_4;
  long long v;
  unsigned int result;
  v_17 = (unsigned long long)p;
  v_15 = (unsigned short)p_7;
  if (v_17 < (unsigned long long)(107LL << 11LL)) {
    v_4 = (unsigned char)(778456384. * (-37803. + p_11) - (double)((int)p_9[2][0] + ~ p_13));
    result = ! p_7 ^ (unsigned int)(((int)v_4 / ((int)p_9[0][0] + 423)) % 60);
    v = (long long)(! ((unsigned long)(13U & p_7) % 662UL));
  }
  else {
    result = (unsigned int)((unsigned long)p_9[0][1]);
    v = 499573824LL / (long long)(((int)p + 2895) + 237);
    v_4 = (unsigned char)((unsigned long long)(((long long)v_15 - -25234920LL) * 769765534LL) * 18446744073353453253ULL);
  }
  result = (unsigned int)((v | 123LL) % (long long)(((int)v_4 & (int)((unsigned char)8525005838.68)) + 438) + (long long)(! (
                          result / (unsigned int)((int)p + 746))));
  return result;
}

