#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1069905615
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, float p_5, double p_11, long long p_13,
          unsigned short p_15)
{
  double v_23;
  unsigned long long v_21;
  double v_19;
  short v_17;
  short v_9;
  unsigned long long v_7;
  float v;
  short result;
  v_23 = (double)p_5;
  v_21 = (unsigned long long)p;
  v_7 = (unsigned long long)p_5;
  result = (short)p;
  if (- v_23 != - (- p_11)) {
    v_7 = (unsigned long long)(1.88439243238e+38f / ((float)(~ (30312 + (int)p_15)) + 103.f));
    v = (float)-60657L;
    result = (short)(((v / 12867.f) * v) / 644.f);
  }
  else {
    v_17 = (short)v_21;
    v_19 = (double)(~ (~ 0));
    v = (float)((double)((float)(! v_17) - -7468674048.f) / (v_19 + 498.));
  }
  while (~ (61 ^ (int)((unsigned char)(v * (float)p))) > - (~ ((int)((unsigned char)p_5) * 68))) {
    v_9 = v_7 % 18446744073259832346ULL;
    v_7 = (unsigned long long)(~ (- p_13));
    result = (short)(- (- ((double)p_5 + p_11)));
    v = (float)((84ULL & (unsigned long long)(~ v_9)) & v_7);
  }
  while_0_break: ;
  return result;
}

