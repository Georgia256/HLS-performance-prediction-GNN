#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 122503303
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, double p_9)
{
  int v_15;
  unsigned char v_13;
  float v_11;
  unsigned short v_7;
  unsigned long v_5;
  unsigned short v;
  signed char result;
  v_15 = -21327;
  v_13 = (unsigned char)p;
  v_11 = -9.19330841724e+37f;
  v_7 = (unsigned short)11223;
  v_5 = 3529018020UL;
  v = (unsigned short)p;
  result = (signed char)p;
  while (0 < (int)(- ((double)p + p_9)) * ((int)p + (int)((short)(59435.f * v_11)))) {
    v = v_15 / ((int)((double)v_13 * 1.4081765641e+38) + 260);
    v_15 = (int)(- ((long long)((int)p * -445321522) - 1055915774LL));
    v_13 = (unsigned char)130;
    v_11 = (float)((int)v_13 % ((int)((unsigned char)((double)p / (27. / (
                                                                   p_9 + 153.) + 472.))) + 803));
  }
  while_0_break: ;
  while ((int)p > - (((int)p & 30) & ((int)v - -29284))) {
    result = (float)v_5 / 1021.03991699f;
    result = (signed char)((long long)((long)v_7 - 825493582L) - ((long long)(
                                                                  (int)((short)p_9) - -16942) + 
                                                                  (long long)result * -1050866396LL));
    v_5 = (unsigned long)(~ (((int)p >> ((int)v_7 & 15)) / 331));
    v = (unsigned short)((int)v % ((int)(- (~ p)) + 690));
  }
  while_0_break_0: ;
  return result;
}

