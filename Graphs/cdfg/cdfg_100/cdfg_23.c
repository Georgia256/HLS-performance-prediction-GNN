#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 297701320
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long long p_9, short p_13, short p_19)
{
  unsigned long v_21;
  double v_17;
  unsigned int v_15;
  unsigned long long v_11;
  unsigned char v_7;
  long long v_5;
  signed char v;
  long result;
  v_21 = (unsigned long)p_19;
  v_17 = -2416119799.96;
  v_15 = 866482498U;
  v_7 = (unsigned char)p_9;
  v_5 = (long long)p;
  v = (signed char)p_9;
  result = (long)p_9;
  while (((int)v_7 << (~ v_15 & 7U)) + (int)v != (int)(((44. + v_17) - (double)(
                                                        62439ULL ^ p_9)) / (
                                                       (double)p_19 + 812.))) {
    v_5 = v_21 & 37286UL;
    v_15 = (unsigned int)(v_5 + (long long)((int)(! p_13) >> ((int)((short)-3.00393864662e+38f) & 15)));
    v_5 = ((long long)(-21819L & result) / (v_5 / (long long)((int)p + 159) + 581LL)) * (
          (long long)((unsigned long)p_13 - 4294955796UL) / ((v_5 >> (
                                                              (int)v & 63)) + 900LL));
    v = (signed char)p_9;
  }
  while_0_break: ;
  while ((long long)v * ((long long)p + v_5) < -91LL) {
    v_7 = (int)v_7 / 137;
    v_11 = ((p_9 ^ 18446744073709551572ULL) * 1967356359ULL) / 18446744073709521765ULL;
    v = (signed char)(! (p_9 + v_11 / (unsigned long long)((int)p_13 + 531)));
    v_5 = (long long)((unsigned long long)(- p) % (~ (p_9 / 34015ULL) + 380ULL));
  }
  while_0_break_0: ;
  return result;
}

