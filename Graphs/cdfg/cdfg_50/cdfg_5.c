#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 220483162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, int p_7[4][1][2], signed char p_15,
                  double p_17, long long p_19)
{
  long long v_21;
  unsigned long v_13;
  unsigned short v_11;
  double v_9;
  float v_5;
  unsigned short v;
  unsigned char result;
  v_21 = (long long)p_7[2][0][0];
  v_11 = (unsigned short)31413;
  v_5 = (float)p_19;
  v = (unsigned short)p_17;
  result = (unsigned char)75;
  v_9 = (double)(- v_21);
  while (((int)(~ v) - 28 % ((int)result + 568)) - (int)(- ((float)p * v_5)) > p_7[1][0][1]) {
    v_13 = (double)v_11 - v_9 / 538.;
    v_11 = (unsigned short)(p_19 % (long long)(p % 4083375787U + 90U));
    v_9 = (double)((v_13 * (unsigned long)p_15 - (unsigned long)p_17) + (unsigned long)(! (
                   p_7[2][0][1] / 386)));
    v_5 = (float)(! result);
  }
  while_0_break: ;
  return result;
}

