#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 661064643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[2], char p_5, double p_9, long long p_11, long p_15)
{
  unsigned int v_21;
  long v_19;
  long long v_17;
  float v_13;
  char v_7;
  unsigned short v;
  signed char result;
  v_21 = (unsigned int)p_9;
  v_19 = -12073L;
  v_17 = (long long)p_5;
  v_7 = (char)120;
  v = (unsigned short)p[1];
  result = (signed char)p_9;
  if ((unsigned long long)((long)(~ (204 << (v_17 & 7LL))) % (-111L * (
                                                              v_19 & p_15) + 119L)) <= (unsigned long long)(
      (unsigned long)(v_21 * 115U) ^ (unsigned long)((long)p_9 << (v_19 & 31L)))) {
    v_13 = (float)(- (~ (- v_7)));
    v_7 = (char)(((double)(21391U * (unsigned int)v) / (- p_9 + 255.)) / (double)(
                 (float)(- p_11) * ((float)result * v_13) + 103.f));
    v = (unsigned short)(! v_7);
  }
  else {
    v_17 = (long long)((long)(- ((double)p_5 / (p_9 + 711.))) * p_15);
    v = (unsigned short)(((double)((float)p_15 / (p[0] + 532.f)) + (double)v_17 / (
                                                                   p_9 + 541.)) - 255.);
  }
  result = (signed char)((((unsigned long)v & 3865451499UL) + (unsigned long)p[1]) * (unsigned long)((int)p_5));
  return result;
}

