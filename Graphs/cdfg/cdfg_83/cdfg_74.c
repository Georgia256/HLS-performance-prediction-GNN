#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 988239867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, signed char p_4, unsigned long long p_9,
         unsigned long p_13[4][2])
{
  unsigned long long v_11;
  float v_7;
  long v;
  char result;
  v_11 = 18446744073709539454ULL;
  v = -907503939L;
  v_7 = (float)(0ULL % (- (p_9 / 13364ULL) + 217ULL));
  if ((float)((long)(~ p_4) * v) + - (- v_7) == (float)((p_9 - v_11 / 765662403ULL) / (unsigned long long)(
                                                        p_13[2][0] + 700UL))) 
    result = (char)(- (- (- -5.80985195002e+37)));
  else result = (char)((int)(- p) / ((int)((short)((double)((int)p / -982562431) * 148126899.575)) + 851));
  return result;
}

