#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 602699790
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p[4][4], unsigned long long p_5[1][4],
              unsigned long long p_7[1][3], char p_9, char p_11)
{
  unsigned int v_19;
  unsigned short v_17;
  double v_15;
  long long v_13;
  long v;
  long long result;
  v_19 = (unsigned int)p[1][0];
  v_17 = (unsigned short)p[3][3];
  if ((unsigned long)(17216 + (int)(- (~ p_11))) > (unsigned long)((int)p_9 + (int)v_17) * 1596331757UL + (unsigned long)(
                                                   (17 << (v_19 & 7U)) | (int)(! p_9))) 
    v_13 = -20969LL;
  else {
    v_15 = (double)(~ p_11);
    v_13 = (long long)(-755945101 * (int)(- v_15));
  }
  if (52792LL <= ! ((long long)(- p_11) / ((long long)p_9 / (v_13 + 84LL) + 680LL))) {
    result = (long long)((int)(- p_9) / ((int)(- p_9) + 275) - (int)p_11);
    v = (long)(130338728ULL % ((unsigned long long)((long long)p[3][3] + result) / (
                               (p_5[0][1] - p_7[0][0]) + 814ULL) + 1021ULL));
    result = (long long)(v + -50L);
  }
  else result = (long long)(~ (0 % 60965ULL));
  return result;
}

