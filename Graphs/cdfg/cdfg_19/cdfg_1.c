#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 861707457
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p[2][2][1], unsigned char p_4, char p_13, unsigned short p_15)
{
  short v_11;
  signed char v_9;
  unsigned long v_7;
  short v;
  short result;
  v_11 = (short)32443;
  v_9 = (signed char)-29;
  v_7 = (unsigned long)p_13;
  v = (short)(v_7 % (unsigned long)(((int)((char)-2129252992.f) - (int)(! p[0][1][0])) + 484));
  if ((unsigned long)((int)(! p_4) / ((int)(~ v) + 562)) + (v_7 % ((unsigned long)5.63083487926e+36f + 316UL)) % (
                                                           ((unsigned long)v_9 - 52679UL) + 379UL) == (unsigned long)(
      ((int)v_11 + (int)p_13) / ((int)p_15 + 358))) result = (short)126;
  else result = (short)p[0][1][0];
  return result;
}

