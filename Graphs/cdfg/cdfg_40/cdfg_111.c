#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1048219151
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, char p_11, long long p_19[4], unsigned char p_21)
{
  unsigned long v_23;
  unsigned long v_17;
  float v_15;
  int v_13;
  unsigned long v_9;
  char v_6;
  float v_4;
  signed char v;
  long long result;
  v_23 = 987160921UL;
  v_17 = 25954UL;
  v_13 = (int)p;
  v_9 = (unsigned long)p_21;
  v_6 = (char)-71;
  v = (signed char)-1;
  result = -57802LL;
  if ((unsigned long long)p_19[2] >= (755256524ULL * (unsigned long long)v_13 - (unsigned long long)(
                                      3460937155UL & (unsigned long)p_21)) + (unsigned long long)(
                                     4294945295UL % (! v_23 + 253UL))) {
    v_15 = (float)((long long)((double)(v_17 * (unsigned long)v_13) + 1.29784836623e+38) + 
                   -512487255LL / ((p_19[0] & (long long)p_21) + 105LL));
    v_4 = (float)(! ((3706007500U >> ((int)v_6 & 31)) * 8682U));
    v = (signed char)(- (~ (673820857UL + (unsigned long)v_6)));
  }
  else {
    v_15 = (float)v_23;
    v_4 = (float)(~ (signed char)49);
    v_6 = (char)(v_4 * (float)(- (! p_11)));
  }
  while ((float)v <= - v_4 / ((float)(((long long)v_6 + p) % (long long)(
                                      (v_9 + (unsigned long)p_11) + 579UL)) + 91.f)) {
    result = (int)v_15 * (v_13 % 74);
    v_17 = 4294967221UL;
    v_6 = (char)(4294927310UL % ((v_17 & v_17) + 371UL) + (unsigned long)v);
    v_4 = (float)(- (~ ((int)v_6 % ((int)p_11 + 297))));
  }
  while_0_break: ;
  return result;
}

