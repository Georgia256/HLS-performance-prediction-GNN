#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1021637430
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, char p_4, unsigned long p_7[3][3],
          unsigned int p_9, double p_11)
{
  char v_23;
  unsigned short v_21;
  unsigned char v_19;
  unsigned short v_17;
  int v_15;
  float v_13;
  int v;
  float result;
  v_23 = (char)-19;
  v_21 = (unsigned short)p_7[1][0];
  v_19 = (unsigned char)41;
  v_15 = -10314;
  v_13 = 123.661903381f;
  v = (int)p_9;
  result = -2.48640791681e+37f;
  while ((unsigned long)(- (17297 / ((int)p + 620)) - ! ((int)v_13 - v_15)) >= 
         p_7[1][1] << (~ ((long)p_4 & -29288L) & 31L)) {
    v_13 = (long long)v_21 / -46168LL;
    v_19 = (unsigned char)((float)(~ v) * result);
    v_21 = (unsigned short)(((float)(v % (v_15 + 18)) * -947367744.f) * (float)(
                            (int)(- v_23) >> (! p_7[0][2] & 7UL)));
    v_15 = (int)(-789232711LL << ((int)p & 63));
  }
  while_0_break: ;
  while (((unsigned long)((int)p - (int)p_4) - (unsigned long)v % (p_7[2][2] + 563UL)) - (unsigned long)(
         ! p_9 % ((unsigned int)(107. * p_11) + 721U)) >= 0UL) {
    v_17 = (unsigned int)v_13 + 961544572U;
    result = (float)((unsigned long)((int)v_19 / ((int)(- p_4) + 462)) - (
                     (unsigned long)((int)p >> ((int)v_17 & 7)) - p_7[1][2] * 15610UL));
    v_17 = (unsigned short)(- v_15);
    v = (int)(191.f + - result / 4294965760.f);
  }
  while_0_break_0: ;
  return result;
}

