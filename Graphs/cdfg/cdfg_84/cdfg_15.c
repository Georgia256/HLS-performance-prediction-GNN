#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1015958977
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, long p_9, char p_11, float p_13, unsigned long p_15)
{
  int v_25;
  char v_23;
  signed char v_21;
  float v_19;
  int v_17;
  long long v_7;
  unsigned char v_4;
  double v;
  char result;
  v_25 = (int)p_15;
  v_21 = (signed char)13;
  v_17 = -1019167285;
  v_7 = (long long)p;
  v_4 = (unsigned char)p_13;
  v = -1210533174.5;
  result = (char)-83;
  if (~ (~ v_7 - (long long)p_9) != (long long)((long)((double)(~ result) + 7.54334404191e+37) & p_9)) {
    v_4 = (unsigned char)((- v - -1.96815882243e+38) * (double)(0.f * (
                                                                (float)v_4 + p_13)));
    v_17 = (int)(((float)p_11 / 7134991872.f) / ((float)(! ((int)p % (
                                                            (int)p_11 + 66))) + 537.f));
    v_19 = (float)v_17;
  }
  else {
    v_19 = (float)p;
    v_23 = (char)v_25;
    v_7 = (long long)((int)(- p) * (int)v_21 & ((int)((double)p_11 - v) + 
                                                (int)v_23 / -30760));
  }
  if ((unsigned long)(- (- p_13) * (float)((unsigned long)(- v_4) * (
                                           p_15 | (unsigned long)p))) < (
      (~ p_15 ^ (unsigned long)v_17) ^ (unsigned long)(- (v_19 + 227.f)))) {
    v_4 = (unsigned char)v_7;
    v = (double)((int)v_4 % ((int)((unsigned char)((float)(~ p) / 60.9786376953f)) + 219));
    result = (char)v;
  }
  else result = (char)((18446744073709530855ULL | (unsigned long long)(
                        p_9 >> 17L)) % (unsigned long long)((37 + (int)p_11) + 1013));
  return result;
}

