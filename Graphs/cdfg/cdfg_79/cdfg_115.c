#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203767243
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned short p_7, unsigned long p_11)
{
  signed char v_9;
  int v_5;
  unsigned long v;
  unsigned long result;
  v_9 = (signed char)p_11;
  if (((unsigned long)(~ (! v_9)) ^ - p_11 % 3869812773UL) > p_11) {
    v_5 = 52403;
    v = (unsigned long)v_5;
  }
  else v = (unsigned long)(~ p_7);
  result = - (v | (unsigned long)p) % 4294946044UL;
  return result;
}

