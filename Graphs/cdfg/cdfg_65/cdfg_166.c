#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 5076505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, double p_5, short p_9, int p_15)
{
  char v_19;
  char v_17;
  char v_13;
  unsigned long long v_11;
  char v_7;
  signed char v;
  char result;
  v_19 = (char)p;
  v_17 = (char)-34;
  v_13 = (char)32;
  v_11 = (unsigned long long)p;
  v_7 = (char)83;
  v = (signed char)p;
  result = (char)p;
  while (((int)(! v_13) % (p_15 + 933)) * ((62 + (int)p_9) - (int)result / 28323) < (int)(! v_17)) {
    v = (float)v_19 * 8.66187886201e+37f;
    v_7 = result;
    v_19 = (char)(v_11 * 18446744073709551580ULL);
    v_13 = (char)(~ ((long long)((int)v_19 >> 2) & 53982LL));
  }
  while_0_break: ;
  result = (char)((unsigned long long)((int)((signed char)p) / ((int)v + 505) - (int)(
                                       p_5 + 50252.)) * ((unsigned long long)(
                                                         (int)v_7 / (
                                                         (int)p_9 + 810)) / (
                                                         ! v_11 + 111ULL)));
  return result;
}

