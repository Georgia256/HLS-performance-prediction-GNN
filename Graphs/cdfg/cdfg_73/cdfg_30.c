#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 306108377
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p[3][3][3], unsigned int p_4, unsigned int p_9,
         unsigned long p_11)
{
  unsigned long long v_13;
  int v_7;
  int v;
  char result;
  v_13 = 18446744073439872128ULL;
  v = p[1][2][1];
  v_7 = (int)v_13;
  if ((unsigned long)(~ (p_4 % (unsigned int)(v + 609) - 28542174U)) >= (
      (unsigned long)((unsigned int)(v_7 | -16) - p_9 % 68U) | (~ p_11 - p_11))) 
    result = (char)103;
  else result = (char)(18446744073291269565ULL + (unsigned long long)p[0][2][2]);
  return result;
}

