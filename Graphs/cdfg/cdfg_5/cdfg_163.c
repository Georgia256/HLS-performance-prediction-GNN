#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 508058514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, short p_9, int p_15, unsigned long p_19, long p_23)
{
  short v_29;
  unsigned long v_27;
  signed char v_25;
  unsigned long long v_21;
  unsigned char v_17;
  unsigned long long v_13;
  int v_11;
  double v_6;
  int v_4;
  signed char v;
  short result;
  v_29 = p_9;
  v_27 = 4294936950UL;
  v_21 = (unsigned long long)p_15;
  v_17 = (unsigned char)p_15;
  v_13 = 546187930ULL;
  result = (short)14692;
  if ((0ULL % ((39852ULL - v_21) + 191ULL)) * (unsigned long long)result < v_13) {
    v_6 = (double)(v_21 % (unsigned long long)(p_15 / ((int)(- v_29) + 360) + 958));
    v_17 = (unsigned char)(- v_6);
    v_25 = (signed char)((long long)(((double)v_27 + v_6) - -432213744.) * (
                         142LL * ((long long)p_9 % -47370LL)));
  }
  else {
    v_6 = (double)((long long)((long)(! p_15) + (long)p_9 * p_23) | (long long)(
                                                                    p_15 % (
                                                                    (int)result + 29)) % (
                                                                    (
                                                                    (long long)result + p) + 178LL));
    v_21 = (unsigned long long)((double)p_23 / -8796036786.58);
    v_25 = (signed char)((unsigned long)(7.18424041867e+37f - (float)(
                                         (int)v_17 + (int)p_9)) / (((
                                                                    61UL - v_27) - (unsigned long)(
                                                                    194854914 % (
                                                                    (int)p_9 + 942))) + 415UL));
  }
  if ((unsigned long long)p_19 % (((v_21 + 51636ULL) & (unsigned long long)(
                                   p_19 + (unsigned long)p_23)) + 964ULL) >= (unsigned long long)v_25) {
    v_4 = (int)((unsigned long long)(((long long)v_6 * p) / ((long long)p_9 % 45587LL + 446LL)) + 
                (unsigned long long)(-68LL ^ p) / 75086430208ULL);
    v = (signed char)v_4;
    result = (short)((float)(((unsigned int)v % 3801255366U) / 152U) - -1.35414378731e+19f);
  }
  else {
    v_11 = (int)(! -38451L);
    v_11 = (int)(- ((unsigned long long)v_11 * v_13) - (unsigned long long)(
                 (222463008 - p_15) % ((int)v_17 + 794)));
    result = (short)(- v_11);
  }
  return result;
}

