#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 731335331
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p[3][4][2], unsigned int p_4, unsigned short p_7,
           signed char p_9, unsigned long p_15[3])
{
  unsigned int v_17;
  unsigned long v_13;
  char v_11;
  long v;
  double result;
  v_17 = 4294910791U;
  v_11 = (char)(~ ((4294930623U - (v_17 - p_4)) ^ v_17));
  v = (long)(p_15[2] ^ (unsigned long)(~ p_9));
  v_13 = (unsigned long)((-40056LL * (long long)v) % 4294905680LL);
  result = (-88. + (- p[2][1][0] + 4004226198.)) - (double)((((unsigned long)p_4 / (unsigned long)(
                                                              v + 443L)) / (unsigned long)(
                                                             (int)p_7 + 870)) / (
                                                            ((unsigned long)(
                                                             27846 + (int)p_9) - 
                                                             (unsigned long)v_11 % (
                                                             v_13 + 222UL)) + 414UL));
  return result;
}

