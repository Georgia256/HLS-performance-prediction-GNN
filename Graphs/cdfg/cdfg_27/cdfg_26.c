#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 96092046
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, double p_5, unsigned long p_7, char p_13, long long p_21)
{
  float v_19;
  unsigned short v_17;
  long long v_15;
  int v_11;
  unsigned short v_9;
  int v;
  char result;
  v_19 = 322.654754639f;
  v_17 = (unsigned short)33337;
  v_15 = (long long)p_13;
  if ((int)v_17 <= (int)((unsigned short)((double)(- ((long long)v_19 * p_21)) - (
                                          (double)(- p_21) + 2.68703587986e+38)))) 
    v = (int)((unsigned long)(((double)p - p_5) / -2.39947679936e+38) - ~ (! p_7));
  else {
    v_9 = (unsigned short)(~ (40217ULL * (unsigned long long)(116LL / (
                                                              v_15 + 59LL))));
    v_11 = (int)(! ((long)p_13 % -547077488L) * (long)(0 - (int)-1.06373338373e+38f));
    v = (int)v_9 % (v_11 + 863);
  }
  result = (char)v;
  return result;
}

