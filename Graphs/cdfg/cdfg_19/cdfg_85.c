#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 423312286
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, int p_7, double p_9)
{
  unsigned long long v_13;
  long v_11;
  signed char v_5;
  int v;
  char result;
  v_13 = (unsigned long long)p_7;
  v_11 = (long)p_9;
  v_5 = (signed char)-34;
  result = (char)-126;
  v = (int)((float)((198731540ULL * (unsigned long long)p_7) / (v_13 * (unsigned long long)v_5 + 208ULL)) + p);
  if (136L == v_11 / 168L) result = (char)(- (- (- p)));
  else {
    v = ~ (v + (int)(- p_9));
    v_5 = (signed char)(- result);
    result = (char)(- (((int)result - v) % ((int)v_5 / (p_7 + 522) + 729)));
  }
  return result;
}

