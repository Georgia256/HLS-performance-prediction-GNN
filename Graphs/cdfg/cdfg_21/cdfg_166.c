#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 602948468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, signed char p_5[4][3][4], int p_9,
         unsigned int p_11, signed char p_15)
{
  double v_17;
  float v_13;
  unsigned long v_7;
  unsigned short v;
  long result;
  v_17 = -1.92156387888e+38;
  if (v_17 >= 7652892561.28) v_13 = (float)p_15;
  else v_13 = (float)4167201300U;
  if (- ((float)(! p_11) - - v_13) >= 32551.f) {
    v = (unsigned short)p_5[1][2][2];
    result = (long)((unsigned long long)((unsigned long)((long)v % -47922L) ^ 4203226235UL) * (
                    ~ p - (unsigned long long)v / (p + 496ULL)));
  }
  else {
    v_7 = 3657774135UL;
    result = (long)((int)((double)(- v_7) * 690724063959.) * p_9);
  }
  return result;
}

