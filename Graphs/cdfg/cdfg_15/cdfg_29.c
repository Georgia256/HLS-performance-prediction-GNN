#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 9300150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, char p_5[4], int p_7, signed char p_9, float p_11)
{
  unsigned char v_13;
  char v;
  unsigned int result;
  v = (char)-119;
  v_13 = (unsigned char)((int)v / ((13499 - (int)p_5[2]) * (int)(p_11 / (
                                                                 p_11 + 196.f)) + 774));
  if (0. <= (double)((1670 % ((int)v_13 + 527)) % ((int)(! p) + 206)) + 320397150.094) {
    result = (unsigned int)p;
    v = (char)(! (((unsigned int)p - result) & 4294967283U));
    result = (unsigned int)v;
  }
  else result = (unsigned int)(! (0 % ((int)p_5[3] + 773)));
  return result;
}

