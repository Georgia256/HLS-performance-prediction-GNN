#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 51635426
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p[4], float p_5)
{
  unsigned short v_7;
  long v;
  long long result;
  v_7 = (unsigned short)40450;
  result = 27487610LL;
  v = (long)(! (((int)v_7 - (int)v_7) * ((int)-1.76895185294e+38f - 179187738)));
  result = (long long)((unsigned long long)(((long long)v - result) % -41978LL) % (
                       (((unsigned long long)p[2] - 42289ULL) | (unsigned long long)(
                        (long long)p_5 + result)) + 445ULL));
  return result;
}

