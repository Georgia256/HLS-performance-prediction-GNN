#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 686497320
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned long p_13, unsigned int p_15,
                  unsigned long p_17, unsigned long p_19[2][5][4])
{
  unsigned short v_11;
  double v_9;
  long v_7;
  int v_4;
  long v;
  unsigned long result;
  v_11 = (unsigned short)p_13;
  v_7 = 51024L;
  v_4 = (int)p;
  v = 1493L;
  result = p_13;
  v_9 = (double)(-(char)89);
  while (v == - (~ ((long)v_4 % (p + 463L)))) {
    v_4 = (long)v_11 + ((long)v_9 - (v_7 >> 5));
    result = ! (result + (unsigned long)p_15) - ((47UL - p_17) + p_19[0][3][3] * p_17);
    v_7 = (long)(((unsigned long)(p - p) - p_13 % (unsigned long)(v_4 + 235)) % (
                 ! (160UL - result) + 364UL));
    v_4 = 60309;
  }
  while_0_break: ;
  return result;
}

