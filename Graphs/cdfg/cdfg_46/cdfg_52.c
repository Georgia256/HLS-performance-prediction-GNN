#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 966519610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p[3][4], unsigned short p_9, signed char p_11,
              unsigned long long p_13, long long p_15)
{
  unsigned char v_7;
  signed char v_4;
  int v;
  long long result;
  v_7 = (unsigned char)213;
  v_4 = (signed char)50;
  v = -50767;
  if ((long long)3.51941290489e+36f / (- ((long long)v_7 / (p_15 + 740LL)) + 1021LL) != (long long)v) {
    v = (int)(214497024112901726ULL / (unsigned long long)(- (v * (int)p_11) + 169));
    v_7 = v_7;
    v_4 = (signed char)(((int)p[0][3] * v - (int)v_7) / (((int)v_7 / (
                                                          (int)v_7 + 403) + (int)(- p_9)) + 610));
  }
  else {
    v_4 = (signed char)(v / ((int)v_4 + 260));
    result = (long long)(((float)(-62LL + p_15) + (float)v_4 * -2446417408.f) + (float)(- p_11));
    v_4 = (signed char)((double)p_13 - - (-2.00080050665e+38 / ((double)result + 316.)));
  }
  result = (long long)(51485 << ((v - (int)v_4) % ((int)(~ p[2][1]) + 871) & 31));
  return result;
}

