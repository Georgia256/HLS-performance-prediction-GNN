#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 124178967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, int p_4, unsigned long p_9, short p_11[4][2],
         long long p_13)
{
  int v_19;
  int v_17;
  float v_15;
  short v_7;
  unsigned short v;
  long result;
  v_19 = (int)p_11[0][0];
  v_17 = (int)p;
  v_15 = (float)p_11[2][1];
  v = (unsigned short)7249;
  result = (long)p_4;
  v_7 = (short)((((unsigned long)v - p_9) ^ 3375861190UL) | (unsigned long)5206277120.f);
  while ((float)((int)(- p) ^ (int)((signed char)((double)p_4 * (679.685925869 - (double)v)))) == 
         (float)((long long)((unsigned long)v_7 - p_9) % (((long long)p_11[1][0] + p_13) + 439LL)) / (
         (-1.16708179339e+38f + (v_15 + (float)v_7)) + 659.f)) {
    v_7 = v_17 % 23;
    result = (long)(- ((unsigned long)((int)v % 115) * (p_9 + (unsigned long)-109597343.02)));
    v_17 = (int)((unsigned long)((unsigned int)v_19 / (((unsigned int)v_15 ^ 14324U) + 711U)) + (unsigned long)(
                 (long)p_4 % (result + 592L)));
    v = (unsigned short)(952416290LL / (p_13 + 846LL));
  }
  while_0_break: ;
  return result;
}

