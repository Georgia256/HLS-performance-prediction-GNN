#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 556530705
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, short p_4[4][4][4], int p_6, unsigned long long p_8,
        unsigned char p_10)
{
  unsigned int v_21;
  char v_19;
  double v_17;
  double v_15;
  unsigned char v_13;
  unsigned char v;
  int result;
  v_19 = (char)p_10;
  v_15 = (double)p_10;
  v_13 = p_10;
  v = (unsigned char)233;
  result = (int)p_8;
  v_17 = (double)(- p_4[2][0][0]);
  while (! p_8 < (unsigned long long)((float)(((int)p_10 >> 2) % (- p_6 + 888)) + (
                                      2.05096922574e+38f / ((float)v + 822.f) - (float)(
                                      948957695L / (long)((int)v_13 + 22))))) {
    v_21 = (int)v_19 - (int)((char)(v_15 + -1.67635153943e+38));
    result = (int)v_17;
    v_17 = (double)(char)31;
    v_13 = (unsigned char)((unsigned int)((int)(- p_10)) % (! v_21 + 173U));
  }
  while_0_break: ;
  return result;
}

