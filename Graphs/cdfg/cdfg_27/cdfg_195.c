#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 96227620
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned char p_15, unsigned long p_19,
                float p_21, signed char p_23)
{
  unsigned long long v_29;
  float v_27;
  signed char v_25;
  float v_17;
  unsigned long long v_13;
  unsigned long v_11;
  int v_8;
  int v_6;
  unsigned short v_4;
  unsigned long v;
  signed char result;
  v_29 = (unsigned long long)p_15;
  v_27 = 2583095296.f;
  v_25 = (signed char)-106;
  v_17 = -6233935360.f;
  v_13 = (unsigned long long)p_21;
  v_11 = (unsigned long)p_21;
  v_8 = -57405;
  v_4 = (unsigned short)34204;
  if ((unsigned long long)((unsigned long)(~ v_25) - v_11) > 18446744073709531751ULL) {
    v_11 = p_19 % ((- p_19 + (unsigned long)p) + 891UL);
    v_6 = 0;
    v_6 %= (int)(- ((double)v_11 * 763.908398074)) + 522;
  }
  else {
    v_6 = ~ 62274276;
    v_4 = (unsigned short)(v_27 - (- p_21 - (float)((unsigned long long)p_23 * v_29)));
    v_17 = (float)(19507LL - (-693277636LL - (long long)v_25)) * (- p_21 - (float)(- p_15));
  }
  if ((unsigned long)((int)v_4 + ((int)p_15 + ((int)p_15 ^ (int)((unsigned char)v_17)))) >= 
      ! (! p_19) - (unsigned long)(- (p_21 + -9137053696.f))) {
    v_4 = (unsigned short)((575008424ULL + (18446744073709505990ULL & (unsigned long long)v_6)) | (unsigned long long)(- (
                           (unsigned int)v_8 + p)));
    v = (unsigned long)(- v_4);
    result = (signed char)((unsigned long long)v * 38970ULL);
  }
  else {
    v_11 = (unsigned long)(! (- (4294957476U - (unsigned int)p_15)));
    result = (signed char)v_13;
    result = (signed char)((unsigned long)(! (~ result)) - v_11);
  }
  return result;
}

