#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274120163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned long long p_9, long long p_11,
                       long long p_15, short p_19)
{
  signed char v_21;
  unsigned char v_17;
  double v_13;
  long long v_7;
  double v_5;
  long long v;
  unsigned long long result;
  v_21 = (signed char)p;
  v_13 = (double)p_19;
  v_7 = p_11;
  v_5 = (double)p_15;
  if ((unsigned long long)((int)p_19) % ((7ULL | - p_9) + 977ULL) != (unsigned long long)(
      -40945L * (long)(- v_21) - 753L)) {
    v_7 = (long long)((unsigned long long)p_11 & ((unsigned long long)(- v_13) + 
                                                  p_9 % (unsigned long long)(
                                                  v_7 + 148LL)));
    v = (long long)(20415ULL % ((unsigned long long)(v_5 / ((double)v_7 + 547.)) + 47ULL) & 
                    - p_9 / 18446744073709547850ULL);
    v = v;
  }
  else {
    v_17 = (unsigned char)p_9;
    v = (-917423660LL * (p_15 * 4131251892LL)) % (long long)((int)v_17 + 888);
  }
  result = (unsigned long long)(! ((long long)p * (v << 51ULL)));
  return result;
}

