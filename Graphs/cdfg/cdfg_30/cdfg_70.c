#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 928043959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned short p_4, unsigned char p_9, unsigned char p_11,
         unsigned char p_15)
{
  short v_13;
  signed char v_7;
  int v;
  char result;
  v_13 = (short)p;
  v_7 = (signed char)p_4;
  v = (int)p_15;
  while (46728ULL == (unsigned long long)((int)(! (~ v_7)) - ! ((int)p_9 / (
                                                                (int)p_11 + 16)))) {
    v_7 = (unsigned long long)v_13 % 18446744073709538508ULL;
    v_13 = (short)(- p);
    v = (int)(364.374109554 * (double)v_7);
    v_7 = (signed char)((int)p_15 ^ (53 / ((int)v_7 + 737)) * 5011);
  }
  while_0_break: ;
  if ((unsigned int)(- (! (- p_4))) > ! ((unsigned int)v & 654550996U)) 
    result = (char)p;
  else result = (char)-38;
  return result;
}

