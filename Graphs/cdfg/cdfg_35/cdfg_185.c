#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 456111069
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, long long p_5, char p_7, signed char p_9,
          long p_11)
{
  short v;
  short result;
  result = (short)p_5;
  if ((int)result == (int)(! result)) {
    v = (short)(! (78359466L * (long)(- result)));
    v = (short)(((long)((int)p_7 + (int)v) * ((long)p_9 % (p_11 + 848L))) * - p_11);
    result = (short)((long long)v ^ ~ ((long long)p - p_5));
  }
  else result = (short)(! p_5);
  return result;
}

