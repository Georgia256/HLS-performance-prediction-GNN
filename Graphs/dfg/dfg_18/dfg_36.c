#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 25617862
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p[1][1], long long p_5, char p_7,
                   long long p_11, int p_13)
{
  unsigned char v_19;
  float v_17;
  unsigned long long v_15;
  signed char v_9;
  char v;
  unsigned short result;
  v_19 = (unsigned char)18;
  v_17 = (float)p_13;
  v_15 = 18446744073670096971ULL;
  v_15 = ((4814ULL / (v_15 + 760ULL) + (unsigned long long)((int)p_7 * p_13)) | (unsigned long long)(
          (long long)(v_17 - (float)p[0][0]) / (p_11 % (long long)((int)v_19 + 502) + 2LL))) * (unsigned long long)(- (~ (
         (long long)p[0][0] + -55342LL)));
  v_9 = (signed char)(! ((unsigned long long)((unsigned long)(~ p_13) + 64153UL) * v_15));
  v = (char)(((p_5 * 29707LL - (long long)((int)p_7 | -82)) * (long long)v_9) / (
             ! (! (-88LL - p_11)) + 214LL));
  result = (unsigned short)((int)p[0][0] | (int)v);
  return result;
}

