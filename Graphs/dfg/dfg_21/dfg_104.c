#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 581504124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, float p_9, double p_13)
{
  unsigned short v_19;
  unsigned char v_17;
  long long v_15;
  unsigned char v_11;
  long long v_6;
  short v_4;
  unsigned int v;
  float result;
  v_19 = (unsigned short)p;
  v_17 = (unsigned char)124;
  v_11 = (unsigned char)186;
  v_6 = (long long)p_9;
  v_4 = (short)30101;
  v = (unsigned int)p;
  v_15 = (long long)(- (((int)((char)-661.510742188f) >> 1) - (int)v_4 * (int)v_17) / (
                     (int)v_19 + 911));
  result = (float)(382648572. + ((- p_13 - (double)(v_15 - (long long)p_9)) + (double)(
                                 (unsigned int)((int)v_11 + -436172310) + 4294963431U)));
  v_11 = (unsigned char)(60U - ((unsigned int)((float)(- v_4) + -658.60748291f) ^ ! (
                                v & (unsigned int)v_11)));
  result = (float)((((long long)(64303 * (int)((unsigned short)result)) * (
                     (long long)v % 1003396015LL)) / (long long)(((int)(! v_4) << (
                                                                  v_6 % 675661357LL & 15LL)) + 312)) % (
                   (long long)(((float)p - (p_9 + (float)v_11)) / 51661.f) + 380LL));
  return result;
}

