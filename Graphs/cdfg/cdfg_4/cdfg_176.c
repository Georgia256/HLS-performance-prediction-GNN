#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 268672552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, short p_11, unsigned long long p_13)
{
  double v_21;
  long v_19;
  char v_17;
  long v_15;
  unsigned long v_8;
  unsigned int v_6;
  signed char v_4;
  signed char v;
  signed char result;
  v_21 = 666.692150685;
  v_17 = (char)p_13;
  v_15 = 46978L;
  v_6 = 53349U;
  v_4 = (signed char)p;
  result = (signed char)68;
  v_19 = (long)(~ ((int)((signed char)v_21) & (int)result) % ((int)p_11 + 47));
  if ((double)v_15 != ((double)v_17 * p) * (double)v_19) {
    v_8 = 3937UL + ((unsigned long)p / 4294945592UL + (unsigned long)7879752209.57);
    v = (signed char)(29716UL / (~ v_8 / 4294967223UL + 480UL));
    result = (signed char)((unsigned long)((unsigned int)((int)v % ((int)v_4 + 395)) * (
                                           v_6 + 4294957965U)) * 4294917433UL);
  }
  else result = (signed char)p_11;
  return result;
}

