#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027094708
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned long long p_4[2][3], double p_6)
{
  unsigned int v_23;
  long long v_21;
  double v_19;
  double v_17;
  unsigned int v_15;
  short v_13;
  unsigned short v_11;
  unsigned short v_9;
  double v;
  unsigned char result;
  v_23 = (unsigned int)p_4[1][2];
  v_19 = p;
  v_15 = 4294966650U;
  v_13 = (short)30092;
  v_11 = (unsigned short)p_4[1][0];
  v_9 = (unsigned short)p_6;
  v = 86.9233879326;
  result = (unsigned char)p;
  while ((long long)((unsigned long)(52636U % (v_15 + 122U) - (unsigned int)(
                                     v_19 * (double)result))) != - (1069545471LL - (long long)v)) {
    v_21 = (long long)v_23 % -318191910LL;
    v_19 = (double)(((unsigned long long)((double)v_21 + v) - p_4[1][0]) * (unsigned long long)(! (~ v_9)));
    v_23 = (unsigned int)(((int)((unsigned short)(p_6 + (double)p_4[0][1])) + (int)(~ v_11)) ^ (int)(
                          (double)(! v_9) - (p_6 + p_6)));
    result = (unsigned char)((v_21 + 6573606342485LL) % 201LL);
  }
  while_0_break: ;
  while ((double)((long long)p_6 ^ (51407LL | (long long)((int)result / 92))) != - (
         (double)result / ((v - p_6) + 382.))) {
    v_15 = (int)v_13 % (((int)v_11 >> ((int)v_9 % 53860 & 15)) + 739);
    v_17 = (double)result;
    v_9 = (unsigned short)(- (! v_15) - (unsigned int)v_17);
    v = (double)v_9;
  }
  while_0_break_0: ;
  return result;
}

