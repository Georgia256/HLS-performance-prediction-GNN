#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 232880763
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned long p_13)
{
  double v_15;
  unsigned long v_10;
  short v_8;
  unsigned char v_6;
  float v_4;
  short v;
  unsigned long result;
  v_15 = 9537151026.07;
  v_10 = p_13;
  v_8 = (short)17634;
  v_6 = (unsigned char)44;
  v = (short)19723;
  result = 175035257UL;
  v_4 = (float)(v_10 - (unsigned long)(-11 + (int)(- v_15)));
  while ((int)(- (! v)) < 23910) {
    result = (float)v_6 / ((v_4 - -81.7701721191f) + 287.f);
    v_10 = ! (! p_13);
    v_8 = (short)((unsigned long long)(~ (-128 / ((int)v_8 + 495))) - 233503089540626389ULL);
    v = (short)((int)(-921.37487793f - (float)(v_10 + 4294959869UL)) / (
                ((int)v_8 - (int)p) + 797));
  }
  while_0_break: ;
  return result;
}

