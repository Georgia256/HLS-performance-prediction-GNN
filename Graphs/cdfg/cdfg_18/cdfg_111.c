#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531212566
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, int p_11, int p_13, unsigned long p_19,
                 unsigned long long p_23)
{
  unsigned short v_21;
  signed char v_17;
  unsigned char v_15;
  unsigned long long v_9;
  long v_7;
  long v_5;
  signed char v;
  unsigned int result;
  v_21 = (unsigned short)p_19;
  v_17 = (signed char)p_13;
  v_15 = (unsigned char)218;
  v_9 = 18446744073160317414ULL;
  v_7 = 22198L;
  result = (unsigned int)p_11;
  if ((double)((unsigned int)((29 % ((int)v_21 + 234)) / (((int)((unsigned char)p) >> (
                                                           (int)v_15 & 7)) + 274)) + - result) != 
      p + 92.) {
    v = (signed char)((unsigned long long)(615414883. * p - (double)v_7) + (
                      (unsigned long long)(- v_17) + 234970484ULL));
    v_7 = (long)(! (v_9 % 14ULL) * (unsigned long long)result);
    v_9 %= ! (v_9 * (unsigned long long)v_15) + 956ULL;
  }
  else {
    v = (signed char)(~ (- p_23 | (unsigned long long)(p_13 * 39)));
    v_7 = (long)v_21;
    v_9 = (unsigned long long)(- p_19);
  }
  if ((int)v > p_13) result = 4294943818U;
  else {
    v = (signed char)(955642782ULL % (! (- v_9) + 941ULL));
    v_5 = -6L - v_7;
    result = (unsigned int)((long)p % (- ((long)v + v_5) + 815L));
  }
  return result;
}

