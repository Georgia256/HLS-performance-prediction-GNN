#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 256524561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[3][1][1], int p_7[5][2][1], unsigned int p_9[5],
        unsigned short p_11, double p_13)
{
  short v_17;
  unsigned short v_15;
  unsigned char v_5;
  char v;
  int result;
  v_17 = (short)p_11;
  v_15 = p_11;
  v_5 = (unsigned char)v_17;
  if ((int)(! (! v_15)) <= (int)p_11 - -99) result = (int)((double)((
                                                                    360667562UL - p[0][0][0]) % 3564UL) / 6201952087.72);
  else {
    v_5 = (unsigned char)(((unsigned int)p_7[2][0][0] / (p_9[3] + 496U) - (unsigned int)(~ v_5)) % (
                          (unsigned int)((double)((int)p_11 % -31461) / (
                                         p_13 + 730.)) + 768U));
    v = (char)(! p[2][0][0] - (unsigned long)(~ ((int)v_5 * (int)v_5)));
    result = 0;
  }
  return result;
}

