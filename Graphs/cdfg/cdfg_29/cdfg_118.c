#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 809457290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned long long p_7[2])
{
  long v_5;
  short v;
  unsigned short result;
  v_5 = (long)p;
  v = (short)p_7[1];
  result = (unsigned short)(! (((long)v * -20764L) % (((long)p + v_5) + 597L)));
  return result;
}

