#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 908168480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, long long p_7, long p_9)
{
  unsigned char v_5;
  unsigned long v;
  unsigned int result;
  v_5 = (unsigned char)p_7;
  if ((long long)(! v_5) > ~ (~ (p_7 / (long long)(p_9 + 420L)))) v = (unsigned long)(! (char)110);
  else v = (unsigned long)p;
  result = (unsigned int)(-3.73524866485e-35 / ((double)(- (60221ULL / (unsigned long long)(
                                                            v + 624UL))) + 952.));
  return result;
}

