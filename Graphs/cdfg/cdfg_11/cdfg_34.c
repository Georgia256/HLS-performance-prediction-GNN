#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 683442463
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, long long p_7[3][2][1])
{
  long long v_15;
  short v_13;
  unsigned short v_11;
  int v_9;
  double v_4;
  short v;
  unsigned int result;
  v_15 = p_7[0][1][0];
  v_13 = (short)-13698;
  v_11 = (unsigned short)55977;
  v_9 = 517340279;
  v_4 = -661.822769186;
  v = (short)p_7[1][1][0];
  result = 149278334U;
  if ((unsigned long long)(p_7[2][1][0] & (long long)((unsigned int)p * - result)) > 
      (18446744072891253961ULL / (unsigned long long)(p_7[1][1][0] + 375LL) - (unsigned long long)(
       (long long)p - p_7[0][1][0])) % 664287190ULL) {
    v_13 = (short)((long long)v / (((p_7[0][1][0] - (long long)v_4) + ~ p_7[0][0][0]) + 186LL));
    v_4 = (double)(- ((result & (unsigned int)v_11) & (unsigned int)(
                      (int)p + v_9)));
    result = - (4012850471U % (unsigned int)((int)v_11 + 368)) / (unsigned int)(
             ((v_9 + (int)v) << ((int)(- v_13) & 31)) + 999);
  }
  else {
    v_4 = (double)6281U;
    v_11 = (unsigned short)p_7[1][0][0];
    v_11 = (unsigned short)(p_7[0][0][0] + (long long)(((int)v >> ((int)v_13 & 15)) * (
                                                       (int)v + (int)v_11)));
  }
  while ((long long)(((int)v + -48857) - 41728 % ((int)((unsigned short)v_4) + 639)) + 
         (long long)((int)p - 1) / (! p_7[1][1][0] + 996LL) != (long long)(
         v_9 % ((int)v_11 + 784))) {
    result = v_15 - (long long)((int)v_13 % 41650);
    v_13 = (short)((long long)(! (25663 | (int)p)) - ((long long)(107 % (
                                                                  (int)((signed char)2805463808.f) + 511)) ^ 
                                                      p_7[0][1][0] * 5LL));
    v_15 = ! p_7[1][1][0] * (long long)((unsigned int)v_4 / (result + 411U)) - (long long)(
           (v_9 * (int)p) * (194 % ((int)v_11 + 101)));
    v = (short)(- (((long long)v - p_7[0][0][0]) / -14589LL));
  }
  while_0_break: ;
  return result;
}

