#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711195641
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, int p_9, unsigned char p_11[3][4],
                  unsigned char p_13, unsigned long long p_15)
{
  int v_25;
  unsigned long v_23;
  int v_21;
  double v_19;
  double v_17;
  int v_7;
  long long v_4;
  unsigned short v;
  unsigned long result;
  v_25 = 59472;
  v_23 = (unsigned long)p_15;
  v_21 = -349255587;
  v_19 = -5437410029.19;
  v_17 = (double)p_15;
  v_7 = (int)p_11[1][1];
  v = (unsigned short)p_13;
  while (p_15 * 8917ULL <= (unsigned long long)((5434783744. * v_17) * v_19)) {
    v_21 = v_23 * (unsigned long)((long)v_21 * 302921494L);
    v_23 = (unsigned long)(6826ULL - (unsigned long long)(-979 / (v_25 + 646)) / (
                                     - p_15 + 986ULL));
    v_7 = (int)((unsigned long long)((long)((int)p_11[2][1] % ((int)p_11[2][1] + 404)) * (
                                     -642786469L - (long)p)) + ((unsigned long long)(
                                                                (int)p_13 + (int)p_11[1][1]) + 
                                                                (unsigned long long)p_13 % 18446744073709551141ULL));
    v_19 = (double)(unsigned char)27;
  }
  while_0_break: ;
  if ((long long)v_7 < ((long long)(-46003L - (long)(104 / ((int)p_13 + 856))) ^ (
                        -898497917LL % (long long)(p_9 + 62) & -21805LL))) 
    result = 4294938959UL;
  else {
    v_4 = (long long)(~ ((v_7 << ((int)p & 31)) * (p_9 | (int)p_11[1][0])));
    result = (unsigned long)(- p);
    result = (unsigned long)((long long)(~ (result - 59281UL)) - (long long)(
                                                                 3529249903UL + (unsigned long)v) / (
                                                                 ! v_4 + 906LL));
  }
  return result;
}

