#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 143464896
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, float p_4, double p_6, long p_9,
                unsigned char p_11)
{
  long v_17;
  short v_15;
  int v_13;
  double v;
  signed char result;
  v_15 = (short)-22534;
  v_13 = (int)p_6;
  v = (double)p;
  result = (signed char)p_6;
  while (- (- p_6) - (double)(((long)v - p_9) * (long)(- p_11)) <= (double)result) {
    v_17 = (int)v_15 * (v_13 + 7);
    v_13 = (int)(- p_4);
    v_15 = (short)(~ (! (-866 * (int)((short)p_4))));
    result = (signed char)(((long)v_15 & ~ v_17) ^ (p_9 / (long)((int)v_15 + 468) - v_17));
  }
  while_0_break: ;
  result = (signed char)(! ((int)(- p) % (((int)result + (int)((signed char)p_4)) + 211)));
  return result;
}

