#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 701785718
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, float p_4, double p_6, unsigned long p_8,
                   signed char p_13)
{
  signed char v_15;
  float v_11;
  int v;
  unsigned short result;
  v_15 = (signed char)(- (- ((float)p * p_4)));
  if ((int)v_15 == (int)p) {
    v = 2479;
    result = (unsigned short)((p_8 * 4294936314UL + - p_8) + (unsigned long)(- v));
    result = (unsigned short)((double)(~ ((int)p / ((int)result + 611))) / (
                              ((double)(-11297.f * p_4) + p_6 / (double)(
                                                          p_4 + 893.f)) + 406.));
  }
  else {
    v_11 = (float)(! p_13);
    result = (unsigned short)(- ((double)v_11 - -7.36422411776e+17));
  }
  return result;
}

