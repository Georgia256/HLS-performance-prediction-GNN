#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 558277628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p[5][5][3], char p_7[3][1][1])
{
  long v_5;
  signed char v;
  int result;
  v = (signed char)p_7[1][0][0];
  v_5 = (long)p_7[1][0][0];
  if ((unsigned long)p[0][4][1] * ((unsigned long)((int)((unsigned char)-539.889892578f) / 253) % (
                                   (4294932852UL & (unsigned long)v) + 754UL)) >= (unsigned long)v_5) {
    result = (int)p[0][1][0];
    result = ~ result;
  }
  else result = 14530;
  return result;
}

