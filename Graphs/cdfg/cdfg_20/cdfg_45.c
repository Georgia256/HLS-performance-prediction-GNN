#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460475775
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[4], unsigned int p_7, unsigned char p_17)
{
  float v_19;
  long long v_15;
  unsigned long long v_13;
  unsigned long long v_11;
  signed char v_9;
  short v_5;
  signed char v;
  double result;
  v_19 = 1.6966282283e+38f;
  v_15 = (long long)p[3];
  v_13 = 18446744073028603334ULL;
  v_9 = (signed char)-16;
  v = (signed char)p[1];
  if (~ (! (34546513L | (long)p[1])) >= (long)v_9) {
    result = (double)(- (~ ((int)p[2] - (int)p[0])));
    v_9 = (signed char)((unsigned long long)v_15 % (v_13 + 926ULL));
    v_15 = (long long)p[0];
  }
  else {
    v_15 = (long long)v_19;
    result = (double)(! 7642ULL);
    v_13 = (unsigned long long)(v_15 / ((long long)((int)p_17 % ((int)p_17 + 270)) * (
                                        v_15 % (long long)(p_7 + 1002U)) + 616LL));
  }
  while ((int)p[0] != 46943 % ((int)(! p[3]) + 134) << ((int)result & 31)) {
    v_5 = (double)v * -3.33629949513e+38;
    v_11 = (unsigned long long)((long long)(p_7 - (unsigned int)(~ p[2])) * (
                                v_15 | (long long)(1173 + (int)((short)-1.01606048591e+38))));
    v = (signed char)((int)v_5 / (((int)v_9 >> ((v_11 & v_13) & 7ULL)) + 766));
    result = (double)p_7;
  }
  while_0_break: ;
  return result;
}

