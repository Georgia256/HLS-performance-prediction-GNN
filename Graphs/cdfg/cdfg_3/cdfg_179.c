#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 768093329
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, double p_4, int p_6, unsigned int p_8[2][2],
                 unsigned long p_10)
{
  unsigned long long v_15;
  short v_13;
  unsigned short v;
  unsigned int result;
  v_15 = 290170644ULL;
  v_13 = (short)27182;
  v = (unsigned short)((double)((unsigned long long)(-19445LL % (long long)(
                                                     (int)v_13 + 587)) - (
                                v_15 - (unsigned long long)p_8[1][1])) + p_4);
  if (26203ULL * (unsigned long long)(! (3931865499UL * p_10)) != (unsigned long long)(! (~ (
      (int)v * 108)))) {
    result = (unsigned int)p;
    result = result;
  }
  else {
    result = p_8[0][0];
    result = (unsigned int)(- ((double)result + p_4) - (double)(~ (p_6 * 16)));
  }
  return result;
}

