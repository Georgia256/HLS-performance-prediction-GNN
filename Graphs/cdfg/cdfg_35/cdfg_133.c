#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 499824951
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, int p_7, float p_11[2][4], long long p_13,
                long p_17)
{
  int v_15;
  int v_9;
  unsigned short v_5;
  unsigned long v;
  signed char result;
  v_15 = p_7;
  result = (signed char)96;
  if ((long)(- (3706 / (! v_15 + 128))) > ! p_17) v = 4156237849UL;
  else {
    v_9 = (int)(((long long)p_11[1][3] % (p_13 + 398LL)) * 42775LL ^ 4133545344LL);
    v_5 = (unsigned short)((int)2.51294694271e+38f + (~ p_7 ^ (int)((double)v_9 / -9.09083544335e+37)));
    v = (unsigned long)(0 % (((int)p + (int)result) + 484) + ((int)(! v_5) - p_7));
  }
  result = (signed char)v;
  return result;
}

