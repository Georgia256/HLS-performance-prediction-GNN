#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984138062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, long long p_15, unsigned long long p_19)
{
  float v_25;
  unsigned int v_23;
  unsigned int v_21;
  short v_17;
  signed char v_13;
  unsigned long long v_11;
  signed char v_9;
  short v_7;
  unsigned int v_4;
  unsigned long v;
  long result;
  v_25 = -8.79613725826e+37f;
  v_23 = 3302957351U;
  v_21 = (unsigned int)p_15;
  v_17 = (short)12275;
  v_11 = (unsigned long long)p_15;
  v_9 = (signed char)p_19;
  v_7 = (short)p_19;
  v = 3764918995UL;
  result = 836561727L;
  if ((unsigned long long)((long)(52787 % ((int)((unsigned short)-1104722399.58) + 232)) * result) / (
      (v_11 * (unsigned long long)v - 540992206ULL) + 705ULL) >= (unsigned long long)p) {
    v_4 = (unsigned int)(~ ((unsigned long)(p / (v_21 + 266U)) % (unsigned long)(
                            (result - -646971557L) + 402L)));
    v_13 = (signed char)(((double)v * -1.43581608275e+38) / (- ((double)p_19 * -744.420437677) + 544.));
    v_4 %= p + 576U;
  }
  else {
    v_4 = (unsigned int)((long long)(3273490097U * v_23) / ((p_15 + (long long)(
                                                             (int)v_9 ^ (int)((signed char)v_25))) + 829LL));
    v_17 = (short)(p - (unsigned int)v_7);
    v_13 = (signed char)((double)((4294967279U & p) + - p) + 666839775.693);
  }
  if ((unsigned long long)(-6991LL << (~ (v_11 % (unsigned long long)(
                                          (int)v_13 + 674)) & 63ULL)) != ! (
      (unsigned long long)(p_15 / (long long)(p + 525U)) * ((unsigned long long)v_17 * p_19))) {
    v_7 = (short)(-18446744073532200543ULL);
    v = (unsigned long)((long long)(39062UL ^ v) % -31050840546LL ^ (long long)(
                        (v_4 & p) * (unsigned int)((int)((short)582957267.664) + (int)v_7)));
    result = (long)v;
  }
  else {
    v_9 = (signed char)(- -58184LL);
    result = (long)(-382 ^ ((int)(! v_9) - 7));
  }
  return result;
}

