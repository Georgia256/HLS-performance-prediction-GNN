#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796037076
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, short p_4)
{
  unsigned long v;
  int result;
  v = 1020071255UL;
  result = -381632718;
  result = (int)(~ (p / (unsigned long)(result + 484) - (unsigned long)p_4 / (
                                                        v + 887UL)));
  result = result;
  return result;
}

