#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194427437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, short p_4, unsigned long long p_7,
                long long p_11[5], unsigned int p_15)
{
  unsigned long long v_25;
  double v_23;
  int v_21;
  long long v_19;
  long v_17;
  unsigned short v_13;
  signed char v_9;
  long v;
  signed char result;
  v_25 = (unsigned long long)p_15;
  v_23 = (double)p_11[2];
  v_21 = -164834785;
  v_19 = 19651LL;
  if ((unsigned long long)((373 - v_21) / ((int)v_23 + 782)) >= v_25) {
    v_17 = (long)(- (p_11[1] / ((long long)p % (v_19 + 35LL) + 863LL)));
    v_13 = (unsigned short)(- (~ (p_7 + (unsigned long long)p_15)));
    v_9 = (signed char)(140670675258915970LL / (p_11[4] + 303LL) << (
                        ((int)((unsigned short)-9.94671253531e+37) * (int)v_13 - (int)v_13) & 63));
  }
  else {
    v_9 = (signed char)(! (p_7 % (unsigned long long)(p_15 + 546U)) | (unsigned long long)p_15);
    v_13 = (unsigned short)(19713LL / (! (96LL * p_11[4]) + 677LL));
    v_17 = (long)(! (~ (! p_4)));
  }
  if ((long long)v_9 > (~ p_11[3] * (long long)(-1233L % (long)((int)v_13 + 280))) * (long long)(
                       (unsigned long)(p_15 + (unsigned int)p) / (unsigned long)(
                       v_17 + 1018L))) result = (signed char)(68. / (
                                                              (1.88543161707e+37 + (double)p) * (double)p_4 + 242.));
  else {
    v = 44950L;
    result = (signed char)p_7;
    result = (signed char)(-3.23217304288e+38 * (double)(! v - (long)(
                                                         (int)p_4 % (
                                                         (int)result + 78))));
  }
  return result;
}

