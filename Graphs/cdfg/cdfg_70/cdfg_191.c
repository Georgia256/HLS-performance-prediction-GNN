#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 358902286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, double p_5, signed char p_7[2][5][1],
                 signed char p_13, unsigned int p_19[5][1])
{
  unsigned long v_27;
  unsigned long long v_25;
  long v_23;
  unsigned short v_21;
  long v_17;
  unsigned long v_15;
  unsigned int v_11;
  char v_9;
  unsigned long v;
  unsigned int result;
  v_27 = (unsigned long)p_19[0][0];
  v_23 = (long)p;
  v_21 = (unsigned short)44336;
  v_17 = -233015478L;
  v_15 = 4294929919UL;
  v_11 = 4294955034U;
  v = (unsigned long)p_7[0][0][0];
  result = (unsigned int)p_13;
  if ((unsigned long)result > (((unsigned long)v_17 + (unsigned long)v_11) | (unsigned long)result) * (unsigned long)(
                              -265877901 % ((int)((signed char)p_5) * (int)p_13 + 809))) {
    v_15 = (unsigned long)((-21277LL / (long long)((int)v_21 + 650)) * (long long)(
                           1.50889637466e+38f - (float)((unsigned long)v_23 % (
                                                        v + 815UL))));
    v_17 = (long)(~ ((int)((signed char)(2.62607329922e+38f * (float)p_7[0][0][0])) + -52));
    v_9 = (char)85;
  }
  else {
    v_17 = (long)v_27;
    v_25 = (unsigned long long)((unsigned long)((double)v_17 + (p_5 - (double)p_19[2][0])) - (
                                (v_15 | v_15) >> 4ULL));
    v_9 = (char)((double)((unsigned long)(p_19[4][0] / (v_11 + 113U)) * 21392UL) * (
                 (double)(~ v_25) + -917.067465464));
  }
  if ((unsigned long)(- (4294940316U / (unsigned int)((int)v_9 + 806))) / (unsigned long)(
      ! v_17 + 482L) < (unsigned long)(p_19[0][0] + (unsigned int)p_13)) {
    v = (unsigned long)(3533699844. * (p_5 * (double)p_7[0][3][0] - -1.95074141158e+38 / (
                                                                    (double)v_9 + 306.)));
    v = ~ v;
    result = (unsigned int)(-964284910LL * (long long)(- (v % ((unsigned long)p + 483UL))));
  }
  else {
    v_9 = (char)v_15;
    v_11 = (unsigned int)v_9;
    result = (unsigned int)(~ 0);
  }
  return result;
}

