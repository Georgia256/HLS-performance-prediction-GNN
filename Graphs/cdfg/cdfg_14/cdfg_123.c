#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 118836887
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p[1][1][4], char p_7, double p_11, char p_15,
          unsigned short p_19)
{
  double v_23;
  unsigned short v_21;
  unsigned int v_17;
  unsigned int v_13;
  unsigned long v_9;
  char v_5;
  unsigned long long v;
  float result;
  v_23 = -954.996428357;
  v_21 = (unsigned short)10044;
  v_17 = (unsigned int)p_7;
  v_13 = (unsigned int)p[0][0][0];
  v_9 = (unsigned long)p_15;
  v_5 = (char)3;
  v = (unsigned long long)p_19;
  result = (float)p_7;
  while (! (v_17 - (unsigned int)p_19) > (- v_17 * (unsigned int)(-18426 * (int)v_21)) % (unsigned int)(
                                         - ((int)p_7 % ((int)v_5 + 955)) + 73)) {
    v_9 = (unsigned long long)v_23 * 35365ULL;
    v_13 = (unsigned int)((long long)(((int)p[0][0][0] - (int)p_19) - (int)(
                                      74. + p_11)) - -731110987LL);
    v = 5705ULL;
    v_5 = (char)result;
  }
  while_0_break: ;
  while (- v % (unsigned long long)((int)(- p[0][0][3]) + 378) != (unsigned long long)(
         ((unsigned long)((int)p[0][0][2] & (int)v_5) | (unsigned long)p_7 / (
                                                        v_9 + 99UL)) + (unsigned long)p_11)) {
    v_13 = (float)v_13 * -692.720275879f;
    result = (float)(~ (unsigned short)20311);
    v_9 = 35740UL;
    v_5 = (char)(! ((int)(~ v_5) - ((int)p_15 + (int)p_15)));
  }
  while_0_break_0: ;
  return result;
}

