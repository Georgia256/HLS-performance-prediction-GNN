#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 721943167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, double p_11[1], int p_13, signed char p_15)
{
  long v_19;
  short v_17;
  short v_9;
  short v_7;
  long v_5;
  float v;
  unsigned char result;
  v_19 = -698173669L;
  v_17 = (short)-14662;
  v_7 = (short)p_15;
  v_5 = -56028L;
  v = 936.279785156f;
  result = (unsigned char)p_11[0];
  while ((unsigned long long)(-4052L % ((long)(p_13 - 74) * v_5 + 75L)) <= 
         193755298ULL * (unsigned long long)(! v_17)) {
    result = v_19 + -71L;
    v_17 = (short)(~ (- (~ p)));
    v_9 = (short)(~ ((78L & p) | ~ p));
    v_5 = (long)(- ((int)v_7 * (int)result) + (int)v_9 * (int)p_15);
  }
  while_0_break: ;
  while ((long)result == - (- p)) {
    v = (unsigned long)v_5 % (unsigned long)(((unsigned int)v - 609801680U) + 311U);
    result = (unsigned char)(! ((unsigned long)(p / (long)(p_13 + 489)) - 33734UL));
    v_9 = (short)((unsigned int)v_7 - (unsigned int)(- p_11[0]) / ((unsigned int)result % 3373683565U + 700U));
    result = (unsigned char)((int)v_9 + (int)((short)8.50613835163e+37f));
  }
  while_0_break_0: ;
  return result;
}

