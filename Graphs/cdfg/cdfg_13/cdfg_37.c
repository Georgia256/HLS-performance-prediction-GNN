#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 876136297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, int p_4[2], short p_6,
                   signed char p_11, double p_15)
{
  float v_21;
  double v_19;
  float v_17;
  unsigned int v_13;
  unsigned char v_9;
  double v;
  unsigned short result;
  v_21 = (float)p_11;
  v_19 = -9734948621.14;
  v_17 = (float)p;
  v_13 = 47777U;
  v_9 = (unsigned char)p_11;
  v = -6726042834.99;
  result = (unsigned short)19990;
  while ((unsigned long long)(! (((int)((signed char)p_15) & -67) ^ (int)(
                                 v_17 - (float)p))) > 18446744073066629861ULL) {
    result = v_19 * -51538.;
    v_19 = (double)(~ ((unsigned long long)v_21 / (((unsigned long long)p_11 + p) + 252ULL)));
    v_13 = (unsigned int)(! (21093LL & (long long)p_15) | (long long)(
                          (int)v_9 % (~ p_4[1] + 946)));
    v_17 = (float)((((int)v_9 - -105) << (((int)p_6 + 75) & 31)) / ((
                                                                    p_4[0] / (
                                                                    (int)p_11 + 617) + 
                                                                    (int)((signed char)v) % (
                                                                    (int)p_11 + 512)) + 52));
  }
  while_0_break: ;
  if ((unsigned int)result != v_13) {
    v = (double)v_9;
    result = (unsigned short)v;
    result = (unsigned short)((p + (unsigned long long)p_4[1]) % (p + 564ULL) | (unsigned long long)(
                              ((int)p_6 + (int)result) / ((int)(~ result) + 188)));
  }
  else result = (unsigned short)p_11;
  return result;
}

