#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 673231075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p)
{
  double v_13;
  short v_11;
  signed char v_8;
  signed char v_6;
  char v_4;
  unsigned long long v;
  signed char result;
  v_13 = 3996411401.99;
  v_8 = (signed char)85;
  v_6 = p;
  v_4 = (char)-108;
  result = p;
  v = (unsigned long long)(v_13 * (double)(13879 % ((int)p % ((int)p + 950) + 721)));
  while (! (v * (unsigned long long)v_4) * (unsigned long long)(644242814LL % (long long)(
                                                                (int)(- result) + 872)) < 18446744073709511018ULL) {
    v_11 = (int)v_8 | 76;
    v = (unsigned long long)((unsigned int)(! v_4) - ((unsigned int)v_11 | 4294931306U)) - v;
    result = (signed char)(- 375.930981352);
    result = (signed char)((((int)p / ((int)p + 112)) % ((int)result + 369)) * - (
                           111 / ((int)v_6 + 737)));
  }
  while_0_break: ;
  return result;
}

