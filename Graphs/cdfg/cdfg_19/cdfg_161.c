#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 683991541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, long long p_5, char p_7, float p_11[4], unsigned int p_15)
{
  long long v_19;
  long long v_17;
  double v_13;
  unsigned char v_9;
  int v;
  short result;
  v_19 = -251681241LL;
  v_17 = 526731841LL;
  v_13 = 1.20000264015e+38;
  if (- p_15 % (unsigned int)(((int)p ^ 63) + 798) > (unsigned int)(p_11[2] * (float)(
                                                                    (
                                                                    89LL ^ v_17) + ! v_19))) 
    result = (short)(- ((int)p & -36));
  else {
    v_9 = (unsigned char)v_13;
    v = (int)(~ ((unsigned int)p_7 + 49977U) | (unsigned int)(2.10720418435e+38 - (double)(
                                                              (float)v_9 - p_11[1])));
    result = (short)((long long)(- v * (62 + (int)p)) + ! (255LL - p_5));
  }
  result = (short)((unsigned long)(~ (-38 + (int)p)) * ((unsigned long)result / 77538603UL));
  return result;
}

