#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 838210414
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, double p_9)
{
  unsigned int v_6;
  char v_4;
  double v;
  long result;
  v_6 = (unsigned int)p_9;
  result = (long)p;
  v = (double)(- (- ((unsigned long)result / 556352284UL)) % (unsigned long)(
               (~ v_6 + (unsigned int)((int)p - (int)((char)(- p_9)))) + 707U));
  v_4 = (char)v;
  v = (double)v_4;
  result = (long)v;
  return result;
}

