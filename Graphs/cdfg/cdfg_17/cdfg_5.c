#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 775984194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned int p_5, float p_7)
{
  int v_15;
  float v_13;
  unsigned int v_11;
  signed char v_9;
  float v;
  signed char result;
  v_15 = 13512;
  v_13 = 8019790336.f;
  v_11 = p_5;
  v = p_7;
  result = (signed char)p_7;
  v_9 = (signed char)((float)(~ ((unsigned int)result - v_11)) / (((p_7 + (float)p) + (float)(
                                                                   v_15 * (int)p)) + 308.f));
  while (v < (float)(((4294952459UL + (unsigned long)p) * (unsigned long)(! p)) / (
                     (unsigned long)((float)p_5 - p_7) + 716UL))) {
    v_11 = (int)v_9 + -115;
    v_11 = (unsigned int)(- (46027 * v_15) - (int)((double)((long long)v_11 * 585630361LL) + 2.64513986505e+38));
    v_9 = (signed char)(- (v_11 + (unsigned int)v_13) * p_5);
    v = (float)334548717ULL;
  }
  while_0_break: ;
  return result;
}

