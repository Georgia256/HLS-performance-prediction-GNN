#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 769407679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, long p_4, float p_6, signed char p_8[5][2],
           signed char p_15)
{
  unsigned int v_27;
  char v_25;
  short v_23;
  short v_21;
  long long v_19;
  long v_17;
  double v_13;
  char v_11;
  long long v;
  double result;
  v_27 = 314266380U;
  v_25 = (char)p;
  v_23 = (short)p;
  v_21 = (short)-1968;
  v_17 = -12502L;
  v_13 = 2121164250.24;
  v = (long long)p_6;
  result = 273.345090791;
  if ((long long)(~ (~ p_4)) % (0LL / (v + 112LL) + 331LL) >= (long long)(! (
      (int)((double)p_6 * result) - -205))) {
    v_21 = (short)99;
    v_17 = (long)(- (v * (long long)p_15) + (long long)(~ ((unsigned int)v_25 / (
                                                           v_27 + 545U))));
    v_19 = (long long)((long)(- (! v_21)) % (p_4 + 651L));
  }
  else {
    v_19 = (long long)p_8[3][1];
    v_25 = (char)0;
    result = (double)(18446744073709551557ULL ^ (unsigned long long)(
                      (long)((float)v_25 + p_6) % ((long)p_8[1][0] * p_4 + 153L)));
  }
  if ((int)(! (! (! v_21))) > ((int)((unsigned short)(595.783203125 * result)) | 61821) % (
                              ~ ((int)v_21 - (int)v_23) + 208)) result = (double)(
                                                                (- p + (float)(! p_4)) * (float)(
                                                                (int)(- p_6) * (
                                                                (int)((signed char)p_6) * (int)p_8[4][1])));
  else {
    v_11 = (char)((long long)(- (! v_17)) + (- v_19 >> (695086633LL * v_19 & 63LL)));
    v = (long long)((int)(~ p_15) + (int)((signed char)161.74830968)) % -44421638818988LL;
    result = (double)(! (485974431LL % (v + 209LL)) + (long long)(17949 / (
                                                                  (int)v_11 + 275) - (int)(- v_13)));
  }
  return result;
}

