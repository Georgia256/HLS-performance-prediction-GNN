#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 118464382
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[1], unsigned char p_4[5][3],
                       unsigned int p_11, int p_13, unsigned short p_17)
{
  unsigned char v_15;
  unsigned long long v_9;
  double v_7;
  char v;
  unsigned long long result;
  v_15 = (unsigned char)133;
  v_7 = (double)p_13;
  v = (char)p[0];
  result = 757395563ULL;
  v_7 = (double)((29677LL * (long long)p_17) * (long long)v_7);
  while ((int)p[0] <= ! ((int)p_4[4][1] % ((int)v + 1012) - (int)p_4[3][2])) {
    v_9 = v_7 - 892422286.;
    result = (unsigned long long)((unsigned int)(- (p_13 * (int)v_15)) / (
                                  - (335633264U ^ (unsigned int)v) + 561U));
    v_7 = (double)((int)p_4[3][2] - ((int)((short)(721.748158395 / ((double)p_11 + 913.))) + 24344));
    v = (char)v_9;
  }
  while_0_break: ;
  return result;
}

