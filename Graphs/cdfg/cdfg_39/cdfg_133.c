#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1024954483
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p)
{
  unsigned long v_5;
  double v;
  char result;
  v_5 = 51673UL;
  v = 728.454078138;
  result = (char)(- ((v + 1.10701959212e+38) - (double)(~ v_5)));
  result = (char)((5625LL / ((long long)p % -52661LL + 412LL)) * (long long)(! (- result)));
  return result;
}

