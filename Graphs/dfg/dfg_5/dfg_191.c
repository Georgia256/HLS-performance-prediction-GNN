//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 15292764
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, double p_9, unsigned long long p_11)
{
  unsigned long v_7;
  long v_5;
  short v;
  char result;
  v_5 = -152827023L;
  result = (char)v_5;
  v_7 = (unsigned long)((((double)p - - p_9) - (double)result) + - (- p_9 / (
                                                                    (double)p_11 + 428.)));
  v = (short)v_7;
  result = (char)((unsigned long long)(((long long)(- result) * -41164LL) % (long long)(
                                       ((long)((int)v * (int)p) + (long)4738022912.f * v_5) + 137L)) ^ (
                  (unsigned long long)(~ ((int)result % ((int)result + 819))) + 18446744073709500778ULL));
  return result;
}

