#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93940824
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned short p_7, char p_11[1][1][5],
         unsigned long long p_15, long long p_17)
{
  double v_19;
  signed char v_13;
  long v_9;
  unsigned long long v_4;
  unsigned int v;
  long result;
  v_19 = (double)p;
  v_4 = (unsigned long long)p_7;
  v = (unsigned int)p_17;
  result = (long)p_17;
  result = (long)-3191179264.f * ((long)(! p_7) + (long)p_7 * result);
  if (-30925LL < (long long)((unsigned long)p_11[0][0][1] + 10679UL * (unsigned long)p_11[0][0][1]) * (
                 (p_17 - p) % (long long)(result % ((long)6.51071585118e+37f + 205L) + 709L))) {
    v = (unsigned int)((long long)v % (- (15924LL % (p + 94LL)) + 189LL));
    result = (long)((unsigned long long)p_7 + ((18446744072733633155ULL - (unsigned long long)v) + 18446744073196464949ULL));
    result = (long)((unsigned long long)((unsigned long)(result - 19977L) + (unsigned long)v) - 
                    - v_4 * (unsigned long long)(p & 41LL));
  }
  else {
    v_13 = (signed char)(((p_15 - (unsigned long long)p_17) + (unsigned long long)(
                          (int)((short)v_19) + -5488)) % (unsigned long long)(
                         (int)p_7 + 901));
    v_9 = (long)(~ v_13);
    result = (long)(! ((long long)(v_9 ^ (long)p_11[0][0][0]) - p));
  }
  return result;
}

