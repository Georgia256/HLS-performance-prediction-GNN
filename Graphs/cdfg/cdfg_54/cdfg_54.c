#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 602299199
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned char p_5, char p_7,
                  unsigned long p_11, unsigned int p_13)
{
  int v_21;
  long long v_19;
  long v_17;
  float v_15;
  double v_9;
  unsigned char v;
  unsigned char result;
  v_21 = -41566;
  v_19 = 56708LL;
  v_17 = (long)p_5;
  v_15 = (float)p_13;
  v_9 = (double)p_5;
  v = p_5;
  result = (unsigned char)171;
  while ((unsigned long long)((long long)(~ ((int)p_5 * (int)p)) - (~ v_19 - (long long)(
                                                                    -71 / (
                                                                    (int)result + 83)))) != 
         ((unsigned long long)((float)p / -1.72431858519e+38f) / ((18446744073112077524ULL + (unsigned long long)v) + 313ULL)) % 1ULL) {
    result = (unsigned char)(! ((-9824 / ((int)result + 726)) / (205 * (int)p + 521)));
    v_9 = (double)(! (((long long)v_21 - v_19) / -22270LL));
    v = (unsigned char)((int)p_5 * (int)((unsigned char)(9310202881.03 + (double)(
                                                         240L | v_17))));
  }
  while_0_break: ;
  if (4294911375UL == (unsigned long)(~ ((unsigned int)(v_15 - 37645.f) * - p_13))) {
    v = (unsigned char)(((int)p_5 * (int)p + (int)p_7 % -19468) * (int)(
                        - v_9 / ((double)(p_11 >> (p_13 & 31U)) + 627.)));
    result = v;
    result = (unsigned char)((int)result * (int)(~ p));
  }
  else {
    result = (unsigned char)((3850219145UL % (unsigned long)(~ p_13 + 657U)) * (unsigned long)(~ (
                             v_17 & v_17)));
    v_15 = (float)result;
    result = (unsigned char)(((double)(4752UL << 26ULL) / ((v_9 + (double)v_15) + 282.)) * (
                             6.17226836758e+38 - (double)((int)((unsigned char)v_9) ^ (int)v)));
  }
  return result;
}

