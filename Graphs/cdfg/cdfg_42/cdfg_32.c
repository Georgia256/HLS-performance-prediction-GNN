#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810487088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned char p_4, int p_6,
                  unsigned short p_8, unsigned long p_10)
{
  long long v_13;
  float v;
  unsigned long result;
  v_13 = (long long)p_4;
  v = -2.44980719314e+38f;
  v = (float)((double)(- (v * (float)v_13)) + ((double)p_8 / -5590240774.38) / 47.);
  if ((p_10 | (unsigned long)v) % (unsigned long)((int)(~ p) + 369) + 
      (unsigned long)p * p_10 <= (unsigned long)p_6) result = (unsigned long)p;
  else result = (unsigned long)(! (((int)p_4 - p_6) % (56516 * (int)p_8 + 382)));
  return result;
}

