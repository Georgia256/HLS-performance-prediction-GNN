#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 243505592
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned int p_17, double p_19)
{
  char v_15;
  unsigned int v_13;
  unsigned long v_11;
  float v_9;
  unsigned int v_7;
  signed char v_4;
  short v;
  unsigned long result;
  v_15 = (char)-32;
  v_13 = 340435802U;
  v_11 = (unsigned long)p_19;
  v_7 = 981655205U;
  v_9 = (float)(- ((double)p_17 - p_19) - - (- p));
  if ((long long)p != (((long long)(p * p) << 7LL) | (long long)(- v_9))) {
    v = (short)v_9;
    v_4 = (signed char)(p / ((double)(! v) + 977.) - (double)((unsigned int)(
                                                              3.82527664894e+37f / (
                                                              (float)v_7 + 634.f)) | v_7));
    result = (unsigned long)((int)v ^ ! ((int)v_4 + -29095));
  }
  else {
    v_13 = (unsigned int)p - v_13;
    result = (unsigned long)((- v_13 * (unsigned int)p) % (unsigned int)(
                             (int)v_15 + 609));
    result = - (~ (result & v_11));
  }
  return result;
}

