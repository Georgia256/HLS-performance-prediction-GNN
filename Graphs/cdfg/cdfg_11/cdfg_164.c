#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 913908789
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, short p_7, unsigned long long p_11,
                  unsigned long long p_15, unsigned short p_19)
{
  char v_25;
  char v_23;
  long v_21;
  double v_17;
  float v_13;
  float v_9;
  float v_4;
  signed char v;
  unsigned long result;
  v_25 = (char)p_19;
  v_23 = (char)p;
  v_21 = (long)p;
  v_17 = (double)p_7;
  v_13 = 7559763968.f;
  v_9 = 1.15946777682e+38f;
  v_4 = -755.229003906f;
  v = (signed char)p_7;
  result = 4294941905UL;
  if (- ((double)(v_9 / ((float)p + 602.f)) - -77. * v_17) < (double)(
      ! (830856799ULL - p_15) - (unsigned long long)v_4)) {
    v_9 = (float)(((unsigned long long)v_9 / (p_11 + 45ULL) - (unsigned long long)v) * (unsigned long long)(
                  4294924625UL & (unsigned long)((int)v_23 * (int)p_7)));
    result = (unsigned long)(! ((unsigned long long)(! p_7) & p_15 / (
                                                              p_15 + 789ULL)));
    v_21 = (long)v_9;
  }
  else {
    v_17 = (double)(35 | (int)(! (~ v_25)));
    v_9 = (float)((unsigned long long)v_23 % (p_15 + 362ULL));
    v_13 = (float)(signed char)62;
  }
  if (- (- p_11) > (unsigned long long)(~ (100219086L - (long)v_17) - ! (
                                        (long)p_19 / (v_21 + 386L)))) {
    v_4 = (float)(432495467ULL | ((unsigned long long)v_9 + (p_11 + (unsigned long long)v_13)));
    v = (signed char)p_7;
    result = (unsigned long)(- ((float)v - (v_4 - (float)p)));
  }
  else {
    v = (signed char)(- (0UL - (4294967191UL + result)));
    v_17 = (double)v;
    result = (unsigned long)(! (p_15 - 60ULL) - (unsigned long long)(
                             -14952 / ((int)v_17 + 890) - 12023));
  }
  return result;
}

