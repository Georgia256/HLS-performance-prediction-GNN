#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 445417554
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned long long p_5, long long p_7,
                unsigned long long p_15)
{
  long long v_17;
  short v_13;
  unsigned char v_11;
  unsigned short v_9;
  double v;
  signed char result;
  v_13 = (short)p_15;
  v_11 = (unsigned char)109;
  v_9 = (unsigned short)p_7;
  v = 2.57547050565e+38;
  result = (signed char)31;
  v_17 = (long long)(! (! (! (char)85)));
  while (p == (long long)(((-716.453729779 / (v + 518.)) / ((double)p_5 + 888.)) / (
                          (double)(- (p + p_7)) + 291.))) {
    result = (int)v_13 >> (((int)v_9 & -25970) & 15);
    v_11 = (unsigned char)(- ((float)(- v_11) * 8.76453054555e+36f));
    v_13 = (short)((unsigned long long)(-128 * (int)(! result)) * (p_15 - (unsigned long long)(
                                                                   v_17 - 446833951LL)));
    v = (double)(251LL / ((p - ~ p_7) + 341LL));
  }
  while_0_break: ;
  return result;
}

