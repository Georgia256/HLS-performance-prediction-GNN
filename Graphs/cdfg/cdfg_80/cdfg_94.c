#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 877200793
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned int p_5, long p_7,
           signed char p_11[3])
{
  long v_15;
  unsigned short v_13;
  unsigned short v_9;
  long long v;
  double result;
  v_15 = -33257L;
  v_13 = (unsigned short)p_7;
  v_9 = (unsigned short)p_5;
  if ((long)v_9 <= ((long)(- p_11[1]) - (long)v_13 % (v_15 + 914L)) + (long)(- (! v_13))) {
    result = (double)(- (-14L / (- p_7 + 680L)));
    v = (long long)((unsigned long long)(0 - (long)((double)p + result)) * (
                    (unsigned long long)(526334527U * p_5) / (- p + 138ULL)));
  }
  else v = (long long)-595783304.221;
  result = (double)v;
  return result;
}

