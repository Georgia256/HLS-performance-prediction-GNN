#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 357720572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[4][1], unsigned long p_11, short p_15)
{
  char v_13;
  unsigned short v_8;
  unsigned long long v_6;
  unsigned int v_4;
  unsigned long long v;
  long result;
  v_8 = (unsigned short)p_15;
  v_6 = (unsigned long long)p[0][0];
  v = 18446744073204698563ULL;
  result = (long)p_15;
  v_4 = (unsigned int)(- ((unsigned long long)((unsigned long)((long)p_15 - -719753374L) % (
                                               (4187044911UL + (unsigned long)v_8) + 139UL)) - 553270009ULL));
  v_13 = (char)p[2][0];
  v_8 = (unsigned short)((unsigned long long)(~ p_11) ^ ((18446744073656601786ULL + (
                                                          4294911761ULL | v)) + (unsigned long long)(
                                                         (unsigned int)v_8 - 
                                                         (unsigned int)v_13 * p[2][0])));
  result = (long)(((v / (unsigned long long)(result + 519L)) % (unsigned long long)(
                   ~ v_4 + 700U) + (~ v_6 + (unsigned long long)(60699724UL / (unsigned long)(
                                                                 (int)v_8 + 271)))) / (
                  ((unsigned long long)((unsigned long)(! p[0][0]) + 56721UL) & (
                   v >> ((unsigned long long)p_11 % 18446744073709506593ULL & 63ULL))) + 174ULL));
  return result;
}

