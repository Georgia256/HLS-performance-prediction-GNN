#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 105083506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned int p_13, unsigned long p_15[2],
         unsigned short p_17, unsigned short p_19)
{
  float v_23;
  double v_21;
  float v_11;
  char v_9;
  unsigned char v_7;
  float v_5;
  unsigned short v;
  char result;
  v_23 = (float)p;
  v_21 = -4439262636.57;
  v_9 = (char)p_13;
  v_7 = (unsigned char)218;
  v_5 = 4304777728.f;
  v = (unsigned short)14912;
  result = (char)p_17;
  while ((unsigned long)result == ! p_15[1] >> ((int)(! p) & 31)) {
    v_5 = (int)((unsigned char)v_23) % 150;
    v_9 = (char)((int)((short)v_5) * (int)p);
    v_23 = (float)((- p_13 + (unsigned int)((int)p % ((int)v + 160))) ^ (unsigned int)p_17);
    result = (char)(- ((double)p_19 * (109. - v_21)));
  }
  while_0_break: ;
  if ((double)p > v_21) {
    v_7 = (unsigned char)(~ (! ((int)p ^ (int)v_7)));
    v = (unsigned short)(12 % (((int)((char)v_5) / ((int)result + 173)) * (
                               (int)v_7 - -8) + 451));
    result = (char)((unsigned long)(! result) * 3605043273UL + (unsigned long)(
                    (int)p + (int)v * (int)((unsigned short)2951475456.f)));
  }
  else {
    v_11 = (float)(- (v_21 - -677.136108398) * (double)v_7);
    v_7 = (unsigned char)((((int)p_17 - -34) / ((int)p_19 + 471)) / 73);
    result = (char)((unsigned long)((int)v_7 / ((int)v_9 + 532) + ((int)((short)v_11) + -8367)) + ! (
                    (unsigned long)p_13 * p_15[1]));
  }
  return result;
}

