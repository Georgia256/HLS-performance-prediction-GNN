#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 965365444
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p[5], unsigned char p_4, unsigned int p_7,
                unsigned long long p_9[2], unsigned short p_15)
{
  int v_17;
  long long v_13;
  unsigned long long v_11;
  long v;
  signed char result;
  v_17 = 32508;
  if (- ((unsigned int)((int)p_15 * p[4]) - ! p_7) == (unsigned int)(- v_17)) {
    v = (long)((unsigned long long)(0 / -13920LL) + 18446744073709523912ULL * - p_9[1]);
    v = (long)(- (46484UL * ((unsigned long)v - (unsigned long)p_7)));
  }
  else {
    v_13 = (long long)(~ v_17);
    v_11 = (unsigned long long)(v_13 * (long long)((int)p_15 % ((int)((unsigned short)-107.738026748) + 761)));
    v = (long)(v_11 / 193ULL);
  }
  result = (signed char)((long)(p[1] * 15391 - (int)p_4) ^ ~ (v ^ 875455306L));
  return result;
}

