#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 454175863
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, char p_4, unsigned long p_6, long long p_9,
              unsigned int p_11)
{
  double v_17;
  unsigned char v_15;
  long v_13;
  unsigned int v;
  long long result;
  v_17 = (double)p_6;
  v_15 = (unsigned char)p_9;
  v_13 = 9010L;
  v = (unsigned int)(~ (v_13 & (long)((double)v_15 + v_17)));
  if (((long long)(p_6 * 4294943150UL) - (long long)v * p_9) / 12LL < (long long)p_11) 
    result = (long long)(p * (float)((long)(! p_4) / 11178L));
  else result = (long long)(- (! 765392636));
  return result;
}

