#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 492127662
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p[3][1], float p_11)
{
  unsigned long v_9;
  int v_7;
  short v_5;
  unsigned short v;
  unsigned long result;
  v_9 = (unsigned long)p_11;
  v_7 = (int)p[1][0];
  v_5 = p[2][0];
  result = (unsigned long)p[1][0];
  v = (unsigned short)((unsigned long)((int)v_5 * v_7) + v_9 * ((unsigned long)p_11 | result));
  result = (unsigned long)(! ((unsigned int)v + ((unsigned int)p[1][0] - 4294911965U)));
  return result;
}

