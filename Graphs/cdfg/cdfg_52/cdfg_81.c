#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 285129659
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, float p_4[5][5][5], unsigned char p_6, int p_8,
                  long p_10)
{
  unsigned long v_13;
  char v;
  unsigned long result;
  v_13 = 438061072UL;
  v = (char)p_6;
  result = ! ((unsigned long)(149 * p_8) - v_13 / 4462UL);
  if (- ((long long)p_6 / -42113LL) - (long long)(- (- p_8)) != (long long)(- (
      (unsigned long)(! p_10) / ((result + (unsigned long)v) + 1004UL)))) 
    result = 43853UL;
  else result = (unsigned long)p;
  return result;
}

