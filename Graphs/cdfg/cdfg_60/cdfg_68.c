#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156206947
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned long long p_7,
                  unsigned long long p_11, int p_13[1][5], signed char p_15)
{
  unsigned long v_17;
  long long v_9;
  unsigned long v_5;
  float v;
  unsigned char result;
  v_17 = (unsigned long)p_7;
  v_5 = 61034UL;
  v = (float)p_11;
  result = (unsigned char)20;
  if ((unsigned long)(- v) * ((unsigned long)((unsigned int)p_15 + 10602U) * (
                              v_17 | (unsigned long)v)) >= 1UL) {
    v = (float)(~ (- p_7));
    v_9 = (long long)(- (- v) - (float)(! (~ p_11)));
    v = (float)(((unsigned long long)(299658770LL >> (v_5 & 63UL)) + 
                 p_7 % (unsigned long long)((int)result + 292)) - (unsigned long long)(
                (long long)(-1671 >> (v_9 & 15LL)) % 62099LL));
  }
  else v = (float)(! (unsigned short)59249);
  result = (unsigned char)((float)p - - (- v));
  return result;
}

