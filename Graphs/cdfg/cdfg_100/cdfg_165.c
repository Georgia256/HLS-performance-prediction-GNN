#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 316764159
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, float p_4, char p_6[2], unsigned char p_11,
        double p_13)
{
  long long v_15;
  float v_9;
  char v;
  int result;
  v = (char)127;
  result = 548549484;
  v_9 = p_4;
  while ((unsigned long)result != (unsigned long)(- p_4 - (float)(- p)) - (
                                  (unsigned long)(-2.51714195349e+38f + (float)p_6[0]) + 
                                  (unsigned long)result / 663666067UL)) {
    v_15 = (unsigned long long)v_9 / ((unsigned long long)v % 18446744073358566863ULL + 951ULL);
    v = (char)(((long long)(~ p_6[1]) % (v_15 / ((long long)p_13 + 355LL) + 365LL)) % 263LL);
    v_9 = (float)(((int)p_11 >> (((int)((char)p_13) + (int)p_6[1]) & 7)) * (int)(~ (! p)));
    result = (int)(- ((p_4 - (float)p_6[0]) - - v_9));
  }
  while_0_break: ;
  return result;
}

