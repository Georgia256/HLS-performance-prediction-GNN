#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 497138836
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, short p_5, int p_7, unsigned long long p_9[1],
                   short p_11)
{
  unsigned long long v_13;
  int v;
  unsigned short result;
  v_13 = (unsigned long long)p_7;
  if (147836609ULL + (13951ULL + ~ p_9[0]) > (unsigned long long)(335 - (int)p_5) * v_13) 
    result = (unsigned short)71;
  else {
    v = (int)-3.13063393515e+38f * ! ((int)p | (int)p_5);
    result = (unsigned short)(! (- v) / (v + 528));
  }
  return result;
}

