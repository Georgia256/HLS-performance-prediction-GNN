#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 411483349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, long p_5, char p_7[1][4][3], unsigned long p_11,
           unsigned int p_13[5])
{
  short v_17;
  int v_15;
  float v_9;
  unsigned long v;
  double result;
  v_17 = (short)p_13[1];
  v_15 = -33626;
  result = (double)p_11;
  if ((long long)(~ (- (88360937UL % (unsigned long)((int)v_17 + 191)))) != 
      0 - (long long)p_13[3]) v = (unsigned long)p;
  else {
    v_15 = (v_15 - (int)p) / 101 + 4383;
    v_9 = (float)((double)(499UL * p_11 >> ((64405UL + (unsigned long)p_13[4]) & 31UL)) - (
                  result - (double)(! v_15)));
    v = (unsigned long)(p_5 - (long)((int)p_7[0][2][2] >> ((1516 + (int)((unsigned short)v_9)) & 7)));
  }
  result = (double)(~ (73UL / (v + 76UL)));
  return result;
}

