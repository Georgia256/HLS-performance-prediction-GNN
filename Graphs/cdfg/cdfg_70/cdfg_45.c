#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181393774
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, double p_17, unsigned short p_19,
                  unsigned int p_21[1][2][5], double p_23)
{
  unsigned long long v_29;
  long v_27;
  int v_25;
  double v_15;
  signed char v_13;
  long v_11;
  unsigned long long v_9;
  unsigned short v_6;
  int v_4;
  float v;
  unsigned char result;
  v_29 = (unsigned long long)p_17;
  v_25 = 29159478;
  v_13 = (signed char)p;
  v_11 = (long)p_21[0][1][1];
  v_9 = 559100333ULL;
  v_6 = p_19;
  v_4 = (int)p_23;
  v = -1.84387020623e+38f;
  result = (unsigned char)193;
  while ((double)(~ ((int)p_19 * 13209)) - (double)(539392430U + (unsigned int)p_23) / (
                                           (p_23 + (double)v_11) + 527.) == (double)p_19) {
    v_27 = (long)(((int)v_13 + (int)p_19 * v_25) * (int)v_6);
    v_25 = (int)(- ((unsigned long long)result + v_29));
    v_11 = (long)((unsigned long)((int)p_17 - (int)v_13 / ((int)p_19 + 618)) * (
                  (unsigned long)(p_21[0][1][3] & p_21[0][0][0]) - (unsigned long)(
                  v_27 / ((long)-1.1583590389e+38f + 205L))));
  }
  while_0_break: ;
  if (4294913022UL <= (unsigned long)(! ((int)v % ((int)((char)v) * -103 + 765)))) {
    v_6 = (unsigned short)((-3.36206848506e+38 + (double)v_4) * 4294955443.);
    v_4 = (int)((unsigned long long)(~ p) - ~ (v_9 / 31882ULL));
    result = (unsigned char)(((248 % ((int)((unsigned char)-5193880064.f) + 152)) % (
                              ((int)v - v_4) + 564)) / ((int)((float)(~ v_6) * (
                                                              (float)p * 6199610880.f)) + 707));
  }
  else {
    v_15 = (double)p;
    v_13 = (signed char)(~ (3323353679UL & (unsigned long)(- v_15)));
    result = (unsigned char)((73UL % (((unsigned long)v_11 - 3529815870UL) + 653UL)) * (unsigned long)v_13);
  }
  return result;
}

