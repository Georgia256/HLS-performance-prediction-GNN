#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42873866
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned char p_9)
{
  int v_6;
  char v_4;
  unsigned long v;
  short result;
  v_6 = -32375;
  v_4 = (char)p;
  result = (short)9153;
  v = (unsigned long)(((long long)(v_6 * (int)p) / ((long long)p_9 * -17193LL + 40LL)) * -32684LL);
  result = (short)(0L / (long)(((int)(-7266144256.f / ((float)v + 942.f)) - (
                                (int)result - (int)v_4)) + 918));
  return result;
}

