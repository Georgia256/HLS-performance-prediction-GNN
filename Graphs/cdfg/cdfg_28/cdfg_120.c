#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 395692406
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned short p_4, int p_7, long long p_11,
           double p_13)
{
  int v_15;
  double v_9;
  unsigned long long v;
  double result;
  v_15 = -187118633;
  result = 6416757582.56;
  if (- p_13 / ((double)(! p_11) + 499.) - - result <= (double)((unsigned long)(
                                                                (int)(! p) % 12395) + ~ (
                                                                (unsigned long)v_15 % 4168872327UL))) {
    v_9 = (double)(p_11 ^ (long long)(107 - (62 & (int)((unsigned char)p_13))));
    v = (unsigned long long)(0 / ((int)((unsigned char)(- (- v_9))) + 704));
    v = ! v;
  }
  else v = 18446744073615498472ULL;
  if ((unsigned long long)p >= ! ((unsigned long long)p_4 % (v + 898ULL) & (unsigned long long)p_7)) 
    result = (double)(- (~ (! (signed char)-10)));
  else result = (double)(unsigned char)210;
  return result;
}

