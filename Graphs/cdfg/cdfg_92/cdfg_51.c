#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 3658485
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, float p_4, double p_7, unsigned int p_9, short p_13)
{
  long long v_23;
  float v_21;
  unsigned long v_19;
  long v_17;
  int v_15;
  char v_11;
  signed char v;
  char result;
  v_23 = 679764031LL;
  v_21 = -131.598526001f;
  v_19 = 4294910412UL;
  v_17 = (long)p_13;
  v_15 = (int)p_4;
  v_11 = (char)p_9;
  v = (signed char)-16;
  result = (char)p_9;
  if ((long long)p_4 % (((long long)(! p) + (v_23 + (long long)p)) + 883LL) >= 3312693156LL) {
    v_17 = (long)((long long)(v_15 / ((int)p_4 + 946) ^ (int)result) + (
                  43669LL % (v_23 + 967LL) - (long long)((unsigned int)result + p_9)));
    v_15 = (int)((long)(- (v_15 / ((int)p_7 + 127))) ^ -41466L);
    v_11 = (char)(- (p_4 / 897.f));
  }
  else {
    v = (signed char)(- (p_7 / 1048.) / ((double)v_11 + 560.));
    v_15 = ~ ((int)(~ p_13) * (int)p_13);
    v_21 = (float)39211U;
  }
  while ((((p ^ (unsigned int)p_4) - 56382U) ^ (unsigned int)(! v)) < 
         ((unsigned int)(p_7 / 773.) - (69904178U | p_9)) / (unsigned int)(
         (int)v_11 % ((int)(~ p_13) + 169) + 989)) {
    v = (unsigned long long)v_19 | (unsigned long long)v_17 * 576322632ULL;
    v_17 = (long)(- ((long long)v_15 - - v_23));
    v_19 = (unsigned long)(p_9 + (unsigned int)((int)((short)v_21) / (
                                                (int)p_13 + 991)));
    v_11 = (char)p_7;
  }
  while_0_break: ;
  return result;
}

