#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548467495
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, long long p_4, unsigned char p_6[5][3],
          signed char p_8, long long p_11)
{
  signed char v_17;
  char v_15;
  signed char v_13;
  long v;
  float result;
  v_17 = (signed char)p;
  v_13 = (signed char)-83;
  v = (long)p_6[2][1];
  if ((long long)v_17 >= - ((p_4 - p_11) % (long long)((int)v_13 * (int)p_6[3][1] + 48))) 
    result = (float)((long long)p / ((p_4 - (long long)((int)p_6[3][2] - (int)p_8)) + 871LL));
  else {
    v_15 = (char)v;
    v = (long)(((p_4 + 5779165895LL) / ((p_11 - (long long)v_13) + 784LL)) / 523LL);
    result = (float)((long long)v * p_11 - (long long)(~ (3506701979UL << 24L)));
  }
  return result;
}

