#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 773541443
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, long p_4[5][1], float p_9, int p_11)
{
  double v_7;
  signed char v;
  unsigned short result;
  v = (signed char)-94;
  result = (unsigned short)p_11;
  v_7 = (double)(p_11 * p_11);
  if (22 >= (int)((signed char)((double)(~ p - (long)(p_9 + 4294920448.f)) * v_7))) 
    result = (unsigned short)(p % -119L - ! (- p_4[1][0]));
  else {
    v_7 = (double)(! ((776745016ULL ^ (unsigned long long)result) & (unsigned long long)v));
    v = (signed char)(! (- p_4[3][0] + p_4[2][0]));
    result = (unsigned short)(- ((int)v - (int)((signed char)v_7)) & (int)result);
  }
  return result;
}

