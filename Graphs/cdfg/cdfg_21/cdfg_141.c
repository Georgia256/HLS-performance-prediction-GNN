#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 493806020
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p[4][5], unsigned short p_9,
                       long long p_11, long p_17)
{
  unsigned long v_15;
  long v_13;
  signed char v_7;
  unsigned short v_5;
  unsigned char v;
  unsigned long long result;
  v_15 = 4294962126UL;
  v_13 = (long)p_11;
  v_5 = (unsigned short)42308;
  v = (unsigned char)p_17;
  result = 21566ULL;
  v_7 = (signed char)(~ (p_17 % (p_17 + 251L)) >> ((long)1.94947717228e+38 & 31L));
  while (- (((unsigned long long)-7021610700.46 / (result + 440ULL)) * (
            (unsigned long long)v * p[0][0])) < ((unsigned long long)(~ v_5) % (
                                                 (18446744073709488978ULL - (unsigned long long)v_7) + 532ULL)) * (unsigned long long)(
                                                (int)(- p_9) << (p_11 % (long long)(
                                                                 v_13 + 712L) & 15LL))) {
    v_5 = (unsigned short)p_17;
    v_15 = - (v_15 % (unsigned long)((int)p_9 + 1017)) + (unsigned long)(
           (float)(- v_5) + (-144.239318848f + (float)v));
    result = (unsigned long long)(- (p_17 % (v_13 + 605L)) % (long)((int)p_9 % (
                                                                    (int)p_9 % (
                                                                    (int)v_7 + 855) + 101) + 866));
  }
  while_0_break: ;
  return result;
}

