#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017872490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, unsigned long long p_11[2][5][1], unsigned long long p_13)
{
  unsigned short v_9;
  unsigned char v_7;
  long long v_5;
  unsigned int v;
  long result;
  v_9 = (unsigned short)p;
  v_5 = (long long)p_13;
  result = (long)p_13;
  if (~ (- (p_13 * (unsigned long long)v_5)) < p_11[0][2][0]) {
    v_7 = (unsigned char)p_11[0][4][0];
    v_5 = (long long)(- ((long)v_9 & result / 663577513L));
    v = (unsigned int)((unsigned long long)(! (p * -41L)) / (((unsigned long long)v_5 / 18446744072702610621ULL) * (unsigned long long)(! v_7) + 201ULL));
  }
  else v = 4U;
  result = (long)(! (v + 30901U) % 116U);
  return result;
}

