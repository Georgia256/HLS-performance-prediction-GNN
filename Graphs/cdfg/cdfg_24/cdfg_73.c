#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 207966745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p)
{
  double v_10;
  unsigned long long v_8;
  long long v_6;
  short v_4;
  short v;
  unsigned long result;
  v_10 = (double)p;
  v_8 = 7700ULL;
  v_6 = (long long)p;
  v_4 = (short)p;
  v = (short)p;
  while (~ (~ ((int)v_4 * 109)) >= ! ((int)v_4 >> 14) * (int)4.84466439092e+36) {
    v_6 = v_8 >> ((v_6 >> 2) & 63LL);
    v = (short)(! ((int)4929806336.f + ((int)((char)7132656128.f) - (int)p)));
    v_8 = (unsigned long long)(2.54638168365e+38 / (v_10 + 835.));
    v_4 = (short)-15894;
  }
  while_0_break: ;
  result = (unsigned long)(- (1011531899 - 36 % ((int)v + 1017)));
  return result;
}

