#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704436432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p[4][3], unsigned long long p_7, float p_13,
           unsigned long long p_15[5][1][3], long long p_17)
{
  double v_19;
  float v_11;
  int v_9;
  long v_5;
  unsigned short v;
  double result;
  v_19 = -2.82590642856e+38;
  v_11 = (float)p_7;
  v_5 = -47013L;
  v = (unsigned short)p_7;
  result = (double)p[0][1];
  if ((double)(p_13 / (((float)(p_15[1][0][1] | (unsigned long long)p_17) + v_11) + 356.f)) > 
      ((double)((float)p_17 - v_11) + (v_19 - (double)v_5)) / (v_19 + 750.)) {
    result = (double)(~ ((unsigned long long)p_13 / (! p_7 + 88ULL)));
    v_9 = (int)((unsigned long long)(~ (v_5 - (long)result)) + 98ULL / (
                                                               p_7 + 839ULL));
    result = (double)(((7487ULL ^ (unsigned long long)p[0][2]) - 18446744072906697726ULL) - 18446744073440264125ULL);
  }
  else {
    v_9 = ~ ((int)((short)1.31639576881e+37) * 11415) * 82;
    v_11 = (float)result;
    v_5 = (long)p[2][2];
  }
  while ((unsigned long long)((long)(- result / ((double)((int)v + (int)p[0][1]) + 537.)) - v_5) >= 
         ~ (p_7 / ((unsigned long long)result + 44ULL)) + (unsigned long long)result) {
    v_5 = (int)v_11 / ((v_9 + 19930) + 114);
    result = (double)2;
    v_9 = -32151257;
    v = (unsigned short)p_7;
  }
  while_0_break: ;
  return result;
}

