#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 832105822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned short p_4, float p_7[3][3], double p_17,
        double p_21)
{
  long v_25;
  double v_23;
  int v_19;
  double v_15;
  unsigned short v_13;
  unsigned long long v_11;
  float v_9;
  float v;
  int result;
  v_25 = 816389263L;
  v_23 = (double)p_4;
  v_19 = (int)p_17;
  v_15 = -100.8138602;
  v_13 = p_4;
  v_11 = 549085024ULL;
  v_9 = (float)p_21;
  v = 132.802154541f;
  result = 62864;
  while ((unsigned long long)(((int)((unsigned short)v_15) >> ((int)p & 15)) % (
                              139 % ((int)v_13 + 215) + 1) - (int)(- (
                              p_21 / (p_17 + 711.)))) <= (unsigned long long)(! (
                                                         28062518 | (int)v_13)) % (
                                                         (18446744073362645304ULL / (unsigned long long)(
                                                          result + 364)) / (unsigned long long)(
                                                         168 / ((int)((unsigned char)p_21) + 1005) + 107) + 535ULL)) {
    v_25 %= (long)((int)((unsigned char)v_23) / 231 + 278);
    result = (int)v_11;
    v_9 = (float)(- (- (- -288810372L)));
    v_13 = (unsigned short)v_19;
  }
  while_0_break: ;
  while ((unsigned int)(! result & (int)p) % (((unsigned int)(! result) + 
                                               (unsigned int)p_4 / 810960918U) + 182U) == (unsigned int)(
         - (v * p_7[1][1]) + (float)(24727 >> ((int)((short)v) & 15)))) {
    v_19 = (long long)v_9 / 722475456LL;
    v_11 = (unsigned long long)((int)((char)(((double)v_13 * v_15) * (
                                             p_17 - (double)v_19))));
    result = (int)v_11;
    v = (float)p_4;
  }
  while_0_break_0: ;
  return result;
}

