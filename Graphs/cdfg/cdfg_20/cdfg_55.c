#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 210561948
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p)
{
  unsigned long long v_12;
  unsigned long long v_10;
  unsigned long long v_8;
  signed char v_6;
  unsigned int v_4;
  float v;
  unsigned int result;
  v_10 = (unsigned long long)p;
  v_8 = (unsigned long long)p;
  v_6 = (signed char)79;
  v = -6034141696.f;
  result = 3242787608U;
  v_4 = 75U;
  while (88.f < v) {
    v_12 = v_8 >> (((unsigned long)v_6 - ((unsigned long)v_4 | 4294915861UL)) & 63UL);
    v_8 = v_10;
    v_4 = (unsigned int)(-512918123LL / (long long)((int)(~ p) + 356));
    v = (float)((- v_10 - v_8 * 3248278850ULL) & (18446744073709551537ULL - v_12) % (unsigned long long)(
                                                 (int)p * (int)p + 38));
  }
  while_0_break: ;
  return result;
}

