#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 698963596
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned char p_5, signed char p_7, unsigned long p_9)
{
  int v_15;
  unsigned int v_13;
  long long v_11;
  long v;
  long long result;
  v_15 = (int)p_5;
  v_13 = 118978814U;
  v_11 = -47316LL;
  v = (long)p;
  result = (long long)p_9;
  while ((long long)(~ (- ((int)((short)1.71797039381e+38f) - (int)p))) >= 
         ((long long)((unsigned long)p * p_9) / (result + 65LL)) % (! (
                                                                    v_11 * result) + 714LL)) {
    v_11 = (unsigned int)v_15 & (v_13 - 4294956664U);
    v_13 = (unsigned int)p_5;
    v_15 = (int)p_9;
    result = (long long)p_5;
  }
  while_0_break: ;
  result = (long long)((! v * 11928L) / (long)(((int)(~ p) + (14643 >> (
                                                              (int)p_5 & 15))) + 912));
  return result;
}

