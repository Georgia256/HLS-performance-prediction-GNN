#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203734505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, float p_11, unsigned long long p_17[1][5][1])
{
  double v_15;
  long v_13;
  long long v_9;
  char v_7;
  int v_5;
  char v;
  double result;
  v_15 = 550.935940372;
  v_13 = (long)p_17[0][2][0];
  v_9 = (long long)p;
  v_5 = -15174;
  v = (char)p_11;
  result = -32.1239072095;
  v_7 = (char)-30;
  while (((unsigned long)(3.17512568054e+38 * (double)(4294924584UL % (
                                                       p + 678UL))) | (
          - p - (unsigned long)(~ v))) <= (unsigned long)v_5) {
    v_9 ^= (long long)((unsigned long)v_7 * 4294912580UL);
    v_5 = (int)(((unsigned long long)(6314100957.99 - v_15) | p_17[0][2][0]) * (unsigned long long)((long long)(
                p % 17UL)));
    v_7 = (char)(! (((long)v - v_13) - 618504457L));
    v = (char)(243 - (int)((unsigned char)((float)((int)v - 110) + - p_11)));
  }
  while_0_break: ;
  return result;
}

