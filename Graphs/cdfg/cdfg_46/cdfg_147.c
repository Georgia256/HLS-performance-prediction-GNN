#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 3294846
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, float p_7, int p_9, signed char p_11[3][1][3],
         int p_13)
{
  unsigned int v_17;
  short v_15;
  float v_4;
  long v;
  char result;
  v_17 = (unsigned int)p_13;
  v_15 = (short)p_9;
  result = (char)p_9;
  if (18446744073709535076ULL < (unsigned long long)(~ ((unsigned int)(
                                                        (int)result % (
                                                        (int)v_15 + 591)) % (
                                                        v_17 + 87U)))) {
    v_4 = (float)((long long)(! (-403835879 * (int)p_7)) - -59439LL);
    result = (char)(- ((int)((float)p_9 + v_4) << ((p_13 | (int)p) & 31)));
  }
  else {
    v_4 = (float)(- (- p_13) - - p_9 / (! p_9 + 738));
    result = (char)(! (! (-(unsigned short)62849)));
  }
  if (- (! ((int)p_7 & p_9)) > ((int)v_4 * 441665734 - -75) + (int)(~ (- p_11[1][0][1]))) 
    result = (char)50;
  else {
    result = (char)(~ ((long)(71 + (int)p) * (240927556L + (long)result)));
    v = (long)(- ((int)((char)(- v_4)) / ((int)result + 353)));
    result = (char)(- ((double)(65L + v) / 3966846877.89));
  }
  return result;
}

