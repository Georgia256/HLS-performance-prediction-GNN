#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24331355
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, long long p_5)
{
  signed char v_11;
  double v_9;
  unsigned long long v_7;
  long long v;
  unsigned int result;
  v_11 = (signed char)p;
  v_7 = (unsigned long long)p_5;
  v = (long long)p;
  result = (unsigned int)p_5;
  v_9 = (double)(955933745LL % (~ (p_5 + (long long)result) + 570LL));
  if (~ v_7 / (unsigned long long)(v * (long long)((unsigned long)v_9 % 61776UL) + 995LL) > (unsigned long long)(! (- (
      (int)v_11 << 2U)))) result = (unsigned int)p;
  else {
    v = p_5;
    result = (unsigned int)(v + -17LL);
  }
  return result;
}

