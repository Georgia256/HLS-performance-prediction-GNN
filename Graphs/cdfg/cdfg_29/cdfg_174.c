#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432919686
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p[5][2], char p_4, double p_6[5][3][3],
                  signed char p_8, unsigned short p_10)
{
  unsigned short v_27;
  signed char v_25;
  unsigned char v_23;
  float v_21;
  unsigned int v_19;
  long v_17;
  signed char v_15;
  long long v_13;
  unsigned long v;
  unsigned long result;
  v_27 = (unsigned short)p[0][0];
  v_25 = (signed char)-18;
  v_23 = (unsigned char)30;
  v_21 = (float)p_6[1][2][0];
  v_19 = (unsigned int)p[4][0];
  if ((~ v_19 + (unsigned int)(v_21 + (float)p_8)) + (unsigned int)(! (! v_23)) <= 0U) {
    v_15 = (signed char)p_6[3][1][1];
    v_13 = (long long)(119 - (61517 - (int)p_8) / (152 * (int)v_15 + 817));
    v = (unsigned long)((double)v_13 / 3.85957340211e+37);
  }
  else {
    v_17 = -1035026208L;
    v = 4294948004UL;
    v = ((unsigned long)(~ v_17) - 3638476465UL * v) & (unsigned long)(- (
        120 % ((int)p_10 + 329)));
  }
  if (26915389204915LL < (long long)v) result = (unsigned long)(- (p[3][0] + 496598059.513) * (double)(
                                                                (int)p_4 % (
                                                                17211 % (
                                                                (int)((short)p_6[1][2][2]) + 736) + 774)));
  else result = (unsigned long)((int)(! (! p_8)) << ((int)p_10 & 7));
  return result;
}

