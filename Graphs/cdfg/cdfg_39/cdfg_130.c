#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822397353
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, float p_11, unsigned int p_13,
                       signed char p_15)
{
  signed char v_9;
  unsigned char v_6;
  short v_4;
  long v;
  unsigned long long result;
  v_9 = (signed char)-119;
  if (~ (((unsigned long)v_9 + 55247UL) | (unsigned long)(p_11 / (p_11 + 605.f))) >= (unsigned long)(- (~ (
      p_13 - (unsigned int)p_15)))) v = 307L;
  else {
    v_6 = (unsigned char)(5064U ^ (unsigned int)((int)((unsigned char)p) / 201));
    v_4 = (short)(- (-21407L - -9576605L * (long)v_6));
    v = (long)v_4;
  }
  result = (unsigned long long)v;
  return result;
}

