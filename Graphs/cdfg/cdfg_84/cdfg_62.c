#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 441695521
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, short p_15[3][2][5], float p_17,
          unsigned long p_19[4][3][2])
{
  unsigned char v_21;
  unsigned long long v_13;
  int v_11;
  char v_9;
  long v_7;
  double v_4;
  int v;
  short result;
  v_13 = (unsigned long long)p;
  v_11 = (int)p_17;
  v_9 = (char)p;
  v_7 = (long)p_19[2][1][1];
  v_4 = (double)p_15[1][1][4];
  v = -615059379;
  while ((! (24818 * (int)p) ^ (int)p) <= ! ((int)((short)((float)v - 3677564928.f)) ^ -5208)) {
    v_21 = (long)v_11 + (long)v_9 * (v_7 - -45173L);
    v_9 = (char)((unsigned long)((float)(v_13 + (unsigned long long)p_15[2][1][3]) + 
                                 p_17 / ((float)p_15[1][1][0] + 864.f)) / (
                 (p_19[3][0][0] * (unsigned long)p_15[0][1][3] - (unsigned long)(
                  (int)((unsigned char)v_4) & (int)v_21)) + 930UL));
    v_11 = 22;
    v = (int)(- -194518520LL);
  }
  while_0_break: ;
  result = (short)((((unsigned int)v - 4294943822U) - (unsigned int)(! v)) / (
                   (unsigned int)v_4 + 581U));
  return result;
}

