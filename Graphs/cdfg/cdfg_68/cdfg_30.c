#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600968910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, signed char p_5, float p_15, unsigned long long p_17[3])
{
  long long v_13;
  char v_11;
  long v_9;
  unsigned char v_7;
  double v;
  char result;
  v_11 = (char)p_5;
  v_9 = (long)p_15;
  v_7 = (unsigned char)p_17[0];
  v = (double)p_5;
  result = (char)p_5;
  v_13 = (long long)(-2.05396399241e+38 * (v - 3684916951.));
  while ((int)((short)(- (- p))) * 17248 >= (((int)((signed char)v) & (int)p_5) - (
                                             (int)((char)p) | (int)result)) / 21236) {
    v_7 = (int)v_7 * 7;
    v_11 = (char)((float)(((long long)v_11 + v_13) + 17514LL) + (p_15 / (
                                                                 (float)v_9 + 92.f)) / (
                                                                -1062331328.f * (float)p_17[2] + 905.f));
    v_9 = (long)(8392ULL - (1148029515ULL + ((unsigned long long)result - 18446744073709492597ULL)));
    result = (char)(- p_5);
  }
  while_0_break: ;
  return result;
}

