#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 282860769
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[1][3][4], long p_7, int p_15)
{
  double v_13;
  unsigned int v_11;
  float v_9;
  unsigned short v_5;
  unsigned int v;
  long long result;
  v_13 = -2843770936.91;
  v_11 = (unsigned int)p[0][2][1];
  v_9 = 27.882226944f;
  v_5 = (unsigned short)p_7;
  v = 574988936U;
  result = (long long)p_15;
  while ((unsigned int)((float)(- (v + (unsigned int)v_5)) - (((float)p_7 - v_9) + -63815.f)) == v_11) {
    v_9 = v_13 - 494493761.;
    v_13 = (double)(~ p_15);
    v_11 = 4294967295U;
    v_5 = (unsigned short)((double)(((unsigned long long)p_7 - 18446744073709549843ULL) % (unsigned long long)(
                                    729497529LL * result + 447LL)) * 457.622897721);
  }
  while_0_break: ;
  result = (result * 93LL >> ((long long)(- p[0][1][3]) & 63LL)) / (! (
                                                                    result % (long long)(
                                                                    v + 644U)) + 379LL);
  return result;
}

