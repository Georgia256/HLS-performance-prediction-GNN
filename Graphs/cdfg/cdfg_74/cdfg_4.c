#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 365784276
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, float p_4, int p_6,
                   unsigned long long p_8)
{
  unsigned short result;
  result = (unsigned short)p_6;
  result = (unsigned short)((unsigned long long)((int)(4294909184.f * p_4) - 
                                                 p_6 * 61) & (p_8 + (unsigned long long)(
                                                              (int)result % 174)));
  if ((double)result != 877.241221842) result = (unsigned short)40144;
  else result = (unsigned short)(- ((long long)p * ((long long)p * -915535280LL)));
  return result;
}

