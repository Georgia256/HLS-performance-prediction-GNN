#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194785136
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, double p_5, int p_9, long long p_13[5][2])
{
  short v_19;
  short v_17;
  unsigned int v_15;
  short v_11;
  short v_7;
  signed char v;
  double result;
  v_19 = (short)-10840;
  v_17 = (short)-13550;
  v_15 = 26037U;
  v_11 = (short)p_13[4][0];
  v_7 = (short)p_5;
  v = (signed char)-120;
  result = (double)p;
  while (53LL % (p_13[3][0] / (long long)(v_15 + 714U) + 842LL) << (p_9 & 63) == (long long)(
         (int)v_11 - ! ((int)v_17 - (int)((short)p_5)))) {
    v_17 = (short)2.28033362394e+38;
    result = (double)(~ p_13[2][1]);
    v_11 = (short)((int)-1.43483310487e+37 * (((int)v_19 | (int)v) % (
                                              (int)(p_5 - (double)v_19) + 72)));
  }
  while_0_break: ;
  while ((int)((signed char)(- p / 722974.f)) + (int)(! v) == (int)(- p_5)) {
    v_11 = (long long)v_7 - 555941765LL;
    result = (double)(~ (~ v_11));
    v_7 = (short)p_9;
    v = (signed char)(~ (((long)result - -37080L) << ((int)(~ v_7) & 31)));
  }
  while_0_break_0: ;
  return result;
}

