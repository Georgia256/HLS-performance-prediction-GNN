#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 103007379
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p[4][5][5], short p_19)
{
  unsigned int v_17;
  float v_14;
  short v_12;
  long v_10;
  long v_8;
  char v_6;
  unsigned short v_4;
  signed char v;
  long result;
  v_17 = (unsigned int)p_19;
  v_14 = -8.13244408176e+37f;
  v_10 = (long)p_19;
  v_8 = (long)p[2][2][0];
  v_6 = (char)-31;
  v_4 = (unsigned short)63987;
  v = (signed char)p[0][3][1];
  result = -284455465L;
  if ((long)p[1][3][1] - ! (~ v_8) >= (long)(- v_6)) {
    v_4 = (unsigned short)((p[0][3][3] + (float)(1009781042 / ((int)p_19 + 371))) * (float)(~ (
                           (long)p[3][0][3] / (v_10 + 419L))));
    v_4 = v_4;
    v = (signed char)(((v_17 ^ (unsigned int)v_6) * (unsigned int)p[2][0][1]) / 4294967231U);
  }
  else {
    v_10 = (long)(~ (~ ((int)p_19 * (int)v_4)));
    v_17 = v_17;
    v = (signed char)((((long long)v_8 - 52177LL) % (long long)((long)v * v_10 + 737L)) % (long long)(
                      81062772 * (int)p[2][3][3] + 186));
  }
  while ((int)v - (int)(- (~ v_4)) > (int)(! v_6)) {
    v_10 = v_8 * 174L;
    v_6 = (char)(~ 693637533L);
    v_12 = (short)((-9483495424.f - v_14) * - p[1][3][4] - (float)(-8321LL | (long long)(- v_17)));
    v = (signed char)(! ((v_10 + 2944L) / (long)(52 / ((int)v_12 + 630) + 963)));
  }
  while_0_break: ;
  return result;
}

