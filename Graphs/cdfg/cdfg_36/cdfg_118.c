#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 301071707
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, long long p_11[3], long p_13, long p_15, long p_19)
{
  unsigned short v_23;
  unsigned long v_21;
  unsigned long long v_17;
  unsigned long long v_9;
  signed char v_6;
  char v_4;
  unsigned long long v;
  int result;
  v_23 = (unsigned short)3120;
  v_21 = (unsigned long)p_15;
  v = (unsigned long long)p_19;
  if (((long long)((int)v_23 / ((int)p + 182)) / -394424337LL) / 23LL == 1LL) {
    v_9 = (unsigned long long)((p_11[2] ^ 982358348LL) * ((long long)(
                                                          p_13 >> 20LL) ^ (
                                                          (long long)p_15 ^ -328621995LL)));
    v_6 = (signed char)v_9;
    v_4 = (char)(~ (((int)v_6 * 12569) / ((int)p + 622)));
  }
  else {
    v_17 = (unsigned long long)(~ (v_21 / (unsigned long)((int)p + 645) + (unsigned long)-982745026.949));
    v = (unsigned long long)(- p_19);
    v_4 = (char)v_17;
  }
  result = (int)(v / ((unsigned long long)v_4 % (v + 298ULL) + 41ULL));
  return result;
}

