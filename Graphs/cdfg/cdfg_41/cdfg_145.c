#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 294055551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, short p_7, unsigned char p_9, long long p_13[1][3],
        signed char p_17)
{
  int v_15;
  unsigned short v_11;
  unsigned long v_4;
  unsigned long v;
  int result;
  v_15 = (int)p_9;
  v_11 = (unsigned short)p_13[0][1];
  v_4 = (unsigned long)p_13[0][2];
  v = 4115348899UL;
  result = -589708989;
  v_11 = (unsigned short)((18446744073709537505ULL ^ (unsigned long long)(
                           (int)p_17 % (result + 606))) % (unsigned long long)(
                          v_4 % (((unsigned long)v_11 + v_4) + 509UL) + 21UL));
  if (- (-2 % ((v_15 - -15) + 211)) != - ((int)p_17 << (v_4 & 7UL)) % 164) {
    result = 0;
    v_4 = (unsigned long)((unsigned long long)((long long)p_7 - p) / 18446744073709536088ULL + (unsigned long long)(~ (
                          (int)p_9 | result)));
    result = (int)(- ((long long)(360450379UL / (v + 681UL)) & (long long)v_4 % (
                                                               p + 346LL)));
  }
  else result = (int)p_13[0][0];
  return result;
}

