#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 169233779
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long long p_5, double p_7, double p_11,
           unsigned short p_19)
{
  unsigned long v_25;
  signed char v_23;
  signed char v_21;
  unsigned long long v_17;
  unsigned long v_15;
  int v_13;
  short v_9;
  unsigned short v;
  double result;
  v_25 = 527256049UL;
  v_23 = (signed char)42;
  v_21 = p;
  v_17 = 668644111ULL;
  v_15 = (unsigned long)p_7;
  v_13 = -50117;
  v_9 = (short)p_19;
  while ((int)v_23 != (int)((signed char)2.51182848455e+38)) {
    v_25 += 802341829UL;
    v = (unsigned short)(~ (! (- v_17)));
    v_9 = (short)v_17;
    v_23 = (signed char)(- ((int)v * (int)p) + (8786 - 8278 * (int)p));
  }
  while_0_break: ;
  if ((long long)((int)((unsigned short)(((double)p + 883.858388548) * (double)(
                                         -27613 / ((int)p + 749)))) / (
                  (int)p_19 + 195)) > ~ ((long long)((unsigned long)v_9 % 4110544830UL) + (
                                         50594LL - (long long)v_21))) {
    v_9 = (short)((unsigned long long)(126UL - v_15) / (! v_17 + 845ULL) + (unsigned long long)(
                  p_11 / -2.45434415546e+36));
    v = (unsigned short)((! p_5 + (unsigned long long)(p_7 * (double)v_9)) + (unsigned long long)(
                         (-34059795. / (p_11 + 668.)) / ((double)(! v_13) + 749.)));
    result = (double)(- (3446UL / (unsigned long)((int)v + 276)) & (unsigned long)(
                      (int)(-1.49995122355e+38f / ((float)v + 129.f)) - 
                      (int)p % 160));
  }
  else result = (double)(- (- (-203.475463867f + (float)p_19)));
  return result;
}

