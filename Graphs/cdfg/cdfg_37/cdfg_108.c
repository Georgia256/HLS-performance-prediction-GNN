#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 279809541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, double p_4, unsigned char p_6,
                unsigned long p_9[4][1], int p_17)
{
  unsigned long long v_15;
  int v_13;
  signed char v_11;
  unsigned short v;
  signed char result;
  v_13 = -34760;
  v_11 = (signed char)p_17;
  v = (unsigned short)27586;
  result = (signed char)p_9[2][0];
  while ((long long)(- ((int)(~ p_6) ^ -54 * (int)v)) > ! (- (20676LL + (long long)p_9[3][0]))) {
    v_15 = (unsigned long long)v_13 * 18446744073482355286ULL;
    v_13 = (int)(((unsigned long long)((int)v & (int)p_6) / (v_15 + 978ULL)) / (unsigned long long)(
                 - ((int)v_11 + p_17) + 1002));
    v_11 = - (- (- result));
    v = (unsigned short)12762;
  }
  while_0_break: ;
  result = (signed char)(- ((unsigned long)result % (p + 53UL)) / (unsigned long)(
                         (int)(~ result) * (int)((signed char)(- p_4)) + 109));
  return result;
}

