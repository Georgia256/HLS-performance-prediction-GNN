#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538285209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p[4][1][5], short p_5, unsigned short p_7)
{
  unsigned long v_11;
  double v_9;
  long long v;
  unsigned short result;
  v_11 = 413252454UL;
  v_9 = (double)p_7;
  v = (long long)p_7;
  result = - (- (! (unsigned short)12626));
  while ((long long)p[0][0][2] * ! (v ^ (long long)p_5) <= 0LL) {
    result = (unsigned long long)v_11 + ((unsigned long long)v_9 >> 57ULL);
    v_11 = (unsigned long)v;
    v_9 = (double)(unsigned short)23039;
    v = (long long)(32 * (64815 - ~ p[2][0][1]));
  }
  while_0_break: ;
  return result;
}

