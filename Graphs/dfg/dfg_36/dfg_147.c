#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 578713196
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, int p_11, signed char p_19, long p_21[4])
{
  char v_17;
  signed char v_15;
  double v_13;
  unsigned long v_9;
  unsigned char v_7;
  double v_5;
  double v;
  int result;
  v_17 = (char)p_21[0];
  v_15 = (signed char)-40;
  v_13 = -382.481765871;
  v_9 = 321469463UL;
  v_7 = (unsigned char)p_11;
  v_15 = (signed char)((int)(- v_7) / ((int)v_15 + 608) + ! (56989 << (
                                                             p_21[2] & 31L)) / (
                                                          (-502633540 / (
                                                           p_11 + 235) + p_11) + 1014));
  v = (double)(((unsigned long)v_7 - ! v_9) % (unsigned long)(-32601 % (
                                                              ! p_11 + 313) + 271) + (unsigned long)(
               (int)(- (- v_13)) * (((int)v_15 + (int)v_17) * (int)p_19)));
  v_5 = (double)(signed char)69;
  result = (int)(-5623344128.f * (float)((int)((signed char)(- v)) % (
                                         (int)(((double)p - v) / ((double)p * v_5 + 850.)) + 722)));
  return result;
}

