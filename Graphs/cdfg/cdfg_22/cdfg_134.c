#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 178462948
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, unsigned short p_4, long long p_6, long p_9,
         unsigned int p_11)
{
  unsigned long long v;
  char result;
  v = (unsigned long long)p_4;
  if ((float)v > (8.20871659014e+37f * (float)p_9) * (float)p_11) result = (char)p_4;
  else result = (char)p_6;
  result = (char)(- (p % 33320LL & (long long)(115 + (int)result)));
  return result;
}

