#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 829356568
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, short p_9, unsigned short p_11[4][5][4],
                 float p_13[1][3][3], unsigned int p_15)
{
  short v_21;
  float v_19;
  signed char v_17;
  char v_7;
  long long v_5;
  unsigned char v;
  unsigned int result;
  v_21 = (short)p_15;
  v_17 = (signed char)44;
  v_7 = (char)21;
  v_5 = 503623746LL;
  v = (unsigned char)220;
  result = 4294941626U;
  while ((int)v_7 != (int)((char)(((double)v_5 * 237.733188706) / ((double)(
                                                                   (unsigned int)v * p) + 313.) + (double)(
                                  (p_13[0][1][1] + (float)v) + p_13[0][0][1])))) {
    result = (unsigned long)v_17 ^ 4294901761UL;
    v_19 = (float)(~ (result * 79U << ((190284254LL + (long long)p_11[1][1][3]) & 31LL)));
    v_5 = (long long)(- ((v_19 - p_13[0][0][1]) / ((float)((int)v_21 / (
                                                           (int)v_7 + 630)) + 843.f)));
    v_7 = (char)(5U - p_15);
  }
  while_0_break: ;
  while ((unsigned long)(~ v) >= ((unsigned long)p / 4294904459UL) * (unsigned long)(
                                 7 >> (result & 7U)) - (unsigned long)(! v)) {
    v_7 = (long long)v_7 / ((v_5 & 26153LL) + 187LL);
    v_5 = 0LL;
    result = (unsigned int)(- (-1021070976.58 + (double)((float)p_11[3][0][2] * p_13[0][0][1])));
    v = (unsigned char)(~ (v_5 * (long long)(- p_9)));
  }
  while_0_break_0: ;
  return result;
}

