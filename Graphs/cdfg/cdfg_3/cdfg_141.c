#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071079970
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p[1])
{
  unsigned short v;
  char result;
  v = (unsigned short)59366;
  result = (char)(~ (p[0] / -4263));
  result = (char)(~ ((int)(- result) / ((int)(! v) + 694)));
  return result;
}

