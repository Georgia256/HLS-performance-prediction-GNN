#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113323548
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, long long p_4, short p_6, double p_8, int p_17[1])
{
  char v_19;
  long v_15;
  unsigned long long v_13;
  int v_11;
  unsigned int v;
  float result;
  v_19 = (char)70;
  v_15 = -58278L;
  v_13 = (unsigned long long)p_4;
  v_11 = p_17[0];
  v = (unsigned int)p_17[0];
  if (6638ULL != v_13) {
    result = (float)(- p_17[0]);
    v_13 = 180ULL;
    v_11 = p_17[0];
  }
  else {
    result = p;
    v_15 = -7384L;
    v = (unsigned int)(! (! v_19));
  }
  if ((unsigned long long)(((p_8 / (double)(result + 884.f)) / ((double)(- v) + 606.)) * 43294.) < 
      ((unsigned long long)v_11 / (v_13 + 595ULL)) % (unsigned long long)(
      (v_15 - (long)-1.77293572383e+38f) + 230L)) result = p;
  else result = (float)(p_4 - (long long)(~ (~ p_6)));
  return result;
}

