#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1035675535
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, short p_11)
{
  int v_9;
  long v_7;
  unsigned short v_5;
  long v;
  float result;
  v_9 = -21242;
  v_7 = 787L;
  v = -13270L;
  if ((double)(((unsigned long)v_7 - (unsigned long)(p * (unsigned int)v_9)) / (unsigned long)(
               v + 904L)) > - (- (1.01670814309e+38 + (double)p_11))) 
    result = (float)-2.05355261535e+38;
  else {
    v_5 = (unsigned short)38;
    v = -72L;
    result = (float)(3UL * ((unsigned long)v / (unsigned long)(p + 516U)) + (unsigned long)(- (~ v_5)));
  }
  return result;
}

