#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 716333159
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, long p_11, unsigned int p_13)
{
  signed char v_9;
  long long v_7;
  signed char v_4;
  unsigned long long v;
  unsigned char result;
  v = (unsigned long long)p;
  v_9 = (signed char)(~ ((unsigned long long)p_11 % 18446744073709524519ULL) % (unsigned long long)(
                      p_13 + 21U) - ~ (31982ULL % (unsigned long long)(
                                       p_11 + 245L)));
  v_4 = ~ v_9;
  v_7 = (long long)(! (short)-2582);
  result = (unsigned char)(! (v % (unsigned long long)((int)v_4 + 638)) % (unsigned long long)(
                           ~ (((long long)p - v_7) * (long long)(! p)) + 162LL));
  return result;
}

