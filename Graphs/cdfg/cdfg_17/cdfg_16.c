#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684946431
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned short p_5, double p_15, long p_17,
         long long p_21[1])
{
  unsigned char v_23;
  long long v_19;
  unsigned long v_13;
  unsigned long long v_11;
  unsigned short v_9;
  int v_7;
  double v;
  char result;
  v_23 = (unsigned char)p_17;
  v_19 = (long long)p_15;
  v_11 = 864001292ULL;
  v_9 = (unsigned short)p_15;
  v_7 = (int)p_15;
  result = (char)-98;
  if ((double)((long long)(3292571301UL | (unsigned long)-3182855936.f) + (
               v_19 | (long long)p_17)) - - (- p_15) <= 6717495490.81) {
    v_13 = (unsigned long)v_19;
    v = (((double)v_13 + p_15) + 0.) * (double)((long)(~ result) + ~ p_17);
    result = (char)(- -962.627524183);
  }
  else {
    v = (double)p_21[0];
    v_13 = (unsigned long)((p_21[0] * 1059089370LL) / ((long long)(-105. + (
                                                                   p - (double)v_23)) + 428LL));
    v_7 = (int)(~ (- p_21[0]) + (long long)(- ((double)v_19 + p_15)));
  }
  while ((p - (921076737. + v)) * (double)(- ((int)p_5 - v_7)) >= (double)(
         ((long long)((unsigned long)p * 4294950225UL) + -12123581LL / (long long)(
                                                         v_7 + 736)) / 26LL)) {
    v_13 = (unsigned long long)v_13 % ((v_11 - (unsigned long long)((long long)v_9 * 14704339LL)) + 379ULL);
    v = (double)795383512L;
    v_11 = (unsigned long long)(- p_5);
    v_7 = ! ((int)((unsigned char)p) | 159) + (int)p_5;
  }
  while_0_break: ;
  return result;
}

