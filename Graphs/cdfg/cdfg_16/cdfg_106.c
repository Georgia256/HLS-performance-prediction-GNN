#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 361696153
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned char p_5, unsigned int p_7,
                 double p_9, unsigned int p_13)
{
  unsigned long v_23;
  unsigned long long v_21;
  unsigned int v_19;
  unsigned long long v_17;
  double v_15;
  float v_11;
  unsigned char v;
  unsigned int result;
  v_23 = 4294963675UL;
  v_19 = 2449U;
  v_17 = (unsigned long long)p_7;
  v_15 = 587.403449795;
  v_21 = (18446744073709493303ULL - (unsigned long long)p_9) / (unsigned long long)(
         (int)(- p_5) + 786);
  if (- (v_17 % (unsigned long long)(v_19 + 928U)) * - (v_21 / (unsigned long long)(
                                                        p_7 + 97U)) != (unsigned long long)(- (~ (
      v_23 / 127UL)))) result = (unsigned int)p;
  else {
    v_11 = (float)(! p_13 - (unsigned int)((v_15 * p_9) / ((double)(p_13 | (unsigned int)p) + 1023.)));
    v = (unsigned char)(((unsigned int)((int)p_5 % -55684) / ((unsigned int)p % (
                                                              p_7 + 866U) + 619U)) % (unsigned int)(
                        ((int)p_9 + (int)((signed char)v_11) * 126) + 363));
    result = (unsigned int)((int)v / ((255 + ((int)p - 44)) + 599));
  }
  return result;
}

