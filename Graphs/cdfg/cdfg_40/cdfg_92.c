#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 256842586
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, int p_7, signed char p_11[5][1][1], char p_17,
         unsigned short p_27)
{
  int v_31;
  signed char v_29;
  unsigned char v_25;
  unsigned char v_23;
  unsigned short v_21;
  long v_19;
  unsigned long v_15;
  unsigned int v_13;
  short v_9;
  signed char v_4;
  unsigned int v;
  long result;
  v_31 = (int)p_17;
  v_29 = (signed char)35;
  v_25 = (unsigned char)205;
  v_23 = (unsigned char)65;
  v_21 = (unsigned short)3784;
  v_13 = (unsigned int)p_11[2][0][0];
  v_9 = (short)-18690;
  if ((unsigned int)(! (107 | (int)p_27)) > ((3602462375U % (unsigned int)(
                                              (int)p_17 + 555) + (unsigned int)p_11[3][0][0]) ^ ~ v_13)) {
    v_13 = 0U;
    v_19 = (long)(! (18810 / ((int)(- v_9) + 346)));
    v_15 = ~ ((unsigned long)((int)p_17 + (int)v_21) & ((unsigned long)p_17 - 581174755UL));
  }
  else {
    v_19 = (long)((int)p_11[4][0][0] * (int)v_29 | -27539 / (- v_31 + 265));
    v_13 = (unsigned int)(~ p_11[2][0][0]);
    v_15 = 419272102UL;
  }
  if ((unsigned long)-1.83515780319e+36 == v_15 + (unsigned long)((long)p_17 ^ (
                                                                  v_19 >> 3L))) {
    v = (unsigned int)(- (~ v_9)) - (p - (unsigned int)p_11[2][0][0]) * (
                                    27051U + v_13);
    v_4 = (signed char)p_7;
    result = (long)(((v + 15870U) - (unsigned int)v_4) * - p);
  }
  else result = (long)p_11[3][0][0];
  return result;
}

