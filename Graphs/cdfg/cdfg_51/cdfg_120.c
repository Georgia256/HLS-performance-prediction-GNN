#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 769488690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, char p_15, unsigned char p_19,
                 unsigned int p_21[3], unsigned long long p_23)
{
  unsigned char v_29;
  float v_27;
  int v_25;
  unsigned long v_17;
  char v_12;
  double v_10;
  unsigned short v_8;
  unsigned long long v_6;
  signed char v_4;
  long long v;
  unsigned int result;
  v_29 = (unsigned char)p_15;
  v_27 = -8542434816.f;
  v_17 = 3833447225UL;
  v_12 = (char)p_19;
  v_8 = (unsigned short)8116;
  v_6 = (unsigned long long)p;
  v_4 = (signed char)22;
  v_10 = (double)-34973LL;
  if ((unsigned long)(415076764L - (long)((int)(~ v_29) + (int)((unsigned char)(
                                          v_10 - -92.)))) < v_17) {
    v = (long long)((int)v_4 + ((int)(~ p) - (int)p_15));
    v_4 = (signed char)(- (((int)v_8 - (int)v_4) & (int)(v_10 - (double)v_12)));
    result = (unsigned int)(9390ULL % ((unsigned long long)(37458LL | v) / (
                                       (unsigned long long)v_4 * v_6 + 846ULL) + 860ULL));
  }
  else {
    v_25 = (int)v_27;
    v_17 = (unsigned long)((unsigned int)(((int)v_8 + 77) | v_25));
    result = (unsigned int)((unsigned long long)(! (403UL % (v_17 + 231UL))) - (
                            (unsigned long long)(! p_19) + ((unsigned long long)p_21[0] + p_23)));
  }
  return result;
}

