#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705823255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long long p_4[4][1][4], signed char p_6,
              unsigned long long p_8)
{
  long long v_21;
  double v_19;
  char v_17;
  long v_15;
  unsigned long v_13;
  signed char v_11;
  char v;
  long long result;
  v_21 = -9781LL;
  v_19 = 290.882296446;
  v_17 = (char)p_8;
  v_15 = (long)p_4[2][0][2];
  v_13 = 3845702893UL;
  v_11 = p_6;
  result = (long long)p_8;
  while ((double)(! ((result + 11004LL) + 77190477LL)) <= v_19) {
    v_17 = v_21 / 60000LL;
    v_21 = 3505234348LL;
    v_19 = (double)p_6;
    result = (long long)v_13;
  }
  while_0_break: ;
  if (-18761 == (int)v_17) {
    result = (long long)(p_4[0][0][1] * p_4[2][0][2]);
    result = (long long)((((unsigned long long)p | p_4[3][0][1]) - (unsigned long long)(
                          (unsigned int)p / 3684756689U)) * ((unsigned long long)result - 18446744073709515653ULL));
  }
  else {
    v_13 = (unsigned long)(- ((608033239ULL - (unsigned long long)v_15) ^ 18446744073709551554ULL));
    v = (char)((unsigned long)v_11 + - (~ v_13));
    result = (long long)((unsigned long long)(-107 + (int)p_6) - ! (p_8 + (unsigned long long)v));
  }
  return result;
}

