#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 964913576
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p[3][2][3], unsigned long p_5)
{
  char v_19;
  short v_17;
  unsigned short v_15;
  unsigned long v_13;
  signed char v_11;
  double v_9;
  long v_7;
  unsigned short v;
  unsigned char result;
  v_17 = (short)p_5;
  v_15 = (unsigned short)p_5;
  v_13 = 496292179UL;
  v_11 = (signed char)p_5;
  v_9 = -590.208563486;
  v_7 = -23769033L;
  v = (unsigned short)35472;
  while ((unsigned long long)v_7 >= (unsigned long long)(- (v_9 * (double)v_11)) + 
                                    ((unsigned long long)v_13 ^ 32576747ULL) * 18446744073709551602ULL) {
    v_19 = (unsigned long long)v_17 / 36375ULL;
    v_11 = (signed char)(-283L / (long)(- ((int)v_15 / ((int)v_19 + 747)) + 647));
    v_17 = (short)(~ (v_13 + (p_5 << ((int)v & 31))));
    v_13 /= (unsigned long)(! ((long)v_11 / (p[1][1][2] + 52L)) + 129L);
  }
  while_0_break: ;
  result = (unsigned char)(3629 * (int)(~ v));
  return result;
}

