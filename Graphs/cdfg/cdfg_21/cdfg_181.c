#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 860238126
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, long long p_4[4][4][3],
                       char p_6[5][4], char p_8, short p_10)
{
  unsigned int v_21;
  long v_19;
  unsigned char v_17;
  long long v_15;
  unsigned long long v_13;
  double v;
  unsigned long long result;
  v_21 = 4102520276U;
  v_19 = -28056L;
  v_15 = (long long)p_10;
  v_13 = 53011ULL;
  v = (double)p_4[3][2][0];
  while (v <= (double)p_4[1][1][0]) {
    v_17 = v_15 + 4294930845LL;
    v_15 = (long long)((57932UL & ((unsigned long)v_19 + (unsigned long)v_21)) * 64883UL);
    v_13 = (unsigned long long)(! 14268U);
    v = (double)((int)v_17 & 249);
  }
  while_0_break: ;
  if (9806ULL > (unsigned long long)p_6[4][1] - (unsigned long long)v / (
                                                ! v_13 + 134ULL)) result = 
                                                                  p % (unsigned long long)(
                                                                  ((p_4[2][1][0] - (long long)p_6[3][3]) ^ (long long)(- p_8)) + 40LL);
  else result = (unsigned long long)(~ p_10);
  return result;
}

