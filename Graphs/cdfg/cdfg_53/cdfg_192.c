#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 134582889
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, signed char p_4, int p_7, short p_9, unsigned char p_11)
{
  char v_13;
  unsigned long v;
  char result;
  v_13 = (char)-7;
  result = (char)p_9;
  v = (unsigned long)((int)p_9 * (((int)result ^ (int)p_9) << ((int)v_13 & 31)));
  if (98UL != - (v | (unsigned long)(~ p_11))) {
    v = 672103075UL;
    result = (char)(- ((unsigned long)((int)result * (int)p_4) % ((3294496714UL ^ v) + 543UL)));
    result = (char)(~ (((int)result - 43908) | ! p));
  }
  else result = (char)(! (p_7 + (int)p_9) / -6568);
  return result;
}

