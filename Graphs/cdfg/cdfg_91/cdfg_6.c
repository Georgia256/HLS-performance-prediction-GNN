#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736060166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p[3], unsigned short p_11)
{
  long long v_13;
  double v_9;
  unsigned short v_7;
  unsigned int v_4;
  long long v;
  long long result;
  v_13 = (long long)p_11;
  v_7 = p_11;
  v_9 = (double)(! (- (short)-28731));
  if ((long long)p_11 > - (- (v_13 % 415LL))) result = (long long)(~ (char)67);
  else {
    v_4 = (unsigned int)((p[0] * (unsigned long long)-64478.1938638) * (unsigned long long)((long)(
                         (int)v_7 - (int)((unsigned short)v_9))));
    v = (long long)v_4;
    result = v;
  }
  return result;
}

