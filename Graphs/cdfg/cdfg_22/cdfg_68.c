#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 854729396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, float p_5[4][4], int p_7, float p_11,
         unsigned long p_23)
{
  long v_29;
  short v_27;
  signed char v_25;
  unsigned short v_21;
  unsigned short v_19;
  unsigned long v_17;
  unsigned long v_15;
  long v_13;
  unsigned long v_9;
  unsigned long long v;
  long result;
  v_29 = -118907559L;
  v_27 = (short)2532;
  v_19 = (unsigned short)57851;
  v_17 = 35909UL;
  v_15 = 3306211556UL;
  result = (long)p_7;
  if (p_23 > (unsigned long)(((-7264275227.04 - (double)v_29) - (double)(
                              16 % ((int)((signed char)920.205871582f) + 991))) - (double)(
                             446887360.f + - p_11))) {
    v_13 = (long)v_19;
    v_9 = (unsigned long)(- ((float)v_15 + p_11) * (float)((unsigned long)result - 
                                                           v_17 * 4294954324UL));
    v = (unsigned long long)(- ((v_9 - (unsigned long)p_11) >> (v_13 & 31L)));
  }
  else {
    v_25 = (signed char)(~ ((v_17 & (unsigned long)v_27) & 1766UL));
    v_21 = (unsigned short)(18.f * p_5[2][1] + (float)v_25);
    v = (unsigned long long)((int)v_21 << (~ (- p_23) & 15UL));
  }
  result = (long)(! ((unsigned long long)p + v) % (unsigned long long)(
                  (int)(p_5[3][3] - 201156704.f) / (p_7 + 514) + 779));
  return result;
}

