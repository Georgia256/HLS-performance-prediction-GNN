#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 951635776
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, long p_4[5][5], short p_7[2], long p_9,
                 unsigned int p_19)
{
  signed char v_21;
  unsigned long long v_17;
  long v_15;
  int v_13;
  double v_11;
  float v;
  unsigned int result;
  v_21 = (signed char)-111;
  v_17 = 515145220ULL;
  v_15 = -193215360L;
  v_13 = (int)p_4[0][0];
  result = 572042028U;
  if ((long)(~ v_21) >= -641456174L) {
    v = (float)v_17;
    v_11 = (double)(-4294960364UL);
    result = 3805150157U;
  }
  else {
    v = (float)v_21;
    v_11 = (double)(~ p_19 - (unsigned int)(v_13 / -891063296));
    v_15 = (long)(! p_19 * (unsigned int)(v_13 % (v_13 + 382)) & (39431U - ! p_19));
  }
  while (90. * p < (double)(((float)(! p_4[4][3]) + - v) - (float)((long)(
                                                                   178 + (int)p_7[1]) * (
                                                                   p_9 & -9937L)))) {
    v_17 = v_13 - (int)(v_11 / -8554529028.16);
    result = (unsigned int)((unsigned long)(! p_7[1]) / ((unsigned long)(~ p_19) / (unsigned long)(
                                                         p_4[2][3] + 536L) + 335UL));
    v_11 = (double)(- (~ p_4[2][4]) + p_4[1][2]);
    v = (float)(((unsigned long long)(v_15 / -35L) + (v_17 + (unsigned long long)p_9)) + (unsigned long long)(
                (double)(16962L * v_15) / 567.152091361));
  }
  while_0_break: ;
  return result;
}

