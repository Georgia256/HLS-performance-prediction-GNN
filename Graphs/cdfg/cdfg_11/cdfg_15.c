#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432173097
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, double p_5, long long p_7, unsigned long p_9, int p_17)
{
  int v_23;
  unsigned long long v_21;
  unsigned long v_19;
  unsigned long long v_15;
  unsigned short v_13;
  unsigned int v_11;
  signed char v;
  int result;
  v_23 = (int)p_9;
  v_21 = (unsigned long long)p_5;
  v_19 = p_9;
  v_13 = (unsigned short)p;
  if ((unsigned long long)(- (- v_19)) > ~ (~ (v_21 & (unsigned long long)v_23))) {
    v_15 = - (~ 1ULL);
    v_11 = 3884878571U;
    v = (signed char)((unsigned long long)(p_7 / (long long)(p_9 + 444UL) + (long long)(
                                           (unsigned int)-3.11719133481e+38 / 4294955433U)) + 
                      (unsigned long long)(v_11 % (unsigned int)((int)v_13 + 333)) / (
                      ~ v_15 + 240ULL));
  }
  else v = (signed char)(- p_17);
  result = ((int)(! v) - (int)v * (int)p) & (int)(- p_5);
  return result;
}

