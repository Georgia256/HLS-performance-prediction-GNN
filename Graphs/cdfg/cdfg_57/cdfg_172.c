#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176042776
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, long p_4[3][2], char p_6, int p_8[4][1][3],
        long long p_10)
{
  unsigned short v;
  int result;
  v = (unsigned short)p_8[2][0][2];
  result = -61571;
  if (((long long)((unsigned long)p_4[1][1] - (26018UL - (unsigned long)result)) | ! (
       (long long)v + p_10)) > -33317784LL) result = (int)((p_10 + -24LL) % (long long)(
                                                           ~ p_4[0][0] + 753L));
  else result = (int)(~ (60446LL ^ 207885039LL / (long long)(p_8[2][0][2] + 414)));
  if ((long long)(! ((int)p_6 / (result + 229) + (int)-7211643392.f)) >= 
      (long long)p_8[2][0][1] - (14364LL | (p_10 ^ (long long)p))) result = (int)(
                                                                   246196059U % (unsigned int)(
                                                                   (int)p + 701) & (unsigned int)(
                                                                   -791.571135924 - (double)(
                                                                   1072884677UL - (unsigned long)p_4[0][0])));
  else result = (int)(! 1015657381LL);
  return result;
}

