#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 288584331
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, int p_7, unsigned long long p_9,
                  float p_11, unsigned long long p_15)
{
  long v_19;
  signed char v_17;
  float v_13;
  long long v_4;
  long v;
  unsigned long result;
  v_19 = -466974471L;
  v_17 = (signed char)-32;
  if ((unsigned long long)v_19 > p_15) {
    v_4 = (long long)(- p_11);
    v = (long)((unsigned long long)((-60LL * v_4) / (long long)(((int)p + p_7) + 405)) - p_9);
  }
  else {
    v = (long)(18446744073709551599ULL * ~ p_15 + ((unsigned long long)(- p_11) + 
                                                   (unsigned long long)v_17 * p_15));
    v_13 = (float)v;
    v = (long)((unsigned long long)v_13 * (p_15 * p_15));
  }
  result = (unsigned long)v;
  return result;
}

