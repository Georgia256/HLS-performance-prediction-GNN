#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 142373616
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, signed char p_11, unsigned char p_13[5][2][4],
                long p_15)
{
  unsigned short v_17;
  unsigned long long v_9;
  unsigned short v_7;
  unsigned long v_4;
  unsigned long v;
  signed char result;
  v_17 = (unsigned short)25604;
  v_9 = 596111190ULL;
  v_7 = (unsigned short)p_13[1][1][3];
  v_4 = (unsigned long)p_15;
  v = 888125290UL;
  result = (signed char)-22;
  while (16010 < ~ (~ (1047851968 + (int)v_7))) {
    v_9 = (int)v_17 * 16272;
    result = (signed char)-21;
    v_17 = (unsigned short)(~ (p - (long long)v_7) / (long long)((int)v_7 + 184));
    v_7 = (unsigned short)79;
  }
  while_0_break: ;
  while ((long long)(0 % ((int)(~ result) + 960)) >= (long long)(~ (v - v_4)) / (
                                                     (~ p - -22080LL) + 234LL)) {
    v_9 += (unsigned long long)((long long)v_7 - 10434LL);
    v_7 = (unsigned short)((unsigned long)((long)p_11 / ((p_15 | -619267424L) + 1006L)) - ! (
                           v / (unsigned long)((int)result + 702)));
    v_4 = (unsigned long)((int)p_11 / ((int)p_11 * (int)p_13[1][0][3] + 982)) + ! (! v);
    v = (unsigned long)p;
  }
  while_0_break_0: ;
  return result;
}

