#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 400053608
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[3][3][5], unsigned short p_15[5],
                       unsigned char p_17)
{
  char v_13;
  float v_11;
  int v_9;
  double v_7;
  short v_5;
  long v;
  unsigned long long result;
  v_13 = (char)-103;
  v_11 = 3.26304075023e+38f;
  v_9 = 12688;
  v_5 = (short)-22911;
  v = (long)p_15[4];
  result = (unsigned long long)p[0][2][4];
  if (((unsigned long long)((float)p_17 / 416.371887207f) - result) >> (
      ((long long)v - 49640LL / (long long)((int)p_17 + 671)) & 63LL) > (unsigned long long)(- (
      (int)p_15[1] * 37 + (int)p_15[3] * 11))) {
    v_9 = (int)(~ v_13);
    v_7 = (double)((unsigned long long)(! p[1][0][1]) * (result / 18446744073709528208ULL));
    v_11 = (float)((12808LL + (long long)((int)v_5 << (result & 15ULL))) + (
                   (long long)v_9 | (long long)p[2][0][1] * -6852LL));
  }
  else {
    v_7 = (double)((int)p_15[2] / ((int)p_15[3] / (v_9 + 741) + 405) + (
                   (int)p_17 + (int)(- p_15[2])));
    v_5 = (short)((float)(13222UL % (p[0][0][4] + 290UL) >> ((3652876313UL + p[1][2][3]) & 31UL)) * v_11);
    v_11 = (float)((0LL - -39987LL / (long long)(p[2][0][0] + 26UL)) + (long long)(
                   (p[0][2][2] >> (p[1][0][0] & 31UL)) << ((-76 - (int)((signed char)v_11)) & 31)));
  }
  while (438871890UL > (unsigned long)v + p[2][0][0]) {
    v_13 = (double)v_9 + (v_7 - (double)((unsigned int)v_5 - 43398U));
    v_9 = (int)v_13;
    result = (unsigned long long)(v_11 * (float)(~ (! p[2][1][2])));
    v = -17517L;
  }
  while_0_break: ;
  return result;
}

