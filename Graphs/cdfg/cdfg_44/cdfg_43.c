#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 631969484
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, char p_4, long long p_9)
{
  double v_15;
  unsigned short v_13;
  float v_11;
  signed char v_7;
  signed char v;
  unsigned char result;
  v_15 = 2799231651.67;
  v_13 = (unsigned short)p;
  v_7 = (signed char)6;
  v_11 = (float)(~ (~ (32552LL % (p_9 + 457LL))));
  if ((int)(- v_11) == (int)v_13 * (int)((unsigned short)v_15)) result = (unsigned char)p;
  else {
    result = (unsigned char)((long long)(~ v_7) | p_9);
    v = (signed char)(! p * 26634);
    result = (unsigned char)((int)p_4 << ((int)result * ((int)p_4 + (int)v) & 7));
  }
  return result;
}

