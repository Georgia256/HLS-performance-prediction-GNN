#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 607996073
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p[4], short p_11, unsigned short p_13,
                  unsigned int p_15[5][4][4], unsigned short p_19)
{
  unsigned long long v_23;
  short v_21;
  double v_17;
  unsigned long v_9;
  unsigned char v_7;
  float v_5;
  float v;
  unsigned char result;
  v_23 = (unsigned long long)p_15[1][1][3];
  v_21 = (short)p_13;
  v_17 = (double)p_13;
  v_9 = 4294958179UL;
  if ((int)p_19 == (int)(- (- p_11)) * (int)((short)((float)((unsigned long long)v_21 / (
                                                             v_23 + 961ULL)) / 1225.16186523f))) {
    v_7 = (unsigned char)(- v_17);
    v_5 = (float)(p[3] * (long long)((unsigned long)v_7 % (v_9 + 838UL)) - (long long)(
                  (unsigned int)(-45404 % ((int)p_11 + 385)) % (((unsigned int)p_13 - p_15[0][0][3]) + 679U)));
    v = (float)(p[0] + (long long)v_5);
  }
  else {
    v_7 = (unsigned char)10;
    v = (float)v_7;
  }
  result = (unsigned char)v;
  return result;
}

