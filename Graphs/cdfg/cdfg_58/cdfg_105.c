#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62489217
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, long long p_5, short p_7[2][3][2],
                 unsigned int p_13, unsigned long p_17)
{
  long long v_23;
  char v_21;
  unsigned char v_19;
  unsigned char v_15;
  unsigned short v_11;
  long v_9;
  int v;
  unsigned int result;
  v_23 = (long long)p;
  v_21 = (char)p;
  v_19 = (unsigned char)42;
  v_15 = (unsigned char)p_5;
  v_11 = (unsigned short)p_13;
  while ((unsigned long long)((unsigned long)(! (53408 - (int)((unsigned short)9.02269586491e+37))) % (
                              ((unsigned long)(- v_19) & p_17 % (p + 101UL)) + 289UL)) == - (
         60906ULL - (unsigned long long)(~ p_17))) {
    v_21 = (unsigned long long)v_23 * 18446744072852568499ULL;
    v_15 = (unsigned char)p;
    v_11 = (unsigned short)((unsigned long)p_13 - p_17 / ((p + (unsigned long)p_13) + 376UL));
    v_19 = (unsigned char)((p % (unsigned long)((int)p_7[1][2][0] + 188)) / (
                           ((unsigned long)p_13 + p_17) + 837UL) - ~ (~ p));
  }
  while_0_break: ;
  if ((unsigned long long)((unsigned long)(- (5072 - (int)v_15)) | ~ p_17 * (unsigned long)(
                                                                   (int)v_19 + (int)v_21)) > 
      (unsigned long long)p_13 / 46380ULL) result = (unsigned int)(3332628219UL % (
                                                                   p + 640UL));
  else {
    v_9 = (long)(~ (4254146235U + (unsigned int)p_7[0][1][0]) - ((unsigned int)(- v_11) + 
                                                                 697231266U * p_13));
    v = (int)(- (18466290865ULL / (unsigned long long)(! v_9 + 639L)));
    result = (unsigned int)((long long)v | ! (p_5 - (long long)p_7[0][2][0]));
  }
  return result;
}

