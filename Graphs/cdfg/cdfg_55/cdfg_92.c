#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 141148204
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p[3][3][5], int p_5, char p_7[2][3][2],
                  unsigned short p_13, unsigned long p_15)
{
  signed char v_17;
  char v_11;
  unsigned long long v_9;
  char v;
  unsigned char result;
  v_17 = (signed char)p_7[0][2][0];
  v_11 = (char)56;
  result = (unsigned char)118;
  if ((unsigned long)p_5 * ! ((unsigned long)v_17 / (p_15 + 730UL)) < (
      (unsigned long)(~ p_7[1][1][0]) % (p_15 + 453UL) & (unsigned long)(! (~ p_7[0][0][0])))) 
    v = (char)(-202UL);
  else {
    v_9 = (unsigned long long)((p_5 % ((int)result + 795)) * (int)-2.44813734236e+38f - -2775633);
    v = (char)(- v_9 - (unsigned long long)((unsigned long)((int)v_11 + 13537) % (
                                            ((unsigned long)p_13 ^ p_15) + 902UL)));
    v = (char)((int)(! v) % (p_5 + 428) + (-38 + ((int)p_7[0][1][0] + (int)v)));
  }
  result = (unsigned char)(p[1][0][2] / (p[2][0][3] * (long long)(-250983607 % (
                                                                  (int)v + 121)) + 442LL));
  return result;
}

