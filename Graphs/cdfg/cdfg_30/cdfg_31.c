#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177620095
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, long p_13[2], unsigned long long p_19)
{
  unsigned long long v_17;
  long long v_15;
  short v_11;
  unsigned int v_9;
  unsigned long v_7;
  double v_5;
  unsigned long v;
  unsigned int result;
  v_17 = 18446744073709498314ULL;
  v_15 = 3867LL;
  v_11 = (short)-5961;
  v_9 = 22508U;
  v_7 = (unsigned long)p_19;
  v_5 = (double)p;
  v = 21728UL;
  result = 3865737165U;
  while (v_7 < (unsigned long)((- p_13[1] + (long)(~ v_11)) % (long)(
                               ((int)p >> (v % 4915UL & 7UL)) + 437))) {
    v_15 = v_17 * ((unsigned long long)v_15 / 871400188ULL);
    v_9 = (unsigned int)((unsigned long long)((int)(- p) / -24) / ((11607ULL * p_19) % (unsigned long long)(
                                                                   (int)p + 254) + 43ULL));
    v_5 = (double)p_13[0];
    v_11 = (short)((unsigned long)p_13[1] + ! (! v_7));
  }
  while_0_break: ;
  while ((double)(v * (unsigned long)(! ((int)p - (int)p))) < v_5) {
    v_5 = (unsigned long)v_11 + ((unsigned long)v_9 - v_7 / 730694622UL);
    v_11 = (short)((20114 + (int)p) - - ((int)p & (int)p));
    v_7 = ~ 216UL;
    v = (unsigned long)((int)(-1.39809863772e+38 / ((double)((int)p / (
                                                             (int)((signed char)595.45004426) + 975)) + 456.)) * (
                        (int)p / ((int)p + 982) - (int)p));
  }
  while_0_break_0: ;
  return result;
}

