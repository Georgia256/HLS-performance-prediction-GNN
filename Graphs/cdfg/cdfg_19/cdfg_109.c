#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 701860842
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, double p_7, float p_9, float p_15)
{
  unsigned int v_13;
  signed char v_11;
  unsigned long long v_4;
  signed char v;
  unsigned long result;
  v_13 = (unsigned int)p_9;
  v_11 = (signed char)p_15;
  v_4 = 21884ULL;
  v = (signed char)-44;
  result = p;
  while (! (- ((unsigned long long)v / (v_4 + 30ULL))) <= ((10ULL + v_4) % (unsigned long long)(
                                                           (p | result) + 523UL)) % (
                                                          (unsigned long long)(
                                                          - p_7 - (double)(
                                                          p_9 - (float)v_11)) + 708ULL)) {
    v = v_13 & 26U;
    v_13 = (unsigned int)v;
    result = (unsigned long)p_15;
    v_11 = (signed char)(((p + 859536317UL) | p % (p + 98UL)) % (((unsigned long)(
                                                                  (int)((char)-700.415588379f) ^ -57) - 
                                                                  p * p) + 336UL));
  }
  while_0_break: ;
  return result;
}

