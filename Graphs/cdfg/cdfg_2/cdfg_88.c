#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 227119490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, long long p_13, long long p_15,
          unsigned long p_17, unsigned int p_19)
{
  unsigned int v_23;
  double v_21;
  int v_11;
  unsigned int v_9;
  unsigned short v_7;
  short v_5;
  double v;
  short result;
  v_23 = (unsigned int)p_13;
  v_21 = -2.48981838395e+38;
  v_9 = 4294942910U;
  v_7 = p;
  v_5 = (short)p_17;
  v = (double)p_15;
  result = (short)p_17;
  while (((p_15 | 14005LL) - (long long)v_7) % (long long)(130940UL / (
                                                           p_17 + 794UL) + 380UL) < (long long)(! (
         (unsigned long)v_7 * p_17 - (unsigned long)p_19))) {
    v_7 = v_21 / 53375.;
    v_9 = ! v_23;
    v_5 = - (! (short)-14323);
    v_7 = (unsigned short)((unsigned long)v_7 - 4294965675UL);
  }
  while_0_break: ;
  while (- (2.70377894976e+38 * (double)(647310712L * (long)p)) == - (
         (double)((int)p + (int)((unsigned short)-677.975866865)) / (
         v + 731.))) {
    v_7 = (long long)v_5 | 20630LL;
    v_11 = (int)((long long)(~ ((int)v_7 / ((int)result + 382))) - p_13);
    v_5 = (short)(v_9 - (unsigned int)v_11);
    v = (double)(signed char)-18;
  }
  while_0_break_0: ;
  return result;
}

