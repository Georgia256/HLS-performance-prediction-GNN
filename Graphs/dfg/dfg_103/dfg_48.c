#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 152703228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p[5][5], char p_7, long p_9[3][1],
                  unsigned short p_11, long p_13)
{
  unsigned long long v_5;
  unsigned short v;
  unsigned long result;
  v = (unsigned short)p_7;
  result = 138992279UL;
  v_5 = (unsigned long long)((-6.26660657764e+35 * (p[1][3] / 80.)) * (double)(- (
                             result * (unsigned long)((long)p_11 % (p_13 + 704L)))));
  result = (unsigned long)(! (- (~ (unsigned short)2935)));
  v = (unsigned short)(((unsigned long)(-14 / (((int)p_7 << (p_9[2][0] & 7L)) + 757)) % (
                        (result & (unsigned long)p_7) / (unsigned long)(
                        (int)(~ p_11) + 668) + 620UL)) / (unsigned long)(
                       - (p_13 + (long)v / (p_13 + 312L)) + 338L));
  result = (unsigned long)((unsigned long long)((p[2][0] - p[2][4]) - p[3][2]) * ! (
                           (18446744072747489503ULL >> ((int)v & 63)) + v_5));
  return result;
}

