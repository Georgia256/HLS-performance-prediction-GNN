#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 532434401
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, int p_4[3], double p_9, short p_11,
                  char p_13[3][4][4])
{
  signed char v_19;
  unsigned char v_17;
  unsigned long long v_15;
  char v_7;
  char v;
  unsigned char result;
  v_19 = (signed char)p_11;
  v_17 = (unsigned char)p_4[1];
  v_15 = 28984ULL;
  if ((double)((v_15 / ((unsigned long long)p_9 + 723ULL)) * (unsigned long long)(
               (double)v_17 + p_9) + (unsigned long long)(~ ((int)v_19 + (int)((signed char)p_9)))) <= - (- (
      p_9 + (double)p_11))) {
    v = (char)((long)(745490648 * (int)(~ p_11)) - ! (-511885946L % (long)(
                                                      (int)p_13[0][3][0] + 665)));
    v_7 = (char)p_9;
    v = (char)((int)v_7 / ((int)((double)v_7 - p_9) / (-13 % ((int)v + 960) + 92) + 743));
  }
  else v = (char)-21;
  result = (unsigned char)(~ (p / (long long)(p_4[2] + 390)) - (long long)(~ (
                           -30531 * (int)v)));
  return result;
}

