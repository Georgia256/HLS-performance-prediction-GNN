#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 989926146
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, short p_9, unsigned int p_11)
{
  signed char v_17;
  int v_15;
  signed char v_13;
  long long v_7;
  unsigned int v_5;
  float v;
  unsigned int result;
  v_17 = (signed char)54;
  v_15 = 40547;
  v_13 = (signed char)p;
  v_7 = 174818889LL;
  v_5 = 48134U;
  v = -1.19510508603e+38f;
  result = 31446U;
  result = - ((unsigned int)v_17 % (~ result + 1010U));
  while (~ ((unsigned long long)(16392U - result) | 18446744072725459777ULL) >= 0ULL) {
    v_17 = v_7 / (long long)((v_5 & (unsigned int)-9822538945.14) + 947U);
    v_17 = (signed char)(- (v - 7847334400.f) - (float)v_17);
    v_5 = (unsigned int)(! ((unsigned long)(- v_17) & (10280UL ^ (unsigned long)p_11)));
    result = (unsigned int)((int)((float)((unsigned int)p_9 + p_11) + 4976998400.f) << (
                            ((int)v_13 * (int)p_9 - ((int)p_9 + v_15)) & 31));
  }
  while_0_break: ;
  return result;
}

