#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421992668
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p)
{
  unsigned char v_6;
  int v_4;
  double v;
  int result;
  v_6 = (unsigned char)126;
  v_4 = (int)p;
  v = (double)(p / (p + 851.f));
  result = (int)((long)(((int)((unsigned short)v) >> 15) % -31929) * (
                 580817322L % (long)((v_4 - (int)v_6) + 655)));
  return result;
}

