#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 261818432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, float p_5[2], unsigned long p_7[3][1], char p_11)
{
  long v_19;
  char v_17;
  unsigned char v_15;
  double v_13;
  long v_9;
  int v;
  double result;
  v_19 = (long)p_11;
  v_17 = p_11;
  v_15 = (unsigned char)p;
  v_9 = (long)p_5[1];
  result = (double)p_7[0][0];
  v_13 = (double)(4294967170UL / ((unsigned long)(((long)v_17 ^ v_9) % (
                                                  (long)-3.30299486608e+38f + 1008L)) / (
                                  (unsigned long)v_19 / 4294948062UL + 512UL) + 754UL));
  v = (int)(958607686.297 * (double)((int)((result / ((double)p_11 + 616.)) / 72.) + (
                                     ((int)((signed char)v_13) - -114) | (int)v_15)));
  result = (double)(((unsigned long)(- result) / (4294963436UL * (unsigned long)result + 678UL)) * (unsigned long)(~ (
                    v - (int)p)) >> (((unsigned long)p_5[1] - ((unsigned long)-3.40091613526e+38 - (
                                                               p_7[1][0] << (
                                                               v_9 & 31L)))) & 31UL));
  result = (double)((int)((unsigned short)(- result)) * (int)p);
  return result;
}

