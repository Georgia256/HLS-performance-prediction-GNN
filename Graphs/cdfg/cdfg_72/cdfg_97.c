#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 29647438
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, long long p_4, float p_6, short p_13[4][5],
         unsigned char p_25)
{
  unsigned char v_27;
  unsigned char v_23;
  int v_21;
  long long v_19;
  long v_17;
  unsigned short v_15;
  unsigned long v_11;
  long long v_9;
  unsigned long v;
  long result;
  v_27 = (unsigned char)246;
  v_23 = (unsigned char)159;
  v_21 = (int)p;
  v_9 = (long long)p_6;
  result = -130943170L;
  if ((long long)v_27 - v_9 != 279360635LL) {
    v_15 = (unsigned short)v_27;
    v_11 = (unsigned long)((int)(! (- v_27)) - 15 % ((int)v_23 / 116 + 212));
    v_17 = (long)p_25;
  }
  else {
    v_11 = (unsigned long)((0 - (long long)v_21) % 61LL);
    v_15 = (unsigned short)(- (result | (long)(- v_23)));
    v_17 = (long)((long long)p_13[3][0] + 177473147LL);
  }
  if ((unsigned long long)(- (((double)v_21 - -1.91126998662e+38) * 0.)) == 
      18446744073709500707ULL + (unsigned long long)((int)(~ v_23) * (int)p_25)) {
    v_9 = (long long)v_15;
    v = (unsigned long)(- p_6);
    result = (long)(((long long)p / ((p_4 >> ((long long)p_6 & 63LL)) + 595LL)) * (
                    (long long)v * v_9 - (long long)(v_11 | (unsigned long)p_13[2][0])));
  }
  else {
    v_19 = ! p_4;
    v_15 = (unsigned short)63508;
    result = (long)((long long)((int)(! v_15) + (int)((unsigned short)(- p_6))) % (
                    ((long long)((double)v_17 - 384.258552013) + ~ v_19) + 1016LL));
  }
  return result;
}

