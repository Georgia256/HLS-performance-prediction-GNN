#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 104350894
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, char p_5, unsigned char p_9, unsigned int p_15,
                unsigned int p_23)
{
  long v_27;
  short v_25;
  long long v_21;
  long long v_19;
  signed char v_17;
  unsigned char v_13;
  unsigned char v_11;
  unsigned int v_7;
  char v;
  signed char result;
  v_27 = -1013717210L;
  v_21 = (long long)p_15;
  v_19 = 238712691LL;
  v_17 = (signed char)-105;
  v_13 = (unsigned char)p_15;
  v_7 = 63080U;
  result = (signed char)59;
  if (v_21 + (long long)v_13 < (long long)v_7) {
    v_25 = (short)0;
    v_13 = (unsigned char)(~ ((p_15 % (unsigned int)((int)v_13 + 953)) / (
                              (v_7 | (unsigned int)v_25) + 1021U)));
    v_21 = (long long)((p_23 - v_7) % ((unsigned int)-164559.827505 + 187U) & p_15);
  }
  else {
    v_17 = (signed char)(- -2.06291090005e+38f);
    v_21 = (long long)((unsigned int)p_5 % (! (23089U & p_15) + 413U));
    v_19 = (long long)(! ((long)p % (((long)result | v_27) + 697L)));
  }
  if ((long long)(379237012U + p_15) != (long long)v_17 + ~ (v_19 - v_21)) {
    v = p_5;
    result = (signed char)(- (- (p - (double)v)));
  }
  else {
    v_11 = ~ v_13;
    v_7 = (unsigned int)((int)(! p_9) / ((0 - (int)(~ v_11)) + 400));
    result = (signed char)(~ (4294876793U - v_7 * 3327799394U));
  }
  return result;
}

