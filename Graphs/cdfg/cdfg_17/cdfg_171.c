#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 772074271
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, char p_11, signed char p_13, unsigned int p_17)
{
  short v_15;
  int v_9;
  unsigned short v_7;
  unsigned int v_5;
  unsigned short v;
  int result;
  v_15 = (short)p;
  v_9 = 20812;
  v_7 = (unsigned short)4346;
  v_5 = (unsigned int)p_13;
  v = (unsigned short)8035;
  result = -418607003;
  while ((int)v >= (int)((unsigned short)((double)(((long)result + -45906L) - (long)(
                                                   (int)v_7 & v_9)) / (
                                          304.050410919 / ((double)((int)p_11 % (
                                                                    (int)p_13 + 128)) + 43.) + 336.)))) {
    v_7 = (long)v_15 / -20362L;
    v_15 = (short)(~ ((unsigned long long)p_17 / 52214ULL));
    v_9 = (int)p;
    result = (int)(! (short)13463);
  }
  while_0_break: ;
  if ((((unsigned long long)-107.485237122f & p) % (unsigned long long)(
       (int)(! v) + 861)) * (unsigned long long)(0U % (v_5 + 755U)) <= 
      - (p - 18446744073709550237ULL) / 63ULL) result = 185;
  else result = (int)(p + 18446744073709525544ULL);
  return result;
}

