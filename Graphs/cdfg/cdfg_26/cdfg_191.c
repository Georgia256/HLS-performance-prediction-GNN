#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 291768365
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, char p_7, long p_9, unsigned int p_15, short p_19)
{
  unsigned long v_23;
  unsigned short v_21;
  unsigned long long v_17;
  int v_13;
  unsigned long v_11;
  unsigned int v_5;
  unsigned char v;
  char result;
  v_23 = 2095UL;
  v_21 = (unsigned short)46137;
  v_17 = 18446744073709549035ULL;
  v_13 = (int)p_9;
  v = (unsigned char)p_19;
  v_5 = 4294967240U;
  if ((unsigned long long)v / (((v_17 + (unsigned long long)p_19) + (unsigned long long)(
                                -209950271LL + (long long)v_21)) + 876ULL) <= (unsigned long long)(
      745597882UL - (unsigned long)(! p_15) % (v_23 + 309UL))) {
    v = (unsigned char)((unsigned int)v + ((v_5 + 4294967217U) + (unsigned int)(
                                           -2455932597.97 * (double)p_7)));
    result = (char)(998318030LL % (long long)(! ((int)v / -120) + 949));
    result = (char)(~ (p ^ 68U) ^ (unsigned int)((int)(! result) * ((int)result % -561213893)));
  }
  else {
    result = (char)(- (- (93U - p_15)));
    v_11 = (unsigned long)((unsigned long long)((p / (p + 735U)) / (unsigned int)(
                                                (int)result / (v_13 + 510) + 595)) % (
                           ((unsigned long long)(~ p) + 18446744073141093145ULL % (unsigned long long)(
                                                        v_5 + 686U)) + 396ULL));
    result = (char)((unsigned long)(~ p_9) ^ v_11);
  }
  return result;
}

