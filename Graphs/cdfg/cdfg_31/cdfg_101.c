#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274547040
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, unsigned long long p_9, signed char p_13,
                   float p_15[5][3][2], unsigned short p_17)
{
  unsigned char v_21;
  unsigned int v_19;
  unsigned int v_11;
  char v_6;
  long v_4;
  unsigned short v;
  unsigned short result;
  v_21 = (unsigned char)p_9;
  v_19 = 6621U;
  v_11 = (unsigned int)p;
  v_6 = (char)p_17;
  v_4 = -848350102L;
  while (((unsigned int)(-14550 / ((int)((short)(-57.f / (p_15[4][0][1] + 79.f))) + 39)) & 
          (unsigned int)v_6 * (1097U % (v_19 + 564U))) == 100U) {
    v = (float)v_21 + 330.845031738f;
    v_4 = (long)p_9;
    v_11 = (unsigned int)((int)v_6 / ((int)(! v) + 383));
    v_19 = (unsigned int)(- (- ((int)v_6 * 333590408)));
  }
  while_0_break: ;
  if ((int)(- v_6) != (int)p_17) {
    v_6 = (char)p_9;
    v = (unsigned short)((unsigned int)(- (48241 << (p_9 & 15ULL))) | v_11);
    result = (unsigned short)(~ ((long long)((long)v - v_4) / ((long long)v_6 / (
                                                               p + 558LL) + 304LL)));
  }
  else result = (unsigned short)(~ ((int)p_13 / ((int)((signed char)(
                                                 (float)p * p_15[3][2][1])) + 151)));
  return result;
}

