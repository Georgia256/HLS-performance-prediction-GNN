#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 661441081
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p[3], long p_7[1][1], short p_9, long p_11, short p_19)
{
  unsigned char v_21;
  signed char v_17;
  unsigned long v_15;
  int v_13;
  long long v_5;
  unsigned char v;
  unsigned int result;
  v_17 = (signed char)p[2];
  v_15 = (unsigned long)p_11;
  v_13 = (int)p_11;
  v_5 = (long long)p_9;
  v = (unsigned char)p_7[0][0];
  result = 4016219496U;
  while ((long long)(! (40048UL >> (result & 31U))) - (! v_5 - (long long)(
                                                       (long)p[0] * p_7[0][0])) < (long long)(
         (unsigned long)((long)(p[0] - (float)p_9) + p_11 * (long)v_13) / (
         28677UL * ((unsigned long)v / (v_15 + 1023UL)) + 395UL))) {
    v_21 = (long)v_17 * 61039L;
    v_13 = - (((int)((short)p[1]) | (int)p_19) | (int)(~ v_21));
    result = (unsigned int)(- p_9);
    v = (unsigned char)218;
  }
  while_0_break: ;
  result = (unsigned int)(- (p[0] * 4136822272.f) + -7.84193405841e+37f / (
                                                    (float)(- v) + 426.f));
  return result;
}

