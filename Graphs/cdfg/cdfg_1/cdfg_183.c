#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 658333495
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned long long p_5, double p_7)
{
  double v_11;
  unsigned long long v_9;
  signed char v;
  short result;
  v_9 = (unsigned long long)p_7;
  v_11 = (double)(~ (unsigned char)8);
  if (- (p_5 + (unsigned long long)p_7) * v_9 <= 79ULL + 19719ULL / (
                                                         (unsigned long long)v_11 + 20ULL)) {
    result = (short)p;
    v = (signed char)(! result);
    result = (short)(- ((int)((signed char)((double)p * 8098023423.55)) / (
                        (int)(! v) + 593)));
  }
  else result = (short)-1;
  return result;
}

