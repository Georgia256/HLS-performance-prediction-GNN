#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 349403094
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, short p_7,
                 unsigned long long p_11[5][3][4], long long p_15,
                 unsigned char p_19)
{
  unsigned char v_33;
  unsigned int v_31;
  unsigned long long v_29;
  float v_27;
  short v_25;
  char v_23;
  int v_21;
  long long v_17;
  float v_13;
  unsigned char v_9;
  signed char v_5;
  unsigned long long v;
  unsigned int result;
  v_33 = (unsigned char)187;
  v_31 = 89851263U;
  v_29 = 917831878ULL;
  v_27 = (float)p;
  v_25 = (short)p_11[1][2][0];
  v_23 = (char)-4;
  v_21 = -618341291;
  v_17 = (long long)p;
  v_13 = (float)p_15;
  v_9 = (unsigned char)96;
  while ((unsigned long long)((unsigned long)((3921032623U % (unsigned int)(
                                               (int)p_19 + 985)) / ((unsigned int)(- v_13) + 8U)) & (
                              (unsigned long)(v_21 ^ (int)v_23) - ~ p)) <= (
         (unsigned long long)((int)v_25 * (int)((short)v_27)) * (18446744073709551488ULL + v_29) & (unsigned long long)p_19)) {
    v_29 = (unsigned int)v_33 - v_31 / 26136939U;
    v_9 = (unsigned char)(! (- (v_29 | (unsigned long long)p_15)));
    v_17 = (long long)(- 22222797243.2);
    v_27 = (float)((double)((unsigned long long)(! p_7) / ((879524613ULL + (unsigned long long)p_19) + 426ULL)) + (
                   (double)(- p_19) - 143172190313.));
  }
  while_0_break: ;
  if ((long long)(- (- (v_13 - (float)p_15))) < (long long)(2043UL - (
                                                            p + 129UL)) * (
                                                v_17 / (-38737LL * (long long)p_19 + 402LL))) {
    v_5 = (signed char)(- 778.6203972);
    v = (unsigned long long)(~ ((int)v_5 + (int)p_7) / ((26497 - (int)v_9) + 131));
    result = (unsigned int)(- (-3.24510886908e+38f + (float)((unsigned long long)p + v)));
  }
  else result = (unsigned int)p_11[0][0][0];
  return result;
}

