#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 774100019
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, short p_5[1], unsigned char p_7, char p_9,
         short p_11)
{
  double v_25;
  long long v_23;
  long long v_21;
  char v_19;
  long v_17;
  unsigned int v_15;
  double v_13;
  long v;
  long result;
  v_25 = 2.97826525154e+38;
  v_23 = (long long)p;
  v_21 = (long long)p;
  v_19 = (char)p;
  v_17 = (long)p_9;
  v_13 = (double)p_7;
  v = -17582L;
  result = 24757L;
  if (1.84467440737e+19 == 0. / ((double)((int)v_19 << (v_23 & 7LL)) / (
                                 v_25 + 646.) + 647.)) {
    result = (long)(335045459968. / ((v_13 * 50189.) / ((double)(20526ULL * p) + 129.) + 969.));
    v = (long)((long long)(~ v_17 ^ (long)v_19) * v_21);
    v_13 = (double)p_9;
  }
  else {
    v_25 = (double)(unsigned char)153;
    v_13 = (double)(result / (long)((int)p_7 + 179));
    result = (long)(((431129211LL - v_23) * 36279141LL) % ((long long)(
                                                           (double)((int)p_7 / (
                                                                    (int)p_9 + 565)) + 
                                                           (double)p_5[0] / (
                                                           v_25 + 991.)) + 206LL));
  }
  while (((p - (unsigned long long)v) >> (result & 63L)) + (unsigned long long)(
         ((int)p_5[0] + (int)p_7) % ((int)p_9 * (int)p_11 + 961)) == (unsigned long long)(
         457588672LL * ! ((long long)p_11 ^ 10266LL))) {
    v_15 = v_13 / 7.47995299544e+37;
    v = (long)(! (12601U - (v_15 ^ (unsigned int)p_11)));
    v_13 = (double)p;
    result = (long)(((int)(~ p_11) - (int)((short)((double)p - v_13))) * (int)(
                    (v_13 - (double)v) - (double)(4294944105U * (unsigned int)p_11)));
  }
  while_0_break: ;
  return result;
}

