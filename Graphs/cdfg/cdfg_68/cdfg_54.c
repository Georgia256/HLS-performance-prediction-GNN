#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1020040025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[1][5], double p_11)
{
  unsigned char v_13;
  unsigned long v_8;
  char v_6;
  signed char v_4;
  double v;
  short result;
  v_13 = (unsigned char)p_11;
  v_6 = (char)p[0][4];
  v = -3570148917.88;
  result = (short)-3262;
  v_4 = (signed char)(! (! ((int)v_13 - 76)));
  while ((unsigned int)(((double)result + - v) + (- v - 35.)) >= 0U) {
    v = (long long)v_6 * ((long long)v_4 / -388665391LL);
    v_4 = (signed char)p_11;
    v_8 = (unsigned long)(- (~ (! p[0][0])));
    result = (short)(! (18446744073709539609ULL % (unsigned long long)(
                        v_8 + 855UL)) ^ (unsigned long long)p[0][4]);
  }
  while_0_break: ;
  return result;
}

