#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 879548956
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, int p_7, unsigned long p_9[5][5], short p_17, long p_19)
{
  unsigned char v_15;
  unsigned int v_13;
  double v_11;
  signed char v_5;
  long v;
  double result;
  v_15 = (unsigned char)p_19;
  v_13 = (unsigned int)p_17;
  v_11 = (double)p_9[0][4];
  v_5 = (signed char)p_17;
  v = 38926L;
  result = 9895124106.49;
  v = (long)((double)((unsigned long)((int)p_17 >> 15) | (4035681869UL - (unsigned long)p_7)) * (
             (double)(p_19 % (v + 293L)) - ((double)v_15 + p)));
  while (v == (long)(-3.39528976816e+38 / (p * (double)v_5 + 1010.) - 
                     (p * (double)p_7) / ((double)(p_9[1][0] % 3626740894UL) + 1008.))) {
    v_15 = v_13 % ((unsigned int)(v_11 * 28507.) + 259U);
    result = (double)(! ((-627342460LL + (long long)p_7) - (long long)p_17));
    v_11 = result;
    v = (long)((unsigned long long)v_15 / 620661988ULL);
  }
  while_0_break: ;
  return result;
}

