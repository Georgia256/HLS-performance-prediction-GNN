#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 343500064
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, double p_9, unsigned long p_13)
{
  float v_15;
  unsigned char v_11;
  long long v_6;
  unsigned char v_4;
  float v;
  int result;
  v_15 = (float)p_9;
  v_11 = (unsigned char)64;
  v_6 = -54393LL;
  v_4 = (unsigned char)p;
  v = (float)p_9;
  while ((long long)((int)v_4 + 14993) - - (v_6 & v_6) > (long long)(
         (int)(~ p) + (int)((char)(- (p_9 / 40710.))))) {
    result = (long)v_11 % -21573L;
    v_4 = v_4;
    v = (float)((p_13 - (unsigned long)(28 & (int)((signed char)v_15))) + (unsigned long)(- (
                result - -36)));
    v_6 = (long long)p;
  }
  while_0_break: ;
  result = (int)(- v);
  return result;
}

