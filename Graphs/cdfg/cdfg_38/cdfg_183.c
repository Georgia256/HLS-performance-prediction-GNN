#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 619981399
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, short p_7, unsigned long p_9, unsigned long long p_17,
         double p_21)
{
  long v_23;
  short v_19;
  char v_15;
  double v_13;
  long long v_11;
  double v_5;
  unsigned char v;
  long result;
  v_23 = -9399L;
  v_15 = (char)p_9;
  v_13 = (double)p_7;
  v_5 = 916.720740882;
  v = (unsigned char)p;
  if (18446744073709506961ULL == (unsigned long long)(- v_23) - p_17 / (
                                                                ((unsigned long long)p_9 ^ p_17) + 240ULL)) {
    v_13 = (double)v_23;
    result = (long)(- p_21);
    v_11 = (long long)(- (char)-110);
  }
  else {
    v_11 = (long long)((float)p_9 * - ((float)v_15 / (p + 387.f)));
    v_15 = (char)(- (20376 + (int)((unsigned short)((double)v_15 / (v_5 + 178.)))));
    result = (long)(p / ((float)(p_17 * (p_17 << (p_9 & 63UL))) + 609.f));
  }
  while ((long)2.05589360659e+38 + ! result <= result * (long)(p / -2.12377192089e+38f)) {
    v_19 = (long)v % 70279351L;
    v = (unsigned char)94;
    v_5 = (double)(((v_11 >> ((long long)v_13 & 63LL)) << ((int)(~ v_15) & 63)) << (
                   (p_17 ^ (unsigned long long)((int)v_19 & 50)) & 63ULL));
    result = (long)((double)((int)(895872177. * v_5) % (((int)p_7 - (int)((short)v_5)) + 205)) - - (
                    225.224905228 * (double)p_9));
  }
  while_0_break: ;
  return result;
}

