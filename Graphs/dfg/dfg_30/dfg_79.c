#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 161143480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p)
{
  char v_5;
  long long v;
  unsigned short result;
  v_5 = (char)79;
  v = (long long)p;
  result = (unsigned short)(~ v);
  v = (long long)(! v_5);
  result = (unsigned short)((long long)result - ((long long)(! (228UL / (
                                                                p + 1002UL))) - (
                                                 (long long)(p - 116UL) + v)));
  result = result;
  return result;
}

