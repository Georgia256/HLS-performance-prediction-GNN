#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 224878534
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, int p_9, unsigned int p_15, signed char p_19,
          float p_21[5][2][3])
{
  char v_25;
  long v_23;
  int v_17;
  unsigned int v_13;
  unsigned long v_11;
  unsigned char v_7;
  unsigned long long v_5;
  char v;
  short result;
  v_25 = (char)(-127-1);
  v_23 = 55090L;
  v_17 = (int)p_19;
  v_13 = (unsigned int)p_21[4][0][1];
  v_7 = (unsigned char)102;
  result = (short)-15820;
  if ((unsigned long)(- ((int)v_25 & ((int)((signed char)p) + (int)p_19))) > 
      3241282146UL + (unsigned long)((long)p_19 - ((long)p_21[4][0][1] + -983899874L))) {
    v_17 = (int)((p_21[3][1][0] / ((p + (float)p_15) + 941.f)) * (float)v_23);
    v_5 = (unsigned long long)(! (! result));
    v_11 = (unsigned long)v_7;
  }
  else {
    v_5 = (unsigned long long)v_17;
    v_17 = -7067;
    v_11 = (unsigned long)((unsigned long long)p_15 - 18446744073709551608ULL / (
                                                      29992ULL % (unsigned long long)(
                                                      (int)p_19 + 821) + 619ULL));
  }
  if ((unsigned long)((~ v_13 + (unsigned int)result) / (unsigned int)(
                      (p_9 - 96) + 492)) == ~ (776927936UL / (v_11 + 826UL) - (unsigned long)(
                                               3463557167U - (unsigned int)p_9))) {
    v = (char)(44ULL * v_5);
    v_5 = (unsigned long long)(-3325321895U);
    result = (short)((int)p / (((int)v >> (v_5 & 7ULL)) + 598) - - ((int)v_7 - -34));
  }
  else {
    v_11 = (unsigned long)(! v_13 * (p_15 | (unsigned int)v_17) - (unsigned int)(
                           (int)p_19 + (int)result));
    v_5 = (unsigned long long)(! (((long long)v_11 - -511110893LL) / 749LL));
    result = (short)(~ ((unsigned long long)((unsigned long)p_9 + 21985UL) - v_5));
  }
  return result;
}

