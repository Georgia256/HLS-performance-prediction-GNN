#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 357234114
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, signed char p_21[2][3][3])
{
  unsigned char v_19;
  unsigned long long v_17;
  unsigned long long v_15;
  unsigned int v_12;
  float v_10;
  unsigned char v_8;
  double v_6;
  long long v_4;
  unsigned short v;
  unsigned int result;
  v_17 = (unsigned long long)p_21[0][1][1];
  v_15 = 18446744073207123793ULL;
  v_12 = (unsigned int)p;
  v_10 = (float)p_21[1][2][2];
  v_8 = (unsigned char)27;
  v_6 = 682944122.678;
  v_4 = 503661832LL;
  v = (unsigned short)p;
  result = (unsigned int)p;
  if ((unsigned long long)(~ (((unsigned int)v_8 % (result + 791U)) / 808U)) <= 
      29ULL % (((p | p) - (unsigned long long)result) + 596ULL)) {
    v_8 = (unsigned char)((unsigned int)(- v_10) / ((v_12 - (unsigned int)v) + 460U) >> (
                          ((unsigned long long)((double)p / (v_6 + 121.)) << (
                           v_15 & 63ULL)) & 31ULL));
    v = (unsigned short)v_10;
    result = (unsigned int)(v_4 * (long long)(~ ((int)((unsigned char)v_6) - (int)v_8)));
  }
  else {
    v_19 = (unsigned char)(! p_21[0][1][2]);
    result = (unsigned int)v_19;
    v = (unsigned short)v_17;
  }
  result = ! ((result / (unsigned int)((int)v + 191)) * (unsigned int)(
              (int)v - (int)v));
  return result;
}

