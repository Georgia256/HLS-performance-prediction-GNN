#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 642754315
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, double p_5, unsigned long p_7, long p_9,
                  unsigned long p_11)
{
  unsigned long long v_15;
  signed char v_13;
  double v;
  unsigned char result;
  v_15 = (unsigned long long)p_5;
  v = (double)p_11;
  if (! ((unsigned long long)(~ p_7) % (v_15 * v_15 + 985ULL)) < 18446744073709551615ULL) 
    v = (double)((long long)(! p_7) - -15232LL);
  else {
    v_13 = (signed char)(~ (- (char)-15));
    v = (double)((unsigned long)p_9 + (4294967242UL - p_11) * (unsigned long)(
                                      v * (double)v_13));
    v = v;
  }
  result = (unsigned char)((double)((long long)p - 38079LL) / (- (v / (
                                                                  p_5 + 467.)) + 802.));
  return result;
}

