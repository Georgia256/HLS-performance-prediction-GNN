#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264202757
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, int p_11, long long p_13[4][1][3])
{
  unsigned long long v_17;
  short v_15;
  long long v_9;
  unsigned long v_7;
  unsigned char v_4;
  long long v;
  char result;
  v_17 = 14697ULL;
  v_9 = p_13[1][0][1];
  v_7 = (unsigned long)p_11;
  v_4 = (unsigned char)185;
  v = p_13[2][0][2];
  result = (char)38;
  while (-36LL > ((long long)(p ^ p) - (long long)p / (v + 95LL)) / (long long)(
                 p * (unsigned long)(84 ^ (int)((char)352.794288298)) + 15UL)) {
    v_15 = (double)v_9 - (double)v_7 * 1.57627852126e+38;
    v_7 = (unsigned long)((unsigned long long)(- p_13[3][0][0]) / (! (
                                                                   (unsigned long long)v_15 - v_17) + 653ULL));
    v_4 = (unsigned char)((unsigned int)((int)(- result) % (p_11 + 409)) + 
                          (unsigned int)(! v_4) % 4294907563U);
    v = (long long)((unsigned long long)p - ! (597972804ULL | (unsigned long long)v_7));
  }
  while_0_break: ;
  result = (char)(~ ((v * v) * (long long)(-998817665 / ((int)v_4 + 135))));
  return result;
}

