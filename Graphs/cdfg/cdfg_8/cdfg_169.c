#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 873293640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, double p_5, signed char p_9[3], float p_11, double p_13)
{
  char v_19;
  unsigned short v_17;
  unsigned char v_15;
  char v_7;
  float v;
  int result;
  v_19 = (char)79;
  v_17 = (unsigned short)p;
  v_15 = (unsigned char)p_9[2];
  v_15 = (unsigned char)(- ((float)((int)v_15 * (int)v_19) / -4453472.5f));
  if (- p_13 != (double)(((int)v_15 - (int)v_17) * (int)(~ v_17) - 253)) {
    v_7 = (char)108;
    v = (float)(((double)p * p_5) / ((double)v_7 + 898.));
    result = (int)v;
  }
  else result = (int)(p - (float)((int)p_9[0] - ((int)((short)p_11) + 8192)));
  return result;
}

