#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 361051942
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[5], long p_4, long p_7, long long p_11, char p_13)
{
  unsigned char v_19;
  char v_17;
  int v_15;
  unsigned long v_9;
  double v;
  unsigned char result;
  v_19 = (unsigned char)196;
  v_17 = (char)p[3];
  v_15 = (int)(- p_11);
  if (- v_15 >= ~ (~ ((int)v_17 + (int)v_19))) result = (unsigned char)(- (
                                               (long)(- p[0]) - p_4));
  else {
    v_9 = (unsigned long)(~ (- p_11));
    v = (double)(! (- (! (signed char)105)));
    result = (unsigned char)(35140UL / (((unsigned long)((long)v % (p_7 + 104L)) ^ ~ v_9) + 521UL));
  }
  return result;
}

