#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 690718612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p)
{
  double v_6;
  float v_4;
  long v;
  signed char result;
  v_4 = (float)p;
  v = (long)p;
  v_6 = (double)(p % ((p / (p + 567UL)) / (! p + 724UL) + 419UL));
  result = (signed char)((v + 522717011L) * (long)((double)v_4 + v_6) - 24L);
  return result;
}

