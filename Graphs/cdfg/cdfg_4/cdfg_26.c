#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 924683527
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, double p_4, long p_7, unsigned long p_13)
{
  float v_11;
  char v_9;
  unsigned short v;
  short result;
  v_11 = 2.411875842e+38f;
  v_9 = (char)89;
  v = (unsigned short)p_4;
  v = (unsigned short)((unsigned long)(20337.f + v_11) % (! p_13 + 182UL) + (unsigned long)(
                       - p_7 * (long)((int)v % ((int)((unsigned short)v_11) + 352))));
  if ((long long)(- ((-91 - (int)v) % 842)) > - ((long long)(-917619391L / (
                                                             p_7 + 745L)) / (
                                                 (long long)v_9 / -16066LL + 711LL))) 
    result = (short)845.135192871f;
  else result = (short)((double)p - 0. / (- p_4 + 31.));
  return result;
}

