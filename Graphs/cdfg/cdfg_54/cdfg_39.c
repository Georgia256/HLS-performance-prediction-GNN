#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 322998001
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned int p_4, unsigned char p_13,
                 unsigned short p_15, signed char p_21)
{
  char v_25;
  double v_23;
  char v_19;
  char v_17;
  unsigned long long v_11;
  float v_9;
  long v_7;
  unsigned short v;
  unsigned int result;
  v_25 = (char)-85;
  v_23 = (double)p_21;
  v_19 = (char)p_21;
  v_11 = (unsigned long long)p_4;
  v_9 = (float)p_15;
  v = (unsigned short)p_21;
  result = (unsigned int)p_13;
  if ((long long)(- ((p_4 - (unsigned int)p_13) + (unsigned int)(-1112 + (int)p_21))) > 
      (((long long)v & p) - (long long)(69 / ((int)v_25 + 232))) + (long long)(
      ((unsigned int)p_21 & 534584335U) >> 27)) {
    v_7 = (long)((1.84467440737e+19 * (v_23 - (double)p_21)) * (double)(
                 (p_4 % (unsigned int)((int)p_21 + 852)) * (unsigned int)(
                 (double)p_13 * -3707991168.88)));
    v_19 = (char)(~ (-13458LL * (33814LL - p)));
    v_11 = (unsigned long long)((((long long)p_21 + p) - ! p) % (long long)(
                                (int)-3.34123795786e+37f / (((int)p_15 - (int)v) + 736) + 111));
  }
  else {
    v_7 = (long)p_13;
    v_9 = (float)(! (((int)p_21 | (int)p_15) - (int)(- p_21)));
    result = (unsigned int)((int)p_15 + ((int)v & 96));
  }
  while (~ (p & 8546LL) == (long long)(p_4 * (unsigned int)v)) {
    v_17 = (unsigned long)v_7 + 666368756UL;
    result = (unsigned int)(((int)p_15 % ((int)v_17 + 918)) * (int)(~ v_19) + (int)(- (
                            (float)v_19 - v_9)));
    v_7 = 58902L;
    v = (unsigned short)(((unsigned long long)(34843.f + v_9) % (- v_11 + 458ULL)) / (unsigned long long)(
                         (int)p_13 % (30765 / ((int)p_13 + 929) + 447) + 431));
  }
  while_0_break: ;
  return result;
}

