#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 781952165
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned short p_9, short p_15, long long p_17, int p_19)
{
  unsigned int v_29;
  unsigned char v_27;
  short v_25;
  signed char v_23;
  unsigned int v_21;
  unsigned long long v_13;
  unsigned char v_11;
  unsigned int v_7;
  short v_5;
  unsigned long v;
  int result;
  v_29 = 4294910855U;
  v_27 = (unsigned char)p;
  v_25 = (short)5966;
  v_23 = (signed char)-70;
  v_21 = (unsigned int)p;
  if ((unsigned long long)(~ p_15) * ((18446744073293412778ULL << ((unsigned long long)p & 63ULL)) * (unsigned long long)p_19) < (unsigned long long)(
      (double)(-1057460924LL >> ((v_29 + 24609U) & 63U)) / (p + 335.))) {
    v_25 = (short)(37624138UL % (unsigned long)((int)p_9 + 945));
    v_7 = (unsigned int)((long long)((int)(! p_15) * (int)(- v_27)) + - (
                         (long long)v_25 * p_17));
    v_25 = (short)p_19;
  }
  else {
    v_7 = (unsigned int)(! (((int)p_9 % (p_19 + 208)) * (int)((double)p_17 - -3627471829.71)));
    v_23 = (signed char)62;
    v_21 = 3897816929U;
  }
  if ((double)(! (- p_19) * 120) != ((double)(~ p_9) - ((double)v_21 + p)) - (double)(- (
                                    (int)v_23 - (int)v_25))) {
    v_5 = (short)((14864LL + (long long)((unsigned long)v_7 - 4294931714UL)) - -77781LL);
    v = (unsigned long)(! (signed char)-8);
    result = (int)(((unsigned long long)v + 18446744073709522132ULL * (unsigned long long)p) | (unsigned long long)v_5);
  }
  else {
    v_13 = (unsigned long long)(! 5031L);
    v_11 = (unsigned char)(! (short)-2390);
    result = (int)(((unsigned long long)p_9 * ((unsigned long long)v_11 + v_13)) * (unsigned long long)(! p_15));
  }
  return result;
}

