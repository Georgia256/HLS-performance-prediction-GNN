#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 271289807
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, char p_7, signed char p_13)
{
  unsigned long long v_11;
  unsigned long v_9;
  unsigned int v_5;
  int v;
  unsigned long result;
  v_11 = (unsigned long long)p_7;
  v_9 = (unsigned long)p;
  v_5 = (unsigned int)p_7;
  if (- (- (v_11 / (unsigned long long)((int)p_7 + 575))) <= 43842ULL * (unsigned long long)p_13) 
    v = (int)(! (993397931U + ! p));
  else {
    v = (int)v_9;
    v_5 = (unsigned int)(126411600 + (v | (int)p_7)) - (v_5 / ((unsigned int)2.56535011411e+37 + 887U)) / 3454458906U;
    v = (int)v_5;
  }
  result = (unsigned long)(~ v);
  return result;
}

