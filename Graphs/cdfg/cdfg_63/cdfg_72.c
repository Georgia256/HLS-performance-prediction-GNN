#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918582629
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, signed char p_9, long long p_11, short p_13,
          unsigned long long p_15)
{
  long v_27;
  int v_25;
  double v_23;
  unsigned int v_21;
  int v_19;
  unsigned int v_17;
  unsigned long long v_7;
  signed char v_5;
  char v;
  float result;
  v_27 = 155708264L;
  v_25 = 633655131;
  v_23 = (double)p;
  v_21 = (unsigned int)p_9;
  v_17 = (unsigned int)p_11;
  v_7 = (unsigned long long)p_11;
  v = (char)p;
  result = (float)p_15;
  if (v_7 != p_15) {
    v_17 = v_17;
    v_5 = (signed char)((double)(- ((unsigned int)p * v_21)) * (19695. * (
                                                                (double)v * v_23)));
    v_19 = (int)p_11;
  }
  else {
    v_17 = (unsigned int)(~ ((p_11 % (long long)((int)p + 972)) % (long long)(
                             105 * (int)v + 730)));
    v_19 = (int)((long)(- ((int)v * v_25)) - ~ (v_27 % 1751L));
    v_5 = - (~ p_9);
  }
  if (- v_17 <= (unsigned int)((-10019 + ((int)v_5 - 166)) * (int)(result * (float)(! v_19)))) 
    result = (float)p;
  else {
    v_7 = (unsigned long long)p_13 + ! (3574006823ULL / (p_15 + 149ULL));
    v_5 = (signed char)(- p_11 % (long long)((int)(- v) + 544) + (long long)(
                                                                 (unsigned int)v_5 * 29196U) * - p_11);
    result = (float)((unsigned long long)(! (825251623UL % (unsigned long)(
                                             (int)v + 602))) % (((unsigned long long)(
                                                                 (int)((signed char)-1575303552.f) * (int)v_5) - (
                                                                 v_7 - (unsigned long long)p_9)) + 638ULL));
  }
  return result;
}

