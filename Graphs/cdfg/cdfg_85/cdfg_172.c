#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 414645480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, float p_7[2][5], unsigned long p_9,
                 char p_19[3][4], unsigned int p_21)
{
  short v_23;
  short v_17;
  unsigned long long v_15;
  unsigned short v_13;
  signed char v_11;
  unsigned short v_4;
  signed char v;
  unsigned int result;
  v_23 = (short)p;
  v_17 = (short)-18021;
  v_15 = 865522312ULL;
  v_13 = (unsigned short)p_21;
  v_11 = (signed char)84;
  v = (signed char)p_9;
  while ((int)(p_7[0][1] / ((p / ((float)p_19[1][3] + 841.f) + (float)(
                             (int)v_11 - (int)((signed char)p_7[0][2]))) + 77.f)) > ! (
         (int)p_19[0][0] / ((int)v + 622) - (int)((float)p_9 * p))) {
    v_23 = (short)(((int)p_19[0][2] * (int)((char)((float)v_23 * p))) / 561);
    v = (signed char)(- (3352565286UL / (unsigned long)(((int)v_13 - (int)p_19[2][0]) + 361)));
    v_11 = (signed char)(((unsigned int)(-64806641 % ((int)v_13 + 148)) + - p_21) ^ 119U);
  }
  while_0_break: ;
  if ((unsigned long)(986.959658579 * (double)v - (double)((float)p_21 - 853.59765625f)) / (
      (903229800UL - (unsigned long)7.42508693387e+37f) + 544UL) <= (unsigned long)p_19[2][1]) {
    v_4 = (unsigned short)((unsigned long long)v_11 & ((unsigned long long)v_13 / (
                                                       v_15 + 241ULL)) / (
                                                      (111373195ULL + (unsigned long long)v_17) + 883ULL));
    v = (signed char)((double)((float)v_4 + p / (p + 122.f)) * ((2.00540885839e+38 + (double)p_7[0][4]) - (double)(- p_9)));
    result = (unsigned int)((long)(- (-2.4734126785e+38 - (double)v)) % 33441L);
  }
  else {
    v_15 = (unsigned long long)((-66 & (int)((char)(p_7[1][4] / ((float)p_19[2][2] + 84.f)))) % 72);
    result = (unsigned int)(((33ULL / (v_15 + 203ULL)) * 3711049850ULL) % (unsigned long long)(
                            (((long)p + -1012422780L) - -20L) + 27L));
  }
  return result;
}

