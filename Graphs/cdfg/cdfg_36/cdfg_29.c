#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 240342995
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, short p_13[3][2][2], float p_15[5][1][2],
                unsigned char p_19)
{
  short v_17;
  char v_11;
  char v_9;
  unsigned long long v_6;
  float v_4;
  unsigned long v;
  signed char result;
  v_17 = (short)p_15[3][0][0];
  v_4 = (float)p_13[0][1][1];
  v_9 = (char)(~ (3275351149U | (unsigned int)(p_15[4][0][1] - (float)p_19)));
  if (p == (double)(((float)p_13[0][1][0] + p_15[3][0][0]) * (float)(
                    -671 % (((int)((short)p_15[2][0][1]) << ((int)v_17 & 15)) + 635)))) {
    v = (unsigned long)p;
    v_6 = (unsigned long long)((int)((char)((double)(- v_4) - - p)) + (int)(- (- v_9)));
    result = (signed char)((unsigned long long)((3783558224UL + v) - (unsigned long)(
                                                38 % ((int)((signed char)v_4) + 748))) * ! (
                           v_6 * (unsigned long long)p));
  }
  else {
    v_11 = (char)-16;
    result = (signed char)v_11;
  }
  return result;
}

