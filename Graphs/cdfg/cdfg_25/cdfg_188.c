#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 28674431
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, signed char p_11, long long p_13)
{
  unsigned char v_9;
  long v_7;
  int v_5;
  unsigned int v;
  short result;
  v_9 = (unsigned char)198;
  v_7 = (long)p_13;
  v_5 = (int)p_11;
  v = (unsigned int)p_11;
  result = (short)23256;
  if ((38236ULL ^ (unsigned long long)(- result) % 18446744073709492409ULL) > (unsigned long long)(~ (- (~ v)))) {
    v = (unsigned int)(18446744073709531051ULL + (18446744073104789808ULL + (unsigned long long)p_11));
    result = (short)v_7;
    v_9 = (unsigned char)p;
  }
  else {
    v_5 = -742663673;
    v_7 = (long)(! (- ((long long)v - p_13)));
    result = ~ p;
  }
  while ((unsigned long)p > 0 - (unsigned long)(355U & ! v)) {
    v_9 = (long)v_9 - v_7 % (long)((v_5 + 47) + 571);
    v_5 = (int)p;
    result = (short)0;
    v = (unsigned int)v_5;
  }
  while_0_break: ;
  return result;
}

