#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 64040406
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, float p_7[1][3][3], short p_17, short p_19,
                 unsigned long long p_21)
{
  int v_25;
  unsigned int v_23;
  long v_15;
  char v_13;
  long long v_11;
  unsigned char v_9;
  unsigned long long v_4;
  unsigned char v;
  unsigned int result;
  v_25 = -310845129;
  v_23 = (unsigned int)p_21;
  v_13 = (char)67;
  v_11 = (long long)p_17;
  v = (unsigned char)135;
  if (- (- ((long long)v_23 & -18603LL)) == (long long)v_25) {
    v_9 = (unsigned char)((int)v_13);
    v = (unsigned char)(((long long)v_9 - v_11) % (long long)(((int)((signed char)6152680314.69) + 71) + 831) + (long long)p_7[0][1][0]);
    v_4 = (unsigned long long)(! ((int)p % ((int)((char)p_7[0][0][2]) + 358)));
  }
  else {
    v_15 = (long)((int)v / ((169 * (int)p & (-20045 >> ((int)p_17 & 31))) + 305));
    v_4 = (unsigned long long)(! ((-36149LL / (long long)((int)v + 754)) * (long long)v_15));
    v = (unsigned char)(~ (~ (short)12657));
  }
  result = (unsigned int)(! ((unsigned long long)(- v) * ((unsigned long long)v % (
                                                          v_4 + 528ULL))));
  return result;
}

