#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 939304697
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p[1][3], float p_7, unsigned char p_9, unsigned int p_13[4],
          char p_17)
{
  float v_33;
  long long v_31;
  long v_29;
  unsigned char v_27;
  short v_25;
  unsigned int v_23;
  double v_21;
  int v_19;
  short v_15;
  float v_11;
  unsigned long v_5;
  long v;
  short result;
  v_33 = 2.95150760367e+38f;
  v_31 = 59464LL;
  v_29 = -46966L;
  v_27 = (unsigned char)120;
  v_25 = (short)-15054;
  v_23 = p_13[2];
  v_19 = -238283720;
  if ((float)p[0][2] != (float)((long long)p_7 + (long long)p[0][1] % (
                                                 v_31 + 662LL)) / ((979685248.f + (
                                                                    7816.f + v_33)) + 547.f)) {
    v_21 = (double)(18446744073709522451ULL | (unsigned long long)(~ (
                    (unsigned int)p_17 / (p_13[0] + 599U))));
    v_19 = (int)(v_21 - (double)(v_23 ^ p_13[3])) % ((int)(- v_25) % (
                                                     (int)v_25 + 380) + 422);
    v_15 = (short)-20703;
  }
  else {
    v_15 = (short)(! (((unsigned long)v_29 + 4294947374UL) * (unsigned long)p_17));
    v_11 = (float)(((p_13[2] >> 27) | 4294954759U) - (unsigned int)(v_19 + 
                                                                    (int)v_27 * 22901));
    v_19 = ~ ((int)(v_11 / 1.84467440737e+19f) - (int)((unsigned char)v_11) * (int)p_9);
  }
  if ((unsigned long long)p_17 < 0ULL - (275324538413575171ULL + (unsigned long long)(
                                         6889418116.11 * (double)v_19))) {
    v = (long)(p_7 - (float)p_9);
    v_5 = ~ 0UL;
    result = (short)((unsigned long)(((long)p[0][2] * v) % 8376L) + v_5);
  }
  else {
    v_11 = (float)((unsigned int)v_15 * ~ p_13[0]);
    result = (short)(- (261139504.f * v_11) / ((float)p_13[3] + 698.f));
    result = (short)(- (476636832.f - (float)result * -804.971313477f));
  }
  return result;
}

