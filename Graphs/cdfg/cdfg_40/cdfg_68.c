#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 789637860
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, double p_5, int p_7)
{
  unsigned short v_9;
  char v;
  unsigned char result;
  v_9 = (unsigned short)1146;
  if ((long)(~ v_9) == 122457129L) v = (char)p_5;
  else v = (char)(- (p_7 | p_7));
  result = (unsigned char)(p % ((unsigned int)v / (p + 766U) + 539U));
  return result;
}

