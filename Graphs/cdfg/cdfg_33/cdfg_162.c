#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 851633443
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, int p_13, float p_15, long p_17[4][5][5],
                 unsigned long p_19)
{
  int v_11;
  long long v_9;
  unsigned short v_7;
  int v_5;
  unsigned short v;
  unsigned int result;
  v_11 = -4963011;
  v_9 = (long long)p_15;
  v_7 = (unsigned short)((unsigned long)p_13 / (p_19 + 971UL));
  if ((unsigned long)p_13 < ((407778490UL - (unsigned long)v_11) + 4294960043UL) + (unsigned long)(
                            p_17[1][2][3] - (p_17[1][0][1] | -62081L))) {
    v = (unsigned short)(- ((long long)((int)v_7 ^ 1992) | v_9));
    v_5 = (int)p;
    result = (unsigned int)((int)v / ((int)p + 725) - (int)(! v) % ((int)1.66942629764e+38 % (
                                                                    v_5 + 582) + 42));
  }
  else {
    v_11 = (int)((float)(p_13 | 54180) / (- (p_15 - (float)p_17[1][1][1]) + 123.f));
    result = (unsigned int)v_11;
  }
  return result;
}

