#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 454330003
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, unsigned long long p_5, float p_7,
                  short p_9, float p_11)
{
  char v_17;
  unsigned char v_15;
  unsigned long v_13;
  int v;
  unsigned char result;
  v_17 = (char)126;
  v_15 = (unsigned char)186;
  v_13 = 4294929756UL;
  if ((int)((char)((p_7 + -3385.f) * (float)(! v_13) - (float)v_15)) == (int)v_17) {
    result = (unsigned char)((int)((short)-9168084992.f) + (int)(- p_9));
    v = -97 >> ((int)((signed char)(- p_7 - (float)(31430 % ((int)result + 182)))) & 7);
  }
  else v = (int)p_11;
  result = (unsigned char)((unsigned long long)v % (((unsigned long long)(
                                                     4294941264UL & p) - p_5) + 160ULL));
  return result;
}

