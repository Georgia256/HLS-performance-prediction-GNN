#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783708959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, long p_4)
{
  int v;
  unsigned long long result;
  v = 1029179977;
  result = 18446744073709522892ULL;
  result = 109ULL / (((unsigned long long)(p_4 / (long)(v + 839)) - (
                      (unsigned long long)p + result)) + 775ULL);
  result = (! result & 597ULL) ^ (unsigned long long)(! (~ p));
  return result;
}

