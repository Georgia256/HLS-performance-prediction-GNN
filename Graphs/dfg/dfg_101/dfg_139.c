#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1041089505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned long p_5, unsigned long p_7,
                  int p_13[2][3], unsigned char p_15)
{
  int v_11;
  char v_9;
  char v;
  unsigned char result;
  v_11 = -993381750;
  v_9 = (char)((unsigned long)v_11 % ((548743207UL + (unsigned long)p_13[1][1]) + 113UL) - (unsigned long)(- (~ (
               (long)p_15 / -976462888L))));
  result = (unsigned char)254;
  v = (char)((- p_7 + (unsigned long)result) ^ (unsigned long)(392252302U % (unsigned int)(
                                                               (int)v_9 + 724)));
  result = (unsigned char)((long long)(! ((unsigned long)((int)v % ((int)p + 475)) * (
                                          p_5 % 4294967207UL))) - 33476LL);
  return result;
}

