#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1025012981
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, long long p_5, short p_7,
                  unsigned char p_9, signed char p_11)
{
  short v_19;
  short v_17;
  char v_15;
  unsigned long v_13;
  double v;
  unsigned long result;
  v_19 = (short)-19059;
  v_17 = (short)-9053;
  v_15 = (char)p_7;
  v_13 = 3441609499UL;
  if (((3349376275LL % (p_5 + 52LL)) / (long long)(v_13 + 530UL)) / (long long)(
      ((int)v_15 * (int)v_17 - (int)p_9 % 84) + 31) > (long long)((long)v_19 % (
                                                                  - (
                                                                  -224690096L >> (
                                                                  (int)p_9 & 31)) + 83L))) 
    v = (double)p_7;
  else {
    v = (double)-54447;
    v = (double)(((int)p_9 ^ (int)((unsigned char)v)) / ((int)p_11 * (int)p_7 + 643)) - -8213.39331427;
  }
  result = (unsigned long)((double)(-3421 | (-593338089 - (int)p)) * (
                           (double)p - (v - (double)p_5)));
  return result;
}

