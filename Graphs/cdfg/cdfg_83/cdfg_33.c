#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 968720722
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, unsigned int p_4, unsigned char p_6,
                       signed char p_8, unsigned int p_13[3])
{
  short v_21;
  signed char v_19;
  unsigned char v_17;
  short v_15;
  unsigned long long v_11;
  int v;
  unsigned long long result;
  v_21 = (short)6172;
  v_17 = p_6;
  v_15 = (short)p;
  v_11 = 57757ULL;
  v = p;
  v_19 = (signed char)(~ (v / 20917) % (- (p & (int)v_21) + 111));
  if ((long long)(((unsigned long)p_13[2] - (3792511463UL - (unsigned long)p_6)) / 286UL) >= 
      (long long)(p * ((int)v_19 - (int)v_15)) * -49671LL) result = (unsigned long long)(
                                                           (unsigned int)(
                                                           ! p | p) + (
                                                           ~ p_4 | (unsigned int)(
                                                           (int)p_6 * (int)p_8)));
  else {
    v_11 = ((v_11 / (unsigned long long)((int)v_15 + 904)) / (unsigned long long)(
            143 % ((int)v_17 + 272) + 704)) * ! ((unsigned long long)p_13[2] / 507482135ULL);
    v = (int)(58805L / (long)((int)(! (! p_6)) + 600));
    result = - (((unsigned long long)v + v_11) >> (25512UL / (unsigned long)(
                                                   p_13[1] + 771U) & 63UL));
  }
  return result;
}

