#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 191501540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, int p_4, unsigned short p_6,
                 unsigned short p_9[1][3], double p_11)
{
  double v_13;
  unsigned char v;
  unsigned int result;
  v_13 = -2121373815.13;
  v = (unsigned char)(- (- (~ (short)-259)));
  if ((double)(0 - p_4 % ((int)((float)p_6 + -6490032128.f) + 495)) != 
      ((double)((int)v + (int)p_9[0][2]) / (p_11 / ((double)p_4 + 971.) + 283.)) * (
      619127568. + (v_13 - p_11))) result = (unsigned int)p;
  else result = (unsigned int)p;
  return result;
}

