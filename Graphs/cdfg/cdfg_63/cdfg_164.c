#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 191138477
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned short p_5[5][3][2],
                       unsigned long p_13, int p_21[3])
{
  short v_23;
  unsigned char v_19;
  int v_17;
  short v_15;
  short v_11;
  unsigned short v_9;
  unsigned long long v_7;
  long long v;
  unsigned long long result;
  v_23 = (short)p_13;
  v_19 = (unsigned char)p_5[1][0][0];
  v_11 = (short)-10134;
  result = (unsigned long long)p_5[4][0][0];
  if ((int)2.6965126373e+37 < ~ (! (p_21[0] + (int)v_11))) {
    v_9 = (unsigned short)(116UL * (! p_13 << (-17886 * (int)v_19 & 31)));
    v_17 = (int)(~ (char)-24);
    v_15 = (short)v_17;
  }
  else {
    v_15 = (short)p;
    v_9 = (unsigned short)((unsigned long long)p_21[0] / (result + 997ULL));
    v_11 = (short)-12757;
  }
  if (293ULL == (unsigned long long)(((double)v_9 + -3745123336.53) + (double)(
                                     (int)p_5[1][1][1] - (int)((unsigned short)5571398970.58))) % (
                ((105423845ULL | result) & (unsigned long long)((int)v_15 & 80)) + 973ULL)) {
    v = - (p % (long long)((int)p_5[1][1][1] + 926));
    result = (unsigned long long)v;
  }
  else {
    v = 0LL;
    v_7 = (unsigned long long)v;
    result = v_7 * (unsigned long long)v_9;
  }
  return result;
}

