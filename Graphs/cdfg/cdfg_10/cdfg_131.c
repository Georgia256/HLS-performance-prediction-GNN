#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194780029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[1], float p_5, unsigned char p_9,
                   signed char p_17)
{
  unsigned int v_21;
  char v_19;
  unsigned long long v_15;
  float v_13;
  unsigned long v_11;
  double v_7;
  unsigned long long v;
  unsigned short result;
  v_21 = (unsigned int)p_5;
  v_19 = (char)p_9;
  v_15 = (unsigned long long)p_9;
  v_13 = 939.388793945f;
  v_11 = (unsigned long)p[0];
  v_7 = (double)p_17;
  v = (unsigned long long)p_17;
  while ((double)((unsigned long long)(! p_17) % (v + 286ULL)) <= v_7) {
    v_13 = v_21 + (unsigned int)v_19 / 4294937257U;
    v_19 = (char)p_5;
    v = (unsigned long long)((v_7 + (double)(- v_13)) / -6735429218.58);
    v_7 = (double)(18446744073709539261ULL / ((unsigned long long)(v_11 & v_11) * (
                                              (unsigned long long)v_11 & 18446744073709511928ULL) + 327ULL));
  }
  while_0_break: ;
  if (~ (v % (unsigned long long)((int)p_9 + 225)) + (unsigned long long)(
      -7L + -41980L / ((long)v_13 + 139L)) < (unsigned long long)((53214LL + p[0]) % 4294926462LL) - v_15) {
    result = (unsigned short)(- (- p_5 - 22161.f));
    v = ~ (18446744072753517643ULL % (unsigned long long)((long long)result / (
                                                          p[0] + 398LL) + 36LL));
    result = (unsigned short)(- (- v));
  }
  else {
    v_11 = (unsigned long)(-0LL);
    v_7 = (double)((unsigned long)(-69.1736551311 * (double)p_9) * - (! v_11));
    result = (unsigned short)v_7;
  }
  return result;
}

