#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 159515187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p[3][1][2], short p_5, unsigned int p_7,
              float p_15[5][2])
{
  signed char v_17;
  long v_13;
  long long v_11;
  unsigned short v_9;
  unsigned long long v;
  long long result;
  v_17 = (signed char)p_15[3][0];
  v_11 = (long long)p_5;
  v_9 = (unsigned short)p[2][0][0];
  v = 739104306ULL;
  while ((4150179290UL & (unsigned long)((unsigned int)p[1][0][0] ^ (unsigned int)p_5 * p_7)) != (unsigned long)v_9) {
    v_13 = (long)(p_15[0][0] - (float)(! (4294928370UL * (unsigned long)v_17)));
    v = (unsigned long long)(~ (! (! v_13)));
    v_9 = (unsigned short)v_11;
  }
  while_0_break: ;
  result = (long long)v;
  return result;
}

