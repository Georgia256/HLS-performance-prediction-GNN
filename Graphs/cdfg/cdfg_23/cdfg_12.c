#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164404488
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p)
{
  float v_11;
  unsigned char v_9;
  unsigned short v_7;
  short v_5;
  float v;
  unsigned long long result;
  v_11 = -7772068864.f;
  v_7 = (unsigned short)p;
  v_5 = p;
  v = (float)p;
  result = (unsigned long long)(((double)((float)v_7 / (v_11 + 387.f)) + -3.34995509423e+38) / (
                                (-8701880166.62 + (double)(15595ULL - (unsigned long long)p)) + 432.));
  while (- v / ((float)(39668ULL % (unsigned long long)((int)(- p) + 392)) + 348.f) < (float)(! (
         ((unsigned long)v_5 % 542249330UL) * 173UL))) {
    v_7 = (long)v_7 % -59648L;
    v_9 = (unsigned char)154;
    result = (unsigned long long)v_9;
    v_5 = (short)-124;
  }
  while_0_break: ;
  return result;
}

