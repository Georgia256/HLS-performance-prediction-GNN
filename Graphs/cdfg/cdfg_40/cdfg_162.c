#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 173428053
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, double p_17, long long p_19)
{
  char v_21;
  unsigned short v_15;
  unsigned long long v_13;
  unsigned char v_10;
  signed char v_8;
  unsigned int v_6;
  unsigned char v_4;
  float v;
  unsigned char result;
  v_21 = (char)35;
  v_15 = (unsigned short)52898;
  v_13 = 18446744073709491224ULL;
  v_10 = (unsigned char)139;
  v_6 = 60038U;
  v = (float)p;
  result = (unsigned char)p;
  if ((double)(~ v_15) * - p + p_17 >= (double)((255LL - - p_19) / (long long)(
                                                (49648UL + (unsigned long)(
                                                 25392 >> ((int)v_21 & 15))) + 230UL))) {
    v_4 = (unsigned char)(~ (short)11088);
    result = (unsigned char)v_13;
    v_8 = (signed char)(- p);
  }
  else {
    v_8 = (signed char)v;
    v_4 = (unsigned char)v;
    v_8 = (signed char)(~ (! ((int)v_8 | 91)));
  }
  if (((int)(~ (! v_10)) ^ ! ((int)((signed char)v) * (int)v_8)) != (int)(
      (double)((unsigned long)((double)result * p) / (2293UL / (unsigned long)(
                                                      (int)result + 496) + 882UL)) / (
      4134619291. / (p / (p + 820.) + 96.) + 826.))) {
    v_8 = (signed char)18206.6640625f;
    result = (unsigned char)v_8;
    result = (unsigned char)((unsigned int)((int)((unsigned char)v) + (int)v_4) * (
                             v_6 ^ 41U) | (unsigned int)result);
  }
  else result = (unsigned char)0;
  return result;
}

