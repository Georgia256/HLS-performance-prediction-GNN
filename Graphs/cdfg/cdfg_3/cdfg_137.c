#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741802891
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, double p_4, char p_7[5])
{
  unsigned char v_11;
  unsigned int v_9;
  long v;
  unsigned char result;
  v_11 = (unsigned char)p_4;
  v_9 = (unsigned int)p;
  v = (long)(- (804041373U ^ v_9) / (((unsigned int)(! v_11) | 533595408U) + 626U));
  if (v != (long)(- ((int)p_7[1] >> 4)) + v) {
    result = (unsigned char)p;
    result = (unsigned char)(- ((int)((unsigned char)2.73351956692e+38f) % (
                                (int)(~ result) + 574)));
  }
  else result = (unsigned char)p_4;
  return result;
}

