#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205041349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, float p_11)
{
  unsigned char v_9;
  int v_6;
  double v_4;
  unsigned int v;
  long result;
  v_9 = (unsigned char)102;
  v_4 = (double)p;
  v = (unsigned int)p_11;
  v_6 = (int)((p * 15765ULL) * (unsigned long long)((int)v_9 + 75) - (unsigned long long)(- (
              p_11 + -2163.f)));
  result = (long)(v * (unsigned int)((int)1.67039854346e+38 + ((int)v_4 - v_6)));
  return result;
}

