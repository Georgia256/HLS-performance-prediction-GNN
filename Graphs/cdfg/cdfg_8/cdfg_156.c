#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 147508267
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, short p_15[1])
{
  float v_17;
  unsigned short v_12;
  int v_10;
  unsigned char v_8;
  unsigned long long v_6;
  short v_4;
  unsigned long v;
  short result;
  v_17 = 855.09954834f;
  v_12 = (unsigned short)p_15[0];
  v_10 = 686699118;
  v_8 = (unsigned char)18;
  v_6 = (unsigned long long)p_15[0];
  v_4 = (short)-17753;
  v = (unsigned long)p_15[0];
  result = (short)20911;
  while (((unsigned long long)((int)result + (int)((short)5914060288.f)) - (
          v_6 ^ 880018308ULL)) * (unsigned long long)(47 - ((int)v_8 + v_10)) > (unsigned long long)(
         (int)(~ (! v_12)) % (((int)p << ((int)result & 7)) % (((int)p_15[0] + (int)result) + 75) + 278))) {
    v_12 = (int)((unsigned short)v_17) & 52646;
    v_8 = (unsigned char)(- result);
    v_4 = (short)(-5118 + (int)p_15[0]);
    v_6 = (unsigned long long)((int)((unsigned char)-4758961558.81) % (
                               (int)v_8 + 993));
  }
  while_0_break: ;
  result = (short)(! ((unsigned long)result + v) + (unsigned long)v_4);
  return result;
}

