#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 64964388
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p[1][3], unsigned long long p_4,
                unsigned long long p_6[2][5][2], unsigned long long p_8,
                short p_10)
{
  unsigned long long v_17;
  float v_15;
  short v_13;
  long v;
  signed char result;
  v_17 = p_4;
  if (p_8 != v_17) {
    v_15 = (float)-2563L;
    v_13 = (short)((579728056ULL / (p_8 + 60ULL) + (unsigned long long)(
                    (int)p_10 - (int)((short)v_15))) + (unsigned long long)(
                   0 - (int)(~ p[0][1])));
    v = (long)v_13;
  }
  else v = 74L;
  if (p_8 < ((unsigned long long)p_10 - p_8) * (18446744073709551602ULL + p_6[0][3][0]) + (unsigned long long)v) 
    result = (signed char)(- ((unsigned long long)p[0][0] * p_4 ^ p_6[0][2][0]));
  else result = (signed char)9421459456.f;
  return result;
}

