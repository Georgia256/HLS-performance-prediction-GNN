#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 417866399
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p[1][4][3], signed char p_4, short p_6, unsigned char p_8,
          int p_13[1][2][2])
{
  long v_19;
  float v_17;
  unsigned char v_15;
  unsigned long long v_11;
  unsigned long v;
  float result;
  v_17 = -2.55004093458e+37f;
  v_15 = (unsigned char)138;
  v_19 = (long)p_4;
  if ((long)v_15 <= (long)v_17 - ((long)p_6 * v_19) / -209413959L) {
    v_11 = 76ULL;
    v = (unsigned long)(~ -20);
    result = (float)((unsigned long long)((107L - p[0][0][1]) / (long)(
                                          (int)p_4 % ((int)p_6 + 82) + 220)) * (
                     (unsigned long long)((unsigned long)p_8 / (v + 580UL)) + v_11));
  }
  else result = (float)((int)(! (~ p_4)) ^ p_13[0][0][0]);
  return result;
}

