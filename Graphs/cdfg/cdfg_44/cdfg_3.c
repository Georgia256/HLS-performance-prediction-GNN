#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1005470297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, int p_5, float p_7, double p_17, short p_19[2])
{
  unsigned int v_15;
  unsigned int v_13;
  int v_11;
  signed char v_9;
  short v;
  long result;
  v_13 = (unsigned int)p_5;
  v_11 = 671705931;
  v_9 = (signed char)112;
  v = (short)p_5;
  while ((unsigned long)(((int)((signed char)p_7) + (int)v_9) % (v_11 + 578)) != 22046UL) {
    v_9 = v_13 & 4294967192U;
    v_13 = (unsigned int)((int)1.55937888652e+38f * ((int)p_19[1] / -466828657 + 
                                                     55 % (v_11 + 711)));
    v_15 = (unsigned int)v_9;
    v_11 = (int)(p_7 - (float)((unsigned int)(! p_5) / ((v_15 | (unsigned int)p_17) + 385U)));
  }
  while_0_break: ;
  result = (long)(p - (double)((63403 - (int)v) + p_5));
  return result;
}

