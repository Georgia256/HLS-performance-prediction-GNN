#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 663343390
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[5][3][3], unsigned char p_5[5][3][2],
                unsigned short p_9, char p_15[3][3][1], signed char p_17)
{
  unsigned char v_23;
  long v_21;
  long v_19;
  float v_13;
  unsigned long v_11;
  int v_7;
  unsigned char v;
  signed char result;
  v_23 = p_5[2][0][1];
  v_21 = (long)p_15[2][0][0];
  v_19 = (long)p_17;
  v_13 = -5.98681778846e+36f;
  v_11 = 349143422UL;
  if ((unsigned long)(((long)p_15[1][1][0] - (long)p_5[1][2][0] / (v_21 + 264L)) % (
                      ((long)-6564494395.62 % (v_19 + 95L) - (long)((int)p_17 | (int)v_23)) + 848L)) == 684388646UL) {
    result = (signed char)p_5[4][0][1];
    v = (unsigned char)((float)((int)p_15[0][1][0] >> ((-11 - (int)((char)p[4][2][0])) & 7)) - p[3][1][1]);
    v_11 = (unsigned long)(((long)((int)p_15[1][0][0] / 1055533208) - 
                            (long)p_15[2][2][0] % (v_19 + 508L)) % ((
                                                                    (long)(
                                                                    (int)p_15[0][1][0] * (int)v) + - v_21) + 471L));
  }
  else {
    result = (signed char)(- (((int)p_9 >> ((int)v_23 & 15)) + (int)p_17 * (int)p_15[0][2][0]));
    v_13 = 7659765760.f - (float)((int)(- p_9) + (int)(- p_15[1][1][0]));
    v_11 = v_11;
  }
  if ((float)((unsigned long)(~ p_9) / (v_11 + 377UL)) >= v_13 / ((float)(
                                                                  (int)(- p[4][0][1]) + (
                                                                  (int)p_15[0][2][0] + (int)p_17)) + 520.f)) {
    v = (unsigned char)p[4][0][0];
    result = (signed char)(~ (~ (! v)));
  }
  else {
    v_7 = (int)result;
    result = (signed char)(! (((int)result + v_7) - (int)p_5[1][1][1] * (int)((unsigned char)p[4][0][1])));
    result = (signed char)(((long long)((int)p_5[4][2][0] - 16141) ^ 
                            (long long)p_5[1][2][1] / -24555LL) / (long long)(
                           (int)result + 932));
  }
  return result;
}

