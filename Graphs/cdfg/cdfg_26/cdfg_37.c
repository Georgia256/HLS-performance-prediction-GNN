#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 972189607
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, long long p_4, int p_7, char p_9,
                   unsigned int p_13)
{
  short v_23;
  long long v_21;
  float v_19;
  float v_17;
  long long v_15;
  unsigned short v_11;
  short v;
  unsigned short result;
  v_23 = (short)p_9;
  v_21 = -25848LL;
  v_19 = (float)p;
  v_15 = (long long)p_7;
  result = (unsigned short)p_13;
  v_17 = (float)(((v_21 - (long long)result) + (long long)((int)v_23 << 10LL)) / (long long)(
                 (int)p_9 + 510));
  if ((long long)((unsigned int)(- v_17 * (v_19 + 1.84467440737e+19f)) * p_13) > v_21) 
    result = (unsigned short)(~ p);
  else {
    v_11 = (unsigned short)(~ (588836249LL | v_15) / -5774LL);
    v = (short)((unsigned int)p_7 % ((unsigned int)((int)p_9 + (int)v_11) / (
                                     p_13 + 505U) + 884U));
    result = (unsigned short)(p_4 % (long long)((int)v + 130));
  }
  return result;
}

