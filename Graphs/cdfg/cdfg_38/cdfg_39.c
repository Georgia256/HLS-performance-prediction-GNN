#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981757375
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, double p_11, unsigned char p_13[4],
                 unsigned int p_15[3], long long p_17)
{
  char v_23;
  int v_21;
  unsigned short v_19;
  unsigned short v_9;
  unsigned char v_7;
  unsigned long v_5;
  unsigned short v;
  unsigned int result;
  v_19 = (unsigned short)p;
  v_9 = (unsigned short)p_17;
  v_7 = (unsigned char)p_15[1];
  v_5 = 4124028283UL;
  v = (unsigned short)18824;
  result = 23941U;
  while ((unsigned long)(- ((int)v_7 % ((int)((unsigned char)p_11) + 752))) >= 
         ((unsigned long)(- p_13[3]) / (- v_5 + 934UL)) * (unsigned long)(
         p_15[0] - (unsigned int)((double)p_17 + p_11))) {
    v_21 = (unsigned long long)v_19 / 18446744073283495583ULL;
    v_23 = (char)v_5;
    v = (unsigned short)((unsigned long)(((int)p % (v_21 + 654)) * (int)(~ p)) * (
                         (unsigned long)p_13[3] / (v_5 + 552UL) + (unsigned long)(- v_23)));
    v_7 = (unsigned char)((p_11 - (-619956668. - p_11)) + (double)(p_17 % (long long)(
                                                                   (int)p_13[2] + 76) ^ (long long)(~ v_9)));
  }
  while_0_break: ;
  while ((unsigned long)((int)(~ p) * ((int)v << ((int)p & 15)) - 44652) <= ! (
         65522UL - (v_5 | 4294966849UL))) {
    v = (int)v_7 & 11280;
    v_7 = (unsigned char)((float)(-90 + (int)((char)(-2.9784483227e+38 / (
                                                     p_11 + 485.)))) / -8125863424.f);
    v_9 = (unsigned short)((result % (unsigned int)((int)v + 541) + (unsigned int)(
                            (int)p / 29094)) / (unsigned int)(! ((int)p / (
                                                                 (int)v_9 + 490)) + 917));
    v = ~ (~ (- v));
  }
  while_0_break_0: ;
  return result;
}

