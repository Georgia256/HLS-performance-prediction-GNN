#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 157660660
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned long long p_5[3][4][5], signed char p_7[2][1],
          long p_11[3][4], char p_13)
{
  unsigned char v_15;
  signed char v_9;
  char v;
  float result;
  v_15 = (unsigned char)100;
  if (- (253ULL + (p_5[0][1][1] + 18446744073709550294ULL)) < (unsigned long long)(
      (long)((int)v_15 * (int)p_13 - (int)p * (int)p) * - (- p_11[2][1]))) 
    v = (char)p_7[0][0];
  else {
    v_9 = (signed char)68;
    v = (char)v_9;
  }
  result = (float)((unsigned long long)p * - ((unsigned long long)v / (
                                              p_5[2][0][4] + 587ULL)));
  return result;
}

