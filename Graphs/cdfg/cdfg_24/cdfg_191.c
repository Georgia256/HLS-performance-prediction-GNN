#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 543647485
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, char p_5[5][1], unsigned long long p_9,
         unsigned long p_13, unsigned long long p_15)
{
  unsigned long long v_25;
  long v_23;
  unsigned short v_21;
  float v_19;
  long long v_17;
  unsigned short v_11;
  unsigned long v_7;
  unsigned int v;
  char result;
  v_25 = 41804ULL;
  v_23 = 118279492L;
  v_21 = (unsigned short)p;
  v_19 = 2.02918632348e+38f;
  v_7 = 16269UL;
  v = 977647636U;
  result = p_5[0][0];
  if (v_25 < (unsigned long long)((-27264LL + (long long)(~ v)) % (long long)(
                                  34UL * ~ v_7 + 583UL))) {
    v = (unsigned int)((long)((int)v_21 % ((int)((unsigned short)v_19) + 505)) * (
                       v_23 + -105L));
    v_17 = (long long)(18446744073547195778ULL % (unsigned long long)(
                       ~ (-5732 * (int)result) + 534));
    v_11 = (unsigned short)(! 18446744072845888699ULL);
  }
  else {
    v_11 = (unsigned short)(! (- (p_9 | 21ULL)));
    v = (unsigned int)p_9;
    v_17 = (long long)(~ (170 / (0 % ((int)v_11 + 697) + 321)));
  }
  if (186ULL != (unsigned long long)((25LL / (v_17 + 364LL)) / ((long long)v_19 + 587LL)) % (
                (p - (p_15 + 38594ULL)) + 827ULL)) {
    v_7 = (unsigned long)((unsigned long long)v % (18446744073598887200ULL * (unsigned long long)v_11 + 900ULL) & (
                          ((unsigned long long)p_13 + p_15) & (unsigned long long)v));
    v = (unsigned int)(~ (((unsigned long long)v_7 + p_9) - (unsigned long long)(
                          v_7 >> 25)));
    result = (char)((unsigned long long)v * (p % (unsigned long long)(
                                             (int)(~ p_5[1][0]) + 889)));
  }
  else result = (char)(! p_15);
  return result;
}

