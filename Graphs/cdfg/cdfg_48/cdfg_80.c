#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 67865142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p)
{
  unsigned long v_7;
  short v_4;
  signed char v;
  unsigned long long result;
  v_7 = 39068UL;
  v_4 = (short)p;
  v = (signed char)(4294967172UL - v_7);
  result = (unsigned long long)(-20868 / ((int)((short)((double)((int)v / (
                                                                 (int)v_4 + 71)) + - p)) + 496));
  return result;
}

