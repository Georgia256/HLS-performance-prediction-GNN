#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 637455642
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned short p_9, double p_11, unsigned int p_15)
{
  unsigned long v_17;
  unsigned short v_13;
  double v_7;
  double v_5;
  short v;
  unsigned char result;
  v_17 = (unsigned long)p_11;
  v_13 = (unsigned short)p_15;
  v_5 = (double)(! ((unsigned long)p_15 - v_17) + 52550UL);
  if ((double)(! ((int)((unsigned short)v_5) << ((int)p_9 & 15))) / (
      p_11 + 609.) != 5522109080.59 * (double)((int)v_13 + 24529)) {
    v_5 = (double)(! ((long long)(p >> 30) / -140299122LL));
    v = (short)v_5;
    result = (unsigned char)(- (~ p / (9 / ((int)v + 416) + 370)));
  }
  else {
    v_7 = (double)(116 * p);
    result = (unsigned char)v_7;
    result = result;
  }
  return result;
}

