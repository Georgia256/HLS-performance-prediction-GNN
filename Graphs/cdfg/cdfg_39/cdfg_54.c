#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468455686
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned int p_4, unsigned short p_7, double p_9,
         unsigned long p_11)
{
  unsigned int v_21;
  unsigned int v_19;
  unsigned long long v_17;
  signed char v_15;
  unsigned long v_13;
  float v;
  long result;
  v_21 = 4146095340U;
  v_19 = 4294925816U;
  v_15 = (signed char)-110;
  v_13 = (unsigned long)p;
  v_17 = (unsigned long long)((unsigned long)(~ v_19) / (((unsigned long)v_21 - v_13) + 198UL));
  if ((unsigned long long)((((unsigned long)p_9 + 3611705649UL) - (unsigned long)-5552565248.f / (
                                                                  p_11 + 199UL)) * v_13) > ~ (
      (unsigned long long)((int)v_15 >> (p_11 & 7UL)) - 47ULL * v_17)) {
    v = (float)(short)-15155;
    v = (float)(! (p_4 & (unsigned int)v) / (unsigned int)((int)(! (~ p_7)) + 112));
    result = (long)((float)((unsigned int)p % (p_4 + 849U) - 5579U) * - v);
  }
  else result = (long)(18446744073709527856ULL % (unsigned long long)(
                       (int)(- (! p_7)) + 489));
  return result;
}

