#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305117715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, signed char p_13)
{
  unsigned char v_11;
  long v_9;
  long long v_7;
  unsigned long long v_5;
  signed char v;
  unsigned short result;
  v_11 = (unsigned char)p_13;
  v_7 = -485745493LL;
  v_5 = 18446744073709511048ULL;
  v = p_13;
  result = (unsigned short)p_13;
  v_7 = ((long long)(- v_11) % (v_7 % (long long)(p + 101U) + 195LL)) / (long long)(
        p / (unsigned int)((int)p_13 + 798) + 361U);
  while (~ (4294925214UL * (unsigned long)p) > (unsigned long)v) {
    v_9 = (unsigned long long)v_7 % ((v_5 - 18446744073709530026ULL) + 727ULL);
    v_7 = (long long)(~ ((unsigned long)v_9 + (unsigned long)p) >> 10);
    result = (unsigned short)(-0L);
    v = (signed char)p;
  }
  while_0_break: ;
  return result;
}

