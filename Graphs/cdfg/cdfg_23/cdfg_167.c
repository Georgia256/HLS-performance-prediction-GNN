#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24450679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned long long p_7, long long p_9, double p_11,
                  unsigned long long p_15)
{
  int v_19;
  double v_17;
  short v_13;
  long v_5;
  unsigned long v;
  unsigned char result;
  v_19 = (int)p;
  v_17 = (double)p_7;
  v_13 = (short)((unsigned long long)(3813. / (v_17 + 107.) + p_11 / 525.) / (
                 0ULL % ((p_7 & p_15) + 102ULL) + 799ULL));
  if (((p_7 & p_15) * (unsigned long long)(v_17 + -7073823744.)) * 4294964068ULL > (unsigned long long)v_19) {
    v = (unsigned long)((- p_11 + 0.) + (double)(! (~ v_13)));
    v_5 = (long)p_9;
    result = (unsigned char)((unsigned long long)(v % (unsigned long)(
                                                  (int)p + 415) - (unsigned long)(- v_5)) / (
                             - p_7 + 164ULL));
  }
  else result = (unsigned char)(! p_15);
  return result;
}

