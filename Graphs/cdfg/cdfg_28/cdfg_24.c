#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 688465006
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, double p_4, signed char p_13)
{
  unsigned short v_11;
  long v_9;
  short v_7;
  unsigned short v;
  long result;
  v_9 = 3376L;
  v_7 = (short)p_13;
  v = (unsigned short)p;
  result = (long)(~ (char)-101);
  while (- (~ (10123 - p)) <= (int)(- ((double)(195L - result) + - p_4))) {
    v_11 = (unsigned long long)v_7 * ((unsigned long long)v * 793654990ULL);
    v = (unsigned short)((28608U | (unsigned int)p) % (unsigned int)(
                         ~ ((int)v_11 & (int)p_13) + 183));
    v_7 = (short)(- (109L % ((72L | v_9) + 585L)));
    result = (long)((int)1.79083941244e+38f + ~ ((int)v * (int)((unsigned short)p_4)));
  }
  while_0_break: ;
  return result;
}

