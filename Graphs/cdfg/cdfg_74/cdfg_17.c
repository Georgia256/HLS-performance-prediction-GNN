#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940509176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, float p_5, long p_9, int p_13,
                       int p_15)
{
  unsigned long v_19;
  unsigned char v_17;
  unsigned long long v_11;
  int v_7;
  signed char v;
  unsigned long long result;
  v_19 = (unsigned long)p_13;
  v_17 = (unsigned char)p;
  v_11 = (unsigned long long)p_9;
  if ((unsigned long long)(((unsigned int)(p_15 + 12) % (! p + 345U)) % (unsigned int)(
                           ((int)(- p_5) - (int)v_17 % ((int)((unsigned char)p_5) + 764)) + 58)) == 
      v_11 >> (((unsigned long long)p * 828140393ULL - (unsigned long long)v_19) & 63ULL)) 
    result = 44221ULL;
  else {
    v_7 = (int)((unsigned long long)p_9 * ~ (v_11 + (unsigned long long)p_13));
    v = (signed char)v_7;
    result = (unsigned long long)(p + (unsigned int)(12 / ((int)v + 555) >> (
                                                     (int)(-114.f + p_5) & 31)));
  }
  result = result;
  return result;
}

