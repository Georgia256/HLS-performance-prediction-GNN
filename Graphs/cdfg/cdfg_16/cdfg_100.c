#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 362628066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, double p_15[3])
{
  signed char v_17;
  unsigned short v_13;
  char v_11;
  unsigned long v_9;
  long long v_7;
  long v_5;
  short v;
  double result;
  v_17 = (signed char)p_15[1];
  v_13 = (unsigned short)p_15[2];
  v_11 = (char)15;
  v_9 = 892216638UL;
  v_7 = (long long)p;
  v_5 = -329814616L;
  result = (double)p;
  if ((unsigned long)((long)(! (- v_17)) - v_5) > ! ((unsigned long)p_15[2] - 
                                                     (unsigned long)v_5 % (unsigned long)(
                                                     p + 540U))) {
    v_5 = (long)v_11;
    v_11 = (char)((long long)((unsigned int)(- v_11) % (p + 12U)) - (
                  847061390LL / (long long)(v_5 + 76L) >> 5));
    v = (short)((long long)p_15[1] / (((long long)v_13 & v_7) + 580LL) | (long long)(
                (unsigned int)v_13 % ((p + p) + 864U)));
  }
  else {
    v = (short)(- (- result) * (double)(((int)v_11 % ((int)((char)p_15[1]) + 466)) / (
                                        (int)(p_15[2] + 961884575.) + 257)));
    v_9 = (unsigned long)result;
    v_13 = (unsigned short)(! -16925LL);
  }
  while ((long long)((unsigned long)p ^ (unsigned long)((long)v + v_5)) % (
         - (v_7 - (long long)v_9) + 118LL) > (long long)((unsigned long)(
                                                         761429592 / (
                                                         ((int)v_11 ^ (int)v_13) + 632)) % (
                                                         ((unsigned long)(- p_15[1]) - ! v_9) + 565UL))) {
    v_11 = (int)v_17 % 26692;
    v_17 = (signed char)((385834136UL / ((unsigned long)(- result) + 726UL)) * - (
                         (unsigned long)v_13 % (v_9 + 102UL)));
    result = (result + - result) / (double)(- ((float)v_17 * -2.32183066479e+38f) + 817.f);
    v_13 = (unsigned short)(- (4294917444. + (p_15[0] + p_15[1])));
  }
  while_0_break: ;
  return result;
}

