#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 723126316
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p)
{
  short v_5;
  double v;
  int result;
  v_5 = (short)-5;
  v = 622.506690865;
  result = (int)(((long long)((int)p | 912) - ((long long)p & 842561302LL)) % (long long)(
                 - ((int)((short)v) * (int)v_5) + 957));
  result = result;
  return result;
}

