#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1057265198
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned int p_7)
{
  double v_11;
  long long v_9;
  unsigned long long v_5;
  unsigned int v;
  unsigned short result;
  v_11 = 8.8685681406;
  v_9 = 1724LL;
  v_5 = 18446744073445913645ULL;
  v = (unsigned int)(- ((long long)(46633U / (p_7 + 544U)) * (v_9 * (long long)v_11)));
  result = (unsigned short)((unsigned long long)((long long)((unsigned long)v / (
                                                             p + 212UL)) / 162LL) * ~ v_5);
  return result;
}

