#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1068458234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, unsigned long long p_4, unsigned long long p_6[1],
           int p_11, unsigned long p_13)
{
  short v_21;
  double v_19;
  unsigned long long v_17;
  char v_15;
  unsigned short v_9;
  short v;
  double result;
  v_21 = (short)11196;
  v_19 = -2.22336643915e+38;
  v_17 = 141961038ULL;
  v_15 = (char)-39;
  v_9 = (unsigned short)59763;
  v = (short)p_11;
  result = (double)p_4;
  while ((double)(~ (! p_6[0]) >> (((int)v % ((int)v + 154) - (int)v / -84) & 63)) < 
         (double)(~ (-72 % ((int)((char)9394044928.f) + 362))) * p) {
    v_15 = v_17 % 114ULL;
    v = (short)((- v_19 / (p / ((double)p_11 + 795.) + 316.)) / ((double)(
                                                                 ((int)v_15 + p_11) ^ (
                                                                 (int)v_21 << (
                                                                 (int)v_15 & 15))) + 444.));
    v_9 = (unsigned short)3.00255621164e+38;
    v = (short)((double)v - ((double)(! p_11) + result * 412.332621665));
  }
  while_0_break: ;
  if (-4613943.5f <= (float)(! ((p_4 % ((unsigned long long)result + 638ULL)) * (unsigned long long)(~ v_15)))) 
    result = - (p * (double)p_4) + (double)(! (! p_6[0]));
  else {
    result = (double)4294959441U;
    result = (double)((int)((double)(p_4 - 18446744073709531823ULL) + (
                            result - 63178.)) % (~ ((int)((unsigned short)result) / (
                                                    (int)v_9 + 441)) + 622));
    result = (double)(~ ((int)v + (int)((short)-1243201402.73)) - (26501 >> (
                                                                   (int)((unsigned short)(- result)) & 15)));
  }
  return result;
}

