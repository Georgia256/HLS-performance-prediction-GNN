#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 638101577
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, signed char p_4, long p_6[3][1][4], short p_11,
                  long p_13)
{
  short v_9;
  unsigned int v;
  unsigned char result;
  v_9 = (short)p_13;
  v = (unsigned int)p_11;
  result = (unsigned char)(((long long)v / 864501466LL) / (long long)(
                           ((long)((int)v_9 % ((int)p_11 + 869)) | 4L / (
                                                                   p_13 + 121L)) + 137L));
  if ((unsigned long long)p_6[0][0][3] > 823817725ULL << ((long)(~ result) * 919332255L & 63L)) 
    result = (unsigned char)(p + -4369844885.27);
  else result = (unsigned char)p_4;
  return result;
}

