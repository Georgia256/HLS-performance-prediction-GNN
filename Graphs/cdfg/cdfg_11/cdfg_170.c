#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 677144842
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p[2], unsigned int p_5, char p_9, float p_11[5], float p_15)
{
  short v_13;
  short v_7;
  float v;
  long result;
  v_13 = (short)p_9;
  v = 2.79084663143e+37f;
  result = -38664L;
  v_7 = (short)(- ((p_15 + (float)p_5) + - v));
  if (3301236821UL * (unsigned long)(~ (-112 / ((int)v_13 + 153))) < (unsigned long)(
      (unsigned int)(~ (59 - (int)((signed char)p[0]))) ^ (((unsigned int)v ^ p_5) - 48372U))) {
    result = (long)((float)(! (! p_9)) - (float)(! result) * (p_11[2] - (float)v_13));
    v = (float)(~ (result & (long)((int)((short)v) * (int)v_7)));
    result = (long)((unsigned int)(((int)((unsigned char)p[0]) - 216) ^ (int)(- v)) / (
                    p_5 + 899U));
  }
  else result = (long)(- ((p_11[4] - -51.f) / (- p_15 + 593.f)));
  return result;
}

