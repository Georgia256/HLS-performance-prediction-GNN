#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 977004086
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, long p_17[2])
{
  unsigned long long v_15;
  int v_13;
  long long v_10;
  long long v_8;
  unsigned int v_6;
  char v_4;
  long v;
  char result;
  v_13 = -107325277;
  v_10 = 830418149LL;
  v_8 = 725409629LL;
  v_6 = 378000279U;
  v_4 = (char)p_17[1];
  v = -15809L;
  while ((long long)(-22 % ((int)v_4 + 121)) > (long long)((unsigned long)(
                                                           (unsigned int)v_4 * v_6) ^ 62341UL) + - (
                                               v_8 ^ -49834LL)) {
    v_4 = v_10 % 28634LL;
    v_15 = (unsigned long long)(! (~ ((unsigned long)p_17[1] ^ 3619880173UL)));
    v = (long)((unsigned long long)((unsigned long)(37 / ((int)((unsigned char)-2.49353474965e+38) + 174)) | 4271205322UL) % (
               (unsigned long long)((long long)v_13 & -252388810LL) / (
               ! v_15 + 417ULL) + 370ULL));
    v_8 = (long long)(((long)p & (-54426L & (long)p)) * v);
  }
  while_0_break: ;
  result = (char)v;
  return result;
}

