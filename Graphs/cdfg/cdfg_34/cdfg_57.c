#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 671733174
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, float p_4, long p_7)
{
  unsigned long long v_9;
  long long v;
  short result;
  v = (long long)p_4;
  result = (short)-25811;
  v = ! v;
  while (((int)p - (int)result * (int)((short)p_4)) / ((int)(~ (~ p)) + 637) == 0) {
    v_9 = v * 57684LL;
    v = 0LL;
    result = (short)((~ v % (long long)((p_7 - 45969L) + 258L)) / 47631LL);
  }
  while_0_break: ;
  return result;
}

