#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576794540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, short p_13, long long p_17, unsigned long long p_19,
        char p_21)
{
  unsigned char v_15;
  unsigned short v_11;
  signed char v_8;
  float v_6;
  short v_4;
  unsigned long v;
  int result;
  v_11 = (unsigned short)13035;
  v_8 = (signed char)p_21;
  v_6 = (float)p;
  result = (int)p_19;
  v_4 = (short)-6106968824.28;
  if (! ((unsigned long long)v_11 % (! p_19 + 777ULL)) > 1ULL) {
    v_4 = (short)(! (p * (unsigned int)v_11 + p * (unsigned int)p_13));
    v = (unsigned long)((int)((float)((int)v_4 % ((int)((short)-7888548352.f) + 643)) * (
                              v_6 - -732.737976074f)) + ! (175 / ((int)v_8 + 787)));
    result = (int)((float)(~ v) - -0.f);
  }
  else {
    result = result;
    v_15 = (unsigned char)(- ((unsigned long long)v_4 / (p_19 + 904ULL) + (unsigned long long)(
                              (int)p_13 % ((int)p_21 + 583))));
    result = (int)((long long)result % (((825210776LL | (long long)v_15) - (
                                         (long long)p & p_17)) + 505LL));
  }
  return result;
}

