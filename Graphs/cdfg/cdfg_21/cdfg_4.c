#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 954793589
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, long long p_11)
{
  long long v_13;
  unsigned short v_9;
  unsigned long v_7;
  short v_5;
  signed char v;
  unsigned long long result;
  v_13 = p_11;
  v_9 = (unsigned short)51067;
  v_7 = (unsigned long)p;
  v_5 = (short)p_11;
  v = (signed char)-106;
  result = (unsigned long long)((long long)(22 % ((int)v_5 + 10) >> (
                                            p_11 / (v_13 + 372LL) & 31LL)) + 
                                0 % (long long)((int)v_9 % -47 + 877));
  while (- (! (65 >> (p & 7))) < (int)v) {
    v_5 = (unsigned long)v_9 % ((v_7 - (unsigned long)((int)v_5 + -436708904)) + 984UL);
    v_9 = (unsigned short)((152LL % ((p_11 ^ -25LL) + 158LL)) / ((240566711LL + 
                                                                  p_11 / 3LL) + 863LL));
    v_7 = (unsigned long)result;
    v = (signed char)(- (p % (p * (int)v_9 + 894)));
  }
  while_0_break: ;
  return result;
}

