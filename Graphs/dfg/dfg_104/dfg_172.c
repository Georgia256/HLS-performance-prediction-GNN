#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 979465304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, signed char p_5, long p_7[1][4][4], short p_11)
{
  float v_9;
  unsigned long long v;
  char result;
  v_9 = (float)(- p_11);
  v = (unsigned long long)((long)(- p) / (((long)((int)p_5 + 37322) / (
                                           ~ p_7[0][0][0] + 767L) | (long)(- (- v_9))) + 566L));
  result = (char)(v | (unsigned long long)p);
  return result;
}

