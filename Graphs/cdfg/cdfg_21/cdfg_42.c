#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 690814030
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, char p_17[2][4][2])
{
  long long v_27;
  unsigned short v_25;
  unsigned char v_23;
  long v_21;
  char v_19;
  short v_15;
  unsigned long v_13;
  unsigned int v_11;
  float v_8;
  unsigned short v_6;
  long long v_4;
  int v;
  short result;
  v_27 = (long long)p;
  v_25 = (unsigned short)8305;
  v_23 = (unsigned char)38;
  v_19 = (char)44;
  v_15 = (short)15309;
  v_13 = (unsigned long)p_17[0][2][0];
  v_6 = (unsigned short)p_17[1][2][0];
  v = (int)p_17[0][0][0];
  result = (short)-31227;
  v_11 = (unsigned int)p;
  if (0ULL >= (((unsigned long long)result - 18446744073709527422ULL) - (unsigned long long)(
               (int)v_19 + (int)v_6)) % (unsigned long long)(v_13 + 839UL)) {
    v_8 = (float)(! (~ v_13 | (unsigned long)(- v_15)));
    v_4 = (long long)((float)(! ((int)v_6 - 56788)) / (((v_8 - -2.05346274518e+38f) - (float)(
                                                        (unsigned int)p * v_11)) + 364.f));
    result = (short)((long long)v % (! (! v_4) + 577LL));
  }
  else {
    v_21 = (long)((long long)((int)v_23 - 605129739) + (long long)(541640736U >> (
                                                                   (int)v_25 & 31)) * (
                                                       49LL / (v_27 + 453LL)));
    v_6 = (unsigned short)((long)(! ((int)v_19 - (int)((char)877307286.182))) % (
                           ! (v_21 + -4220L) + 249L));
    result = (short)((long)(! ((int)p_17[1][0][0] / ((int)v_6 + 171))) + -724294560L);
  }
  return result;
}

