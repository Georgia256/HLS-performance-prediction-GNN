#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 935703962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[4][1], unsigned short p_7,
                  unsigned short p_9[5][4][5], unsigned long p_13[3][1])
{
  long long v_15;
  float v_11;
  long long v_5;
  unsigned short v;
  unsigned char result;
  v_11 = (float)p[2][0];
  v_15 = (long long)(8140U / (~ p[3][0] + 582U));
  if (4294919515LL != v_15) {
    v_5 = (long long)(881U / ((unsigned int)v_11 * p[3][0] + 792U));
    v = (unsigned short)((-108437352.f + (float)(- p[2][0])) * (float)(
                         v_5 - (long long)((int)p_7 / ((int)p_9[4][0][4] + 598))));
    result = (unsigned char)(1 ^ (unsigned long)v);
  }
  else result = (unsigned char)(~ (((unsigned long long)p_13[2][0] % 446794950ULL) * 18446744073709551558ULL));
  return result;
}

