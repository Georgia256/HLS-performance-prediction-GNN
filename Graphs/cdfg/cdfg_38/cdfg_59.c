#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 235622242
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, short p_5, unsigned long long p_7, signed char p_11,
        long long p_21[1][5])
{
  short v_23;
  long long v_19;
  double v_17;
  long long v_15;
  unsigned short v_13;
  long long v_9;
  float v;
  int result;
  v_17 = (double)p;
  v_13 = (unsigned short)15581;
  v_9 = (long long)p_11;
  v = -749461824.f;
  while ((unsigned long long)p_5 < - p_7 % (unsigned long long)(v_9 / 46LL + 43LL) - (unsigned long long)(- (
                                   -109 + (int)p_11))) {
    v_23 = (int)v_13 + -80;
    v_19 = (long long)((unsigned long long)(((long long)p * p_21[0][4]) / 63326LL) % (
                       (unsigned long long)v_23 / ((82362114ULL - (unsigned long long)v_17) + 159ULL) + 817ULL));
    v_15 = 0LL;
    v_9 = (long long)(- p_5) % ((long long)p / (v_15 + 692LL) + 645LL) - (long long)v_17;
  }
  while_0_break: ;
  result = (int)(v * (float)((unsigned long)(44692U * (unsigned int)p) ^ 0UL));
  return result;
}

