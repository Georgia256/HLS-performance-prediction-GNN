#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 122267747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, unsigned int p_5, long long p_9,
          unsigned short p_17[4][5], double p_19)
{
  unsigned long long v_21;
  char v_15;
  unsigned int v_13;
  long v_11;
  unsigned long long v_7;
  unsigned long long v;
  float result;
  v_11 = -904932169L;
  v = (unsigned long long)p_19;
  v_21 = v >> 16;
  if ((unsigned long long)(4294955435. / (p + 1010.)) / (((unsigned long long)(~ p_5) | ! v_21) + 38ULL) <= (unsigned long long)(
      - (4294967199U + p_5) % (p_5 % ((unsigned int)(- p) + 258U) + 100U))) {
    v = (unsigned long long)v_11;
    v_7 = (unsigned long long)(~ p_9);
    result = (float)(((v / ((unsigned long long)p + 422ULL)) / (unsigned long long)(
                      - p_5 + 648U)) % (! (! v_7) + 511ULL));
  }
  else {
    v_15 = (char)((unsigned long)(- p_17[0][0]) + - ((unsigned long)p_19 * 599048390UL));
    v_13 = (unsigned int)v_15;
    result = (float)v_13;
  }
  return result;
}

