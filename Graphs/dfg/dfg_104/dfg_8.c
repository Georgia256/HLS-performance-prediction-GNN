#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 410271471
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, long p_7, unsigned char p_9, double p_15,
        unsigned char p_17)
{
  float v_21;
  long long v_19;
  unsigned short v_13;
  int v_11;
  long v_4;
  double v;
  int result;
  v_19 = -61823LL;
  v_13 = (unsigned short)3796;
  v_11 = -47802;
  v = 755.756212593;
  v_21 = (float)6830354956.83;
  v_4 = (long)(v - (double)v_13);
  v = ((double)(! ((int)p_9 - (int)((unsigned char)v))) - ((double)(v_11 - (int)v_13) + 
                                                           p_15 * (double)p_17)) - 
      ((double)(! v_19) / (p_15 + 581.)) / (double)((462878048.f * v_21 - 53716.f) + 667.f);
  result = (int)(v / ((double)((unsigned long long)(~ (v_4 % -16243L)) % (
                               (p + (unsigned long long)p_7) % 602ULL + 370ULL)) + 785.));
  return result;
}

