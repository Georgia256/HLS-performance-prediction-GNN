#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1053521130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, signed char p_4, short p_6, unsigned char p_15)
{
  float v_13;
  double v_11;
  unsigned int v_9;
  char v;
  short result;
  v_13 = (float)p_15;
  v_9 = 4294949338U;
  result = (short)-7243;
  v = (char)((-80 * (int)p_15) / 1025045760 - (int)(! p_6));
  while (((unsigned long long)(~ p) + (474073728ULL & (unsigned long long)p)) / (unsigned long long)(
         ((unsigned long)p_4 & (unsigned long)p_6 * 4294918709UL) + 197UL) > (unsigned long long)result) {
    v_11 = (int)v * -21176;
    v_9 = (unsigned int)((double)(! v_9 + (unsigned int)(- v_13)) + v_11);
    v = (char)((double)v_9 - - (- v_11));
    result = p_6;
  }
  while_0_break: ;
  return result;
}

