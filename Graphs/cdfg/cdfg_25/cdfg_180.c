#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 268298382
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned long p_7, signed char p_9,
              short p_13[3], short p_19)
{
  unsigned int v_23;
  signed char v_21;
  unsigned long v_17;
  short v_15;
  int v_11;
  unsigned int v_5;
  unsigned int v;
  long long result;
  v_23 = 32533U;
  v_17 = 3347722966UL;
  v_15 = (short)p_7;
  v_11 = (int)p_13[1];
  v_5 = 1036549615U;
  v = (unsigned int)p;
  result = (long long)p;
  if ((long long)((unsigned int)(v_11 * (int)p_9)) % (((long long)(3372214985UL / (
                                                                   p_7 + 265UL)) + 154512520LL) + 644LL) <= (long long)(~ v_15)) {
    v_21 = (signed char)((long)((42246 - (int)p_19) + (int)p_9) * (-1961705132L << 19LL));
    v = (unsigned int)((long long)p_19 * ~ ((long long)v_21 / 5067232LL));
    v_11 = (int)(0 - (unsigned long long)(v_17 / ((unsigned long)-3.09632020775e+38 + 1009UL) ^ (
                                          (unsigned long)v_15 - p_7)));
  }
  else {
    v_15 = (short)(~ (v | (unsigned int)p_19) - (unsigned int)p_13[0]);
    v_17 = (unsigned long)((p - (unsigned long long)p_9) % (unsigned long long)(
                           ! v_17 + 391UL) | 2635249153278388999ULL);
    v_11 = (int)(! (! v_23 / 15539U));
  }
  while ((18446744073709527022ULL - (p << (v & 63U))) - (unsigned long long)(~ (! v_5)) < 
         (p * (unsigned long long)p_7 >> 48ULL) >> ((int)p_9 & 63)) {
    v_5 = v ^ (unsigned int)((int)p_13[2] >> (((unsigned long)v_15 & v_17) & 15UL));
    v = (unsigned int)(-213946681LL / (long long)(~ v_11 + 829));
    v_5 = (unsigned int)((! p % (unsigned long long)(-11919 % ((int)p_13[2] + 260) + 830)) / (unsigned long long)(
                         ~ v_5 % (unsigned int)((-16432 >> ((int)p_9 & 31)) + 408) + 229U));
  }
  while_0_break: ;
  return result;
}

