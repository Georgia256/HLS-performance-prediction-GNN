#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072217487
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, long long p_4[4], char p_6, unsigned long long p_8,
         char p_10[4])
{
  long result;
  result = (long)((unsigned long long)p_4[2] * ((18446744073419137689ULL | (unsigned long long)p_6) - (
                                                p_8 + (unsigned long long)p_10[1])));
  result = 0L;
  return result;
}

