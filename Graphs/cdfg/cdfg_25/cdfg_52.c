#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 375932105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned long long p_9, int p_13[3])
{
  signed char v_15;
  float v_11;
  unsigned int v_7;
  float v_5;
  unsigned long long v;
  float result;
  v_15 = (signed char)-25;
  v_7 = 3475560419U;
  v = p_9;
  v_11 = (float)(short)-25035;
  if (! (! (v + (unsigned long long)v_15)) > v) {
    v = (unsigned long long)((int)((unsigned char)(- v_11 * 2.24307913891e+38f)) | 20);
    v_5 = (float)(! (18446744073709324644ULL * ~ p_9));
    result = (float)(v + v) * p + (float)(-59 % ((int)((signed char)(
                                                 v_5 * (float)v_7)) + 828));
  }
  else result = (float)(! p_13[0]);
  return result;
}

