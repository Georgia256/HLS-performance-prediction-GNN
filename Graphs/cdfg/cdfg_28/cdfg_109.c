#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 592322405
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned long long p_5, short p_11)
{
  short v_21;
  short v_19;
  unsigned int v_17;
  signed char v_15;
  short v_13;
  char v_9;
  unsigned long long v_7;
  double v;
  float result;
  v_21 = (short)p_5;
  v_19 = p_11;
  v_17 = 3671647011U;
  v_15 = (signed char)p;
  v_13 = (short)-14841;
  v = 618.445147766;
  result = (float)p;
  if ((long)p_11 != 56894L % ((long)((float)p_11 / (result + 79.f)) + 1009L)) {
    v_17 = (unsigned int)(! ((126 & (int)p) + 195));
    v_9 = (char)((long long)((122 << 6) - ((int)v_19 ^ (int)p_11)) % (
                 - ((long long)result + -7489LL) + 920LL));
    v_19 = (short)-22379;
  }
  else {
    v_19 = (short)(((int)v_13 % ((int)v_21 + 234)) * (int)(! v_21) - (int)v_15);
    v = (double)(- result);
    v_9 = (char)(p_5 - (unsigned long long)((long)(- p_11) / ((long)v_15 / 1035059667L + 152L)));
  }
  if ((unsigned long long)(- (~ ((int)((unsigned short)result) - (int)p))) > ~ (
      ((unsigned long long)p_11 * 18446744073709498243ULL) % (unsigned long long)(
      (int)v_9 + 457))) {
    v_9 = (char)((unsigned long long)((unsigned long)((int)v_13 - (int)v_15) | (
                                      (unsigned long)v + 3569624852UL)) * (
                 (30846ULL * (unsigned long long)v_17) % (624437834ULL % (unsigned long long)(
                                                          (int)v_19 + 991) + 44ULL)));
    v_7 = (unsigned long long)(- result);
    result = (float)(((unsigned long long)((int)p / ((int)((unsigned short)v) + 61)) ^ (
                      p_5 ^ v_7)) | (unsigned long long)((int)(! v_9) * (int)(! p_11)));
  }
  else result = (float)p;
  return result;
}

