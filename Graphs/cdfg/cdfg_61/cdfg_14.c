#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 574771204
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned char p_11, signed char p_13[4][3][3],
         double p_15)
{
  int v_19;
  signed char v_17;
  float v_9;
  short v_6;
  unsigned long v_4;
  char v;
  char result;
  v_19 = (int)p;
  v_17 = (signed char)-121;
  v_9 = -457.834228516f;
  v_4 = 61656UL;
  v = (char)p;
  result = (char)-45;
  if (- (47UL + (unsigned long)(~ p_11)) > (unsigned long)((int)((short)(- p_15)) % -7423 ^ 
                                                           v_19 * (int)(- p_11))) {
    v = (char)(- (- (- p_15)));
    v_9 = (float)((unsigned long)(~ p_13[1][1][1]) % 3355872340UL);
    v_6 = (short)((int)(! p_13[1][0][2]) + (int)((signed char)(1.84467440737e+19f + 
                                                               v_9 / 641860480.f)));
  }
  else {
    v_17 = v_17;
    v_6 = (short)((unsigned long long)((long)v_17 / -56504L) / (p * (unsigned long long)v + 315ULL) - (unsigned long long)(
                  (int)(~ p_11) + (int)p_11));
    v_4 = - (~ (v_4 % 7612UL));
  }
  while ((int)(~ (- result)) > 37) {
    v = (long long)v_4 - (long long)v % -20253LL;
    result = (char)((float)p - - (v_9 - (float)p_11));
    result = (char)((int)(-637.692077637f + (float)(~ v_6)) / (-97 / (
                                                               (int)result + 495) + 594));
    result = - (- result);
  }
  while_0_break: ;
  return result;
}

