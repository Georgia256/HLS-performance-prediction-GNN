#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 836283959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, char p_7)
{
  unsigned int v_4;
  long v;
  int result;
  v_4 = 4294905320U;
  v = (long)(- (((double)((float)v_4 - 530.141723633f) * 698.397125107) / (
                (double)(p * (unsigned long)(! p_7)) + 793.)));
  result = (int)(~ v);
  return result;
}

