#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 668434671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(void)
{
  unsigned char v_4;
  unsigned long v;
  long result;
  v_4 = (unsigned char)111;
  v = 4294937230UL;
  result = (long)((v + (unsigned long)v_4 * v) / 107UL);
  result = result;
  return result;
}

