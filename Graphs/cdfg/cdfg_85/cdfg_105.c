#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 785988862
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, unsigned int p_7, long p_9[4][4], int p_11, int p_13)
{
  unsigned int v_17;
  long long v_15;
  char v_5;
  char v;
  short result;
  v_17 = 750979112U;
  v_15 = (long long)p_9[0][0];
  v_5 = (char)0;
  if ((double)(~ ((long long)(p_9[2][0] * (long)p_11) * (v_15 + (long long)p))) <= -1.28594019238e+38) {
    v = (char)p_11;
    result = (short)((unsigned long)p / (((unsigned long)((int)v * (int)v_5) - 
                                          (unsigned long)p_7 / (unsigned long)(
                                          p_9[0][2] + 745L)) + 641UL));
    result = result;
  }
  else result = (short)((unsigned int)(37500 % ((int)-3585055490.55 + 821)) * ! (
                        (unsigned int)p_13 + p_7));
  return result;
}

