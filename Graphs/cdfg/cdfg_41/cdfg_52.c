#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 235643173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, long long p_7)
{
  long v_5;
  unsigned char v;
  int result;
  v_5 = (long)(~ p_7);
  if (0UL > (unsigned long)v_5) {
    v = (unsigned char)(- (! -37LL));
    result = ((int)v - 22) * 52984 - (int)v;
  }
  else result = (int)p;
  return result;
}

