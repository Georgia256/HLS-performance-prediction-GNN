#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252699110
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[1][5][2], char p_4[5], unsigned long long p_13,
           unsigned long long p_15, long p_17[1])
{
  unsigned int v_25;
  float v_23;
  unsigned long v_21;
  signed char v_19;
  unsigned char v_11;
  unsigned short v_9;
  long long v_7;
  unsigned int v;
  double result;
  v_25 = (unsigned int)p_15;
  v_23 = (float)p_17[0];
  v_21 = 503366018UL;
  v_19 = (signed char)-118;
  v_11 = (unsigned char)189;
  v_7 = (long long)p_15;
  v = (unsigned int)p[0][4][0];
  result = (double)p_17[0];
  if ((float)((49477UL * (unsigned long)(- p_4[1])) / (unsigned long)(
              - p_17[0] + 586L)) != (float)(187 / ((int)((unsigned char)p[0][0][1]) + 288) - 
                                            (int)v_11 * (int)p_4[3]) + (
                                    1.84467440737e+19f + p[0][1][1])) {
    v_9 = (unsigned short)(! (! v_21 - 94UL));
    result = (double)581343932ULL;
    v_7 = (long long)((float)((unsigned long long)v_19 | - p_15) * ((float)(- p_4[3]) / (
                                                                    (
                                                                    (float)v_9 - p[0][2][0]) + 179.f)));
  }
  else {
    v_9 = (unsigned short)(- ((unsigned long long)(v - 4294951511U) - ~ p_13));
    v = (unsigned int)((p_13 * (unsigned long long)v_23 << (267781246LL / (long long)(
                                                            v_25 + 236U) & 63LL)) / (
                       p_15 + 2ULL));
    v_11 = (unsigned char)(~ ((3511757970ULL | p_15) + 1354ULL));
  }
  while ((long long)(~ ((unsigned int)(p[0][0][0] - (float)p_4[4]) * (
                        3383584985U / (v + 116U)))) <= v_7) {
    v = (unsigned long)v_11 ^ (unsigned long)v_9 / 247120619UL;
    v_9 = (unsigned short)126;
    v_11 = (unsigned char)((float)(((int)((char)885.246582031f) ^ (int)p_4[1]) >> (
                                   (long long)v_9 * -729443364LL & 31LL)) + p[0][3][0]);
    v_7 = (long long)((~ p_13 - - p_15) << ((int)((signed char)(p[0][0][1] + (float)p_17[0])) % (
                                            (int)(! v_19) + 371) & 63));
  }
  while_0_break: ;
  return result;
}

