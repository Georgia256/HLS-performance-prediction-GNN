#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 661205345
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, double p_7[1][1][5], char p_9,
                       unsigned long p_11)
{
  long v_13;
  short v_4;
  unsigned short v;
  unsigned long long result;
  v_13 = (long)p_9;
  v = (unsigned short)(~ (18446744073273962550ULL % (unsigned long long)(
                          (p_11 & (unsigned long)v_13) + 190UL)));
  v_4 = (short)((int)v - - ((47671 % ((int)p_7[0][0][1] + 917)) % ((int)(- p_9) + 933)));
  v = (unsigned short)((unsigned long long)(-49 / (- ((int)v_4 - -904228434) + 355)) / (
                       (18446744073601451863ULL & - (~ p)) + 685ULL));
  result = (unsigned long long)(! v);
  return result;
}

