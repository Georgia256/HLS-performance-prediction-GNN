#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 51531572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, long long p_11[1][4][5])
{
  short v_13;
  float v_9;
  unsigned long v_7;
  unsigned long v_5;
  long v;
  unsigned long result;
  v_13 = (short)6427;
  v_9 = 8744126464.f;
  v_7 = (unsigned long)p;
  v_5 = (unsigned long)p;
  v = (long)p_11[0][2][1];
  result = (unsigned long)p_11[0][1][1];
  v_7 = (unsigned long)((int)v_13) % ((unsigned long)(! v) % (v_7 % (unsigned long)(
                                                              v + 329L) + 972UL) + 820UL);
  while ((long long)((79404102UL - (result | (unsigned long)v)) << ((
                                                                    20LL - 
                                                                    p / (long long)(
                                                                    v_5 + 761UL)) & 31LL)) < 
         (787382910LL % (p * p + 536LL)) / (long long)(v_7 + 1015UL)) {
    result = (unsigned long)p_11[0][1][1];
    v_5 = (unsigned long)((long long)((v_9 / ((float)p + 938.f)) / ((float)(
                                                                    p / 3478099285LL) + 501.f)) % (
                          (p % (p_11[0][3][4] + 113LL) + (long long)(
                           -45947L - v)) + 59LL));
    v_7 = (unsigned long)(- ((unsigned long long)(- p) - 55496ULL));
  }
  while_0_break: ;
  return result;
}

