#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 180804643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, unsigned short p_5, int p_9,
                  unsigned int p_13, double p_21)
{
  signed char v_27;
  int v_25;
  unsigned int v_23;
  unsigned char v_19;
  double v_17;
  double v_15;
  unsigned long long v_11;
  long v_7;
  float v;
  unsigned char result;
  v_27 = (signed char)-121;
  v_25 = -915572635;
  v_23 = 163136560U;
  v_19 = (unsigned char)255;
  v_17 = 1.53615533732e+38;
  v_15 = (double)p_9;
  v_11 = (unsigned long long)p_21;
  v_7 = -768518193L;
  v = (float)p;
  result = (unsigned char)p_9;
  while ((unsigned long)(- (v_15 * v_17) + -1.1820741328e+38) > (unsigned long)(
                                                                (int)3.25319570465e+37 % (
                                                                ((int)v_19 - (int)((unsigned char)p_21)) + 492)) / 3839123506UL) {
    v_17 = (float)v_23 + -2.05871345538e+38f;
    v_23 = (unsigned int)(! ((int)result | (int)(~ v_27)));
    v_19 = (unsigned char)(-47444.f + ((float)(~ v_25) - (float)v_25 * v));
    v_15 = (double)(0 / (unsigned long)(! (p_9 + (int)v_19) + 856));
  }
  while_0_break: ;
  if (- (-783.918334961f * (float)p_5) <= (float)(- ((unsigned long long)(
                                                     v_7 - (long)p_9) | (
                                                     v_11 + 18446744073709486403ULL)))) 
    result = (unsigned char)112;
  else {
    v = -2.28164593794e+38f;
    result = (unsigned char)(~ ((unsigned long long)(- v) & 1270ULL / (
                                                            p + 193ULL)));
  }
  return result;
}

