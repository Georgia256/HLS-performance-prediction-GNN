#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 863302000
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, long p_17[3][2], unsigned long p_19)
{
  unsigned long v_15;
  unsigned long v_13;
  unsigned long long v_11;
  double v_9;
  unsigned long v_6;
  unsigned short v_4;
  unsigned long v;
  char result;
  v_15 = 28139UL;
  v_13 = (unsigned long)p_17[1][0];
  v_11 = (unsigned long long)p_19;
  v_9 = 9693061852.58;
  v_6 = 3576691568UL;
  v_4 = (unsigned short)p_17[2][0];
  if ((unsigned long)(((double)p + (double)p_17[0][0] * -2.28844206022e+38) + (double)v_11) == 
      p_19 % (unsigned long)((int)v_4 + 124)) {
    result = (char)v_15;
    v = (unsigned long)(- p);
    v_4 = (unsigned short)((unsigned long)(- p & (p + p)) % ((((unsigned long)v_4 | v_13) - (unsigned long)(- p)) + 498UL));
  }
  else {
    result = (char)v_15;
    v_11 = (unsigned long long)(! (((int)v_4 % -8) * 28766));
    v = (unsigned long)(! (- (p % (p + 739L))));
  }
  while ((unsigned long long)((586084553UL % (~ v + 989UL)) % (((unsigned long)(
                                                                (int)v_4 & 195) & v_6) + 950UL)) < ! (
         (unsigned long long)(p + (long)v_9) * ! v_11)) {
    v_11 = (unsigned long long)((unsigned long)((long)(~ v_4) / (-31664L / (
                                                                 p + 422L) + 298L)) / 3350137851UL);
    v_4 = (unsigned short)(((unsigned long)p / (v_13 + 634UL) + (unsigned long)(
                            (int)result - 160)) / (unsigned long)(- p + 826L));
    v_6 = (unsigned long)(! (((long)result - p) ^ 8208L));
  }
  while_0_break: ;
  return result;
}

