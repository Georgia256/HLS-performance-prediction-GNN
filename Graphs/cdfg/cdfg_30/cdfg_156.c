#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 719523730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned short p_7, signed char p_9,
                   char p_17, unsigned short p_19)
{
  double v_23;
  unsigned long long v_21;
  unsigned long v_15;
  char v_13;
  unsigned char v_11;
  long long v_5;
  char v;
  unsigned short result;
  v_23 = (double)p_19;
  v_21 = 923790052ULL;
  v_15 = 3978602078UL;
  v_13 = (char)p;
  v_11 = (unsigned char)98;
  v_5 = (long long)p_19;
  while ((unsigned long long)p_19 % (v_21 + 76ULL) < - (! (p >> (p & 63ULL)))) {
    v_5 = (int)((char)v_23) - -96;
    v_11 = (unsigned char)0;
    v_15 = (unsigned long)p_17;
    v_21 = ! ((unsigned long long)((int)v_13 * (int)p_17) + p);
  }
  while_0_break: ;
  if ((double)((float)((int)v_13 + 83) / (122.412826538f * (float)v_15 + 26.f)) * 0.833370105104 == (double)(
      (int)p_7 & 118)) {
    v = (char)13;
    result = (unsigned short)v;
  }
  else {
    v_5 = (v_5 * (long long)1.30119685058e+38) / 421LL - (long long)(
          22247 * (int)p_7 ^ ((int)p_9 | (int)v_11));
    v = (char)114;
    result = (unsigned short)(((unsigned long long)v * - p) % (unsigned long long)(
                              -34LL % (v_5 + 550LL) + 22LL));
  }
  return result;
}

