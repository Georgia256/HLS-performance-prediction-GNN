#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711891974
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned long long p_5, unsigned long long p_7, long p_9)
{
  unsigned int v;
  double result;
  v = (unsigned int)((unsigned long long)(24040LL - (long long)(-112 ^ (int)((char)p))) | 
                     (15655ULL ^ p_5) * (p_7 / (unsigned long long)(p_9 + 962L)));
  result = (double)(- v);
  return result;
}

