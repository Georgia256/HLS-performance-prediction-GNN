#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 728763161
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, long long p_4, unsigned long long p_6[3][2], int p_8,
              double p_10)
{
  long v_21;
  signed char v_19;
  float v_17;
  char v_15;
  int v_13;
  short v;
  long long result;
  v_19 = (signed char)-109;
  v_17 = 5939918848.f;
  v_15 = (char)p_6[2][1];
  v_13 = -41023;
  v = (short)p_4;
  while (- ((float)v_15 + 2.47974159583e+38f) - (float)(~ ((int)((char)v_17) + -22)) > (float)(! (! p_4))) {
    v_21 = (int)v_19 | -87;
    result = (long long)(- 1287476592.95);
    v_15 = (char)((unsigned long long)v_21 - - (p_6[2][0] / (unsigned long long)(
                                                result + 47LL)));
    v_17 = (float)(- (! v_15)) * - (85.f + p);
  }
  while_0_break: ;
  if ((unsigned long long)((double)(p_6[0][1] & (unsigned long long)p_8) / (
                           p_10 * (double)v + 23.)) / (p_6[0][1] * (unsigned long long)(- v_13) + 698ULL) >= 1062870305ULL) 
    result = (long long)(12856 ^ (int)((short)p));
  else result = p_4;
  return result;
}

