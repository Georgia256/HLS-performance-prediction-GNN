#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 461535076
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p)
{
  unsigned char v_11;
  double v_9;
  char v_7;
  char v_5;
  unsigned long long v;
  unsigned char result;
  v_11 = (unsigned char)p;
  v_9 = 159.976635549;
  v_7 = (char)-19;
  v_5 = (char)p;
  v = (unsigned long long)p;
  result = (unsigned char)p;
  v_9 = (double)(- (((long)v_11 & p) & ((long)v_9 | 60410L)));
  result = (unsigned char)((((unsigned long long)p * v) * (unsigned long long)(
                            (int)v_5 & (int)v_7)) / ((unsigned long long)(
                                                     (736.00131511 + (double)result) - (double)(
                                                     43 * (int)((char)v_9))) + 507ULL));
  return result;
}

