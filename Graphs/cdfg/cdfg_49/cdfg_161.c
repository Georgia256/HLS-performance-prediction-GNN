#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 878521151
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, int p_4, unsigned long p_6, float p_8,
                 unsigned long p_11)
{
  long v_23;
  unsigned long long v_21;
  signed char v_19;
  int v_17;
  char v_15;
  int v_13;
  char v;
  unsigned int result;
  v_23 = 39210L;
  v_21 = (unsigned long long)p_4;
  v_19 = (signed char)127;
  v_17 = (int)p_11;
  v_15 = (char)-120;
  v_13 = 112647544;
  result = (unsigned int)p_11;
  while (v_13 >= (-904795782 % ((int)p_8 + 929) & ((int)v_15 - -9503))) {
    v_21 -= (unsigned long long)v_19 ^ (unsigned long long)v_17 % 18446744073259395840ULL;
    result = (unsigned int)(((int)(~ p) % 46) % (~ p_4 + 352));
    v_19 = (signed char)v_23;
    v_13 = (int)((-48104LL - (long long)((unsigned int)p_4 - result)) ^ (long long)(
                 ((int)-4.4323624698e+37 - 819965599) % (((int)v_15 + p_4) + 387)));
  }
  while_0_break: ;
  if (p_8 != (float)((unsigned int)((float)((unsigned long)p_4 % (p_6 + 597UL)) / (
                                    -94.187286377f * (float)result + 623.f)) - 4121536399U)) {
    result = (unsigned int)(925 >> ((int)((unsigned short)p_8) & 15));
    result = (unsigned int)((unsigned long)(- ((int)p + p_4)) + - ((unsigned long)result + p_6));
  }
  else {
    result = (unsigned int)(p_6 % (~ p_6 + 308UL) | 3833502424UL);
    v = (char)(((243UL % (p_11 + 324UL)) % 33055UL) * (unsigned long)(
               ~ p_4 >> (~ result & 31U)));
    result = (unsigned int)(~ v);
  }
  return result;
}

