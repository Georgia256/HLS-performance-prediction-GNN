#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 300700533
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, signed char p_9, float p_15, short p_17,
                 unsigned long p_21)
{
  long long v_19;
  float v_13;
  long long v_11;
  unsigned long long v_7;
  short v_4;
  float v;
  unsigned int result;
  v_19 = (long long)p_9;
  v_11 = (long long)p;
  v_7 = 18446744072683065553ULL;
  if ((float)(~ v_19) > -476.889587402f / ((float)((long long)((unsigned long)p_17 * 4047444077UL) + 
                                                   -961204348LL * (long long)p_21) + 922.f)) {
    v_4 = (short)((v_7 * 41432ULL) / 4294914692ULL + (unsigned long long)(
                  ((long long)p_9 + v_11) / 35301LL));
    v_4 = (short)((float)(! ((int)v_4 * 13990)) * p);
    v = (float)v_4;
  }
  else {
    v_13 = (float)p_17;
    v = v_13 / ((- p_15 + 0.f) + 44.f);
  }
  result = (unsigned int)v;
  return result;
}

