#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 599152568
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, long p_4[5][5], unsigned long long p_13,
                 unsigned int p_15, char p_17[2][5])
{
  double v_21;
  char v_19;
  unsigned long v_11;
  signed char v_9;
  unsigned int v_7;
  long long v;
  unsigned int result;
  v_21 = -2.03358928302e+38;
  v_19 = (char)p;
  v_11 = 4294910443UL;
  v_9 = (signed char)p;
  v_7 = p_15;
  result = 4294921742U;
  if (650283928UL * ((unsigned long)(- p_4[3][4]) * (unsigned long)p_15) >= (unsigned long)(
      1.17483737247e+37 * (double)((unsigned long)((int)p / -26036) - 
                                   (unsigned long)v_19 / 22434UL))) {
    v_9 = (signed char)46;
    v_7 = (unsigned int)((unsigned long long)(~ (65 - (int)v_9)) / (p_13 + 195ULL));
    v = (long long)(((unsigned long long)(- p_15) - 18446744073709505015ULL) & (unsigned long long)(
                    216U + result / (unsigned int)((int)p_17[1][0] + 829)));
  }
  else {
    v = (long long)((unsigned long)((long)v_19 + (p_4[1][0] - (long)p_17[1][1])) % (unsigned long)(
                    (result / 4294936442U) % ((unsigned int)((double)v_7 / (
                                                             v_21 + 903.)) + 513U) + 751U));
    v_7 = 45954U;
    result = (unsigned int)((v * (long long)result ^ 2941LL) | ~ (59009LL + (long long)v_11));
  }
  while ((long long)(- (-1.79585392318e+38 / ((double)p + 1014.))) - ~ (
         (long long)p_4[4][1] - v) != -253928497LL) {
    v_9 = v_11 & (unsigned long)((unsigned int)v_9 + (v_7 - 120U));
    v_7 = (unsigned int)p_13;
    v_11 = (unsigned long)(! 0L);
    v = (long long)(9L % (p_4[3][1] + 698L));
  }
  while_0_break: ;
  return result;
}

