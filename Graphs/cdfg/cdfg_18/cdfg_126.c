#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 854509323
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned char p_9, long p_15[1], long p_17)
{
  int v_13;
  unsigned long v_11;
  unsigned int v_7;
  unsigned short v_4;
  unsigned char v;
  signed char result;
  v_13 = 954640921;
  v_11 = (unsigned long)p_15[0];
  v_7 = (unsigned int)(p_15[0] ^ p_17);
  if ((unsigned long)v_7 < (((unsigned long)p_9 & v_11) & 2883434758UL) + (unsigned long)(- (
                           v_13 % -93))) {
    result = (signed char)-552.307064778;
    result = (signed char)((813883515U + (unsigned int)(~ result)) % 1633474286U);
  }
  else {
    v_4 = (unsigned short)19;
    v = (unsigned char)((int)(- (~ v_4)) >> ((62263U + (unsigned int)p) & 15U));
    result = (signed char)(! (((long)v - 727949001L) + (long)((int)v_4 - (int)v)));
  }
  return result;
}

