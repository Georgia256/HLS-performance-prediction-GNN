#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 596188891
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p[5], unsigned long p_5, unsigned long long p_9)
{
  short v_7;
  int v;
  long result;
  v_7 = (short)-32601;
  v = (int)(~ (p_5 & (unsigned long)v_7) << (- p_9 & 31ULL));
  result = (long)(- ((int)p[4] % (v + 586)) | 127);
  return result;
}

