#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1033212724
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p)
{
  unsigned long v_7;
  long v_5;
  unsigned char v;
  double result;
  v_7 = (unsigned long)p;
  v_5 = 562714319L;
  v = (unsigned char)(4009LL * (long long)((unsigned long)(v_5 % -29372L) + 
                                           (unsigned long)p / (v_7 + 709UL)));
  result = (double)(- (- p) % (unsigned int)((int)v + 972));
  return result;
}

