#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 415043634
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, float p_5, unsigned char p_7,
                  unsigned char p_11, unsigned long long p_15)
{
  double v_17;
  float v_13;
  float v_9;
  unsigned long long v;
  unsigned long result;
  v_17 = -269.926218838;
  v = 101571318ULL;
  result = (unsigned long)p_5;
  v_13 = (float)((double)(- p_5) * (-34535. * - v_17) - (double)((unsigned int)(
                                                                 (int)p / (
                                                                 (int)p_7 + 41)) / 4294908546U >> 4));
  v_9 = (float)(((1153204UL ^ ! result) * (116677993UL / (1025897627UL / (
                                                          result + 242UL) + 958UL))) * (unsigned long)(
                (((int)p_7 + (int)((unsigned char)p_5)) - (int)p_7) * (int)v_13));
  v = (unsigned long long)(- ((float)p / (p_5 + 176.f)) * (float)((v - (unsigned long long)p) * (unsigned long long)(
                                                                  (int)((unsigned char)-5525583051.11) - (int)p_7))) ^ 
      (unsigned long long)((int)((signed char)v_9) - (int)p) % ((v / (unsigned long long)(
                                                                 (int)p_11 + 990)) * (
                                                                (unsigned long long)v_13 / (
                                                                p_15 + 116ULL)) + 31ULL);
  result = (unsigned long)(- v);
  return result;
}

