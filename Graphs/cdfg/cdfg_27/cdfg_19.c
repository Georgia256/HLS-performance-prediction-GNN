#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 281607846
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, float p_7, float p_13)
{
  unsigned long long v_11;
  unsigned short v_9;
  unsigned long v_5;
  unsigned char v;
  long result;
  v_9 = (unsigned short)p_13;
  v_5 = (unsigned long)p_7;
  v = (unsigned char)p_7;
  while ((float)((((int)p & (int)p) + 156 * (int)p) + - ((int)v * 79)) <= p_7) {
    v_5 = (int)v_9 / -82;
    v_9 = (unsigned short)59096;
    v_11 = (unsigned long long)(- p_13);
    v = (unsigned char)((unsigned long long)p % ((18446744073709551578ULL / (
                                                  v_11 + 868ULL) - (unsigned long long)p_13) + 165ULL));
  }
  while_0_break: ;
  result = (long)((unsigned long)v % ((unsigned long)(- p) * v_5 + 460UL));
  return result;
}

