#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 988796103
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, unsigned int p_4,
                  unsigned long long p_6[3], float p_15, long p_17[4][4][2])
{
  short v_13;
  unsigned int v_11;
  short v_9;
  unsigned short v;
  unsigned char result;
  v_13 = (short)p_4;
  v_11 = (unsigned int)p_15;
  v_9 = (short)p_4;
  v = (unsigned short)48180;
  result = (unsigned char)186;
  if ((unsigned long long)(! v_9) < (- p << ((unsigned long long)p_4 / 690728800ULL & 63ULL)) - (unsigned long long)p_17[3][3][0]) 
    result = (unsigned char)(p / (unsigned long long)(! p_4 + 268U));
  else {
    v_9 = (short)((((unsigned long long)v_11 - p_6[2]) + (unsigned long long)v_13) / (unsigned long long)(
                  (60 | (int)(! result)) + 849));
    v = (unsigned short)(3483841374U % ((v_11 - (unsigned int)v) + 183U) + 226U);
    result = (unsigned char)((~ p_6[0] + (unsigned long long)((unsigned int)v | p_4)) - (unsigned long long)(! (
                             (unsigned long)v_9 % 88574826UL)));
  }
  result = result;
  return result;
}

