#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 885028500
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, double p_15, long p_17[4][5])
{
  unsigned int v_12;
  unsigned short v_10;
  int v_8;
  long long v_6;
  int v_4;
  unsigned char v;
  unsigned long long result;
  v_12 = 13289U;
  v_10 = (unsigned short)25333;
  v_4 = (int)p_17[1][0];
  v = (unsigned char)163;
  if ((unsigned long)(- ((double)(v_12 - (unsigned int)p) + - p_15)) != 
      (57471UL & ((unsigned long)p_17[2][4] + (unsigned long)v_12)) / (unsigned long)(
      (int)(~ v) + 198)) {
    v = (unsigned char)(- (32616 / (-62 % (v_4 + 1016) + 969)));
    result = (unsigned long long)(! (5150LL / (long long)((long)v / 6981L + 29L)));
    v = (unsigned char)(- (- (20821ULL | result)));
  }
  else {
    v_8 = (int)6736.42285156f;
    v_6 = (long long)(v_8 * (int)(5273323520.f + (float)(~ v_10)));
    v = (unsigned char)v_6;
  }
  result = (unsigned long long)(~ 0);
  return result;
}

