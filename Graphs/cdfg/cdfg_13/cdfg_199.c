#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 319834062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p[2][4], unsigned long long p_7, unsigned long p_9,
          unsigned char p_11, unsigned char p_13)
{
  long v_17;
  unsigned long long v_15;
  unsigned long v_4;
  float v;
  short result;
  v_17 = (long)p_13;
  v_4 = 322154081UL;
  v = -320.94329834f;
  v_15 = (unsigned long long)(- ((double)(v + (float)v_17) * (p[1][1] * -44042.)));
  if ((int)p_13 != (int)((unsigned char)(- (v + 5661892096.f)))) {
    result = (short)27305;
    v = (float)(unsigned char)117;
    result = (short)(~ (0 - (int)result / ((int)((short)v) + 989)));
  }
  else {
    v_15 = (unsigned long long)((double)(! ((unsigned long long)p_11 ^ v_15)) - - (
                                (double)p_11 + -66.3404953262));
    v_4 = (unsigned long)(((unsigned long long)p_13 * v_15 >> ((4294967204UL + p_9) & 63UL)) % (unsigned long long)(
                          ((unsigned long)(! p_11) | (unsigned long)p_11 / 84197972UL) + 1024UL));
    result = (short)(~ (p_7 * (unsigned long long)p_9 ^ (unsigned long long)(
                        v_4 % (unsigned long)((int)p_11 + 482))));
  }
  return result;
}

