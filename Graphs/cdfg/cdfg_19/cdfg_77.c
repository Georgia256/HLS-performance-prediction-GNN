#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 442264961
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, char p_4, float p_11, float p_13)
{
  unsigned short v_9;
  signed char v_7;
  unsigned long v;
  unsigned long result;
  v_9 = (unsigned short)44542;
  v = 4148370709UL;
  v_7 = (signed char)((118 + (int)v_9 / 57188) * (int)(- p_11 * (float)(
                                                       21320 - (int)((short)p_13))));
  result = (unsigned long)(((int)p + (int)((signed char)-6585665536.f)) % (
                           (int)(- p_4) + 461)) / (~ (v - (unsigned long)v_7) + 999UL);
  return result;
}

