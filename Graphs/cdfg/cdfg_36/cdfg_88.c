#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 172080909
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, char p_4, short p_9)
{
  unsigned long long v_11;
  unsigned int v_7;
  float v;
  unsigned long long result;
  v_11 = (unsigned long long)p_4;
  v_7 = (unsigned int)p_4;
  v = (float)p;
  if ((unsigned long long)((unsigned int)p_4 / (((unsigned int)v % (v_7 + 412U)) % (unsigned int)(
                                                (int)p_9 + 103) + 527U)) != ! (
      18446744073482092114ULL ^ ((unsigned long long)-2.57371242815e+38 + v_11))) 
    result = 3431161930ULL;
  else result = 377346457ULL;
  result = (unsigned long long)((long long)(- ((double)result * p)) + (
                                -761865681LL / ((long long)p + 877LL) - 4294905682LL));
  return result;
}

