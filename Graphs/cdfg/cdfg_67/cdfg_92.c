#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377268512
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, long long p_5, unsigned int p_9[2])
{
  unsigned char v_7;
  unsigned long long v;
  float result;
  v_7 = (unsigned char)251;
  v = (unsigned long long)p_9[1];
  v = - (~ v) - 37186ULL;
  if (29269ULL <= (- v - 18446744073451524221ULL * (unsigned long long)p) - (unsigned long long)(
                  (p_5 / 12487LL) % (long long)(((unsigned int)v_7 - p_9[1]) + 788U))) 
    result = (float)(signed char)46;
  else result = (float)1058169728U;
  return result;
}

