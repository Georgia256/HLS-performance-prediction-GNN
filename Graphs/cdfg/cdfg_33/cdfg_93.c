#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221024388
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, short p_11, long p_13, char p_15, char p_17[4][5][5])
{
  signed char v_9;
  signed char v_6;
  signed char v_4;
  unsigned long long v;
  int result;
  v_9 = (signed char)-2;
  result = -51948;
  v = (unsigned long long)(! ((p_13 + (long)p_15) - (long)((int)p_17[2][3][1] / (
                                                           result + 796))));
  if ((unsigned long)v_9 >= p) {
    v_4 = v_9;
    v_6 = (signed char)(! (- (~ p)));
    result = (int)((v * 138ULL >> ((unsigned long long)v_4 % 480034813ULL & 63ULL)) - (unsigned long long)v_6);
  }
  else result = (int)(- p_11);
  return result;
}

