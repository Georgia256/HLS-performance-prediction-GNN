#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 890576557
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, signed char p_5, unsigned int p_9,
           unsigned long long p_13, unsigned long long p_17)
{
  unsigned long v_23;
  unsigned long long v_21;
  unsigned int v_19;
  unsigned short v_15;
  unsigned char v_11;
  short v_7;
  float v;
  double result;
  v_23 = 4294939833UL;
  v_21 = 18446744072823076171ULL;
  v_19 = (unsigned int)p_17;
  v_11 = (unsigned char)136;
  v_7 = (short)p_13;
  if ((unsigned long long)(! p_9) / ((p_17 % 811848881ULL) % (p_13 * p_13 + 419ULL) + 822ULL) > (unsigned long long)(
      (long long)v_11 % -60758LL << ((unsigned long long)(v_23 - (unsigned long)v_11) % (
                                     p_17 + 1004ULL) & 63ULL))) {
    v_11 = (unsigned char)(- p_13);
    v_7 = (short)p_13;
    v_15 = (unsigned short)(-1013118933LL % (long long)((((unsigned int)p - p_9) << (
                                                         15297U * (unsigned int)v_11 & 31U)) + 981U));
  }
  else {
    v_11 = (unsigned char)(! 6904UL);
    v_15 = (unsigned short)((unsigned long long)((double)(p_13 * p_13) * 286.530544471) * p_17);
    v_19 = (unsigned int)(1. - (312.599239996 + (double)v_21));
  }
  if ((unsigned long long)((unsigned int)(! (- p)) / (((unsigned int)(- v_7) ^ 
                                                       p_9 % (unsigned int)(
                                                       (int)v_11 + 220)) + 109U)) == 
      (~ p_13 - (unsigned long long)((unsigned int)v_15 * p_9)) / (((
                                                                    p_17 & 18446744073709536597ULL) + (unsigned long long)(! v_19)) + 510ULL)) 
    result = (double)p;
  else {
    v = (float)(~ 1471695);
    result = (double)(v / ((float)(~ p_5) + 606.f));
  }
  return result;
}

