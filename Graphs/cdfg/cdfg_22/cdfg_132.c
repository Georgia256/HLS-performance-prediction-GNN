#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628877065
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned long p_4[1][4], short p_6,
                       long p_8, long p_13)
{
  unsigned short v_23;
  signed char v_21;
  unsigned long long v_19;
  int v_17;
  char v_15;
  float v_11;
  long long v;
  unsigned long long result;
  v_23 = (unsigned short)p_8;
  v_21 = (signed char)-10;
  v_19 = 55217ULL;
  v_17 = 656386303;
  v_15 = (char)-49;
  result = 18446744073709538242ULL;
  while ((unsigned long long)(((int)(! p) >> 6UL) / (((int)8004028398.69 + - v_17) + 20)) < - (
         result * (unsigned long long)p_13 + 26480ULL)) {
    v_23 = (unsigned int)v_23 ^ ((unsigned int)v_21 - 1796U);
    v_11 = (float)(~ result);
    v_21 = (signed char)(((unsigned long)(! p) + 233736774UL) * (unsigned long)(- v_17));
    v_17 = (int)((unsigned long long)(((int)p_6 + 132) * (int)(- v_11)) * ~ (
                 v_19 % (unsigned long long)((int)v_15 + 163)));
  }
  while_0_break: ;
  if ((1069057757ULL - (unsigned long long)p_13) * (unsigned long long)(
      (long)(~ v_15) / (p_13 + 598L)) < 25169ULL) result = (unsigned long long)(
                                                  (unsigned long)p * (
                                                  ! p_4[0][1] / (unsigned long)(
                                                  (int)(! p_6) + 421)));
  else {
    v_11 = (float)(unsigned char)255;
    v = (long long)(! ((long)((float)p - v_11) + p_13));
    result = (unsigned long long)((long long)((long)(! p_6) * (140L - p_8)) - ! (! v));
  }
  return result;
}

