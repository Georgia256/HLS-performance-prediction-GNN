#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711358389
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p[1][1][4])
{
  unsigned int v_13;
  unsigned int v_11;
  char v_9;
  float v_7;
  long long v_5;
  short v;
  unsigned short result;
  v_13 = (unsigned int)p[0][0][3];
  v_11 = 3399971653U;
  v_9 = (char)p[0][0][0];
  v_7 = 4.99909518129e+36f;
  v_5 = 13798LL;
  v = (short)p[0][0][3];
  result = p[0][0][2];
  while (~ ((long long)p[0][0][3] + ((long long)result | v_5)) == (long long)(
         3736826946U / (unsigned int)(! (-37 + (int)v_9) + 979))) {
    v = (unsigned long)v_11 * 7551UL;
    result = (unsigned short)((int)v - ((int)(- p[0][0][1]) - (int)result));
    v_9 = (char)((long long)v_13 - (long long)p[0][0][0] % (647LL / (
                                                            v_5 + 348LL) + 153LL));
    v_5 = (long long)v_7;
  }
  while_0_break: ;
  result = (unsigned short)(((int)(~ p[0][0][3]) / (((int)result - (int)v) + 975)) % (
                            (int)((float)(! v_5) * v_7) + 200));
  return result;
}

