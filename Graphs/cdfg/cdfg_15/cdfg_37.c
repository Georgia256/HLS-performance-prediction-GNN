#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181310910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned long long p_4[2][2], double p_7,
                  unsigned long long p_11, float p_13[3][3])
{
  short v_17;
  unsigned short v_15;
  int v_9;
  signed char v;
  unsigned char result;
  v_17 = (short)24524;
  if (! (p_11 * 37036ULL) != (unsigned long long)v_17) {
    v_15 = (unsigned short)((long)p_13[0][1] - -2050965580L);
    v_9 = (int)v_15;
    v = (signed char)(((unsigned long long)v_9 * p_11 + (unsigned long long)(
                       (long long)p / -31479LL)) * (unsigned long long)(- (- p_13[0][0])));
  }
  else v = (signed char)((long long)(- (p_7 - (double)p_11)) * 526002068LL);
  if ((double)(- p_4[0][1] + (unsigned long long)(-3451L - (long)((int)v % 76))) != - p_7) {
    result = (unsigned char)(- -429.359454812);
    result = (unsigned char)(((int)(~ p) - (int)result) - (int)p);
  }
  else result = (unsigned char)p_4[0][1];
  return result;
}

