#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 986868717
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned short p_13, signed char p_15, unsigned int p_23,
           char p_27)
{
  short v_25;
  char v_21;
  unsigned long long v_19;
  unsigned int v_17;
  long long v_11;
  unsigned short v_9;
  unsigned char v_7;
  float v_4;
  char v;
  double result;
  v_25 = (short)3878;
  v_21 = (char)71;
  v_19 = 18446744072863349368ULL;
  v_17 = 4294953477U;
  v_9 = (unsigned short)p_23;
  v_7 = (unsigned char)132;
  v_4 = 9.0224549764e+36f;
  result = (double)p;
  if ((float)(((unsigned long long)(v_17 / (unsigned int)((int)v_9 + 357)) | ! v_19) * (unsigned long long)p_15) == 
      v_4 - (float)(((unsigned int)v_21 - p_23) >> ((int)v_25 / ((int)p_27 + 468) & 31))) {
    v_4 = (float)1323394468.09;
    v_11 = -62987LL;
    result = (double)(~ (v_11 * (long long)p) / (long long)((int)(- result) % 5555 + 87));
  }
  else {
    v_4 = (float)(66280UL ^ (unsigned long)(~ ((int)p_13 - (int)p_13)));
    result = (double)p_13;
    v_4 = (float)((result - (double)(504087832UL ^ (unsigned long)v_4)) / 181.);
  }
  if (0 % (unsigned int)(((int)((char)result) * -119) / ((int)p_13 + 384) + 450) == (unsigned int)(~ (- p))) {
    v = (char)(! (177 % ((int)((unsigned char)v_4) + 586)) + (int)((double)(
                                                                   (int)p / (
                                                                   (int)v_7 + 685)) * (
                                                                   result / (
                                                                   (double)v_9 + 575.))));
    result = (double)v + -3.36529170434e+28;
    result = result;
  }
  else {
    v_11 = (long long)(~ (short)28957);
    v_7 = (unsigned char)(- (! v_11 % (long long)((int)(~ p_13) + 656)));
    result = (double)v_7;
  }
  return result;
}

