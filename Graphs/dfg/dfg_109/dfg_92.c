#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244662824
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned char p_11)
{
  long long v_13;
  unsigned long v_8;
  short v_6;
  long v_4;
  double v;
  float result;
  v_13 = p;
  v_6 = (short)p;
  v_8 = (unsigned long)((int)(124.784255981f + (float)v_13) - (int)((char)3500481792.f));
  v_4 = (long)((long long)(- v_8) * - (p % (p + 948LL) + (long long)(- p_11)));
  v = (double)v_6;
  result = (float)((long)(- (- (v * 2.66573952201e+38))) - ~ v_4);
  return result;
}

