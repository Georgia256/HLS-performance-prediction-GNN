#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 34238687
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p)
{
  unsigned char v_8;
  long v_6;
  float v_4;
  long long v;
  short result;
  v_6 = (long)p;
  v_4 = (float)p;
  v = 24739LL;
  result = (short)607;
  v_8 = (unsigned char)v;
  while ((int)result <= (int)((short)((float)v / ((- v_4 + (float)((long long)v_6 - v)) + 59.f)))) {
    v = (float)v_8 / -5169369600.f;
    v_8 = (unsigned char)194;
    v = (long long)((992102049ULL % (unsigned long long)((int)p + 485) + (unsigned long long)p) - (unsigned long long)v);
    v_6 = (long)p;
  }
  while_0_break: ;
  return result;
}

