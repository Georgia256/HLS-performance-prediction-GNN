#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 639129470
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p)
{
  unsigned short v_14;
  double v_12;
  unsigned long long v_10;
  unsigned short v_8;
  unsigned int v_6;
  long long v_4;
  unsigned long long v;
  float result;
  v_14 = (unsigned short)p;
  v_12 = (double)p;
  v_10 = (unsigned long long)p;
  v_8 = (unsigned short)p;
  v_6 = (unsigned int)p;
  v_4 = -29525LL;
  v = (unsigned long long)p;
  result = -436.760223389f;
  if ((unsigned long long)p > (unsigned long long)(((double)v_10 / (v_12 + 177.)) * (double)(
                                                   (float)v_10 + result)) / (
                              v % (- v_10 + 630ULL) + 546ULL)) {
    v = (unsigned long long)v_4;
    v = v;
    v_14 = (unsigned short)(- ((unsigned long long)p & (v | 51725ULL)));
  }
  else {
    v_8 = (unsigned short)result;
    v_6 = (unsigned int)v;
    v = 122ULL;
  }
  while (v > (unsigned long long)(v_4 % (long long)(v_6 + 19U)) % (((unsigned long long)v_8 / (
                                                                    v_10 + 495ULL) + v_10) + 611ULL)) {
    v_12 = (int)((short)v_12) % -17971;
    v_8 = (unsigned short)(((double)(61 - (int)p) - -283439353.221 * (double)v_6) / (
                           (double)p + 950.));
    v_4 = (long long)(3946408448ULL / (! v + 675ULL));
    v = (unsigned long long)v_14;
  }
  while_0_break: ;
  return result;
}

