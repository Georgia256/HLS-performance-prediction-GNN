#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 973578996
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned char p_5[4], double p_7)
{
  unsigned long v_15;
  float v_13;
  int v_11;
  long v_9;
  short v;
  char result;
  v_15 = 57832UL;
  v_13 = p;
  v_11 = (int)p_5[1];
  v = (short)p_7;
  result = (char)p_7;
  v_9 = (long)(! (! (3502046848UL | v_15)));
  while (((float)v + p) / ((-59.f - p) + 253.f) - -16479.f == (float)(
         (-52973 & (int)(! p_5[0])) * ((-2481 - (int)result) + (int)(- p_7)))) {
    v_13 = (long)v_13 % ((long)v_11 % ((v_9 | -70L) + 864L) + 812L);
    v_9 = (long)(! (unsigned short)53827);
    v_11 = (int)(-20195LL + (long long)((int)((char)p_7)));
    result = (char)v_9;
  }
  while_0_break: ;
  return result;
}

