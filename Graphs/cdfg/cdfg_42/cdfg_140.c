#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626572224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[1][3], short p_7, int p_9,
           unsigned short p_11, double p_13)
{
  unsigned long v_27;
  char v_25;
  int v_23;
  long v_21;
  short v_19;
  unsigned long long v_17;
  unsigned short v_15;
  unsigned long long v_4;
  short v;
  double result;
  v_27 = 3867062075UL;
  v_25 = (char)-4;
  v_23 = -10576;
  v_21 = (long)p_11;
  v_19 = (short)-20648;
  v_17 = p[0][0];
  v_15 = p_11;
  result = (double)p_7;
  while ((double)(! ((v_17 / (unsigned long long)((int)v_19 + 403)) % (
                     (v_17 >> ((int)v_19 & 63)) + 647ULL))) < - (p_13 + (double)(
                                                                 v_21 % (long)(
                                                                 v_23 + 693)))) {
    v_25 = (long long)v_25 / 51607LL;
    v_21 = (long)((unsigned long long)v_27 - - (v_17 * 18446744073709516872ULL));
    v_19 = (short)(! ((v_21 + (long)p_7) * (1484L % (v_21 + 406L))));
    v_21 = (long)((unsigned long long)(180L / (v_21 + 324L)) * - (v_17 + 40312ULL));
  }
  while_0_break: ;
  if (45582 < (int)p_7 + (int)(~ (! v_15))) result = (double)(-46326ULL);
  else {
    v_4 = (unsigned long long)(- (((int)((short)result) / ((int)p_7 + 816)) % (
                                  p_9 * (int)p_11 + 109)));
    v = (short)(~ (! v_4) - p[0][2]);
    result = (double)(! (~ ((long long)v * -272LL)));
  }
  return result;
}

