#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 803531286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned char p_5[2], float p_9,
                       unsigned short p_13, short p_15)
{
  signed char v_17;
  char v_11;
  unsigned short v_7;
  unsigned long v;
  unsigned long long result;
  v_11 = (char)p_9;
  v_17 = (signed char)(- p_9);
  if (! ((int)v_11 % ((int)(- p_13) + 520)) < (int)-2.37686683374e+38 * (
                                              (int)p_15 / -12) - (int)(- (~ v_17))) {
    v = 1 % (unsigned long)((int)p_5[1] + 294);
    result = (unsigned long long)((unsigned long)p | v);
  }
  else {
    v_7 = (unsigned short)p_9;
    result = (unsigned long long)(- ((double)(276815632UL - (unsigned long)v_7) - 
                                     (double)p * 889.632333026));
  }
  return result;
}

