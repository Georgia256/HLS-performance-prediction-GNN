#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 619219198
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p[1], float p_5, short p_9, int p_11, long long p_15)
{
  short v_21;
  char v_19;
  char v_17;
  unsigned long v_13;
  long long v_7;
  unsigned short v;
  int result;
  v_21 = (short)p_15;
  v_19 = (char)102;
  v_17 = (char)p[0];
  v_13 = (unsigned long)p_5;
  v_7 = 865354614LL;
  result = 19403;
  while ((unsigned long long)((int)p[0] % ((int)(- (! p[0])) + 955)) >= 
         ((18446744073702143004ULL / ((unsigned long long)p_5 + 288ULL)) / 174ULL) % (unsigned long long)(
         (((unsigned long)v_17 + 1060479979UL) - (unsigned long)(- v_19)) + 250UL)) {
    v = (unsigned long)v_21 + 7051UL;
    v_21 = (short)(((long long)(p_11 - (int)v) | ~ v_7) + (long long)(~ (~ p_11)));
    v_13 = 16151UL;
    v_19 = (char)result;
  }
  while_0_break: ;
  if (v_7 != ((long long)(56 % ((int)((char)-5727819756.29) + 567) | (int)p_9) & 
              (long long)((unsigned long)p_11 * v_13) * ! p_15)) result = (int)p[0];
  else {
    v = (unsigned short)p_5;
    result = (int)v;
  }
  return result;
}

