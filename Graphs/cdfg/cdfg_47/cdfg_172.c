#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 962559943
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, unsigned char p_4, long long p_7, short p_17, int p_21)
{
  long v_25;
  short v_23;
  char v_19;
  unsigned long long v_15;
  unsigned long v_13;
  int v_11;
  unsigned short v_9;
  unsigned int v;
  char result;
  v_25 = (long)p_4;
  v_23 = (short)p;
  v_19 = (char)p;
  v_13 = (unsigned long)p_4;
  v_11 = -935628066;
  v_9 = (unsigned short)53710;
  v = 583860630U;
  result = (char)-19;
  if ((long)(- (~ ((int)v_19 / ((int)v_9 + 982)))) != ~ (((long)v_23 - v_25) % (long)(
                                                         ! p_21 + 25))) {
    result = (char)(! ((long long)p_21 + p_7) - (long long)(((int)p_4 + v_11) * v_11));
    v_15 = (unsigned long long)result;
    v_13 = (unsigned long)(~ p_17);
  }
  else {
    v_19 = (char)(! (((long)result / (p + 924L)) / 62729L));
    v_15 = (unsigned long long)((int)v_19 - ~ (41 % (v_11 + 835)));
    v_13 = (unsigned long)((unsigned long long)(((unsigned long)p - v_13) - 
                                                (unsigned long)p_21 % (
                                                v_13 + 529UL)) ^ ((unsigned long long)p % 18446744073328489397ULL & (unsigned long long)(- p)));
  }
  while ((long long)(~ ((unsigned long)(p & (long)p_4) + (unsigned long)(
                        v * 195U))) <= p_7 + (long long)v_9) {
    v_19 = v_15 + 18446744073709551518ULL;
    result = (char)((~ v_13 << 6) * (unsigned long)(-581 % ((int)p_17 + 459) - (int)v_19));
    v_15 = (unsigned long long)((((long long)v_11 + p_7) - -77LL) / (
                                (p_7 * (long long)p - (long long)((long)result | p)) + 208LL));
    v_9 = (unsigned short)((float)(v - (unsigned int)((int)v_9 % 1009594235)) + (
                           1.05633354941e+38f + (float)(p % (long)((int)v_9 + 357))));
  }
  while_0_break: ;
  return result;
}

