#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072282923
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(void)
{
  unsigned long v_4;
  long long v;
  unsigned char result;
  v_4 = 4294966444UL;
  v = 29233LL;
  v_4 = v_4;
  result = (unsigned char)(- (~ v) - (long long)(! (- v_4)));
  return result;
}

