#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1015376683
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p[3], signed char p_11[4], long long p_13,
                   long long p_15[1], float p_19[1])
{
  int v_17;
  unsigned short v_9;
  unsigned char v_6;
  double v_4;
  float v;
  unsigned short result;
  v_17 = 140906855;
  v_4 = -3.37708329854e+38;
  v_9 = (unsigned short)(- p_19[0]);
  if (~ (4294884329UL - (unsigned long)(~ v_17)) >= (unsigned long)((
                                                                    (int)p_11[1] % -123) % (
                                                                    (int)(
                                                                    p_19[0] + (float)v_17) + 509) - v_17)) {
    v = (float)v_4;
    v = - (- v);
    result = (unsigned short)v;
  }
  else {
    v_6 = (unsigned char)((long long)(! (! p_11[3])) % ((p_13 - p_15[0] % -52970LL) + 183LL));
    v_9 = (unsigned short)((int)(~ (! p_11[3])) + -52 * (int)(~ v_9));
    result = (unsigned short)((int)((float)v_6 - ((float)p[0] + 1.3491695595e+38f)) - (
                              -43 - (int)(- v_9)));
  }
  return result;
}

