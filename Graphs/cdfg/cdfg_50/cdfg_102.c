#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 58501641
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p)
{
  short v_7;
  long v_5;
  unsigned long long v;
  unsigned long result;
  v_7 = (short)-24397;
  v_5 = 614662336L;
  v = (unsigned long long)v_7;
  result = (unsigned long)(~ ((unsigned long long)p * v + (unsigned long long)(- v_5)));
  return result;
}

