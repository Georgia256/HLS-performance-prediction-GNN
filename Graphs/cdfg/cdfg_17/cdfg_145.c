#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 287323039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, long long p_11, float p_13, unsigned long p_19)
{
  float v_17;
  long v_15;
  unsigned char v_9;
  unsigned long long v_7;
  unsigned long long v_5;
  unsigned int v;
  unsigned int result;
  v_17 = (float)p_19;
  v_15 = (long)p;
  v_7 = 976739318ULL;
  if (- v_17 <= v_17 - (float)(88855032UL % ((p_19 + (unsigned long)p) + 627UL))) {
    v_9 = (unsigned char)((float)(53952ULL / ((v_7 + 18446744073010941942ULL) + 951ULL)) + - (
                          (float)v_15 + v_17));
    v_7 = (unsigned long long)(((int)(- v_9) - 219) * (int)((float)(! p_11) + - p_13));
    v_5 = - ((unsigned long long)(69 << 3L) & - v_7);
  }
  else v_5 = (unsigned long long)(-70. + p);
  if (204950153 != (int)(- (-258362590. / (p + 144.)) - (-62. / (p + 657.)) * (double)(
                                                        v_5 - 18446744073709551579ULL))) {
    result = (unsigned int)6957900800.f;
    result = (unsigned int)(! ((unsigned long)(! result) / ((461103233UL ^ (unsigned long)result) + 996UL)));
  }
  else {
    v = (unsigned int)((long)2.88544920073e+38 * -235206201L);
    result = - v;
  }
  return result;
}

