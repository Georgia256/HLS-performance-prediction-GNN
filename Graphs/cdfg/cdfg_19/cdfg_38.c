#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 201912822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned short p_5, long p_11, long p_19,
                  long long p_21)
{
  int v_17;
  unsigned short v_15;
  unsigned short v_13;
  long v_9;
  char v_7;
  float v;
  unsigned long result;
  v_15 = (unsigned short)p;
  v_13 = (unsigned short)46767;
  v_9 = p_19;
  result = (unsigned long)p_19;
  if (1.70995769995e+38 >= (double)(! ((p_19 >> (v_9 & 31L)) - (long)p * p_11))) {
    v_17 = (int)((result % 121UL - (unsigned long)(40798L * p_11)) & 4294967295UL);
    v_9 = (long)(~ ((unsigned long long)v_15 - 18446744073542760371ULL) * (unsigned long long)(
                 (unsigned long)(~ v_17) + ((unsigned long)1.23852009085e+38f - result)));
    v_7 = (char)v_13;
  }
  else {
    v_9 = ! p_19;
    v_7 = (char)((long long)(- (p_19 | (long)p)) % ((-869662665LL - ~ p_21) + 417LL));
  }
  if (214L < (long)((int)v_7 % 2) * ((long)((int)((unsigned short)3.19110675068e+38f) / 7960) + (
                                     v_9 + p_11))) {
    v = (float)(-310552269UL);
    result = (unsigned long)(! ((int)((float)p - v) / (((int)p - (int)p_5) + 990)));
  }
  else result = (unsigned long)-0.f;
  return result;
}

