#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 374680089
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p[2][5][5], unsigned short p_5, unsigned short p_9,
              double p_11, double p_13)
{
  long v_25;
  float v_23;
  char v_21;
  float v_19;
  unsigned long v_17;
  unsigned int v_15;
  float v_7;
  long v;
  long long result;
  v_25 = 576013770L;
  v_23 = 9784092672.f;
  v_19 = 779.884887695f;
  v = 420622466L;
  if (v != (long)(- ((v_19 - (float)p_5) - -1038016832.f))) {
    v_15 = (unsigned int)(- (- (- 2.31110552942e+38f)));
    v_19 = (float)p_11;
    v_17 = (unsigned long)v_19;
  }
  else {
    v_21 = (char)(~ ((long)((int)((unsigned short)v_23) * 22855) % (~ v_25 + 441L)));
    v_15 = (unsigned int)(- ((double)v_21 / 235.250887851));
    v_17 = (unsigned long)p_11;
  }
  if ((double)v_15 != - (- p_13) + (double)(v_17 % ((unsigned long)-761.415425411 + 580UL))) 
    result = -13347LL;
  else {
    v_7 = (float)((double)(115 * ((int)p_9 / ((int)((unsigned short)p_11) + 85))) - - p_13);
    v = (long)(- ((13155LL | (long long)p[0][2][4]) ^ (long long)((float)p_5 - v_7)));
    result = (long long)(! v) + -51344LL;
  }
  return result;
}

