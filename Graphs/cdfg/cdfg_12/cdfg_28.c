#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 505237853
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, float p_7, unsigned char p_9, char p_13,
                  unsigned int p_15)
{
  unsigned char v_11;
  signed char v_4;
  float v;
  unsigned long result;
  result = 12851UL;
  v_11 = (unsigned char)((unsigned long)(- (-18375L ^ (long)p_13)) + ! (
                         result / (unsigned long)(p_15 + 736U)));
  if (- ((int)p_9 + (int)v_11) == (int)6.20659422003e+12f) {
    v = 1.92060363237e+38f;
    result = (unsigned long)(- v);
  }
  else {
    v_4 = (signed char)6;
    result = (unsigned long)(! ((int)v_4 / ((int)((signed char)p) + 826)) / (
                             (int)(- (p_7 + -3.35786202925e+38f)) + 17));
  }
  return result;
}

