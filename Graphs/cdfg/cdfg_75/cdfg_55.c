#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203328908
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned long long p_13)
{
  double v_15;
  short v_11;
  long v_9;
  long v_7;
  long v_5;
  int v;
  unsigned long result;
  v_15 = (double)p;
  v_9 = 51L;
  v_7 = (long)p_13;
  v_5 = (long)p_13;
  v = 933052646;
  result = (unsigned long)p_13;
  v_11 = (short)(! v_7);
  while ((long)v + - ((long)p - v_5) <= v_7) {
    v_7 = v_9 % ((long)-2.53303246008e+38 + 792L);
    v_9 = (long)(- v_15);
    v_11 = (short)((unsigned long long)((v * (int)v_11) % (! v + 197)) + (
                   (18446744073122544871ULL & (unsigned long long)v_7) | (unsigned long long)(
                   (float)v_9 - p)));
    v = (int)(~ p_13);
  }
  while_0_break: ;
  return result;
}

