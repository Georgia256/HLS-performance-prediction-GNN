#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 933119973
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p[2][4][3], unsigned long long p_4[5][2], long long p_6,
          long long p_15, int p_23)
{
  int v_25;
  unsigned char v_21;
  unsigned short v_19;
  signed char v_17;
  char v_13;
  unsigned long long v_11;
  unsigned int v_9;
  unsigned short v;
  short result;
  v_25 = 4323;
  v_21 = (unsigned char)53;
  v_19 = (unsigned short)21521;
  v = (unsigned short)47741;
  result = (short)19403;
  if (p_6 <= (long long)v_25) {
    v_17 = (signed char)(~ (- ((long)v_19 % 10781L)));
    v = (unsigned short)((int)result + (int)(~ v_17));
    v_9 = (unsigned int)((long long)v_17 * ! (-31077LL % (p_15 + 399LL)));
  }
  else {
    v_9 = (unsigned int)(! (- (p[0][2][1] ^ (long long)v_19)));
    v_9 = (unsigned int)((509078198LL | (long long)v_9) % (long long)(
                         p_23 + 302));
    result = (short)((unsigned long long)(! (- v)) % ((unsigned long long)(
                                                      (int)v_21 - 1) * p_4[1][1] + 524ULL));
  }
  while (~ (- p[0][2][1]) % (long long)((4294945743UL / (unsigned long)(
                                         (int)result + 350)) % (unsigned long)(
                                        ((int)result >> (p_4[3][1] & 15ULL)) + 981) + 452UL) == ~ p_6) {
    v_13 = (unsigned long)v_9 + ((unsigned long)v - 4294914829UL);
    v_11 = (unsigned long long)(! (signed char)-24);
    v_11 = (unsigned long long)((long long)((int)v_13 * -11) * ~ p_15 << (
                                0 % (- v_11 + 1011ULL) & 63ULL));
    result = (short)v_11;
  }
  while_0_break: ;
  return result;
}

