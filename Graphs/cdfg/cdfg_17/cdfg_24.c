#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 616829341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, unsigned int p_5, unsigned long long p_7,
          short p_9, signed char p_11[2][1])
{
  signed char v_29;
  unsigned long v_27;
  short v_25;
  long long v_23;
  char v_21;
  unsigned long v_19;
  int v_17;
  unsigned long long v_15;
  unsigned short v_13;
  float v;
  short result;
  v_29 = (signed char)61;
  v_27 = (unsigned long)p_5;
  v_25 = (short)27303;
  v_23 = (long long)p;
  v_21 = (char)p_7;
  v_19 = 4294950365UL;
  if (~ (~ (v_23 | (long long)p)) != (long long)((3048985930UL - (unsigned long)(
                                                  629.393038787 / ((double)v_25 + 457.))) % (
                                                 (v_27 | (unsigned long)(
                                                  (int)v_29 % ((int)p_11[1][0] + 186))) + 797UL))) {
    v_17 = (int)(p_7 / (unsigned long long)((3383136616UL * v_19) / (unsigned long)(
                                            p + 618U) + 759UL));
    v_15 = (unsigned long long)((unsigned int)(! v_17) * - (4294967177U % (
                                                            p + 207U)));
    v_13 = (unsigned short)((unsigned long)p_9 / 4294922267UL);
  }
  else {
    v_13 = (unsigned short)(~ (p % (unsigned int)((int)p_9 + 598) & (unsigned int)v_21));
    v_15 = (1ULL ^ (18446744073457950579ULL + (unsigned long long)p_5)) + (unsigned long long)(
           825114603UL + (unsigned long)(! p_11[1][0]));
    v_13 = v_13;
  }
  if (p_7 / (unsigned long long)(((unsigned long)((unsigned int)v_13 / (
                                                  p_5 + 624U)) ^ 980358816UL) + 423UL) != 18446744073709551562ULL) 
    result = (short)(32007ULL - (unsigned long long)p);
  else {
    v_13 = (unsigned short)v_15;
    v = (float)(39812 * (int)(~ (! v_13)));
    result = (short)((float)(882820166U - (unsigned int)v / (p_5 + 500U)) / (
                     (v / ((float)p_7 + 830.f) + (float)((int)p_9 * (int)p_11[0][0])) + 168.f));
  }
  return result;
}

