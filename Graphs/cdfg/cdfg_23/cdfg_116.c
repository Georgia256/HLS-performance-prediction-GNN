#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 911237895
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, unsigned short p_5[4], unsigned short p_9,
                   long long p_13)
{
  unsigned long long v_17;
  signed char v_15;
  unsigned int v_11;
  unsigned int v_7;
  short v;
  unsigned short result;
  v_17 = (unsigned long long)p_5[1];
  v_15 = (signed char)p_9;
  v_11 = 4294945965U;
  v = (short)p_5[3];
  v_7 = (unsigned int)(18446744073589639319ULL % ((unsigned long long)(
                                                  p_13 / (long long)(
                                                  (int)v_15 + 593)) / (
                                                  ~ v_17 + 563ULL) + 313ULL));
  if (19U + ((unsigned int)(! v) - ((unsigned int)p_5[3] | v_7)) >= - (
      ((unsigned int)p_9 & v_7) - ! v_11)) result = (unsigned short)-409626816.f;
  else {
    v = (short)32028;
    result = (unsigned short)(- (! p - (long long)(! v)));
  }
  return result;
}

