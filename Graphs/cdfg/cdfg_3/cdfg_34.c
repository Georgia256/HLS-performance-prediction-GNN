#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 821406902
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, short p_7, unsigned long long p_9,
           unsigned long long p_15[3][2], char p_17)
{
  long long v_13;
  signed char v_11;
  signed char v_5;
  long long v;
  double result;
  v_13 = -39244LL;
  v_11 = (signed char)p_7;
  v_5 = (signed char)36;
  if (~ ((p_9 << (v_13 & 63LL)) / (unsigned long long)((int)p_17 + 456)) != - (
      (p_15[0][1] - (unsigned long long)p_17) * (unsigned long long)(! v_11))) {
    v_13 = (long long)(- ((unsigned long long)((long)v_5 % -43955575L) + (
                          p_15[2][1] + (unsigned long long)p_17)));
    v_5 = (signed char)((unsigned long long)((long long)(- v_11) / -43822LL) * (
                        (unsigned long long)((long long)v_11 / (v_13 + 727LL)) * p_15[1][1]));
    v = (long long)(~ 6510);
  }
  else {
    v_5 = p;
    v = (long long)p_15[0][1];
  }
  if ((unsigned long long)(((int)p_7 % 117) / ((19042 + (int)p_7) + 48)) * p_9 >= 
      p_9 * (unsigned long long)(-59369LL * v)) result = (double)p;
  else {
    result = (double)v_5;
    v = (long long)result;
    result = (double)(~ v);
  }
  return result;
}

