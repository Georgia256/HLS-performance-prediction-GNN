#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984328436
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, signed char p_5, unsigned char p_7, float p_9,
                 unsigned short p_13)
{
  short v_23;
  unsigned long v_21;
  unsigned long long v_19;
  unsigned char v_17;
  int v_15;
  signed char v_11;
  int v;
  unsigned int result;
  v_23 = (short)25480;
  v_21 = (unsigned long)p_5;
  v_19 = 18446744073709521336ULL;
  v_17 = (unsigned char)169;
  v_11 = (signed char)p_9;
  v = -53207;
  result = 50693U;
  while (((unsigned long long)p_13 & (v_19 + 18446744073709547615ULL)) - (unsigned long long)(! p_13) < 
         (unsigned long long)v_17 - (v_19 | (unsigned long long)((int)p_7 % 28320))) {
    v = v_21 % 726433362UL;
    result = (unsigned int)((! p - (long long)v_23) * (long long)(((int)p_13 - v) / 132));
    v_11 = (signed char)(~ 0U);
    v_19 = (unsigned long long)(! (p + (long long)(11694 ^ (int)p_13)));
  }
  while_0_break: ;
  while (~ ((long long)(! v) - (p << ((int)p_5 & 63))) < (long long)(! (
         (int)p_7 + (int)((unsigned char)p_9)))) {
    v_15 = (float)v_11 + 3063318784.f;
    result = (unsigned int)(~ ((int)(! v_17) / 186));
    v_11 = (signed char)(! ((unsigned int)(v_15 + (int)p_7) & (unsigned int)p_9 % 4217166114U));
    v = (int)((long long)p_13 * ! (p + p));
  }
  while_0_break_0: ;
  return result;
}

