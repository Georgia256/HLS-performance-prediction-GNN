#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 621972693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned char p_5,
                 unsigned int p_9[1], char p_11, unsigned char p_13[1][3])
{
  int v_23;
  long long v_21;
  unsigned long v_19;
  unsigned long long v_17;
  long long v_15;
  float v_7;
  long v;
  unsigned int result;
  v_23 = 505981417;
  v_19 = (unsigned long)p_5;
  v_17 = 37778ULL;
  v_15 = 227108290LL;
  v_7 = -807.098815918f;
  v = -907354768L;
  result = (unsigned int)p_13[0][2];
  if (v_19 > (unsigned long)p_5) {
    result = (unsigned int)p_11;
    v_15 = (long long)((4294960967ULL - p * 8950ULL) & (unsigned long long)p_13[0][1]);
    v = (long)(! v_17);
  }
  else {
    v_21 = (long long)(- (-403.270446777f + (float)v_23));
    v_7 = ((float)((unsigned long)p_13[0][2] * v_19) - ((float)v + 2.75665165507e+38f)) / (
          (float)(~ (v_21 | (long long)p_13[0][0])) + 39.f);
    v = (long)(~ p_13[0][0]);
  }
  while (p < (unsigned long long)(~ (- v + (long)p_5))) {
    v_7 = (int)((unsigned char)v_7) / 107;
    result = (unsigned int)((long long)((int)p_13[0][2] % 10661) - ((long long)(
                                                                    (int)p_11 / (
                                                                    (int)((char)1.15436157879e+38f) + 535)) ^ (
                                                                    v_15 - 10806LL)));
    result = ! (result | (unsigned int)p_11) + p_9[0];
    v = (long)p_9[0];
  }
  while_0_break: ;
  return result;
}

