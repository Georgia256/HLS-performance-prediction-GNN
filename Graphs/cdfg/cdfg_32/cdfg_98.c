#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432312593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, float p_11, unsigned char p_15, long p_23)
{
  long long v_25;
  short v_21;
  unsigned char v_19;
  short v_17;
  unsigned long long v_13;
  float v_9;
  unsigned long v_7;
  float v_4;
  short v;
  short result;
  v_25 = -963319826LL;
  v_21 = (short)p;
  v_19 = (unsigned char)p_23;
  v_17 = (short)-1778;
  v_13 = (unsigned long long)p_23;
  v_9 = p_11;
  v_7 = 611866704UL;
  v_4 = (float)p_23;
  v = (short)-13431;
  if ((int)(- (! v_19)) >= (int)((unsigned char)((float)(v_13 - (unsigned long long)(
                                                         162 - (int)((unsigned char)p_11))) / (
                                                 v_9 + 657.f)))) {
    result = (short)((long)v_4 | ((long)v_19 + (long)v_21 / (p_23 + 161L)));
    v_13 = (unsigned long long)(- (~ ((int)p_15 * (int)p_15)));
    v_9 = (float)((unsigned long long)(((unsigned int)v_17 % 48304U) / 443790379U) - (
                  18446744073709550625ULL - (unsigned long long)(~ p_15)));
  }
  else {
    result = (short)((- v_25 * 80724690LL) % -453607065LL);
    v_13 = (unsigned long long)(v_9 - (float)((unsigned long)((int)result * 26726) / (
                                              ~ v_7 + 581UL)));
    result = (short)-14965;
  }
  while ((int)v >= 36 / ((int)((unsigned char)(v_4 * 471186048.f)) + 924) << (
                   ((unsigned long long)p | 18446744073709545789ULL) / (unsigned long long)(
                   ! v_7 + 831UL) & 31ULL)) {
    v = v_9 / 6066.f;
    v_17 = (short)(832103680ULL / (((unsigned long long)(- p_15) - ! v_13) + 111ULL));
    v_7 = (unsigned long)(12324ULL % ((v_13 + (unsigned long long)p_15) % (unsigned long long)(
                                      (52505 & (int)v_17) + 797) + 973ULL));
    v = (short)(! ((int)v - (int)result) - (int)p_11);
  }
  while_0_break: ;
  return result;
}

