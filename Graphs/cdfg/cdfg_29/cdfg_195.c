#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 488365126
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned short p_9[2],
                 unsigned short p_11[1])
{
  unsigned char v_13;
  unsigned int v_6;
  int v_4;
  long v;
  unsigned int result;
  v_13 = (unsigned char)p_9[0];
  v = 53549L;
  result = 815005844U;
  v_6 = (unsigned int)((unsigned long long)-9474332672.f - (unsigned long long)(
                                                           (int)p_11[0] / -13) / (
                                                           p % (unsigned long long)(
                                                           (int)v_13 + 502) + 167ULL));
  while (! ((unsigned long)result / 130995152UL + (unsigned long)v * 4294920762UL) != 38UL) {
    v_4 = v_6 + 19552U;
    v_6 = (unsigned int)(! ((p - (unsigned long long)p_9[0]) + ~ p));
    v_4 = v_4;
    result = 79U;
  }
  while_0_break: ;
  return result;
}

