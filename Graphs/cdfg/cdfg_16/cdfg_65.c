#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 519977796
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p[5][5], short p_5[1][4], double p_9,
         unsigned long p_11[5][2][3])
{
  unsigned short v_7;
  char v;
  long result;
  v_7 = (unsigned short)15303;
  if ((unsigned long)(! p_5[0][0]) <= ~ ((unsigned long)v_7 / (((unsigned long)p_9 - p_11[4][0][0]) + 968UL))) 
    v = (char)(- p[3][0]);
  else v = (char)(~ (short)4407);
  result = (long)(~ (! ((int)v + 100)));
  return result;
}

