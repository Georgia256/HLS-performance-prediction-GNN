#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 687049473
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned short p_5, unsigned int p_11[5][5],
                   signed char p_13[5])
{
  unsigned char v_15;
  unsigned long long v_9;
  int v_7;
  unsigned int v;
  unsigned short result;
  v_9 = 18446744073709544974ULL;
  v_7 = -61051;
  v = (unsigned int)p_13[4];
  result = (unsigned short)59531;
  while (((-48482LL << 30) / (long long)(v % (unsigned int)((int)p_5 + 892) + 121U)) % -251LL != (long long)v_7) {
    v_15 = v_9 / 99ULL;
    v = (unsigned int)(~ (! ((int)v_15 * 14)));
    result = (unsigned short)p_13[2];
    v_7 = (int)(! (! ((unsigned int)p_5 + p_11[4][3])));
  }
  while_0_break: ;
  result = (unsigned short)((int)result - ((int)6554228736.f >> (((int)p | 19) & 31)));
  return result;
}

