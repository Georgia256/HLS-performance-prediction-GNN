#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 485795668
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p[5][3])
{
  char v_5;
  unsigned long long v;
  unsigned long long result;
  v_5 = p[0][1];
  v = 92978819ULL;
  result = 29027ULL - ((v & (unsigned long long)p[4][0]) & (unsigned long long)v_5);
  result = result;
  return result;
}

