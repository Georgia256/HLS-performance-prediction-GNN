#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 701958929
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, float p_7, unsigned long p_9, long p_11,
                   long long p_13)
{
  signed char v_15;
  long v_5;
  float v;
  unsigned short result;
  v_15 = (signed char)107;
  v = 598.768859863f;
  if ((int)((float)(! ((int)v_15 - 120)) + - (- v)) != 16762) v = (float)p;
  else {
    v = (float)(- (- ((long long)p_11 + p_13)));
    v_5 = (long)(! ((unsigned long)((int)v % 51253) + - p_9));
    v = (float)(4057946389UL % ((unsigned long)((float)v_5 * p_7) + 101UL));
  }
  result = (unsigned short)(! ((unsigned long)(- v) * (799UL % (p + 877UL))));
  return result;
}

