#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 851807526
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, double p_17[1], int p_19, short p_23)
{
  unsigned short v_21;
  long long v_15;
  unsigned long long v_13;
  long v_10;
  unsigned short v_8;
  unsigned long v_6;
  signed char v_4;
  double v;
  long result;
  v_21 = (unsigned short)29782;
  v_15 = (long long)p_17[0];
  v_13 = 18446744073191333613ULL;
  v_10 = (long)p;
  v_8 = (unsigned short)34732;
  result = (long)p;
  if ((float)v_15 + 41.0798988342f < (float)(~ (! ((int)p + 352005077)))) {
    v_6 = (unsigned long)(((v_15 << ((long long)p_17[0] & 63LL)) << (
                           (long)p_19 % (result + 544L) & 63L)) + (long long)(~ (
                          (int)v_21 ^ (int)v_21)));
    v_4 = (signed char)((unsigned long long)(- (v_6 / (unsigned long)(
                                                (int)v_8 + 921))) + (
                        (unsigned long long)(v_10 - -369L) + (unsigned long long)p % (
                                                             v_13 + 466ULL)));
    v = (double)v_4;
  }
  else {
    v_21 = (unsigned short)(- p_23);
    v = (double)(! v_21);
  }
  result = (long)v;
  return result;
}

