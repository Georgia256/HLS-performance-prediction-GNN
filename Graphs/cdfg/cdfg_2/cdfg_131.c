#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 479482981
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, long p_11, unsigned int p_15, long p_17)
{
  short v_19;
  short v_13;
  signed char v_9;
  unsigned short v_7;
  unsigned long v_5;
  short v;
  int result;
  v_19 = (short)-14761;
  v_7 = (unsigned short)p_11;
  v = (short)p_11;
  if ((unsigned long)(~ (- p_15)) * (unsigned long)p_17 >= (unsigned long)(- (
      (int)(~ p) + ((int)v + (int)v_19)))) {
    v_9 = (signed char)p;
    v_5 = (unsigned long)(- -1.65516792559e+38);
    v = (short)(- ((int)p & (int)p) & (int)v_7 * (int)(! v_9));
  }
  else {
    v_13 = (short)2207104507.83;
    v_5 = (unsigned long)((unsigned long long)(33642LL << ((int)(~ v_13) & 63)) | 1122987144ULL);
    v = (short)(~ (~ p_11));
  }
  result = ! ((int)p / (((int)v >> (v_5 & 15UL)) + 426));
  return result;
}

