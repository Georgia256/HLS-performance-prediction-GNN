#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 316485556
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p)
{
  short v_12;
  double v_10;
  unsigned short v_8;
  double v_6;
  unsigned long long v_4;
  unsigned short v;
  signed char result;
  v_12 = (short)-7717;
  v_10 = (double)p;
  v_8 = (unsigned short)356;
  v_6 = -1.38389595376e+38;
  v_4 = (unsigned long long)p;
  v = (unsigned short)15033;
  while (40 >= (int)v_8) {
    v_8 = (int)v_12 & (int)((short)(v_10 + 3288225152.));
    v_12 = (short)(p + ((int)v + - p));
    v_6 = (double)((unsigned long long)p ^ 2925ULL);
    v_8 = (unsigned short)(! ((p - (int)v_8) + (int)(! v)));
  }
  while_0_break: ;
  result = (signed char)((unsigned long long)(778795189UL + (unsigned long)-84702358.2423) + (
                         ((unsigned long long)v ^ v_4) + (unsigned long long)(
                         (int)((signed char)v_6) & -48)));
  return result;
}

