#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 217726817
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, char p_9, unsigned short p_13, long long p_15,
                 double p_19)
{
  short v_17;
  unsigned short v_11;
  signed char v_7;
  signed char v_5;
  float v;
  unsigned int result;
  v_17 = (short)-1182;
  v_5 = (signed char)p_15;
  result = (unsigned int)p_13;
  if (-79. != (-1.45412920005e+38 + - p_19) - (double)v_5) v = (float)p;
  else {
    v_11 = (unsigned short)((long long)(0U - ((unsigned int)p_13 - result)) + (
                            (p_15 - (long long)result) + (long long)(- v_17)));
    v_7 = (signed char)(~ (! v_11));
    v = (float)(- ((long)v_5 + 56771L) / (long)(((int)v_7 | (int)(~ p_9)) + 221));
  }
  result = (unsigned int)v;
  return result;
}

