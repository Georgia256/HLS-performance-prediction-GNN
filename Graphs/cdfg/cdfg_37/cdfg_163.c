#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 38149360
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[4][3][2], unsigned short p_4, unsigned int p_9,
                  signed char p_13, unsigned long long p_15)
{
  unsigned char v_19;
  short v_17;
  long v_11;
  unsigned int v_7;
  unsigned short v;
  unsigned long result;
  v_19 = (unsigned char)186;
  v_17 = (short)16385;
  v_11 = (long)p_9;
  v = p_4;
  if (2.79911364645e+38 > (double)(! (119 / ((int)v_17 + 673) | ((int)v_19 & (int)v)))) {
    result = 4294959711UL;
    result = ! result;
  }
  else {
    v_7 = (unsigned int)((unsigned long long)(- ((int)p_13 / 9338)) * (
                         (75ULL - p_15) ^ (p_15 + (unsigned long long)p_13)));
    v = (unsigned short)((18446744073709498257ULL - (unsigned long long)(
                          (unsigned int)v * v_7)) * (unsigned long long)(
                         (unsigned long)p_9 + (unsigned long)(v_11 - 12L)));
    result = (unsigned long)v;
  }
  result = (unsigned long)(((long long)p[3][1][1] + (37558LL | (long long)result)) / (long long)(
                           (int)(! (! p_4)) + 47));
  return result;
}

