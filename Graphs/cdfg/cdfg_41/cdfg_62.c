#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 189231868
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long long p_7[1][4][5], unsigned short p_9,
         short p_13)
{
  unsigned int v_11;
  signed char v_4;
  unsigned short v;
  char result;
  v_11 = 4191481293U;
  v_4 = (signed char)p_9;
  v = (unsigned short)((-21LL ^ p_7[0][2][3]) * (long long)((314648411U + (unsigned int)p_9) % (
                                                            (v_11 + (unsigned int)p_13) + 505U)));
  result = (char)(~ ((unsigned long)((int)v + (int)v_4) / (28286UL / (
                                                           p + 202UL) + 867UL)));
  return result;
}

