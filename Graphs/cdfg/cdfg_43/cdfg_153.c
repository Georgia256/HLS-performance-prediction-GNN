#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 663199420
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, float p_7, short p_9, double p_11, long p_13)
{
  int v_23;
  long long v_21;
  int v_19;
  float v_17;
  long long v_15;
  unsigned short v_4;
  unsigned short v;
  long long result;
  v_23 = -4603;
  v_19 = (int)p_7;
  if (-39L != (p_13 ^ (long)(~ (317 / (v_23 + 110))))) {
    v = (unsigned short)(((3495456069U * (unsigned int)p_9) % (unsigned int)(
                          (int)p_11 % (v_19 + 994) + 86)) % ((unsigned int)(- (- p_7)) + 625U));
    v_17 = (float)p_13;
    v_15 = (long long)((unsigned int)v_17 % (((unsigned int)-3.22312110975e+38 % 4182476284U | (unsigned int)p_9) + 969U));
  }
  else {
    v_21 = -48LL;
    v = (unsigned short)(! (- v_21) + 9993LL);
    v_15 = -729505518LL;
  }
  if (p > (double)((float)((unsigned long long)v % 868631248ULL) * p_7)) {
    v_4 = (unsigned short)((long long)p_11 / (((long long)(4294930660UL % (unsigned long)(
                                                           p_13 + 409L)) + (
                                               v_15 + v_15)) + 418LL));
    v = (unsigned short)(- (- p) - (double)((-89 * (int)((signed char)p_7)) * (
                                            (int)p_9 >> ((int)v_4 & 15))));
    result = (long long)(~ ((int)(~ v) * (29 & (int)v_4)));
  }
  else result = (long long)p_11;
  return result;
}

