#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 652950384
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, long p_5[5][4], signed char p_7, char p_9,
        long long p_11[1][3])
{
  double v_15;
  float v_13;
  double v;
  int result;
  v_15 = (double)p_7;
  if (p == ((long long)(- p_5[3][3]) - ((long long)p_9 - -57862LL)) / (
           (long long)v_15 + 66LL)) v = (double)(((unsigned long long)p_7 + 323627089011169896ULL) - (unsigned long long)(~ p_9));
  else {
    v_13 = (float)p_7;
    v = (double)((((float)p_11[0][1] - v_13) + (float)p_7) - (float)p);
  }
  result = (int)(! (p + (long long)v) * (long long)(- (4294960467UL * (unsigned long)p_5[4][0])));
  return result;
}

