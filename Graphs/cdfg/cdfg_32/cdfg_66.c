#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1022347466
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, int p_4, int p_6, unsigned short p_15,
        unsigned int p_17[2][1])
{
  float v_23;
  unsigned long long v_21;
  unsigned long long v_19;
  long v_13;
  short v_11;
  unsigned long long v_9;
  float v;
  int result;
  v_19 = (unsigned long long)p_17[0][0];
  v_13 = (long)p_4;
  v_11 = (short)p_6;
  v_9 = 18446744073709536881ULL;
  v = (float)p_17[0][0];
  result = -65141;
  while (v_9 < 43098ULL * (unsigned long long)(((long)p_6 % (v_13 + 440L)) % 269L)) {
    v = v_19 / 37551ULL;
    v_21 = 0ULL;
    v_23 = - (-2.35708737458e+38f * (float)v_13) * (float)(! v_21 + (unsigned long long)(
                                                           (unsigned long)v_13 * (unsigned long)p_17[0][0]));
    v_9 = ((unsigned long long)(- v) - ((unsigned long long)p | v_21)) + (unsigned long long)(
          p_4 / ((157 + (int)((unsigned char)v_23)) + 933));
  }
  while_0_break: ;
  while (! (result + ((int)p - p_4)) > (26 * p_6 & ! p_6 % 390)) {
    v = (unsigned long long)v_11 % ((v_9 + (unsigned long long)((double)v - -168.028586936)) + 1008ULL);
    v_11 = (short)(~ ((unsigned long long)(- v_13) | ((unsigned long long)p_15 + 12336ULL)));
    v_9 = (unsigned long long)p;
    result = (int)p;
  }
  while_0_break_0: ;
  return result;
}

