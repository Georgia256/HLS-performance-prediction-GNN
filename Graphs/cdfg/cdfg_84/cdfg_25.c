#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 532749883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, double p_5[5],
                       unsigned int p_7[1], long p_9, unsigned int p_13)
{
  short v_27;
  unsigned short v_25;
  unsigned int v_23;
  signed char v_21;
  float v_19;
  unsigned short v_17;
  int v_15;
  unsigned int v_11;
  long long v;
  unsigned long long result;
  v_27 = (short)-2667;
  v_25 = (unsigned short)10651;
  v_23 = 506791498U;
  v_21 = (signed char)p_7[0];
  v_17 = (unsigned short)35045;
  v_15 = -45156;
  if ((unsigned int)(! v_27) / (! (p_13 + 16589U) + 459U) == p_13) {
    v_19 = (float)((unsigned int)(((double)p_9 / (p_5[0] + 561.)) * (double)(
                                  (int)v_21 / ((int)v_17 + 290))) - p_13);
    v_17 = (unsigned short)v_19;
    v_11 = (unsigned int)(- ((int)((unsigned short)(- p_5[2])) * (int)v_17));
  }
  else {
    v_11 = (unsigned int)(~ v_25);
    v_19 = (float)(! ((v_23 - 4294967198U) - 4294947309U));
    v_15 = (int)((float)(! p_7[0]) * - v_19);
  }
  if (((unsigned long)(p_9 * 191L) | (unsigned long)(! v_11)) * (unsigned long)(! p_13) == 1UL) 
    result = (unsigned long long)-4239561472.f;
  else {
    v = (long long)(- ((-19080. + p_5[4]) / ((double)(p_7[0] / 23961U) + 467.)));
    result = p & (unsigned long long)(~ v);
  }
  return result;
}

