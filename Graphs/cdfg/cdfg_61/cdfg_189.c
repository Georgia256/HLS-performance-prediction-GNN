#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 730757158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, float p_11, float p_13,
                   unsigned long long p_15)
{
  unsigned short v_17;
  unsigned long long v_8;
  signed char v_6;
  long long v_4;
  unsigned long long v;
  unsigned short result;
  v_8 = (unsigned long long)p_11;
  v_4 = (long long)p_15;
  v_17 = (unsigned short)35193;
  if (! (- p_15) > (unsigned long long)(0 - (unsigned long)(~ v_17)) + 
                   18446744073709516195ULL / (p_15 * (unsigned long long)p_11 + 48ULL)) 
    result = ! (unsigned short)58254;
  else {
    v_6 = (signed char)(- ((unsigned long long)(v_4 - (long long)p_11) % (
                           ((unsigned long long)p_13 & 18446744073335620131ULL) + 361ULL)));
    v = (unsigned long long)v_6 / ((3348869880ULL - v_8) * (p ^ p) + 297ULL);
    result = (unsigned short)(~ ((18446744073709513322ULL - v) % (unsigned long long)(
                                 v_4 + 748LL)));
  }
  return result;
}

