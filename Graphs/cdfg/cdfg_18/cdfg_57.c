#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 490703844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, long long p_4, char p_9,
                       unsigned short p_11, unsigned long p_17)
{
  char v_25;
  double v_23;
  double v_21;
  short v_19;
  unsigned long v_15;
  char v_13;
  long long v_7;
  double v;
  unsigned long long result;
  v_25 = (char)43;
  v_23 = (double)p_9;
  v_21 = -10.8577174024;
  v_19 = (short)p;
  v_15 = (unsigned long)p_9;
  v_13 = (char)-11;
  v_7 = -52085LL;
  if ((long long)((int)v_25 | (int)((char)((double)(v_15 * (unsigned long)v_19) + - v_23))) < 
      (long long)(-20626 % ((int)p_11 + 59)) * ((long long)(v_21 / ((double)p_9 + 59.)) + (
                                                (long long)v_21 + v_7))) {
    v = (double)(! p_11);
    v_21 = (double)(v_15 * (unsigned long)v);
    result = (unsigned long long)(- (- v_21 - -1.9290244148e+38));
  }
  else {
    result = ! 18446744072784500139ULL;
    v_19 = (short)(573600614LL / ((long long)v_23 + 200LL));
    v = (double)((unsigned long long)(~ ((int)p + 7)) ^ ! result);
  }
  if (0 >= (int)((unsigned short)(- (- v)))) {
    v = (double)((unsigned long long)((int)p_11 + ((int)v_13 + 202158299)) + ~ (
                 result / 18446744073709551542ULL));
    v_7 = (long long)(~ ((int)p / ((int)p_9 + 500)) - (int)(~ (- p)));
    result = (unsigned long long)(- ((int)p % ((int)p + 209)) / ((int)(
                                                                 (double)(
                                                                 p_4 * (long long)p) - (
                                                                 v - (double)v_7)) + 338));
  }
  else {
    v_13 = (char)(((long long)p_17 | (long long)p_9 * p_4) * (long long)v_19);
    v_15 = (unsigned long)(! 0U);
    result = (18446744073709512136ULL % (unsigned long long)((int)v_13 + 987) - 18446744073709551494ULL) % (unsigned long long)(
             ((long long)(v_15 * 90UL) + ! p_4) + 496LL);
  }
  return result;
}

