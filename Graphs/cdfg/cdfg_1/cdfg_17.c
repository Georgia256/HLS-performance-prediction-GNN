#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 722341971
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(void)
{
  double v_4;
  unsigned char v;
  unsigned short result;
  v_4 = -1639054511.42;
  v = (unsigned char)v_4;
  result = (unsigned short)(! (- (~ v)));
  return result;
}

