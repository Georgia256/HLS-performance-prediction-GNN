#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 243461115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned int p_9, unsigned int p_15,
                   signed char p_17)
{
  float v_13;
  char v_11;
  unsigned int v_7;
  unsigned long v_5;
  unsigned long v;
  unsigned short result;
  v_5 = (unsigned long)p_17;
  v = (unsigned long)p_17;
  result = (unsigned short)19318;
  v_7 = 21431U;
  while ((unsigned long)(- (- (p / ((float)v + 487.f)))) == ~ (! (v_5 + v_5))) {
    v_13 = (unsigned long)v_7 + 88403723UL;
    v_11 = (char)-239.766387939f;
    result = (unsigned short)((p_9 + (unsigned int)v_11) * (unsigned int)(
                              (float)v_5 / (v_13 + 695.f)) - p_15 * (unsigned int)(~ p_17));
    v = (unsigned long)(~ 1044515011ULL);
  }
  while_0_break: ;
  return result;
}

