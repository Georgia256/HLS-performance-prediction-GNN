#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 888442829
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned long p_7, long long p_9,
          unsigned long long p_13[4][2], long p_15)
{
  float v_19;
  double v_17;
  signed char v_11;
  unsigned int v_4;
  short v;
  short result;
  v_19 = (float)p_15;
  if ((unsigned long long)(- (p_9 % 86235838LL) - 53771LL) != (unsigned long long)v_19 / (
                                                              ~ (p_13[1][1] - p_13[3][0]) + 570ULL)) {
    v_4 = (unsigned int)((long long)p - - ((long long)p_15 + 100717931LL));
    v_11 = (signed char)p_13[0][1];
    result = (short)((38LL / ((p_9 + (long long)v_11) + 118LL)) / (long long)(
                     ((unsigned long)-7954376192.f % (p_7 + 648UL) - 3449395127UL) + 704UL));
  }
  else {
    v_17 = (double)-29713096363915LL;
    v_4 = (unsigned int)(~ (48548LL % (p_9 + 535LL)) >> (- (p * p_15) & 63L));
    result = (short)((long)(4294923282. - (v_17 - (double)p_15)) % (! p + 199L));
  }
  if (0) {
    result = (short)-15843;
    v = (short)(! ((unsigned long)((unsigned int)result / (v_4 + 763U)) * (unsigned long)p));
    result = v;
  }
  else {
    result = (short)(- p);
    v = result;
    result = v;
  }
  return result;
}

