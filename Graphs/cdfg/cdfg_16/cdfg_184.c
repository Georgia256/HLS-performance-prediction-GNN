#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 714706882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, unsigned long p_5, long long p_11,
                 unsigned long p_15, double p_17[1][3][2])
{
  unsigned short v_25;
  short v_23;
  unsigned char v_21;
  signed char v_19;
  long v_13;
  unsigned long long v_9;
  short v_7;
  unsigned long v;
  unsigned int result;
  v_25 = (unsigned short)15118;
  v_23 = (short)p_15;
  v_21 = (unsigned char)149;
  v_19 = (signed char)45;
  v_9 = (unsigned long long)p_17[0][1][1];
  v_7 = (short)p_17[0][2][0];
  v = 3576285856UL;
  if ((double)((unsigned long)((unsigned int)v_25 + 533829207U) / ((unsigned long)v_7 / 904341142UL + 862UL) - (
               (4294962590UL >> (p_15 & 31UL)) + (unsigned long)((int)v_25 - 44718))) != - p_17[0][1][0]) {
    v_9 = (unsigned long long)(- ((-17385LL * (long long)p_5) * 91LL));
    v_13 = -53469L;
    result = (unsigned int)(0ULL / ((v_9 - (unsigned long long)p_17[0][0][1]) + 437ULL) + ~ (
                            v_9 / 3622ULL));
  }
  else {
    v_13 = (long)((int)v_21 / ((int)((unsigned char)((double)v_23 / (
                                                     p_17[0][0][1] + 312.))) + 166));
    result = (unsigned int)(((long long)p | ((long long)v_13 - p_11)) + (long long)p);
    v = (unsigned long)v_19;
  }
  while ((unsigned long long)(((unsigned long)p % (v + 540UL)) * (p_5 - (unsigned long)p)) - (
         (unsigned long long)v_7 - ! v_9) > (unsigned long long)p_11) {
    v_7 = (short)(! (unsigned short)23613);
    result = (unsigned int)(- (p_11 - (long long)p_15) / (long long)(
                            v_13 + 517L));
    v = (unsigned long)(! ((long long)((unsigned long)p * (unsigned long)v_13) | ! p_11));
  }
  while_0_break: ;
  return result;
}

