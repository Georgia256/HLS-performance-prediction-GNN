#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 61010550
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, signed char p_11[2][3], short p_17, float p_19,
                  unsigned long long p_21)
{
  unsigned int v_15;
  char v_13;
  unsigned short v_9;
  unsigned short v_7;
  long long v_5;
  long v;
  unsigned long result;
  v_15 = 35603U;
  v_13 = (char)-23;
  v_7 = (unsigned short)p;
  v_5 = (long long)p_21;
  v = -869163358L;
  result = (unsigned long)p;
  if ((long long)((float)(0UL / (~ result + 932UL)) - p_19 * (float)(
                                                      p_21 - (unsigned long long)p_19)) > 
      ((long long)(! v_13) % (v_5 + 444LL)) / (long long)((23991L + ! p) + 624L)) {
    v_9 = (unsigned short)((long)(~ ((int)p_17 * (int)v_7)) * ((p / (long)(
                                                                (int)v_13 + 227)) % -30857L));
    v_13 = (char)((unsigned long long)((-72L ^ p) * v) + (((unsigned long long)p_11[0][1] ^ 18446744073095629247ULL) | (unsigned long long)(- v_15)));
    v = ~ (~ p & (long)p_11[0][1]);
  }
  else {
    v_9 = (unsigned short)63642;
    v_5 = 259486318LL;
    v = (long)((unsigned long)(! p) % 32704UL + (unsigned long)((v | p) * 58L));
  }
  if (35120LL >= (long long)(((int)v_9 / ((int)p_11[0][2] + 378)) / (
                             (int)v_13 + 687))) result = (unsigned long)(- (
                                                (31800L * p) * (long)(
                                                205 / ((int)((unsigned char)-879.144226074f) + 194))));
  else {
    v_7 = (unsigned short)(- -2.31847905476e+37);
    result = (unsigned long)(- ((int)v_7 | -10222));
    result = (unsigned long)((long long)(-76 >> ((3675652205UL + result) & 7UL)) - (
                             (long long)(- v) + (924904681LL - v_5)));
  }
  return result;
}

