#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 363785179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, char p_7, unsigned char p_9, float p_11,
                 unsigned long p_17)
{
  unsigned int v_21;
  unsigned char v_19;
  unsigned int v_15;
  float v_13;
  long long v_5;
  int v;
  unsigned int result;
  v_21 = 941296258U;
  v_19 = (unsigned char)63;
  if ((unsigned long long)(((p_11 - 20.f) + p_11) + (float)((unsigned int)(
                                                            (int)p / (
                                                            (int)((signed char)p_11) + 308)) % 3611104140U)) != ! (
      (unsigned long long)((long long)v_19 - -10903LL) - ((unsigned long long)v_21 - 18446744073709486485ULL))) {
    v_15 = (unsigned int)p_17;
    v_13 = (float)(! v_15);
    v_13 = (float)((int)((char)(- (- v_13))) % ((int)(~ p_7) + 50));
  }
  else v_13 = (float)(unsigned char)107;
  if ((long)v_13 < 0) {
    v = (int)p;
    result = (unsigned int)(~ v);
  }
  else {
    v_5 = (long long)((0 % ((int)((char)-3.26391228537e+37f) + 630)) * 37290);
    result = (unsigned int)(((v_5 - (long long)p_7) | (long long)((int)p_9 / (
                                                                  (int)((unsigned char)p_11) + 563))) ^ 9468LL);
  }
  return result;
}

