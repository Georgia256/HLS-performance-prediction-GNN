#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 552286388
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, unsigned short p_19)
{
  char v_17;
  int v_15;
  unsigned long v_13;
  signed char v_11;
  float v_9;
  float v_7;
  double v_4;
  long long v;
  char result;
  v_17 = (char)-32;
  v_15 = 846645733;
  v_13 = (unsigned long)p_19;
  v_11 = (signed char)p;
  v_9 = (float)p_19;
  v = p;
  v_4 = (double)(p / 612LL - (long long)((unsigned long)(-23531 - (int)p_19) / (
                                         ((unsigned long)v_17 & v_13) + 399UL)));
  if ((unsigned long long)v_15 >= (unsigned long long)v_17 - - (901561278ULL - (unsigned long long)p_19)) {
    v_7 = (float)(2UL - (unsigned long)((int)v_11 << ((int)((signed char)v_4) & 7)) % (
                        (v_13 - v_13) + 994UL));
    v_4 = (double)(((long long)((double)v_7 - v_4) + ! v) / ((long long)(- v_9) + 732LL));
    result = (char)(v & (long long)(1067284789U - (unsigned int)(v_4 * (double)p)));
  }
  else result = (char)-7;
  return result;
}

