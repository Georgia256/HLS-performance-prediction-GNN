#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 581179095
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, char p_7, signed char p_9, long long p_11, signed char p_13)
{
  unsigned short v_19;
  short v_17;
  short v_15;
  short v_4;
  int v;
  char result;
  v_19 = (unsigned short)p_7;
  v_17 = (short)p;
  v = (int)(~ (18446744073706324673ULL + (unsigned long long)((int)v_17 * 10549)));
  if ((int)v_17 < (int)v_19) {
    v_4 = (short)(- 3.22176800197e+38);
    v = (int)(p - (float)(((int)p_7 + (int)p_7) % ((int)p_9 + 210)));
    result = (char)((v % ((int)v_4 % -30657 + 43)) % ((int)9786935296.f + 213));
  }
  else {
    v_15 = (short)((int)(~ (- p_9)) * v);
    result = (char)v_15;
    result = (char)(((long long)(p * (float)result) % (~ p_11 + 642LL)) % (long long)(
                    (int)(- (- p_13)) + 678));
  }
  return result;
}

