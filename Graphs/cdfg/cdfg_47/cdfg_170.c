#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675885682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, float p_5[3][4][2], long long p_9, unsigned int p_15,
          unsigned char p_17)
{
  signed char v_13;
  float v_11;
  unsigned short v_7;
  short v;
  short result;
  v_13 = (signed char)25;
  v_11 = (float)p;
  v = (short)4982;
  result = (short)9668;
  v_7 = (unsigned short)((unsigned long)p_17 / (((unsigned long)p_17 * 46360UL) * (unsigned long)(
                                                241 - (int)result) + 758UL));
  while ((float)v * (p_5[1][2][0] * p_5[2][3][0] + 533.929626465f) < (float)(
         20009ULL + (unsigned long long)(~ ((long long)v_7 & p_9)))) {
    result = (long long)v_11 * 52161LL;
    v_11 = (float)(-9389799UL);
    v = (short)((long long)result - ((p_9 - (long long)v_13) + (long long)(! p_15)));
    v_7 = (unsigned short)(- (- (p_5[1][2][0] * 77.f)));
  }
  while_0_break: ;
  return result;
}

