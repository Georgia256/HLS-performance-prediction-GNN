#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 461360783
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(void)
{
  char v_4;
  short v;
  unsigned short result;
  v_4 = (char)48;
  v = (short)12853;
  result = (unsigned short)v_4;
  result = (unsigned short)((int)v / (~ ((int)v_4 + (int)result) + 416));
  return result;
}

