#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042006570
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, unsigned char p_5, long p_7, long long p_9[2][1][4])
{
  double v_11;
  unsigned long long v;
  int result;
  v_11 = 942.334840038;
  if ((double)(! p_9[0][0][3]) > v_11) result = (int)(! (! ((long long)p + -28670LL)));
  else {
    v = (unsigned long long)(~ (- p_7));
    result = (int)(! ((v >> (p & 63L)) - (unsigned long long)(- p_5)));
  }
  result = result;
  return result;
}

