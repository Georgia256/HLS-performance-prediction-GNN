#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 590514058
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p[4][1], int p_13, long long p_15,
                 signed char p_17, unsigned short p_23)
{
  unsigned char v_29;
  unsigned int v_27;
  unsigned long long v_25;
  float v_21;
  unsigned long long v_19;
  unsigned int v_11;
  char v_9;
  short v_7;
  int v_4;
  int v;
  unsigned int result;
  v_29 = (unsigned char)p[3][0];
  v_19 = 480566803ULL;
  v_11 = (unsigned int)p_13;
  v_9 = (char)p_23;
  v_4 = (int)p[0][0];
  result = 3645469268U;
  if (734128040U == (unsigned int)v_29) {
    v_21 = (float)((unsigned long long)(((long long)p_23 * p_15) / (long long)(
                                        (-54783 + p_13) + 415)) * (18446744073124287264ULL % (
                                                                   v_19 + 111ULL) >> (
                                                                   ((int)p_23 - (int)((unsigned short)1.01540805231e+38)) & 63)));
    v_19 = (unsigned long long)(0.f / (v_21 + 816.f));
    v_11 = (unsigned int)(((unsigned long long)p_15 & (unsigned long long)result % (
                                                      v_19 + 253ULL)) + 18446744073637846032ULL);
  }
  else {
    v_27 = (unsigned int)v_9;
    v_25 = (unsigned long long)(! ((unsigned int)v_9 % (v_27 + 785U)) ^ (unsigned int)(- (
                                (int)p_23 << 12)));
    v_9 = (char)((unsigned long long)(~ v_9) - (v_25 - 18446744073709551597ULL) * (unsigned long long)v_9);
  }
  if (! (v_11 * (unsigned int)(- v_9)) > ~ (! ((unsigned int)p_17 ^ 56459U))) {
    v_7 = (short)v_9;
    v = (int)(p[0][0] % (long long)((int)v_7 + 63));
    result = (unsigned int)(-87 & (! v - ((int)6855536640.f - v_4)));
  }
  else {
    v_11 = (unsigned int)p_15;
    v_9 = (char)(~ (- (v_11 - (unsigned int)p_13)));
    result = (unsigned int)v_9;
  }
  return result;
}

