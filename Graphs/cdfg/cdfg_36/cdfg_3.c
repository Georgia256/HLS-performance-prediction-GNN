#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 270874311
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p[2][1][4], unsigned char p_5[3],
                   signed char p_7, unsigned long p_11, unsigned int p_17)
{
  unsigned char v_29;
  unsigned short v_27;
  unsigned int v_25;
  signed char v_23;
  unsigned short v_21;
  unsigned int v_19;
  int v_15;
  char v_13;
  double v_9;
  unsigned long long v;
  unsigned short result;
  v_29 = (unsigned char)97;
  v_27 = (unsigned short)p_17;
  v_25 = p_17;
  v_21 = (unsigned short)p[0][0][1];
  v_19 = 55819U;
  v_15 = (int)p_11;
  v_13 = (char)p[0][0][2];
  v_9 = (double)p_7;
  if (-35799LL != (long long)(~ (~ ((unsigned long)v_19 + 4294958352UL)))) {
    v_19 = (unsigned int)((((int)v_21 / ((int)p_7 + 438)) * (-110 - (int)((signed char)93941360.f))) % (
                          (int)(~ p_5[1]) + 98));
    result = (unsigned short)p_11;
    v_13 = (char)(((unsigned int)(v_15 | 922) - ((unsigned int)p_5[0] + p_17)) * (
                  (unsigned int)(~ p_5[0]) - v_19));
  }
  else {
    result = (unsigned short)(! v_19);
    v_23 = (signed char)(((p_11 - (unsigned long)v_25) * (unsigned long)(
                          (int)v_27 - (int)v_29)) / (~ (! p_11) + 483UL));
    v_9 = (double)((59734 + (int)v_23) << (p_11 & 31UL));
  }
  if (~ p_11 % (! p_11 % 80UL + 675UL) < ((56UL - 48UL * p_11) ^ (unsigned long)(
                                          (int)v_13 + (int)(! result)))) {
    result = (unsigned short)(- (- ((int)v_9 & -61450)));
    v = (unsigned long long)(- (-16438LL + (long long)p_5[2]) / (long long)(
                             81 % ((int)result % ((int)p_7 + 309) + 341) + 489));
    result = (unsigned short)(v & 0 / (unsigned long long)((int)(- p[0][0][1]) + 623));
  }
  else result = (unsigned short)12075;
  return result;
}

