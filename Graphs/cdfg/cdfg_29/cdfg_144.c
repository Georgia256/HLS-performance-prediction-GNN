#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1034856490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, signed char p_5,
                  signed char p_7[1][2][3], unsigned long long p_13)
{
  char v_19;
  char v_17;
  unsigned int v_15;
  short v_11;
  long v_9;
  float v;
  unsigned long result;
  v_19 = (char)p_5;
  v_17 = (char)-106;
  v_15 = (unsigned int)p;
  v_11 = (short)-19482;
  v_9 = (long)(4130579319UL - (unsigned long)((int)v_19 / ((int)v_19 + 894)));
  if ((unsigned long long)(~ v_9) > ! ((unsigned long long)v_11 * p_13) / (unsigned long long)(
                                    (((long long)v_15 - 361603154LL) - (long long)(
                                     (unsigned int)v_17 - 54219U)) + 92LL)) 
    result = 4003546897UL;
  else {
    v = (float)(~ p_7[0][0][2]);
    result = (unsigned long)((unsigned int)p * ((unsigned int)((int)((signed char)v) * (int)p_5) | 5U));
  }
  return result;
}

