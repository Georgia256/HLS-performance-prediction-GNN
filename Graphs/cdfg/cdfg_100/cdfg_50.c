#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 298783325
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, unsigned short p_5)
{
  short v_9;
  unsigned short v_7;
  signed char v;
  short result;
  v_9 = (short)p;
  v_7 = (unsigned short)62405;
  v = (signed char)p_5;
  result = (short)-14458;
  v = (signed char)((((int)p_5 + (int)result) % (((int)v_7 - (int)v_9) + 434)) % (
                    (int)v + 588));
  result = (short)(-2043LL * (long long)((p * (unsigned long)v) * 31404UL));
  return result;
}

