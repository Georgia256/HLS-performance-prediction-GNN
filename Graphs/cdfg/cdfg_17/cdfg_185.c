#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280620445
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p[4][4], long p_15, long long p_17,
              unsigned long p_19[4][2], signed char p_25[3][2])
{
  double v_23;
  unsigned char v_21;
  unsigned short v_13;
  long v_11;
  float v_8;
  short v_6;
  unsigned long v_4;
  unsigned short v;
  long long result;
  v_23 = (double)p_19[0][0];
  v_21 = (unsigned char)134;
  v_13 = (unsigned short)p_19[0][0];
  v_11 = (long)p_17;
  v_8 = 2.00991276093e+38f;
  v_6 = (short)p_19[2][0];
  v_4 = 3916755492UL;
  v = (unsigned short)p[0][2];
  result = (long long)p_19[0][0];
  if ((double)(! ((p_17 ^ (long long)v_21) + 606LL * p[0][2])) > (4854817280. + (
                                                                  -794.833338503 - v_23)) * (double)((long long)(~ v_6))) {
    v_11 = (long)((int)(537.759277344f - (float)p_19[2][1]) * ((int)v + (int)((unsigned short)-2.2389170853e+38)) + (int)(! v));
    v_4 = (unsigned long)(~ (52155ULL + (unsigned long long)v_11) - (unsigned long long)v_4);
    v_11 = (long)((float)((long long)((float)p_17 - v_8) * (p[3][3] >> (
                                                            (int)v & 63))) - (
                  (float)(result % (long long)(v_4 + 53UL)) + - v_8));
  }
  else {
    v_13 = (unsigned short)(- p[1][2]);
    v_21 = (unsigned char)(! ((p[1][0] * (long long)p_19[0][0]) % (-72538079LL * p_17 + 881LL)));
    v_4 = (unsigned long)((long long)v_21 / (p_17 + 853LL) + (((long long)v_23 >> (
                                                               result & 63LL)) + 
                                                              (long long)p_25[1][1] / (
                                                              p_17 + 593LL)));
  }
  if ((long long)v_4 * ~ p_17 != (long long)((unsigned long)(~ (p_15 + -30367L)) + (unsigned long)(- (
                                             (unsigned int)v_6 * 4294950487U)))) {
    v_8 = (float)((long long)(61016 % ((int)v_6 + 864)) * ! p[3][0] ^ (
                  p[0][1] + (long long)(v_11 * (long)v_13)));
    v_6 = (short)v_8;
    result = (long long)(- ((unsigned long)v % (v_4 + 1015UL) - (unsigned long)(! v_6)));
  }
  else result = (long long)((unsigned long long)(((long long)p_15 * 12666LL) / (long long)(
                                                 p_15 + 130L)) % 18446744072796609345ULL);
  return result;
}

