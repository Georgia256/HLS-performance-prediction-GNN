#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 485501697
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, long long p_4, unsigned short p_6[1][2],
                  unsigned short p_11, char p_13)
{
  unsigned int v_15;
  unsigned long long v_9;
  float v;
  unsigned long result;
  v_15 = (unsigned int)p_13;
  v_9 = (unsigned long long)p_11;
  result = 4294942569UL;
  if (((unsigned long long)(result + 1000571760UL) - ~ v_9) * (unsigned long long)p_11 < (unsigned long long)(
      (unsigned int)p_13 / (((unsigned int)p_13 + v_15) + 691U))) result = (unsigned long)(- (- (
                                                                  p_4 % (long long)(
                                                                  (int)p_6[0][0] + 602))));
  else {
    v = (float)p_4;
    result = (unsigned long)(-10428 - (int)(- (v * (float)p)));
  }
  result -= (unsigned long)p;
  return result;
}

