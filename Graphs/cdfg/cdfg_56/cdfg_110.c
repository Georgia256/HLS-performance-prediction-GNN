#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 688422838
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p[1][4][4], unsigned short p_13)
{
  unsigned long v_11;
  unsigned char v_9;
  unsigned char v_7;
  short v_5;
  short v;
  unsigned short result;
  v_11 = (unsigned long)p_13;
  v_9 = (unsigned char)p_13;
  v = (short)p_13;
  result = p_13;
  v_7 = (unsigned char)(! p[0][0][0] >> ((int)(~ v_9) & 31));
  while ((int)((short)((double)(0UL ^ p[0][0][2]) + -724.136008997)) > (int)v) {
    v_5 = (int)v_7 % 11892;
    v_9 = (unsigned char)(- (! v_5));
    v_7 = (unsigned char)(~ 0);
    v = (short)(((unsigned long)(-901598353L | (long)v_9) + - v_11) - (unsigned long)p_13);
  }
  while_0_break: ;
  return result;
}

