#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 997927559
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, short p_11, float p_13, double p_15[1][2],
           unsigned int p_17)
{
  short v_9;
  long v_7;
  unsigned int v_5;
  int v;
  double result;
  v_9 = (short)p;
  v_5 = ! (! (34574U / ((134U - p_17) + 498U)));
  v_7 = (long)(- ((int)(- v_9) & ((int)p_11 - (int)((short)p_13))) * (int)(- p_15[0][0]));
  v = (int)(! (- ((unsigned long)(~ p) % ((unsigned long)v_5 * (unsigned long)v_7 + 992UL))));
  result = (double)v;
  return result;
}

