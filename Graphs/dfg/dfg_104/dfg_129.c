#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 417593736
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p)
{
  unsigned char v_9;
  unsigned int v_7;
  int v_5;
  long v;
  unsigned long long result;
  v_5 = (int)p;
  result = 18446744073709547789ULL;
  v_9 = (unsigned char)p;
  v_7 = (unsigned int)v_5;
  v = (long)(! ((unsigned long long)((p * (unsigned int)v_5) * (v_7 * (unsigned int)v_9)) / (
                result + 139ULL)));
  result = ~ ((unsigned long long)p % (18446744073709506917ULL * (unsigned long long)v + 904ULL) << (
              v / (long)(- v_5 + 735) & 63L));
  return result;
}

