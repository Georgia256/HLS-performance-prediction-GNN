#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 10322697
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, signed char p_4, unsigned long long p_7,
                double p_13, long p_19[3])
{
  long v_17;
  short v_15;
  unsigned long long v_11;
  long v_9;
  unsigned short v;
  signed char result;
  v_17 = (long)p_13;
  v_15 = p;
  v_11 = (unsigned long long)p_19[2];
  v = (unsigned short)p_7;
  if ((double)((long)((int)((short)(- p_13)) << ((int)(~ v_15) & 15)) / (
               (long)(-110.873931885f - (float)p) / (v_17 * -443566624L + 620L) + 895L)) >= 
      (double)(~ p_19[1]) - ((double)v / (p_13 + 534.)) * (718281737. - p_13)) 
    result = (signed char)(- (~ p));
  else {
    v_9 = (long)v_11;
    v = (unsigned short)v_9;
    result = (signed char)((unsigned long long)((long)p_4 * -33649L) * (
                           (unsigned long long)(-100 - (int)v) / ((18446744073709491797ULL - p_7) + 492ULL)));
  }
  result = (signed char)(0 ^ ! ((int)result - (int)result));
  return result;
}

