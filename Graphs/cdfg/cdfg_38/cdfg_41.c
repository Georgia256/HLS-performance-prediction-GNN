#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 275369178
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned long long p_4, float p_6, long long p_11,
        short p_15)
{
  signed char v_19;
  unsigned char v_17;
  int v_13;
  long v_9;
  short v;
  int result;
  v_19 = (signed char)43;
  v_17 = (unsigned char)50;
  v_13 = -27062;
  v = (short)p_4;
  result = (int)p;
  v_9 = (long)v_19;
  while (- (~ ((unsigned long long)p / (p_4 + 175ULL))) > (unsigned long long)(
         (long long)(- (- p_6)) + (long long)((float)v - p_6) * ((long long)v_9 - p_11))) {
    result = (int)(- ((long long)v_17 - p_11 % (long long)(v_13 + 77)));
    v_9 = (long)((unsigned long long)((int)p_15 - v_13) % (((unsigned long long)v_17 + p_4) + 300ULL) ^ 
                 (p_4 / (unsigned long long)(v_13 + 658)) % (unsigned long long)(
                 (int)v + 360));
    v = (short)(~ ((long)v_13 % (v_9 + 204L)) % (long)(- ((int)v - (int)v) + 716));
  }
  while_0_break: ;
  return result;
}

