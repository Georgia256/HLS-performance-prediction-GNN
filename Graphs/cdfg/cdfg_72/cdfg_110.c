#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 657191406
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned int p_5, int p_7,
          unsigned long long p_9, signed char p_11[4])
{
  long v_23;
  unsigned long v_21;
  float v_19;
  short v_17;
  char v_15;
  long long v_13;
  short v;
  float result;
  v_23 = (long)p_5;
  v_21 = (unsigned long)p_9;
  v_19 = (float)p_9;
  v_15 = (char)p_5;
  if ((unsigned long)(~ (-9049L + v_23)) == (unsigned long)p_5) {
    v_13 = (long long)p_5;
    v_15 = (char)p_11[3];
  }
  else {
    v_13 = (long long)(((unsigned long long)p_7 ^ p) / (unsigned long long)(
                       (unsigned long)v_19 / (v_21 + 797UL) + 249UL) - (unsigned long long)-4753961743.71);
    v_17 = (short)(! ((int)((char)(-6.37983346201e+37f / ((float)p_7 + 970.f))) + (int)v_15));
    v_15 = (char)(~ p_5 * (unsigned int)p_11[1] << (~ (p % (unsigned long long)(
                                                       (int)v_17 + 351)) & 31ULL));
  }
  if ((((unsigned long long)v_13 * p) % 383293557ULL) * (unsigned long long)v_15 > (unsigned long long)(~ p_11[2])) 
    result = (float)p;
  else {
    result = (float)-3506026043LL;
    v = (short)(~ ((unsigned long long)((unsigned long)p_11[0] + 61130UL) * - p));
    result = (float)((unsigned long long)((unsigned int)v * p_5 + (p_5 - (unsigned int)result)) * ~ (
                     (unsigned long long)p_7 + p_9));
  }
  return result;
}

