#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 562126193
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, unsigned long long p_9, unsigned char p_13,
                       int p_15, unsigned int p_21)
{
  long v_23;
  unsigned char v_19;
  float v_17;
  short v_11;
  int v_7;
  signed char v_5;
  char v;
  unsigned long long result;
  v_23 = 26648L;
  v_11 = (short)-3916;
  v = (char)-113;
  result = 18446744073709511846ULL;
  v_7 = 289;
  if ((unsigned int)(- p) == ! ((unsigned int)((int)p << (result & 7ULL)) & (
                                p_21 - (unsigned int)p))) {
    v_7 = (int)(6940L * (long)(((int)v_11 % ((int)p_13 + 693)) / (v_7 * p_15 + 859)));
    v_5 = (signed char)(489748623UL - (unsigned long)v_7);
    result = (unsigned long long)(((int)p * (int)v) * (int)v_5) - ((unsigned long long)(! v_7) - (
                                                                   (unsigned long long)p | p_9));
  }
  else {
    v_19 = (unsigned char)(- ((unsigned long long)p_21 / (p_9 + 745ULL)) + (unsigned long long)(! (
                           v_23 * (long)v_11)));
    v_17 = (float)((unsigned long long)(! (~ v_19)) * ! p_9);
    result = (unsigned long long)v_17;
  }
  return result;
}

