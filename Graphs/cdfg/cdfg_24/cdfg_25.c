#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 447961428
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, float p_9)
{
  short v_13;
  unsigned int v_11;
  signed char v_7;
  unsigned short v_5;
  long v;
  unsigned int result;
  v_13 = (short)p;
  v_7 = (signed char)82;
  v = (long)p_9;
  result = 23730U;
  v_5 = (unsigned short)(p % (unsigned long long)(((int)(! v_7) + (int)((signed char)(
                                                   p_9 + -23030.f))) + 758));
  while ((unsigned long long)v * p + - p >= (unsigned long long)v_5) {
    v_11 = (int)v_7 * (int)((signed char)4741999616.f);
    result = (unsigned int)((unsigned long long)v_11 % (p + 486ULL) + (unsigned long long)(
                            115.f / (((float)v_13 + p_9) + 286.f)));
    v = (long)p_9;
    v_5 = (unsigned short)p;
  }
  while_0_break: ;
  return result;
}

