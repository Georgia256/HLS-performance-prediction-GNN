#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 311996293
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, signed char p_7, unsigned long long p_15)
{
  unsigned short v_13;
  char v_11;
  unsigned long long v_9;
  short v_5;
  unsigned long long v;
  long result;
  v_13 = (unsigned short)38162;
  v_11 = (char)87;
  v_9 = 50801ULL;
  v_5 = (short)28498;
  v = 283520262ULL;
  result = (long)p;
  while (~ (! (v - (unsigned long long)v_5)) >= (unsigned long long)(
         (long long)((int)(~ p_7) % -28912) - ((long long)result % -41526LL) * -413LL)) {
    v = (v_9 / (unsigned long long)((int)p_7 + 129) & ~ p_15) * ((unsigned long long)(
                                                                 (long)6017314816.f % (
                                                                 result + 368L)) * (
                                                                 (unsigned long long)p | v_9));
    v_9 = (unsigned long long)(((int)p + (int)p_7) + (int)v_13) * (v_9 / (
                                                                   v_9 + 750ULL) + (unsigned long long)p);
    v_5 = (short)v_11;
  }
  while_0_break: ;
  result = (long)(((unsigned long long)-937977121.89 + v) * (unsigned long long)p ^ (unsigned long long)result);
  return result;
}

