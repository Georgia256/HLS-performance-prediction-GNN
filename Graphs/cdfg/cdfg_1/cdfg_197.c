#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345574045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned int p_11, int p_13,
                unsigned long long p_15, unsigned long p_27)
{
  unsigned int v_29;
  unsigned char v_25;
  unsigned char v_23;
  unsigned char v_21;
  int v_19;
  signed char v_17;
  double v_9;
  short v_7;
  long long v_5;
  short v;
  signed char result;
  v_29 = 3996926973U;
  v_25 = (unsigned char)p_11;
  v_23 = (unsigned char)156;
  v_21 = (unsigned char)p;
  v_19 = (int)p_11;
  v_17 = (signed char)p_11;
  v_7 = (short)-23766;
  v_5 = (long long)p_13;
  v = (short)27416;
  result = (signed char)p;
  if (v_5 >= (long long)(((unsigned long)(51268U * (unsigned int)v) | p_27) >> (
                         (int)v_7 & 31))) {
    v_5 = (long long)(~ (((unsigned long long)v_19 / (p_15 + 996ULL)) * (unsigned long long)v_21));
    result = (signed char)(23385ULL - (p_15 * (unsigned long long)v_7 - (unsigned long long)v_17));
    v = (short)p_11;
  }
  else {
    v_5 = ((long long)v_23 - v_5) / (long long)(((unsigned long)v_25 - p_27) + 594UL) + (long long)(
          v_29 % 4294941254U);
    v = (short)6642;
    v_7 = (short)(- -43254);
  }
  while (~ ((unsigned int)v % 813543218U) - (unsigned int)(17780 + (int)(
                                                           p - p)) >= 3874656369U) {
    v_9 = (unsigned long long)v_7 - ((unsigned long long)v_5 ^ 18446744073709529542ULL);
    v_7 = (short)((p_11 + p_11 * p_11) | ((unsigned int)(- p_13) - (p_11 | 41678U)));
    v_5 = (long long)-5.86218783235e+37f;
    v = (short)((double)((int)v_9 * ((int)v_7 + (int)((short)v_9))) / (
                - (p / (v_9 + 744.)) + 13.));
  }
  while_0_break: ;
  return result;
}

