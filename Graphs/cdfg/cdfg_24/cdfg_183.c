#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 707809077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned long long p_9[4][1],
          unsigned long p_11, signed char p_13, unsigned long p_15[5])
{
  unsigned char v_7;
  unsigned char v_5;
  long v;
  float result;
  v_7 = (unsigned char)72;
  v_5 = (unsigned char)1;
  v = (long)p_11;
  result = (float)((double)p_15[3] * -43828.1606173);
  if (- (p - 18446744073707841201ULL) + (unsigned long long)p_11 <= (unsigned long long)(
      (long)v_5 / ((23L % (v + 8L) + (long)(! p_13)) + 29L))) {
    v = (long)(((unsigned long long)result ^ p_9[2][0]) | (unsigned long long)(
               (int)v_7 * -241031211));
    v_5 = (unsigned char)(-5004902400.f - (float)(25660LL / (long long)(
                                                  (int)(! v_7) + 934)));
    result = (float)(! (p * 18446744073158093890ULL - (unsigned long long)(
                        v * (long)v_5)));
  }
  else result = (float)(81 << 1);
  return result;
}

