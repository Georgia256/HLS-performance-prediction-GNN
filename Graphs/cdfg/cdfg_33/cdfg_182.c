#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 230694628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, short p_13, unsigned short p_15, int p_17, char p_19)
{
  short v_27;
  long long v_25;
  unsigned char v_23;
  signed char v_21;
  unsigned char v_11;
  unsigned short v_8;
  char v_6;
  int v_4;
  unsigned int v;
  float result;
  v_27 = (short)p_17;
  v_25 = p;
  v_23 = (unsigned char)22;
  v_21 = (signed char)p_15;
  v_8 = (unsigned short)7826;
  v_6 = p_19;
  v_4 = (int)p_13;
  result = (float)p_17;
  while ((long long)v_21 % (((long long)(~ p_15) - (p + (long long)p_13)) + 401LL) < (long long)(
         5589.f + - (result + -512995296.f))) {
    v_8 = v_25 + (long long)((int)v_23 * 8286);
    result = (float)(((int)v_27 << ((int)v_8 & 15)) / 686);
    v_4 = ! (((int)p_13 * (int)p_15) / (! p_17 + 474));
    v_21 = (signed char)(43LL % (~ ((long long)v_8 + p) + 628LL));
  }
  while_0_break: ;
  if ((unsigned long)(~ v_4) > 4020189493UL) {
    v_4 = (int)((unsigned long)(! ((unsigned int)v_6 - 31994U)) % (((unsigned long)(
                                                                    (int)v_8 >> (
                                                                    p & 15LL)) | 1UL) + 671UL));
    v = (unsigned int)v_4;
    result = (float)(! (- (! v)));
  }
  else {
    v_11 = (unsigned char)((unsigned int)v_6 / 568519289U);
    result = (float)(- (! ((int)v_11 & (int)p_13)));
    result = result;
  }
  return result;
}

