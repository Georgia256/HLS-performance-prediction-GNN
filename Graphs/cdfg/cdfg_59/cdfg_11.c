#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 658276377
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, char p_4, long p_6, unsigned char p_8,
                   long long p_10[1][1][4])
{
  long v_17;
  unsigned char v_15;
  long long v_13;
  short v;
  unsigned short result;
  v_17 = (long)p_10[0][0][3];
  v_15 = (unsigned char)46;
  if ((long long)((int)v_15 + - ((int)p_4 + 224)) != (long long)(~ ((long)v_15 ^ v_17)) % (
                                                     p_10[0][0][3] + 827LL)) {
    result = (unsigned short)p_8;
    v_13 = (long long)p_6 - ~ p_10[0][0][1];
    v = (short)(~ (v_13 + (long long)(~ result)));
  }
  else v = (short)(- (! (45917 % ((int)p_4 + 584))));
  if ((float)v != (float)(38013UL - (unsigned long)(-11531 * (int)p_4)) - -107.853279114f) 
    result = (unsigned short)((unsigned long)((unsigned int)(3413482240.f / (
                                                             p + 179.f)) - 
                                              (unsigned int)p_4 * 689789413U) ^ (unsigned long)(
                              ! p_6 * (long)(~ p_8)));
  else result = (unsigned short)p_10[0][0][1];
  return result;
}

