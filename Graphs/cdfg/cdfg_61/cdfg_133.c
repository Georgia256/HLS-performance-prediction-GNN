#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 998520032
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p[5][4][2], unsigned char p_5, short p_9,
                       double p_13, double p_15)
{
  long v_23;
  unsigned short v_21;
  int v_19;
  double v_17;
  unsigned char v_11;
  long v_7;
  int v;
  unsigned long long result;
  v_23 = -32039L;
  v_21 = (unsigned short)24123;
  v_17 = p_13;
  v = 3003;
  if (4294921869. < (double)(- (~ p_9)) - v_17) {
    v_19 = (int)(~ v_21);
    v = (int)(((double)v_19 - p_15) / -473202834.);
    result = (unsigned long long)(370152905UL * (unsigned long)(((long)p_9 * 156056854L) / (long)(
                                                                ((int)p_9 << 6L) + 170)));
  }
  else {
    result = (unsigned long long)(10142053376. + (215. + p_13));
    v_17 = (double)((long)v / (((long)(p[0][1][0] - (float)p_5) ^ ~ v_23) + 776L));
    v = (int)(- p[4][0][0]);
  }
  if (734965276ULL > ((((unsigned long long)p_15 - result) << ((int)p_9 & 63)) ^ (unsigned long long)(
                      (int)((short)v_17) + -22984))) {
    v_7 = (long)p_9;
    v = (int)(((11486L & v_7) - (long)(! v)) % ((long)(407806400.f / (
                                                       (-12.f - p[0][0][0]) + 201.f)) + 213L));
    result = (unsigned long long)((((unsigned long)p[1][3][1] - 4179050502UL) % (unsigned long)(
                                   v * 25534 + 654)) % (unsigned long)(
                                  (int)(~ (~ p_5)) + 86));
  }
  else {
    result = (unsigned long long)(~ 39409);
    v_11 = (unsigned char)(- (result / 3ULL) + (unsigned long long)(- p_13 / 744.));
    result = (unsigned long long)(~ v_11);
  }
  return result;
}

