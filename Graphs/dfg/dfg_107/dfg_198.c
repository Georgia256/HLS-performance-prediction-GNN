#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341421215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[2][5], double p_11, long long p_13)
{
  short v_9;
  char v_7;
  char v_5;
  unsigned long v;
  long long result;
  v_9 = (short)p_11;
  v_7 = (char)p_11;
  v = (unsigned long)p[0][0];
  result = -20272LL;
  v_9 = (short)(((double)((int)v_9 % ((int)v_9 + 364)) + p_11) / -16431. + (double)(- (
                p_13 / (p_13 * result + 38LL))));
  v_5 = (char)(4204706328UL - (unsigned long)((int)(! v_7) - (int)v_9) * (
                              (unsigned long)v_9 / (v + 320UL) + (unsigned long)(
                              907.881652832 - p[1][3])));
  result = (long long)(((int)v_5 | 27933) / (! (! ((int)v_7 - (int)v_7)) + 563));
  result = (long long)((double)((long long)((3340515158UL + v) - 36UL) * result) - p[1][2]);
  return result;
}

