#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 540821076
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, int p_7[4][5], unsigned long p_9,
         unsigned short p_11[4][1], long long p_13)
{
  double v_19;
  unsigned short v_17;
  int v_15;
  unsigned char v_4;
  unsigned long long v;
  long result;
  v_19 = -2.21402807156e+38;
  v_17 = (unsigned short)28851;
  result = (long)p_7[1][3];
  v_15 = (int)(- (((double)p_11[1][0] * v_19) * (double)(result + -2195L)));
  if (((long long)(0 - (int)p_11[1][0] / (p_7[0][0] + 506)) & (8593LL + p_13) / (long long)(
                                                              - v_15 + 558)) >= (long long)(
      (12 * (int)(! v_17)) % -999531839)) {
    v_4 = (unsigned char)p_9;
    v = (unsigned long long)(~ (- ((long)p_7[1][0] + -29654L)));
    result = (long)(! ((v + (unsigned long long)v_4) >> (p & 63UL)));
  }
  else result = 59L;
  return result;
}

