#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226646649
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, int p_13[2][2][1], signed char p_15[2][1][4],
          float p_17[5][2][1])
{
  long long v_11;
  int v_9;
  short v_6;
  float v_4;
  unsigned long v;
  float result;
  v_6 = (short)-14311;
  v_4 = p_17[2][1][0];
  v_9 = (int)((long)(- (-60833852.f - (float)p_15[0][0][1] / (p_17[1][0][0] + 216.f))));
  v_11 = (long long)p_13[1][1][0];
  v = (unsigned long)(((long long)((63 ^ (int)((unsigned char)v_4)) % (
                                   (int)(- v_6) + 772)) + ((long long)(
                                                           (int)p * v_9) - v_11)) / (long long)(
                      p_13[0][0][0] + 1006));
  result = (float)v;
  return result;
}

