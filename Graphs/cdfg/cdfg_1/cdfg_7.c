#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 735400445
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p[5][1], int p_4[3], unsigned short p_6[1][2],
         char p_9[5][3][5], int p_11[3])
{
  float v_19;
  short v_17;
  unsigned char v_15;
  long long v_13;
  double v;
  char result;
  v_19 = (float)p_11[2];
  v_17 = (short)p[0][0];
  v_15 = (unsigned char)114;
  v_13 = -33381LL;
  result = (char)-988.171875f;
  if ((unsigned long long)(- v_13 % (long long)(((int)(- v_19) + ((int)v_19 + 7401)) + 826)) == 0ULL) {
    v = (double)((int)(- p_9[4][2][1]) * ! p_11[2] << (- (229016635ULL % (unsigned long long)(
                                                          (int)p_6[0][0] + 471)) & 31ULL));
    result = (char)(- ((double)p_6[0][1] - v / 1626.85972248));
    result = (char)((unsigned int)(5224257 ^ (int)p[3][0] / (p_4[0] + 538)) * (
                    0 - (unsigned int)(~ result)));
  }
  else {
    v_15 = (unsigned char)((float)(~ ((int)p_9[3][2][3] / ((int)result + 529))) / (
                           (float)(- v_15) / (v_19 + 443.f) + 793.f));
    v_13 = (long long)(! (((int)p_9[0][2][3] * p_4[1]) % ((int)v_17 + 162)));
    result = (char)((~ v_13 + (long long)((int)p[3][0] * (int)p_6[0][0])) % (long long)(
                    (int)v_15 * p_11[1] + 180));
  }
  return result;
}

