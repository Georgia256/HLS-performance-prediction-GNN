#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 740684080
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, char p_5[4][1], short p_7,
                   signed char p_15, unsigned int p_17[2])
{
  char v_25;
  unsigned char v_23;
  unsigned int v_21;
  double v_19;
  short v_13;
  signed char v_11;
  int v_9;
  unsigned short v;
  unsigned short result;
  v_25 = (char)-100;
  v_21 = 63053U;
  v_19 = -574.188072754;
  v_11 = (signed char)p_7;
  v_9 = (int)p_7;
  v = (unsigned short)47349;
  if (0 % (unsigned long long)((unsigned int)v_9 % ((p_17[0] - p_17[0]) + 792U) + 671U) == 0ULL) {
    v_23 = (unsigned char)(- (- p));
    v_13 = (short)(-1016301688LL + (long long)((v_21 - v_21) % (unsigned int)(
                                               (int)(~ v_23) + 825)));
    v_19 = (double)(((int)p_7 - (int)v_13) / (((int)v_13 & (int)v_11) + 1009) | (int)v);
  }
  else {
    v_11 = (signed char)(- (284.817321777f / ((float)(48924 + (int)((unsigned short)-2624092164.14)) + 975.f)));
    v_9 = (int)((unsigned int)((int)v_25 - ((int)p_5[2][0] + (int)p)) - v_21);
    v_13 = (short)(- ((v_9 | (int)p) % (-425252352 / ((int)p_15 + 764) + 620)));
  }
  if (~ p_17[0] == (unsigned int)((-365.832794189 - (v_19 + (double)p_7)) / 37623.)) {
    v_9 = (int)((unsigned int)v_11 % ((0 - (unsigned int)(- v_13)) + 189U));
    v = (unsigned short)((int)(! (- p_5[0][0])) % (! ((int)p_7 | v_9) + 667));
    result = (unsigned short)((unsigned long)(! ((int)v + (int)p)) - 
                              4294959747UL / (unsigned long)((int)p + 321));
  }
  else result = (unsigned short)((unsigned long long)((46073UL % ((unsigned long)-737.289611816f + 610UL)) % (unsigned long)(
                                                      (int)p_15 + 598)) + 18446744073709543257ULL);
  return result;
}

