#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 776584350
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(void)
{
  long v_8;
  unsigned long v_6;
  double v_4;
  int v;
  int result;
  v_8 = 9585L;
  v_6 = 57337UL;
  v_4 = 4.07037492031e+37;
  v = (int)(! ((unsigned long)v_4 * v_6) + ! ((unsigned long)v_8 / (v_6 + 252UL)));
  result = v;
  return result;
}

