#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893177062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, long long p_7[2][4][1], long long p_9)
{
  unsigned long long v_4;
  unsigned int v;
  short result;
  v_4 = 18446744072790416490ULL;
  v = 53249U;
  result = (short)19045;
  while ((unsigned int)(! ((int)result * (int)result)) > ~ v) {
    v = v_4 - 18446744073709518576ULL;
    v_4 = 127513246ULL;
    result = (short)(- (~ (v % (unsigned int)((int)p + 778))));
  }
  while_0_break: ;
  result = (short)v;
  return result;
}

