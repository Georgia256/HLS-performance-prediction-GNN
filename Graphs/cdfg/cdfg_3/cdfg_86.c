#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027306130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, double p_4[1][5], unsigned long p_15)
{
  unsigned long v_17;
  double v_13;
  float v_11;
  double v_9;
  int v_7;
  unsigned short v;
  unsigned short result;
  v_17 = p_15;
  v_13 = (double)p;
  v_11 = (float)p;
  v_9 = (double)p;
  v_7 = -153411477;
  v = (unsigned short)64079;
  result = (unsigned short)((long long)(! (v_17 / ((unsigned long)p_4[0][3] + 114UL))) - ~ (
                            (long long)v + 62446LL));
  while (-842913561. < - (p_4[0][1] - (double)v) / ((double)result + 51.)) {
    v_11 = (double)v_11 - (v_9 + 111.);
    v_9 = (double)((unsigned long)((int)p % ((int)p + 615)) / (v_17 * (unsigned long)p_4[0][2] + 1022UL)) + -1.00879872178e+38;
    result = (unsigned short)((int)(- v_9 / ((v_13 - (double)p_15) + 981.)) / 20520);
    v = (unsigned short)((double)(! (~ v_7)) - (v_13 - v_13) * 9894536355.61);
  }
  while_0_break: ;
  return result;
}

