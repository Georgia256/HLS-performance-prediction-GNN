#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 293385511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, signed char p_13)
{
  double v_11;
  unsigned char v_8;
  signed char v_6;
  unsigned short v_4;
  signed char v;
  int result;
  v_8 = (unsigned char)240;
  v_6 = (signed char)103;
  v_4 = (unsigned short)33077;
  v = (signed char)3;
  result = (int)p_13;
  v_11 = (double)(((long long)((long)v_6 * 21565L) + ((long long)p - -25164LL)) << (
                  (377672899U * (unsigned int)v_8) * (unsigned int)(- p) & 63U));
  while ((unsigned long)v != (unsigned long)(-80 + (int)(~ v_4)) + (3383007966UL ^ (unsigned long)(
                                                                    (int)v_6 + 7719))) {
    v = (int)v_8 - -22;
    v_8 = (unsigned char)(- v_11 * (v_11 + (double)p) + (double)(434776028U * (unsigned int)(
                                                                 (int)p_13 + (int)v)));
    v_4 = (unsigned short)(((25693 - (int)p) | (int)(- v_6)) * ((int)(! v_6) * (
                                                                result % (
                                                                (int)p + 648))));
    v_4 = (unsigned short)((int)p - ~ ((int)v_8 % ((int)v_4 + 905)));
  }
  while_0_break: ;
  return result;
}

