#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 716936592
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p[3][4], double p_5,
                  unsigned long long p_7, unsigned long p_9)
{
  unsigned long v_15;
  int v_13;
  double v_11;
  unsigned long long v;
  unsigned long result;
  v_15 = (unsigned long)p_5;
  v_13 = (int)p_7;
  v_11 = (double)p[0][1];
  result = 4294930658UL;
  v = 42ULL;
  while (v + p[2][2] > (unsigned long long)(950UL & (unsigned long)(-30872L + (long)p_5)) + ~ (
                       p_7 % (unsigned long long)(p_9 + 451UL))) {
    v = v_15 % ((unsigned long)((double)v_13 * (v_11 - 6950.)) + 521UL);
    v_15 = (unsigned long)(! (- (p_7 - 72ULL)));
    v_11 = (double)p[2][2];
    v = ((v ^ (unsigned long long)p_9) + (unsigned long long)(p_9 % 4294967232UL)) + (unsigned long long)(
        12699UL << (v & 31ULL));
  }
  while_0_break: ;
  return result;
}

