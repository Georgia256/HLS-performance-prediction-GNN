#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 953763782
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, char p_7, unsigned int p_17)
{
  unsigned char v_15;
  signed char v_13;
  unsigned int v_11;
  unsigned char v_9;
  unsigned short v_5;
  long v;
  unsigned int result;
  v_15 = (unsigned char)59;
  v_13 = (signed char)p_17;
  v_11 = p_17;
  v_5 = (unsigned short)27454;
  v = -53768L;
  result = 524825593U;
  v_9 = (unsigned char)((- p_17 - result % (p_17 + 8U)) | (p_17 - (unsigned int)v_5) / (
                                                          result / (unsigned int)(
                                                          (int)v_15 + 927) + 571U));
  while (((long long)p * 29336LL ^ (long long)(~ v)) / (long long)((int)(- v_5) % (
                                                                   (int)(! p_7) + 569) + 257) != (long long)(
         172.f / ((21608.4921875f + ((float)v_9 - 1555924864.f)) + 14.f))) {
    v = v_11 / 47159U;
    v_15 = (unsigned char)((float)((unsigned int)(30 * (int)v_13) % (
                                   p_17 + 344U)) / (869.111022949f * (float)(
                                                    343921046LL + (long long)v_9) + 106.f));
    v_11 = (unsigned int)(((int)(- v_9) - (int)p / -77) - ((int)(- v_9) ^ (int)v_15));
    v_5 = (unsigned short)p_7;
  }
  while_0_break: ;
  return result;
}

