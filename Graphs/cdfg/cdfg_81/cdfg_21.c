#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 33875710
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, double p_4, short p_9, long p_13, int p_15)
{
  long long v_19;
  int v_17;
  unsigned long v_11;
  unsigned short v_7;
  double v;
  short result;
  v_19 = (long long)p_15;
  v_17 = 65464;
  v_11 = (unsigned long)p;
  result = (short)p_4;
  if ((long long)((unsigned long)p_13 | 4290869836UL) + ((long long)v_17 + (
                                                         v_19 + (long long)result)) < (long long)(- result)) {
    v_7 = (unsigned short)(50UL % (((v_11 + (unsigned long)p_13) + 705060301UL) + 792UL));
    v = (double)(- ((int)p_9 * (int)result));
    result = (short)(- (p_4 / (v + 530.) + (double)v_7));
  }
  else result = (short)((long long)(0U % (414714763U % (unsigned int)(
                                          p_15 + 545) + 516U)));
  result = (short)((int)(~ (! result)) / (((int)p - (int)((short)p_4)) % (
                                          (int)-3.30891642821e+38 + 44) + 643));
  return result;
}

