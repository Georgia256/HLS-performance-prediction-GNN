#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 204526124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p[4][3][2], long p_5[1][2][3],
                  double p_11[5], char p_15, double p_17)
{
  long long v_19;
  signed char v_13;
  int v_9;
  unsigned char v_7;
  double v;
  unsigned long result;
  v_19 = (long long)p_17;
  v = (double)p_5[0][0][2];
  v_9 = (int)(- ((- p_17 - (double)(21230U >> 20)) - (double)(- ((long long)p[1][1][1] + v_19))));
  v_7 = (unsigned char)(~ ((long long)(~ ((long)p_15 + 40420L)) - (long long)(
                           v - 58446.)));
  v_13 = (signed char)(v_9 / ((v_9 - -18465) % (~ v_9 + 1016) + 519));
  result = (unsigned long)(v * (double)((long)(34 - (int)p[2][0][1]) / (
                                        (p_5[0][0][2] | (long)v_7) + 741L) | (long)(
                                        (int)((signed char)((double)v_9 * p_11[2])) / (
                                        (int)(! v_13) + 876))));
  return result;
}

