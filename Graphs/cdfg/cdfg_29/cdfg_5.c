#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 990280235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, signed char p_4, long p_7)
{
  unsigned long long v_9;
  int v;
  unsigned char result;
  v_9 = 18446744073709509466ULL;
  v = (int)((- v_9 - 18446744073709551559ULL) / 678ULL);
  if ((long)v < (long)(- (-641.41997719 - (double)v)) - - (- p_7)) result = (unsigned char)(- (
                                                                   (unsigned long)(
                                                                   (int)((signed char)p) ^ (int)p_4) - 4294927356UL));
  else result = (unsigned char)230;
  return result;
}

