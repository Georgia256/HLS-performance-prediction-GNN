#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 896483098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned char p_4, long p_6,
                  unsigned long p_8, long long p_10)
{
  float v_15;
  float v_13;
  unsigned short v;
  unsigned char result;
  v_15 = 2.12126684048e+38f;
  v_13 = -459.077606201f;
  v = (unsigned short)((long long)v_15 % ((p_10 | (long long)(v_13 - 65068.f)) + 42LL));
  if (-632344697LL >= ((long long)((unsigned long)p_6 - p_8) * (p_10 + (long long)v)) / (
                      (long long)v_13 + 727LL)) result = (unsigned char)p;
  else {
    result = ! (- (- p_4));
    result = (unsigned char)((long)(-403909123 >> ((int)p_4 & 31)) | 
                             (long)((int)result * 56701) * -19854L);
  }
  return result;
}

